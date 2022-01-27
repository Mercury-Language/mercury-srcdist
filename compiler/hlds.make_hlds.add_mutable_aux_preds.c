/*
** Automatically generated from `add_mutable_aux_preds.m'
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


/* :- module hlds.make_hlds.add_mutable_aux_preds. */
/* :- implementation. */

/*
INIT mercury__hlds__make_hlds__add_mutable_aux_preds__init
ENDINIT
*/

#include "hlds.make_hlds.add_mutable_aux_preds.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.foreign.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_code_util.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
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
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_mutable.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_mode.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.add_clause.mih"
#include "hlds.make_hlds.add_foreign_proc.mih"
#include "hlds.make_hlds.add_pred.mih"
#include "hlds.make_hlds.add_special_pred.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 157 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 160 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 163 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 166 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 169 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 172 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 175 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_determinism_0;

#line 178 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_0;

#line 181 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_1;

#line 184 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_2;

#line 187 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_3;

#line 190 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_value_ordered_mutable_impl_lang_0[4];

#line 193 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_name_ordered_mutable_impl_lang_0[4];

#line 196 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_mutable_impl_lang_0[4];

#line 199 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_PseudoTypeInfo hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__field_types_mutable_target_params_0_0[6];

#line 202 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_DuArgLocn hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__field_locns_mutable_target_params_0_0[6];

#line 205 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_DuFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_functor_desc_mutable_target_params_0_0;

#line 208 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_stag_ordered_mutable_target_params_0_0[1];

#line 211 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_DuPtagLayout hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_ptag_ordered_mutable_target_params_0[1];

#line 214 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_name_ordered_mutable_target_params_0[1];

#line 217 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_mutable_target_params_0[1];

#line 220 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_lock_unlock_preds_0_0;

#line 223 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_lock_unlock_preds_0_1;

#line 226 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_value_ordered_need_lock_unlock_preds_0[2];

#line 229 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_name_ordered_need_lock_unlock_preds_0[2];

#line 232 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_need_lock_unlock_preds_0[2];

#line 235 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_pre_init_pred_0_0;

#line 238 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_pre_init_pred_0_1;

#line 241 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_value_ordered_need_pre_init_pred_0[2];

#line 244 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_name_ordered_need_pre_init_pred_0[2];

#line 247 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_need_pre_init_pred_0[2];

#line 250 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_unsafe_get_set_preds_0_0;

#line 253 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_unsafe_get_set_preds_0_1;

#line 256 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_value_ordered_need_unsafe_get_set_preds_0[2];

#line 259 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_name_ordered_need_unsafe_get_set_preds_0[2];

#line 262 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_need_unsafe_get_set_preds_0[2];

#line 265 "hlds.make_hlds.add_mutable_aux_preds.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_impl_lang_0_0_10001(
#line 268 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 270 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2);

#line 273 "hlds.make_hlds.add_mutable_aux_preds.c"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_impl_lang_0_0_10001(
#line 276 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box * hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 278 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2,
#line 280 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3);

#line 283 "hlds.make_hlds.add_mutable_aux_preds.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_target_params_0_0_10001(
#line 286 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 288 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2);

#line 291 "hlds.make_hlds.add_mutable_aux_preds.c"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_target_params_0_0_10001(
#line 294 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box * hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 296 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2,
#line 298 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3);

#line 301 "hlds.make_hlds.add_mutable_aux_preds.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_lock_unlock_preds_0_0_10001(
#line 304 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 306 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2);

#line 309 "hlds.make_hlds.add_mutable_aux_preds.c"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_lock_unlock_preds_0_0_10001(
#line 312 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box * hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 314 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2,
#line 316 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3);

#line 319 "hlds.make_hlds.add_mutable_aux_preds.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_pre_init_pred_0_0_10001(
#line 322 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 324 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2);

#line 327 "hlds.make_hlds.add_mutable_aux_preds.c"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_pre_init_pred_0_0_10001(
#line 330 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box * hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 332 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2,
#line 334 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3);

#line 337 "hlds.make_hlds.add_mutable_aux_preds.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_unsafe_get_set_preds_0_0_10001(
#line 340 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 342 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2);

#line 345 "hlds.make_hlds.add_mutable_aux_preds.c"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_unsafe_get_set_preds_0_0_10001(
#line 348 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box * hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 350 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2,
#line 352 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3);

#line 1239 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_109_117_116_97_98_108_101_95_116_97_114_103_101_116_95_118_97_114_95_110_97_109_101_95_95_91_54_93_95_48_7_p_0(
#line 1239 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_8,
#line 1239 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_9,
#line 1239 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_10,
#line 1239 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_11,
#line 1239 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_12,
#line 1239 "add_mutable_aux_preds.m"
  MR_String * hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_14);

#line 1032 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_main_get_set_preds__1032__1_2_p_0(
#line 1032 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__AttachToIO_37,
#line 1032 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_252);

#line 834 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_unsafe_get_set_preds__834__1_2_p_0(
#line 834 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_31,
#line 834 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_66);

#line 747 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_lock_unlock_preds__747__1_2_p_0(
#line 747 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_31,
#line 747 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_59);

#line 686 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_pre_init_pred__686__1_2_p_0(
#line 686 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_31,
#line 686 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_52);

#line 313 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__313__1_2_p_0(
#line 313 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Constraints_31,
#line 313 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_80);

#line 311 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__311__1_2_p_0(
#line 311 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeDetism_25,
#line 311 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_74);

#line 310 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__310__1_2_p_0(
#line 310 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__WithInst_24,
#line 310 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_69);

#line 309 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__309__1_2_p_0(
#line 309 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__WithType_23,
#line 309 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_64);

#line 307 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__307__1_2_p_0(
#line 307 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredOrFunc_21,
#line 307 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_59);

#line 306 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__306__1_2_p_0(
#line 306 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ExistQVars_29,
#line 306 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_54);

#line 304 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__304__1_2_p_0(
#line 304 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__InstVarSet_28,
#line 304 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_49);

#line 302 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__302__1_2_p_0(
#line 302 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_27,
#line 302 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_44);

#line 130 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_mutable_aux_pred_decls__130__1_2_p_0(
#line 130 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__AttachToIO_31,
#line 130 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_85);

#line 128 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_mutable_aux_pred_decls__128__1_2_p_0(
#line 128 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_28,
#line 128 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_80);

#line 126 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_mutable_aux_pred_decls__126__1_2_p_0(
#line 126 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__LockUnlock_27,
#line 126 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_75);

#line 124 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_mutable_aux_pred_decls__124__1_2_p_0(
#line 124 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInit_26,
#line 124 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_70);

#line 1342 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_unsafe_get_set_preds_0_0(
#line 1342 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1342 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1342 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3);

#line 1342 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_unsafe_get_set_preds_0_0(
#line 1342 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1,
#line 1342 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);

#line 1334 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_pre_init_pred_0_0(
#line 1334 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1334 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1334 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3);

#line 1334 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_pre_init_pred_0_0(
#line 1334 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1,
#line 1334 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);

#line 1338 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_lock_unlock_preds_0_0(
#line 1338 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1338 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1338 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3);

#line 1338 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_lock_unlock_preds_0_0(
#line 1338 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1,
#line 1338 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);

#line 1346 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_target_params_0_0(
#line 1346 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1346 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1346 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3);

#line 1346 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_target_params_0_0(
#line 1346 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1346 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);

#line 1328 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_impl_lang_0_0(
#line 1328 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1328 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1328 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3);

#line 1328 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_impl_lang_0_0(
#line 1328 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1,
#line 1328 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);

#line 1360 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__get_mutable_target_params_3_p_0(
#line 1360 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_4,
#line 1360 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_5,
#line 1360 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_6);

#line 1319 "add_mutable_aux_preds.m"
static MR_String MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__global_foreign_type_name_4_f_0(
#line 1319 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1319 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_2,
#line 1319 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_3,
#line 1319 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_4);

#line 1297 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__get_matching_foreign_names_3_p_0(
#line 1297 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1297 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1297 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3);

#line 1263 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__get_global_name_from_foreign_names_9_p_0(
#line 1263 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_10,
#line 1263 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_11,
#line 1263 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_12,
#line 1263 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_13,
#line 1263 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_14,
#line 1263 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignNames_15,
#line 1263 "add_mutable_aux_preds.m"
  MR_String * hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_16,
#line 1263 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_28,
#line 1263 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_29);

#line 1178 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_init_pred_11_p_0(
#line 1178 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12,
#line 1178 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_13,
#line 1178 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_14,
#line 1178 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_15,
#line 1178 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_16,
#line 1178 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39,
#line 1178 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_40,
#line 1178 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_41,
#line 1178 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_42,
#line 1178 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_43,
#line 1178 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_44);

#line 1032 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_main_get_set_preds_14_p_0_1(
#line 1032 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 954 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_main_get_set_preds_14_p_0(
#line 954 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15,
#line 954 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_16,
#line 954 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17,
#line 954 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_18,
#line 954 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_19,
#line 954 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_20,
#line 954 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21,
#line 954 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_22,
#line 954 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_85,
#line 954 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_86,
#line 954 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_87,
#line 954 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_88,
#line 954 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_89,
#line 954 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_90);

#line 834 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_unsafe_get_set_preds_12_p_0_1(
#line 834 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 818 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_unsafe_get_set_preds_12_p_0(
#line 818 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13,
#line 818 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_14,
#line 818 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15,
#line 818 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_16,
#line 818 "add_mutable_aux_preds.m"
  MR_Tuple * hlds__make_hlds__add_mutable_aux_preds__UnsafeGetSetExprs_17,
#line 818 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_18,
#line 818 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_56,
#line 818 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_57,
#line 818 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_58,
#line 818 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_59,
#line 818 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_60,
#line 818 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_61);

#line 747 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_lock_unlock_preds_12_p_0_1(
#line 747 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 732 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_lock_unlock_preds_12_p_0(
#line 732 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13,
#line 732 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_14,
#line 732 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15,
#line 732 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_16,
#line 732 "add_mutable_aux_preds.m"
  MR_Tuple * hlds__make_hlds__add_mutable_aux_preds__LockUnlockExprs_17,
#line 732 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_18,
#line 732 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_49,
#line 732 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_50,
#line 732 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_51,
#line 732 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_52,
#line 732 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_53,
#line 732 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_54);

#line 686 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_pre_init_pred_12_p_0_1(
#line 686 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 670 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_pre_init_pred_12_p_0(
#line 670 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13,
#line 670 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_14,
#line 670 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15,
#line 670 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_16,
#line 670 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_17,
#line 670 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_18,
#line 670 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_42,
#line 670 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_43,
#line 670 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_44,
#line 670 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_45,
#line 670 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_46,
#line 670 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_47);

#line 586 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_aux_preds_10_p_0(
#line 586 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11,
#line 586 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_12,
#line 586 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_13,
#line 586 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_14,
#line 586 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34,
#line 586 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_35,
#line 586 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_36,
#line 586 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_37,
#line 586 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38,
#line 586 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39);

#line 550 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_global_var_java_6_p_0(
#line 550 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_7,
#line 550 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_8,
#line 550 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_9,
#line 550 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_10,
#line 550 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_15,
#line 550 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_16);

#line 449 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_global_var_c_7_p_0(
#line 449 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_8,
#line 449 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_9,
#line 449 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_10,
#line 449 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_11,
#line 449 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_12,
#line 449 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_26,
#line 449 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_27);

#line 313 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_8(
#line 313 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 311 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_7(
#line 311 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 310 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_6(
#line 310 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 309 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_5(
#line 309 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 307 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_4(
#line 307 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 306 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_3(
#line 306 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 304 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_2(
#line 304 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 302 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_1(
#line 302 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 291 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0(
#line 291 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_11,
#line 291 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_12,
#line 291 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_13,
#line 291 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Kind_14,
#line 291 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_15,
#line 291 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_16,
#line 291 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_36,
#line 291 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_37,
#line 291 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38,
#line 291 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39);

#line 270 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_13_p_0(
#line 270 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_14,
#line 270 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_15,
#line 270 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Kind_16,
#line 270 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_17,
#line 270 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_18,
#line 270 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Purity_19,
#line 270 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_20,
#line 270 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_21,
#line 270 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_22,
#line 270 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_32,
#line 270 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_33,
#line 270 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_34,
#line 270 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_35);

#line 255 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_pre_init_pred_decl_9_p_0(
#line 255 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_10,
#line 255 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_11,
#line 255 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_12,
#line 255 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_13,
#line 255 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_14,
#line 255 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_19,
#line 255 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_20,
#line 255 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_21,
#line 255 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_22);

#line 237 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_init_pred_decl_9_p_0(
#line 237 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_10,
#line 237 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_11,
#line 237 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_12,
#line 237 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_13,
#line 237 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_14,
#line 237 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_19,
#line 237 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_20,
#line 237 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_21,
#line 237 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_22);

#line 198 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_unlock_pred_decl_9_p_0(
#line 198 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_10,
#line 198 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_11,
#line 198 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_12,
#line 198 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_13,
#line 198 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_14,
#line 198 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_19,
#line 198 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_20,
#line 198 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_21,
#line 198 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_22);

#line 194 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_lock_pred_decl_9_p_0(
#line 194 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_10,
#line 194 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_11,
#line 194 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_12,
#line 194 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_13,
#line 194 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_14,
#line 194 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_19,
#line 194 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_20,
#line 194 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_21,
#line 194 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_22);

#line 190 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_unsafe_set_pred_decl_11_p_0(
#line 190 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_12,
#line 190 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_13,
#line 190 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_14,
#line 190 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_15,
#line 190 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_16,
#line 190 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_17,
#line 190 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_18,
#line 190 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_23,
#line 190 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_24,
#line 190 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_25,
#line 190 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_26);

#line 186 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_unsafe_get_pred_decl_11_p_0(
#line 186 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_12,
#line 186 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_13,
#line 186 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_14,
#line 186 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_15,
#line 186 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_16,
#line 186 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_17,
#line 186 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_18,
#line 186 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_23,
#line 186 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_24,
#line 186 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_25,
#line 186 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_26);

#line 130 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decls_7_p_0_4(
#line 130 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 128 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decls_7_p_0_3(
#line 128 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 126 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decls_7_p_0_2(
#line 126 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 124 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decls_7_p_0_1(
#line 124 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);


static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[37][2];

static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[13][5];

static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_4[3][1];


#line 335 "add_mutable_aux_preds.m"
/* sealed */ struct hlds__make_hlds__add_mutable_aux_preds__vector_common_type_3_0_s {
#line 335 "add_mutable_aux_preds.m"
  const MR_Word hlds__make_hlds__add_mutable_aux_preds__vector_common_type_3_0__vct_3_f_0;
#line 335 "add_mutable_aux_preds.m"
};

static /* final */ const struct hlds__make_hlds__add_mutable_aux_preds__vector_common_type_3_0_s hlds__make_hlds__add_mutable_aux_preds_vector_common_3[4];



static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[37][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration in non-trailing grade."))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "mutable"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: trailed"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[15])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not a valid inst for a"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) "#endif\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) ";\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[19])))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) ", MR_MUTEX_ATTR);\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[19])))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) "end\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) "       X = Value\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[22])))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) "   {get_mutable_ack, Value} ->\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[23])))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_String) "receive\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[24])))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_String) ", self()},\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[25])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "backend."))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[7])))
  },
  /* row 29 */
  {
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_4[0])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the inst"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 32 */
  {
    ((MR_Box) ((MR_Integer) 22)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_String) ">();\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 34 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: multiple foreign_name attributes"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "specified for the"))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[13][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_need_pre_init_pred_0)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_need_pre_init_pred_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_need_lock_unlock_preds_0)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_need_lock_unlock_preds_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_need_unsafe_get_set_preds_0)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_need_unsafe_get_set_preds_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_attach_to_io_state_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_attach_to_io_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_determinism_0)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_determinism_0))
  },
  /* row 11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraints_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraints_0))
  },
  /* row 12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_constant_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_constant_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_4[3][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[13])))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};


static /* final */ const struct hlds__make_hlds__add_mutable_aux_preds__vector_common_type_3_0_s hlds__make_hlds__add_mutable_aux_preds_vector_common_3[4] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 2 },
  /* row 3 */   {     (MR_Integer) 3 },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1478 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1486 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1494 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1502 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__add_mutable_aux_preds__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1510 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1518 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1526 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_determinism_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0
  }
};

#line 1534 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_0 = {
  (MR_String) "mutable_lang_c",
  (MR_Integer) 0
};

#line 1540 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_1 = {
  (MR_String) "mutable_lang_csharp",
  (MR_Integer) 1
};

#line 1546 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_2 = {
  (MR_String) "mutable_lang_java",
  (MR_Integer) 2
};

#line 1552 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_3 = {
  (MR_String) "mutable_lang_erlang",
  (MR_Integer) 3
};

#line 1558 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_value_ordered_mutable_impl_lang_0[4] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_1,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_2,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_3
};

#line 1566 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_name_ordered_mutable_impl_lang_0[4] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_1,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_3,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_2
};

#line 1574 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_mutable_impl_lang_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2
};

#line 1582 "hlds.make_hlds.add_mutable_aux_preds.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_mutable_impl_lang_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_impl_lang_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_impl_lang_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_mutable_aux_preds",
  (MR_String) "mutable_impl_lang",
  {     hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_name_ordered_mutable_impl_lang_0 },
  {     hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_value_ordered_mutable_impl_lang_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_mutable_impl_lang_0
};

#line 1599 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_PseudoTypeInfo hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__field_types_mutable_target_params_0_0[6] = {
  (MR_PseudoTypeInfo) &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_mutable_impl_lang_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_box_policy_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_need_pre_init_pred_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_need_lock_unlock_preds_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_need_unsafe_get_set_preds_0
};

#line 1609 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_DuArgLocn hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__field_locns_mutable_target_params_0_0[6] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 4,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 5,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 6,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 7,
    (MR_Integer) 1
  }
};

#line 1643 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_DuFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_functor_desc_mutable_target_params_0_0 = {
  (MR_String) "mutable_target_params",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__field_types_mutable_target_params_0_0,
  NULL,
  hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__field_locns_mutable_target_params_0_0,
  NULL
};

#line 1658 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_stag_ordered_mutable_target_params_0_0[1] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_functor_desc_mutable_target_params_0_0
};

#line 1663 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_DuPtagLayout hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_ptag_ordered_mutable_target_params_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_stag_ordered_mutable_target_params_0_0
  }
};

#line 1672 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_name_ordered_mutable_target_params_0[1] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_functor_desc_mutable_target_params_0_0
};

#line 1677 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_mutable_target_params_0[1] = {
  (MR_Integer) 0
};

#line 1682 "hlds.make_hlds.add_mutable_aux_preds.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_mutable_target_params_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_target_params_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_target_params_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_mutable_aux_preds",
  (MR_String) "mutable_target_params",
  {     hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_name_ordered_mutable_target_params_0 },
  {     hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_ptag_ordered_mutable_target_params_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_mutable_target_params_0
};

#line 1699 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_lock_unlock_preds_0_0 = {
  (MR_String) "dont_need_lock_unlock_preds",
  (MR_Integer) 0
};

#line 1705 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_lock_unlock_preds_0_1 = {
  (MR_String) "need_lock_unlock_preds",
  (MR_Integer) 1
};

#line 1711 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_value_ordered_need_lock_unlock_preds_0[2] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_lock_unlock_preds_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_lock_unlock_preds_0_1
};

#line 1717 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_name_ordered_need_lock_unlock_preds_0[2] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_lock_unlock_preds_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_lock_unlock_preds_0_1
};

#line 1723 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_need_lock_unlock_preds_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1729 "hlds.make_hlds.add_mutable_aux_preds.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_need_lock_unlock_preds_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds____Unify____need_lock_unlock_preds_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds____Compare____need_lock_unlock_preds_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_mutable_aux_preds",
  (MR_String) "need_lock_unlock_preds",
  {     hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_name_ordered_need_lock_unlock_preds_0 },
  {     hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_value_ordered_need_lock_unlock_preds_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_need_lock_unlock_preds_0
};

#line 1746 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_pre_init_pred_0_0 = {
  (MR_String) "dont_need_pre_init_pred",
  (MR_Integer) 0
};

#line 1752 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_pre_init_pred_0_1 = {
  (MR_String) "need_pre_init_pred",
  (MR_Integer) 1
};

#line 1758 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_value_ordered_need_pre_init_pred_0[2] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_pre_init_pred_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_pre_init_pred_0_1
};

#line 1764 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_name_ordered_need_pre_init_pred_0[2] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_pre_init_pred_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_pre_init_pred_0_1
};

#line 1770 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_need_pre_init_pred_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1776 "hlds.make_hlds.add_mutable_aux_preds.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_need_pre_init_pred_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds____Unify____need_pre_init_pred_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds____Compare____need_pre_init_pred_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_mutable_aux_preds",
  (MR_String) "need_pre_init_pred",
  {     hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_name_ordered_need_pre_init_pred_0 },
  {     hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_value_ordered_need_pre_init_pred_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_need_pre_init_pred_0
};

#line 1793 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_unsafe_get_set_preds_0_0 = {
  (MR_String) "dont_need_unsafe_get_set_preds",
  (MR_Integer) 0
};

#line 1799 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_unsafe_get_set_preds_0_1 = {
  (MR_String) "need_unsafe_get_set_preds",
  (MR_Integer) 1
};

#line 1805 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_value_ordered_need_unsafe_get_set_preds_0[2] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_unsafe_get_set_preds_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_unsafe_get_set_preds_0_1
};

#line 1811 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_name_ordered_need_unsafe_get_set_preds_0[2] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_unsafe_get_set_preds_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_unsafe_get_set_preds_0_1
};

#line 1817 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_need_unsafe_get_set_preds_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1823 "hlds.make_hlds.add_mutable_aux_preds.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_need_unsafe_get_set_preds_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds____Unify____need_unsafe_get_set_preds_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds____Compare____need_unsafe_get_set_preds_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_mutable_aux_preds",
  (MR_String) "need_unsafe_get_set_preds",
  {     hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_name_ordered_need_unsafe_get_set_preds_0 },
  {     hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_value_ordered_need_unsafe_get_set_preds_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_need_unsafe_get_set_preds_0
};

#line 1840 "hlds.make_hlds.add_mutable_aux_preds.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_impl_lang_0_0_10001(
#line 1843 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 1845 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2)
#line 1847 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 1849 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 1851 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 1854 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 1856 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_impl_lang_0_0(((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2));
    }
#line 1859 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1861 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 1863 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 1866 "hlds.make_hlds.add_mutable_aux_preds.c"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_impl_lang_0_0_10001(
#line 1869 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box * hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 1871 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2,
#line 1873 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3)
#line 1875 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 1877 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 1879 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1;

#line 1882 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 1884 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_impl_lang_0_0(&hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3));
    }
#line 1887 "hlds.make_hlds.add_mutable_aux_preds.c"
    *hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1));
#line 1889 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 1891 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 1894 "hlds.make_hlds.add_mutable_aux_preds.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_target_params_0_0_10001(
#line 1897 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 1899 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2)
#line 1901 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 1903 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 1905 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 1908 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 1910 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_target_params_0_0(((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2));
    }
#line 1913 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1915 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 1917 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 1920 "hlds.make_hlds.add_mutable_aux_preds.c"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_target_params_0_0_10001(
#line 1923 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box * hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 1925 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2,
#line 1927 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3)
#line 1929 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 1931 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 1933 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1;

#line 1936 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 1938 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_target_params_0_0(&hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3));
    }
#line 1941 "hlds.make_hlds.add_mutable_aux_preds.c"
    *hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1));
#line 1943 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 1945 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 1948 "hlds.make_hlds.add_mutable_aux_preds.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_lock_unlock_preds_0_0_10001(
#line 1951 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 1953 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2)
#line 1955 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 1957 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 1959 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 1962 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 1964 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds____Unify____need_lock_unlock_preds_0_0(((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2));
    }
#line 1967 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1969 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 1971 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 1974 "hlds.make_hlds.add_mutable_aux_preds.c"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_lock_unlock_preds_0_0_10001(
#line 1977 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box * hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 1979 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2,
#line 1981 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3)
#line 1983 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 1985 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 1987 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1;

#line 1990 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 1992 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds____Compare____need_lock_unlock_preds_0_0(&hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3));
    }
#line 1995 "hlds.make_hlds.add_mutable_aux_preds.c"
    *hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1));
#line 1997 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 1999 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 2002 "hlds.make_hlds.add_mutable_aux_preds.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_pre_init_pred_0_0_10001(
#line 2005 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 2007 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2)
#line 2009 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 2011 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 2013 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 2016 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 2018 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds____Unify____need_pre_init_pred_0_0(((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2));
    }
#line 2021 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 2023 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 2025 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 2028 "hlds.make_hlds.add_mutable_aux_preds.c"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_pre_init_pred_0_0_10001(
#line 2031 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box * hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 2033 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2,
#line 2035 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3)
#line 2037 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 2039 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 2041 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1;

#line 2044 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 2046 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds____Compare____need_pre_init_pred_0_0(&hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3));
    }
#line 2049 "hlds.make_hlds.add_mutable_aux_preds.c"
    *hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1));
#line 2051 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 2053 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 2056 "hlds.make_hlds.add_mutable_aux_preds.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_unsafe_get_set_preds_0_0_10001(
#line 2059 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 2061 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2)
#line 2063 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 2065 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 2067 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 2070 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 2072 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds____Unify____need_unsafe_get_set_preds_0_0(((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2));
    }
#line 2075 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 2077 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 2079 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 2082 "hlds.make_hlds.add_mutable_aux_preds.c"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_unsafe_get_set_preds_0_0_10001(
#line 2085 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box * hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 2087 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2,
#line 2089 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3)
#line 2091 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 2093 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 2095 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1;

#line 2098 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 2100 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds____Compare____need_unsafe_get_set_preds_0_0(&hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3));
    }
#line 2103 "hlds.make_hlds.add_mutable_aux_preds.c"
    *hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1));
#line 2105 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 2107 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 1239 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_109_117_116_97_98_108_101_95_116_97_114_103_101_116_95_118_97_114_95_110_97_109_101_95_95_91_54_93_95_48_7_p_0(
#line 1239 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_8,
#line 1239 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_9,
#line 1239 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_10,
#line 1239 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_11,
#line 1239 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_12,
#line 1239 "add_mutable_aux_preds.m"
  MR_String * hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_14)
#line 1239 "add_mutable_aux_preds.m"
{
#line 1244 "add_mutable_aux_preds.m"
  {
#line 1244 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1244 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_15;

#line 1245 "add_mutable_aux_preds.m"
    {
#line 1245 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_15 = parse_tree__prog_item__mutable_var_maybe_foreign_names_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_9);
    }
#line 1250 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1249 "add_mutable_aux_preds.m"
      {
#line 1249 "add_mutable_aux_preds.m"
        *hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_14 = parse_tree__prog_mutable__mutable_c_var_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_10, hlds__make_hlds__add_mutable_aux_preds__Name_11);
      }
#line 1250 "add_mutable_aux_preds.m"
    else
#line 1251 "add_mutable_aux_preds.m"
      {
#line 1251 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_15, (MR_Integer) 0)));
#line 1251 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetMutableNames_29;

#line 1271 "add_mutable_aux_preds.m"
        {
#line 1271 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__get_matching_foreign_names_3_p_0(hlds__make_hlds__add_mutable_aux_preds__ForeignNames_16, hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_12, &hlds__make_hlds__add_mutable_aux_preds__TargetMutableNames_29);
        }
#line 1277 "add_mutable_aux_preds.m"
        if ((hlds__make_hlds__add_mutable_aux_preds__TargetMutableNames_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1276 "add_mutable_aux_preds.m"
          {
#line 1276 "add_mutable_aux_preds.m"
            *hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_14 = parse_tree__prog_mutable__mutable_c_var_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_10, hlds__make_hlds__add_mutable_aux_preds__Name_11);
          }
#line 1277 "add_mutable_aux_preds.m"
        else
#line 1277 "add_mutable_aux_preds.m"
          {
#line 1277 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__TargetMutableNames_29, (MR_Integer) 1)));
#line 1277 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__TargetMutableNames_29, (MR_Integer) 0)));

#line 1277 "add_mutable_aux_preds.m"
            if ((hlds__make_hlds__add_mutable_aux_preds__V_64_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1278 "add_mutable_aux_preds.m"
              {
#line 1278 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_65_65, (MR_Integer) 0)));

#line 1278 "add_mutable_aux_preds.m"
                *hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_14 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_65_65, (MR_Integer) 1)));
#line 1278 "add_mutable_aux_preds.m"
              }
#line 1277 "add_mutable_aux_preds.m"
            else
#line 1282 "add_mutable_aux_preds.m"
              {
#line 1282 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__Globals_34;
#line 1282 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_35;
#line 1287 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_47_47;

#line 1283 "add_mutable_aux_preds.m"
                {
#line 1283 "add_mutable_aux_preds.m"
                  hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_8, &hlds__make_hlds__add_mutable_aux_preds__Globals_34);
                }
#line 1284 "add_mutable_aux_preds.m"
                {
#line 1284 "add_mutable_aux_preds.m"
                  libs__globals__get_target_2_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_34, &hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_35);
                }
#line 1287 "add_mutable_aux_preds.m"
                {
#line 1287 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_47_47 = libs__globals__compilation_target_string_1_f_0(hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_35);
                }
#line 1294 "add_mutable_aux_preds.m"
                {
#line 1294 "add_mutable_aux_preds.m"
                  *hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_14 = parse_tree__prog_mutable__mutable_c_var_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_10, hlds__make_hlds__add_mutable_aux_preds__Name_11);
                }
#line 1282 "add_mutable_aux_preds.m"
              }
#line 1277 "add_mutable_aux_preds.m"
          }
#line 1251 "add_mutable_aux_preds.m"
      }
#line 1244 "add_mutable_aux_preds.m"
  }
#line 1239 "add_mutable_aux_preds.m"
}

#line 1032 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_main_get_set_preds__1032__1_2_p_0(
#line 1032 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__AttachToIO_37,
#line 1032 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_252)
#line 1032 "add_mutable_aux_preds.m"
{
#line 1032 "add_mutable_aux_preds.m"
  {
#line 1032 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__AttachToIO_37 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_252);

#line 1032 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1032 "add_mutable_aux_preds.m"
  }
#line 1032 "add_mutable_aux_preds.m"
}

#line 834 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_unsafe_get_set_preds__834__1_2_p_0(
#line 834 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_31,
#line 834 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_66)
#line 834 "add_mutable_aux_preds.m"
{
#line 834 "add_mutable_aux_preds.m"
  {
#line 834 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__IsConstant_31 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_66);

#line 834 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 834 "add_mutable_aux_preds.m"
  }
#line 834 "add_mutable_aux_preds.m"
}

#line 747 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_lock_unlock_preds__747__1_2_p_0(
#line 747 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_31,
#line 747 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_59)
#line 747 "add_mutable_aux_preds.m"
{
#line 747 "add_mutable_aux_preds.m"
  {
#line 747 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__IsConstant_31 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_59);

#line 747 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 747 "add_mutable_aux_preds.m"
  }
#line 747 "add_mutable_aux_preds.m"
}

#line 686 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_pre_init_pred__686__1_2_p_0(
#line 686 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_31,
#line 686 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_52)
#line 686 "add_mutable_aux_preds.m"
{
#line 686 "add_mutable_aux_preds.m"
  {
#line 686 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__IsConstant_31 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_52);

#line 686 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 686 "add_mutable_aux_preds.m"
  }
#line 686 "add_mutable_aux_preds.m"
}

#line 313 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__313__1_2_p_0(
#line 313 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Constraints_31,
#line 313 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_80)
#line 313 "add_mutable_aux_preds.m"
{
#line 313 "add_mutable_aux_preds.m"
  {
#line 313 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 313 "add_mutable_aux_preds.m"
    {
#line 313 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = parse_tree__prog_data____Unify____prog_constraints_0_0(hlds__make_hlds__add_mutable_aux_preds__Constraints_31, hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_80);
    }
#line 313 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 313 "add_mutable_aux_preds.m"
  }
#line 313 "add_mutable_aux_preds.m"
}

#line 311 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__311__1_2_p_0(
#line 311 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeDetism_25,
#line 311 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_74)
#line 311 "add_mutable_aux_preds.m"
{
#line 311 "add_mutable_aux_preds.m"
  {
#line 311 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 311 "add_mutable_aux_preds.m"
    {
#line 311 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[6], ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__MaybeDetism_25)), ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_74)));
    }
#line 311 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 311 "add_mutable_aux_preds.m"
  }
#line 311 "add_mutable_aux_preds.m"
}

#line 310 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__310__1_2_p_0(
#line 310 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__WithInst_24,
#line 310 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_69)
#line 310 "add_mutable_aux_preds.m"
{
#line 310 "add_mutable_aux_preds.m"
  {
#line 310 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 310 "add_mutable_aux_preds.m"
    {
#line 310 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[5], ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__WithInst_24)), ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_69)));
    }
#line 310 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 310 "add_mutable_aux_preds.m"
  }
#line 310 "add_mutable_aux_preds.m"
}

#line 309 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__309__1_2_p_0(
#line 309 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__WithType_23,
#line 309 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_64)
#line 309 "add_mutable_aux_preds.m"
{
#line 309 "add_mutable_aux_preds.m"
  {
#line 309 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 309 "add_mutable_aux_preds.m"
    {
#line 309 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[4], ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__WithType_23)), ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_64)));
    }
#line 309 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 309 "add_mutable_aux_preds.m"
  }
#line 309 "add_mutable_aux_preds.m"
}

#line 307 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__307__1_2_p_0(
#line 307 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredOrFunc_21,
#line 307 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_59)
#line 307 "add_mutable_aux_preds.m"
{
#line 307 "add_mutable_aux_preds.m"
  {
#line 307 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__PredOrFunc_21 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_59);

#line 307 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 307 "add_mutable_aux_preds.m"
  }
#line 307 "add_mutable_aux_preds.m"
}

#line 306 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__306__1_2_p_0(
#line 306 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ExistQVars_29,
#line 306 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_54)
#line 306 "add_mutable_aux_preds.m"
{
#line 306 "add_mutable_aux_preds.m"
  {
#line 306 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 306 "add_mutable_aux_preds.m"
    {
#line 306 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[3], ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ExistQVars_29)), ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_54)));
    }
#line 306 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 306 "add_mutable_aux_preds.m"
  }
#line 306 "add_mutable_aux_preds.m"
}

#line 304 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__304__1_2_p_0(
#line 304 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__InstVarSet_28,
#line 304 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_49)
#line 304 "add_mutable_aux_preds.m"
{
#line 304 "add_mutable_aux_preds.m"
  {
#line 304 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 304 "add_mutable_aux_preds.m"
    {
#line 304 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[1], ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InstVarSet_28)), ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_49)));
    }
#line 304 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 304 "add_mutable_aux_preds.m"
  }
#line 304 "add_mutable_aux_preds.m"
}

#line 302 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__302__1_2_p_0(
#line 302 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_27,
#line 302 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_44)
#line 302 "add_mutable_aux_preds.m"
{
#line 302 "add_mutable_aux_preds.m"
  {
#line 302 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 302 "add_mutable_aux_preds.m"
    {
#line 302 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[0], ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_27)), ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_44)));
    }
#line 302 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 302 "add_mutable_aux_preds.m"
  }
#line 302 "add_mutable_aux_preds.m"
}

#line 130 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_mutable_aux_pred_decls__130__1_2_p_0(
#line 130 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__AttachToIO_31,
#line 130 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_85)
#line 130 "add_mutable_aux_preds.m"
{
#line 130 "add_mutable_aux_preds.m"
  {
#line 130 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__AttachToIO_31 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_85);

#line 130 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 130 "add_mutable_aux_preds.m"
  }
#line 130 "add_mutable_aux_preds.m"
}

#line 128 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_mutable_aux_pred_decls__128__1_2_p_0(
#line 128 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_28,
#line 128 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_80)
#line 128 "add_mutable_aux_preds.m"
{
#line 128 "add_mutable_aux_preds.m"
  {
#line 128 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_28 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_80);

#line 128 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 128 "add_mutable_aux_preds.m"
  }
#line 128 "add_mutable_aux_preds.m"
}

#line 126 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_mutable_aux_pred_decls__126__1_2_p_0(
#line 126 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__LockUnlock_27,
#line 126 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_75)
#line 126 "add_mutable_aux_preds.m"
{
#line 126 "add_mutable_aux_preds.m"
  {
#line 126 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__LockUnlock_27 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_75);

#line 126 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 126 "add_mutable_aux_preds.m"
  }
#line 126 "add_mutable_aux_preds.m"
}

#line 124 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_mutable_aux_pred_decls__124__1_2_p_0(
#line 124 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInit_26,
#line 124 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_70)
#line 124 "add_mutable_aux_preds.m"
{
#line 124 "add_mutable_aux_preds.m"
  {
#line 124 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__PreInit_26 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_70);

#line 124 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 124 "add_mutable_aux_preds.m"
  }
#line 124 "add_mutable_aux_preds.m"
}

#line 1342 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_unsafe_get_set_preds_0_0(
#line 1342 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1342 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1342 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3)
#line 1342 "add_mutable_aux_preds.m"
{
#line 1342 "add_mutable_aux_preds.m"
  {
#line 1342 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1342 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar1_4 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2;
#line 1342 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar2_5 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3;

#line 1342 "add_mutable_aux_preds.m"
    {
#line 1342 "add_mutable_aux_preds.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar1_4, hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar2_5);
#line 1342 "add_mutable_aux_preds.m"
      return;
    }
#line 1342 "add_mutable_aux_preds.m"
  }
#line 1342 "add_mutable_aux_preds.m"
}

#line 1342 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_unsafe_get_set_preds_0_0(
#line 1342 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1,
#line 1342 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2)
#line 1342 "add_mutable_aux_preds.m"
{
#line 2641 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 2643 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);

#line 2646 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 2648 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 1342 "add_mutable_aux_preds.m"
}

#line 1334 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_pre_init_pred_0_0(
#line 1334 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1334 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1334 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3)
#line 1334 "add_mutable_aux_preds.m"
{
#line 1334 "add_mutable_aux_preds.m"
  {
#line 1334 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1334 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar1_4 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2;
#line 1334 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar2_5 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3;

#line 1334 "add_mutable_aux_preds.m"
    {
#line 1334 "add_mutable_aux_preds.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar1_4, hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar2_5);
#line 1334 "add_mutable_aux_preds.m"
      return;
    }
#line 1334 "add_mutable_aux_preds.m"
  }
#line 1334 "add_mutable_aux_preds.m"
}

#line 1334 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_pre_init_pred_0_0(
#line 1334 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1,
#line 1334 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2)
#line 1334 "add_mutable_aux_preds.m"
{
#line 2694 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 2696 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);

#line 2699 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 2701 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 1334 "add_mutable_aux_preds.m"
}

#line 1338 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_lock_unlock_preds_0_0(
#line 1338 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1338 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1338 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3)
#line 1338 "add_mutable_aux_preds.m"
{
#line 1338 "add_mutable_aux_preds.m"
  {
#line 1338 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1338 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar1_4 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2;
#line 1338 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar2_5 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3;

#line 1338 "add_mutable_aux_preds.m"
    {
#line 1338 "add_mutable_aux_preds.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar1_4, hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar2_5);
#line 1338 "add_mutable_aux_preds.m"
      return;
    }
#line 1338 "add_mutable_aux_preds.m"
  }
#line 1338 "add_mutable_aux_preds.m"
}

#line 1338 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_lock_unlock_preds_0_0(
#line 1338 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1,
#line 1338 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2)
#line 1338 "add_mutable_aux_preds.m"
{
#line 2747 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 2749 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);

#line 2752 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 2754 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 1338 "add_mutable_aux_preds.m"
}

#line 1346 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_target_params_0_0(
#line 1346 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1346 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1346 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3)
#line 1346 "add_mutable_aux_preds.m"
{
#line 1346 "add_mutable_aux_preds.m"
  {
#line 1346 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1346 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__CastX_21 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2;
#line 1346 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__CastY_22 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3;

#line 1346 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__CastX_21 == hlds__make_hlds__add_mutable_aux_preds__CastY_22);
#line 1346 "add_mutable_aux_preds.m"
    if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 2783 "hlds.make_hlds.add_mutable_aux_preds.c"
      *hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1 = (MR_Integer) 0;
#line 1346 "add_mutable_aux_preds.m"
    else
#line 1346 "add_mutable_aux_preds.m"
      {
#line 1346 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1346 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
#line 1346 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1346 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1346 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1346 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1346 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1346 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
#line 1346 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1346 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1346 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1346 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1346 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_16_16;
#line 1346 "add_mutable_aux_preds.m"
        MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_29_29 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_4_4;
#line 1346 "add_mutable_aux_preds.m"
        MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_30_30 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_10_10;

#line 1346 "add_mutable_aux_preds.m"
        {
#line 1346 "add_mutable_aux_preds.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__make_hlds__add_mutable_aux_preds__V_16_16, hlds__make_hlds__add_mutable_aux_preds__V_29_29, hlds__make_hlds__add_mutable_aux_preds__V_30_30);
        }
#line 2825 "hlds.make_hlds.add_mutable_aux_preds.c"
        hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_16_16 == (MR_Integer) 0);
#line 1346 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__succeeded = !(hlds__make_hlds__add_mutable_aux_preds__succeeded);
#line 1346 "add_mutable_aux_preds.m"
        if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1346 "add_mutable_aux_preds.m"
          *hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1 = hlds__make_hlds__add_mutable_aux_preds__V_16_16;
#line 1346 "add_mutable_aux_preds.m"
        else
#line 1346 "add_mutable_aux_preds.m"
          {
#line 1346 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_17_17;
#line 1346 "add_mutable_aux_preds.m"
            MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_31_31 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_5_5;
#line 1346 "add_mutable_aux_preds.m"
            MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_32_32 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_11_11;

#line 1346 "add_mutable_aux_preds.m"
            {
#line 1346 "add_mutable_aux_preds.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__make_hlds__add_mutable_aux_preds__V_17_17, hlds__make_hlds__add_mutable_aux_preds__V_31_31, hlds__make_hlds__add_mutable_aux_preds__V_32_32);
            }
#line 2849 "hlds.make_hlds.add_mutable_aux_preds.c"
            hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_17_17 == (MR_Integer) 0);
#line 1346 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__succeeded = !(hlds__make_hlds__add_mutable_aux_preds__succeeded);
#line 1346 "add_mutable_aux_preds.m"
            if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1346 "add_mutable_aux_preds.m"
              *hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1 = hlds__make_hlds__add_mutable_aux_preds__V_17_17;
#line 1346 "add_mutable_aux_preds.m"
            else
#line 1346 "add_mutable_aux_preds.m"
              {
#line 1346 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_18_18;
#line 1346 "add_mutable_aux_preds.m"
                MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_33_33 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_6_6;
#line 1346 "add_mutable_aux_preds.m"
                MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_34_34 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_12_12;

#line 1346 "add_mutable_aux_preds.m"
                {
#line 1346 "add_mutable_aux_preds.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__make_hlds__add_mutable_aux_preds__V_18_18, hlds__make_hlds__add_mutable_aux_preds__V_33_33, hlds__make_hlds__add_mutable_aux_preds__V_34_34);
                }
#line 2873 "hlds.make_hlds.add_mutable_aux_preds.c"
                hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_18_18 == (MR_Integer) 0);
#line 1346 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__succeeded = !(hlds__make_hlds__add_mutable_aux_preds__succeeded);
#line 1346 "add_mutable_aux_preds.m"
                if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1346 "add_mutable_aux_preds.m"
                  *hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1 = hlds__make_hlds__add_mutable_aux_preds__V_18_18;
#line 1346 "add_mutable_aux_preds.m"
                else
#line 1346 "add_mutable_aux_preds.m"
                  {
#line 1346 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_19_19;
#line 1346 "add_mutable_aux_preds.m"
                    MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_35_35 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_7_7;
#line 1346 "add_mutable_aux_preds.m"
                    MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_36_36 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_13_13;

#line 1346 "add_mutable_aux_preds.m"
                    {
#line 1346 "add_mutable_aux_preds.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__make_hlds__add_mutable_aux_preds__V_19_19, hlds__make_hlds__add_mutable_aux_preds__V_35_35, hlds__make_hlds__add_mutable_aux_preds__V_36_36);
                    }
#line 2897 "hlds.make_hlds.add_mutable_aux_preds.c"
                    hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_19_19 == (MR_Integer) 0);
#line 1346 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__succeeded = !(hlds__make_hlds__add_mutable_aux_preds__succeeded);
#line 1346 "add_mutable_aux_preds.m"
                    if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1346 "add_mutable_aux_preds.m"
                      *hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1 = hlds__make_hlds__add_mutable_aux_preds__V_19_19;
#line 1346 "add_mutable_aux_preds.m"
                    else
#line 1346 "add_mutable_aux_preds.m"
                      {
#line 1346 "add_mutable_aux_preds.m"
                        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_20_20;
#line 1346 "add_mutable_aux_preds.m"
                        MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_37_37 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_8_8;
#line 1346 "add_mutable_aux_preds.m"
                        MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_38_38 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_14_14;

#line 1346 "add_mutable_aux_preds.m"
                        {
#line 1346 "add_mutable_aux_preds.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__make_hlds__add_mutable_aux_preds__V_20_20, hlds__make_hlds__add_mutable_aux_preds__V_37_37, hlds__make_hlds__add_mutable_aux_preds__V_38_38);
                        }
#line 2921 "hlds.make_hlds.add_mutable_aux_preds.c"
                        hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_20_20 == (MR_Integer) 0);
#line 1346 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__succeeded = !(hlds__make_hlds__add_mutable_aux_preds__succeeded);
#line 1346 "add_mutable_aux_preds.m"
                        if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1346 "add_mutable_aux_preds.m"
                          *hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1 = hlds__make_hlds__add_mutable_aux_preds__V_20_20;
#line 1346 "add_mutable_aux_preds.m"
                        else
#line 1346 "add_mutable_aux_preds.m"
                          {
#line 1346 "add_mutable_aux_preds.m"
                            MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_39_39 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_9_9;
#line 1346 "add_mutable_aux_preds.m"
                            MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_40_40 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_15_15;

#line 1346 "add_mutable_aux_preds.m"
                            {
#line 1346 "add_mutable_aux_preds.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, hlds__make_hlds__add_mutable_aux_preds__V_39_39, hlds__make_hlds__add_mutable_aux_preds__V_40_40);
#line 1346 "add_mutable_aux_preds.m"
                              return;
                            }
#line 1346 "add_mutable_aux_preds.m"
                          }
#line 1346 "add_mutable_aux_preds.m"
                      }
#line 1346 "add_mutable_aux_preds.m"
                  }
#line 1346 "add_mutable_aux_preds.m"
              }
#line 1346 "add_mutable_aux_preds.m"
          }
#line 1346 "add_mutable_aux_preds.m"
      }
#line 1346 "add_mutable_aux_preds.m"
  }
#line 1346 "add_mutable_aux_preds.m"
}

#line 1346 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_target_params_0_0(
#line 1346 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1346 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2)
#line 1346 "add_mutable_aux_preds.m"
{
#line 1346 "add_mutable_aux_preds.m"
  {
#line 1346 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1346 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__CastX_15 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1;
#line 1346 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__CastY_16 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2;

#line 1346 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__CastX_15 == hlds__make_hlds__add_mutable_aux_preds__CastY_16);
#line 1346 "add_mutable_aux_preds.m"
    if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1346 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = MR_TRUE;
#line 1346 "add_mutable_aux_preds.m"
    else
#line 1346 "add_mutable_aux_preds.m"
      {
#line 1346 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_3_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1346 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
#line 1346 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1346 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1346 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1346 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1346 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1346 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
#line 1346 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1346 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1346 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1346 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);

#line 3015 "hlds.make_hlds.add_mutable_aux_preds.c"
        hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_3_3 == hlds__make_hlds__add_mutable_aux_preds__V_9_9);
#line 1346 "add_mutable_aux_preds.m"
        if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1346 "add_mutable_aux_preds.m"
          {
#line 3021 "hlds.make_hlds.add_mutable_aux_preds.c"
            hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_4_4 == hlds__make_hlds__add_mutable_aux_preds__V_10_10);
#line 1346 "add_mutable_aux_preds.m"
            if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1346 "add_mutable_aux_preds.m"
              {
#line 3027 "hlds.make_hlds.add_mutable_aux_preds.c"
                hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_5_5 == hlds__make_hlds__add_mutable_aux_preds__V_11_11);
#line 1346 "add_mutable_aux_preds.m"
                if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1346 "add_mutable_aux_preds.m"
                  {
#line 3033 "hlds.make_hlds.add_mutable_aux_preds.c"
                    hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_6_6 == hlds__make_hlds__add_mutable_aux_preds__V_12_12);
#line 1346 "add_mutable_aux_preds.m"
                    if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1346 "add_mutable_aux_preds.m"
                      {
#line 3039 "hlds.make_hlds.add_mutable_aux_preds.c"
                        hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_7_7 == hlds__make_hlds__add_mutable_aux_preds__V_13_13);
#line 1346 "add_mutable_aux_preds.m"
                        if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 3043 "hlds.make_hlds.add_mutable_aux_preds.c"
                          hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_8_8 == hlds__make_hlds__add_mutable_aux_preds__V_14_14);
#line 1346 "add_mutable_aux_preds.m"
                      }
#line 1346 "add_mutable_aux_preds.m"
                  }
#line 1346 "add_mutable_aux_preds.m"
              }
#line 1346 "add_mutable_aux_preds.m"
          }
#line 1346 "add_mutable_aux_preds.m"
      }
#line 1346 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1346 "add_mutable_aux_preds.m"
  }
#line 1346 "add_mutable_aux_preds.m"
}

#line 1328 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_impl_lang_0_0(
#line 1328 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1328 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1328 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3)
#line 1328 "add_mutable_aux_preds.m"
{
#line 1328 "add_mutable_aux_preds.m"
  {
#line 1328 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1328 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar1_4 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2;
#line 1328 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar2_5 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3;

#line 1328 "add_mutable_aux_preds.m"
    {
#line 1328 "add_mutable_aux_preds.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar1_4, hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar2_5);
#line 1328 "add_mutable_aux_preds.m"
      return;
    }
#line 1328 "add_mutable_aux_preds.m"
  }
#line 1328 "add_mutable_aux_preds.m"
}

#line 1328 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_impl_lang_0_0(
#line 1328 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1,
#line 1328 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2)
#line 1328 "add_mutable_aux_preds.m"
{
#line 3103 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 3105 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);

#line 3108 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 3110 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 1328 "add_mutable_aux_preds.m"
}

#line 1360 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__get_mutable_target_params_3_p_0(
#line 1360 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_4,
#line 1360 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_5,
#line 1360 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_6)
#line 1360 "add_mutable_aux_preds.m"
{
#line 1363 "add_mutable_aux_preds.m"
  {
#line 1363 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1363 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Globals_7;
#line 1363 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_8;
#line 1363 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ImplLang_9;
#line 1363 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_10;
#line 1363 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInit0_11;
#line 1363 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__LockUnlock0_12;
#line 1363 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess0_13;
#line 1363 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_15;
#line 1363 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_17;
#line 1363 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInit_18;
#line 1363 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__LockUnlock_19;
#line 1363 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_20;
#line 1363 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_21;

#line 1367 "add_mutable_aux_preds.m"
    {
#line 1367 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_4, &hlds__make_hlds__add_mutable_aux_preds__Globals_7);
    }
#line 1368 "add_mutable_aux_preds.m"
    {
#line 1368 "add_mutable_aux_preds.m"
      libs__globals__get_target_2_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_7, &hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_8);
    }
#line 1385 "add_mutable_aux_preds.m"
#line 1385 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_8) {
#line 1385 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1385 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 1371 "add_mutable_aux_preds.m"
        {
#line 1371 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__HighLevelCode_14;

#line 1372 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__ImplLang_9 = (MR_Integer) 0;
#line 1373 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__Lang_10 = (MR_Integer) 0;
#line 1374 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__PreInit0_11 = (MR_Integer) 1;
#line 1375 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LockUnlock0_12 = (MR_Integer) 1;
#line 1376 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess0_13 = (MR_Integer) 1;
#line 1377 "add_mutable_aux_preds.m"
          {
#line 1377 "add_mutable_aux_preds.m"
            libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_7, (MR_Integer) 251, &hlds__make_hlds__add_mutable_aux_preds__HighLevelCode_14);
          }
#line 1381 "add_mutable_aux_preds.m"
#line 1381 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__HighLevelCode_14) {
#line 1381 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1381 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 1380 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_15 = (MR_Integer) 1;
#line 1381 "add_mutable_aux_preds.m"
              break;
#line 1381 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 1383 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_15 = (MR_Integer) 0;
#line 1381 "add_mutable_aux_preds.m"
              break;
#line 1381 "add_mutable_aux_preds.m"
          }
#line 1371 "add_mutable_aux_preds.m"
        }
#line 1385 "add_mutable_aux_preds.m"
        break;
#line 1385 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 1386 "add_mutable_aux_preds.m"
        {
#line 1386 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_16;

#line 1387 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__ImplLang_9 = (MR_Integer) 1;
#line 1388 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__Lang_10 = (MR_Integer) 1;
#line 1389 "add_mutable_aux_preds.m"
          {
#line 1389 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_16 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_5);
          }
#line 1393 "add_mutable_aux_preds.m"
#line 1393 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_16) {
#line 1393 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1393 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 1395 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__PreInit0_11 = (MR_Integer) 0;
#line 1393 "add_mutable_aux_preds.m"
              break;
#line 1393 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 1392 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__PreInit0_11 = (MR_Integer) 1;
#line 1393 "add_mutable_aux_preds.m"
              break;
#line 1393 "add_mutable_aux_preds.m"
          }
#line 1397 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LockUnlock0_12 = (MR_Integer) 0;
#line 1398 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess0_13 = (MR_Integer) 1;
#line 1399 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_15 = (MR_Integer) 0;
#line 1386 "add_mutable_aux_preds.m"
        }
#line 1385 "add_mutable_aux_preds.m"
        break;
#line 1385 "add_mutable_aux_preds.m"
      case (MR_Integer) 3:
#line 1409 "add_mutable_aux_preds.m"
        {
#line 1410 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__ImplLang_9 = (MR_Integer) 3;
#line 1411 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__Lang_10 = (MR_Integer) 3;
#line 1412 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__PreInit0_11 = (MR_Integer) 0;
#line 1413 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LockUnlock0_12 = (MR_Integer) 0;
#line 1414 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess0_13 = (MR_Integer) 0;
#line 1415 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_15 = (MR_Integer) 0;
#line 1409 "add_mutable_aux_preds.m"
        }
#line 1385 "add_mutable_aux_preds.m"
        break;
#line 1385 "add_mutable_aux_preds.m"
      case (MR_Integer) 2:
#line 1401 "add_mutable_aux_preds.m"
        {
#line 1402 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__ImplLang_9 = (MR_Integer) 2;
#line 1403 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__Lang_10 = (MR_Integer) 2;
#line 1404 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__PreInit0_11 = (MR_Integer) 0;
#line 1405 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LockUnlock0_12 = (MR_Integer) 0;
#line 1406 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess0_13 = (MR_Integer) 1;
#line 1407 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_15 = (MR_Integer) 0;
#line 1401 "add_mutable_aux_preds.m"
        }
#line 1385 "add_mutable_aux_preds.m"
        break;
#line 1385 "add_mutable_aux_preds.m"
    }
#line 1417 "add_mutable_aux_preds.m"
    {
#line 1417 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsConstant_17 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_5);
    }
#line 1423 "add_mutable_aux_preds.m"
#line 1423 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__IsConstant_17) {
#line 1423 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1423 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 1424 "add_mutable_aux_preds.m"
        {
#line 1425 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__PreInit_18 = (MR_Integer) 0;
#line 1426 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LockUnlock_19 = (MR_Integer) 0;
#line 1427 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_20 = (MR_Integer) 0;
#line 1424 "add_mutable_aux_preds.m"
        }
#line 1423 "add_mutable_aux_preds.m"
        break;
#line 1423 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 1419 "add_mutable_aux_preds.m"
        {
#line 1420 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__PreInit_18 = hlds__make_hlds__add_mutable_aux_preds__PreInit0_11;
#line 1421 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LockUnlock_19 = hlds__make_hlds__add_mutable_aux_preds__LockUnlock0_12;
#line 1422 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_20 = hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess0_13;
#line 1419 "add_mutable_aux_preds.m"
        }
#line 1423 "add_mutable_aux_preds.m"
        break;
#line 1423 "add_mutable_aux_preds.m"
    }
#line 1429 "add_mutable_aux_preds.m"
    {
#line 1429 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__TargetParams_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1429 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_21, 0) = ((MR_Box) ((hlds__make_hlds__add_mutable_aux_preds__ImplLang_9 | ((((hlds__make_hlds__add_mutable_aux_preds__Lang_10 << (MR_Integer) 2)) | ((((hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_15 << (MR_Integer) 4)) | ((((hlds__make_hlds__add_mutable_aux_preds__PreInit_18 << (MR_Integer) 5)) | ((((hlds__make_hlds__add_mutable_aux_preds__LockUnlock_19 << (MR_Integer) 6)) | ((hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_20 << (MR_Integer) 7)))))))))))));
#line 1429 "add_mutable_aux_preds.m"
    }
#line 1431 "add_mutable_aux_preds.m"
    {
#line 1431 "add_mutable_aux_preds.m"
      MR_Word base;
#line 1431 "add_mutable_aux_preds.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1431 "add_mutable_aux_preds.m"
      *hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_6 = base;
#line 1431 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetParams_21));
#line 1431 "add_mutable_aux_preds.m"
    }
#line 1363 "add_mutable_aux_preds.m"
  }
#line 1360 "add_mutable_aux_preds.m"
}

#line 1319 "add_mutable_aux_preds.m"
static MR_String MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__global_foreign_type_name_4_f_0(
#line 1319 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1319 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_2,
#line 1319 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_3,
#line 1319 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_4)
#line 1319 "add_mutable_aux_preds.m"
{
#line 1322 "add_mutable_aux_preds.m"
  {
#line 1322 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1322 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__HeadVar__5_5;

#line 1322 "add_mutable_aux_preds.m"
#line 1322 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1) {
#line 1322 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1322 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 1322 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__HeadVar__5_5 = (MR_String) "MR_Word";
#line 1322 "add_mutable_aux_preds.m"
        break;
#line 1322 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 1324 "add_mutable_aux_preds.m"
        {
#line 1324 "add_mutable_aux_preds.m"
          return hlds__make_hlds__add_mutable_aux_preds__HeadVar__5_5 = backend_libs__foreign__mercury_exported_type_to_string_3_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_3, hlds__make_hlds__add_mutable_aux_preds__Lang_2, hlds__make_hlds__add_mutable_aux_preds__Type_4);
        }
#line 1322 "add_mutable_aux_preds.m"
        break;
#line 1322 "add_mutable_aux_preds.m"
    }
#line 1322 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__HeadVar__5_5;
#line 1322 "add_mutable_aux_preds.m"
  }
#line 1319 "add_mutable_aux_preds.m"
}

#line 1297 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__get_matching_foreign_names_3_p_0(
#line 1297 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1297 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1297 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3)
#line 1297 "add_mutable_aux_preds.m"
{
#line 1300 "add_mutable_aux_preds.m"
  {
#line 1300 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 1300 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1300 "add_mutable_aux_preds.m"
      *hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1300 "add_mutable_aux_preds.m"
    else
#line 1302 "add_mutable_aux_preds.m"
      {
#line 1302 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignName_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, (MR_Integer) 0)));
#line 1302 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignNames_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, (MR_Integer) 1)));
#line 1302 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__TailMatchingForeignNames_9;
#line 1302 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_10;
#line 1305 "add_mutable_aux_preds.m"
        MR_String hlds__make_hlds__add_mutable_aux_preds__V_11_11;

#line 1303 "add_mutable_aux_preds.m"
        {
#line 1303 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__get_matching_foreign_names_3_p_0(hlds__make_hlds__add_mutable_aux_preds__ForeignNames_6, hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, &hlds__make_hlds__add_mutable_aux_preds__TailMatchingForeignNames_9);
        }
#line 1305 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignName_5, (MR_Integer) 0)));
#line 1305 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignName_5, (MR_Integer) 1)));
#line 1306 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_10 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);
#line 1308 "add_mutable_aux_preds.m"
        if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1307 "add_mutable_aux_preds.m"
          {
#line 1307 "add_mutable_aux_preds.m"
            MR_Word base;
#line 1307 "add_mutable_aux_preds.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1307 "add_mutable_aux_preds.m"
            *hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3 = base;
#line 1307 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ForeignName_5));
#line 1307 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TailMatchingForeignNames_9));
#line 1307 "add_mutable_aux_preds.m"
          }
#line 1308 "add_mutable_aux_preds.m"
        else
#line 1309 "add_mutable_aux_preds.m"
          *hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3 = hlds__make_hlds__add_mutable_aux_preds__TailMatchingForeignNames_9;
#line 1302 "add_mutable_aux_preds.m"
      }
#line 1300 "add_mutable_aux_preds.m"
  }
#line 1297 "add_mutable_aux_preds.m"
}

#line 1263 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__get_global_name_from_foreign_names_9_p_0(
#line 1263 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_10,
#line 1263 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_11,
#line 1263 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_12,
#line 1263 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_13,
#line 1263 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_14,
#line 1263 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignNames_15,
#line 1263 "add_mutable_aux_preds.m"
  MR_String * hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_16,
#line 1263 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_28,
#line 1263 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_29)
#line 1263 "add_mutable_aux_preds.m"
{
#line 1270 "add_mutable_aux_preds.m"
  {
#line 1270 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1270 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetMutableNames_18;

#line 1271 "add_mutable_aux_preds.m"
    {
#line 1271 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__get_matching_foreign_names_3_p_0(hlds__make_hlds__add_mutable_aux_preds__ForeignNames_15, hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_14, &hlds__make_hlds__add_mutable_aux_preds__TargetMutableNames_18);
    }
#line 1277 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__TargetMutableNames_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1274 "add_mutable_aux_preds.m"
      {
#line 1276 "add_mutable_aux_preds.m"
        {
#line 1276 "add_mutable_aux_preds.m"
          *hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_16 = parse_tree__prog_mutable__mutable_c_var_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_12, hlds__make_hlds__add_mutable_aux_preds__MutableName_13);
        }
#line 1274 "add_mutable_aux_preds.m"
        *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_29 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_28;
#line 1274 "add_mutable_aux_preds.m"
      }
#line 1277 "add_mutable_aux_preds.m"
    else
#line 1277 "add_mutable_aux_preds.m"
      {
#line 1277 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__TargetMutableNames_18, (MR_Integer) 1)));
#line 1277 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__TargetMutableNames_18, (MR_Integer) 0)));

#line 1277 "add_mutable_aux_preds.m"
        if ((hlds__make_hlds__add_mutable_aux_preds__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1278 "add_mutable_aux_preds.m"
          {
#line 1278 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_56_56, (MR_Integer) 0)));

#line 1278 "add_mutable_aux_preds.m"
            *hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_16 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_56_56, (MR_Integer) 1)));
#line 1278 "add_mutable_aux_preds.m"
            *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_29 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_28;
#line 1278 "add_mutable_aux_preds.m"
          }
#line 1277 "add_mutable_aux_preds.m"
        else
#line 1282 "add_mutable_aux_preds.m"
          {
#line 1282 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__Globals_23;
#line 1282 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_24;
#line 1282 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__Pieces_25;
#line 1282 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__Msg_26;
#line 1282 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__Spec_27;
#line 1282 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_33_33;
#line 1282 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_36_36;
#line 1282 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_37_37;
#line 1282 "add_mutable_aux_preds.m"
            MR_String hlds__make_hlds__add_mutable_aux_preds__V_38_38;
#line 1282 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_45_45;
#line 1282 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_46_46;
#line 1282 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_50_50;

#line 1283 "add_mutable_aux_preds.m"
            {
#line 1283 "add_mutable_aux_preds.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_10, &hlds__make_hlds__add_mutable_aux_preds__Globals_23);
            }
#line 1284 "add_mutable_aux_preds.m"
            {
#line 1284 "add_mutable_aux_preds.m"
              libs__globals__get_target_2_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_23, &hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_24);
            }
#line 1287 "add_mutable_aux_preds.m"
            {
#line 1287 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_38_38 = libs__globals__compilation_target_string_1_f_0(hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_24);
            }
#line 1287 "add_mutable_aux_preds.m"
            {
#line 1287 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_37_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1287 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__V_37_37, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_38_38));
#line 1287 "add_mutable_aux_preds.m"
            }
#line 1287 "add_mutable_aux_preds.m"
            {
#line 1287 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1287 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_36_36, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_37_37));
#line 1287 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[28])));
#line 1287 "add_mutable_aux_preds.m"
            }
#line 1286 "add_mutable_aux_preds.m"
            {
#line 1286 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1286 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_33_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[36])));
#line 1286 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_33_33, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_36_36));
#line 1286 "add_mutable_aux_preds.m"
            }
#line 1285 "add_mutable_aux_preds.m"
            {
#line 1285 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__Pieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1285 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__Pieces_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[35])));
#line 1285 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__Pieces_25, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_33_33));
#line 1285 "add_mutable_aux_preds.m"
            }
#line 1289 "add_mutable_aux_preds.m"
            {
#line 1289 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1289 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_46_46, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Pieces_25));
#line 1289 "add_mutable_aux_preds.m"
            }
#line 1289 "add_mutable_aux_preds.m"
            {
#line 1289 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1289 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_45_45, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_46_46));
#line 1289 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1289 "add_mutable_aux_preds.m"
            }
#line 1289 "add_mutable_aux_preds.m"
            {
#line 1289 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__Msg_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1289 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Msg_26, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_11));
#line 1289 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Msg_26, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_45_45));
#line 1289 "add_mutable_aux_preds.m"
            }
#line 1290 "add_mutable_aux_preds.m"
            {
#line 1290 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1290 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_50_50, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Msg_26));
#line 1290 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1290 "add_mutable_aux_preds.m"
            }
#line 1290 "add_mutable_aux_preds.m"
            {
#line 1290 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__Spec_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1290 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Spec_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1290 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Spec_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1290 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Spec_27, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_50_50));
#line 1290 "add_mutable_aux_preds.m"
            }
#line 1291 "add_mutable_aux_preds.m"
            {
#line 1291 "add_mutable_aux_preds.m"
              MR_Word base;
#line 1291 "add_mutable_aux_preds.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1291 "add_mutable_aux_preds.m"
              *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_29 = base;
#line 1291 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Spec_27));
#line 1291 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_28));
#line 1291 "add_mutable_aux_preds.m"
            }
#line 1294 "add_mutable_aux_preds.m"
            {
#line 1294 "add_mutable_aux_preds.m"
              *hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_16 = parse_tree__prog_mutable__mutable_c_var_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_12, hlds__make_hlds__add_mutable_aux_preds__MutableName_13);
            }
#line 1282 "add_mutable_aux_preds.m"
          }
#line 1277 "add_mutable_aux_preds.m"
      }
#line 1270 "add_mutable_aux_preds.m"
  }
#line 1263 "add_mutable_aux_preds.m"
}

#line 1178 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_init_pred_11_p_0(
#line 1178 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12,
#line 1178 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_13,
#line 1178 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_14,
#line 1178 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_15,
#line 1178 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_16,
#line 1178 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39,
#line 1178 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_40,
#line 1178 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_41,
#line 1178 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_42,
#line 1178 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_43,
#line 1178 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_44)
#line 1178 "add_mutable_aux_preds.m"
{
#line 1184 "add_mutable_aux_preds.m"
  {
#line 1184 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1184 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_20;
#line 1184 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_21;
#line 1184 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InitTerm_23;
#line 1184 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__VarSetMutable_26;
#line 1184 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_27;
#line 1184 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__X_29;
#line 1184 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__VarSetMutableX_30;
#line 1184 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__VarX_31;
#line 1184 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_32;
#line 1184 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__CallSetExpr_33;
#line 1184 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnifyCallSetExpr_34;
#line 1184 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_35;
#line 1184 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InitPredName_37;
#line 1184 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_47_47;
#line 1184 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_54_54;
#line 1184 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_56_56;
#line 1184 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__CName_70;
#line 1184 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_71;
#line 1184 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__FPEInfo_72;
#line 1184 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_24_75;
#line 1186 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Type_22;
#line 1186 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Inst_24;
#line 1186 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___MutAttrs_25;
#line 1186 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_28;

#line 1185 "add_mutable_aux_preds.m"
    {
#line 1185 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_20);
    }
#line 1186 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutableName_21 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12, (MR_Integer) 0)));
#line 1186 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Type_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12, (MR_Integer) 1)));
#line 1186 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__InitTerm_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12, (MR_Integer) 2)));
#line 1186 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Inst_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12, (MR_Integer) 3)));
#line 1186 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___MutAttrs_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12, (MR_Integer) 4)));
#line 1186 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__VarSetMutable_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12, (MR_Integer) 5)));
#line 1186 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Context_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12, (MR_Integer) 6)));
#line 1186 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___SeqNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12, (MR_Integer) 7)));
#line 1188 "add_mutable_aux_preds.m"
    {
#line 1188 "add_mutable_aux_preds.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "X", &hlds__make_hlds__add_mutable_aux_preds__X_29, hlds__make_hlds__add_mutable_aux_preds__VarSetMutable_26, &hlds__make_hlds__add_mutable_aux_preds__VarSetMutableX_30);
    }
#line 1189 "add_mutable_aux_preds.m"
    {
#line 1189 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__VarX_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1189 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__VarX_31, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_29));
#line 1189 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__VarX_31, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_27));
#line 1189 "add_mutable_aux_preds.m"
    }
#line 1191 "add_mutable_aux_preds.m"
    {
#line 1191 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1191 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_32, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_27));
#line 1191 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_32, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarX_31));
#line 1191 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_32, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InitTerm_23));
#line 1191 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_32, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1191 "add_mutable_aux_preds.m"
    }
#line 1192 "add_mutable_aux_preds.m"
    {
#line 1192 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1192 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_47_47, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarX_31));
#line 1192 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1192 "add_mutable_aux_preds.m"
    }
#line 1192 "add_mutable_aux_preds.m"
    {
#line 1192 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__CallSetExpr_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1192 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallSetExpr_33, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_27));
#line 1192 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallSetExpr_33, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_14));
#line 1192 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallSetExpr_33, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_47_47));
#line 1192 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallSetExpr_33, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1192 "add_mutable_aux_preds.m"
    }
#line 1193 "add_mutable_aux_preds.m"
    {
#line 1193 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__UnifyCallSetExpr_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1193 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__UnifyCallSetExpr_34, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_27));
#line 1193 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__UnifyCallSetExpr_34, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_32));
#line 1193 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__UnifyCallSetExpr_34, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallSetExpr_33));
#line 1193 "add_mutable_aux_preds.m"
    }
#line 1197 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1196 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_35 = hlds__make_hlds__add_mutable_aux_preds__UnifyCallSetExpr_34;
#line 1197 "add_mutable_aux_preds.m"
    else
#line 1198 "add_mutable_aux_preds.m"
      {
#line 1198 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_13, (MR_Integer) 0)));

#line 1199 "add_mutable_aux_preds.m"
        {
#line 1199 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1199 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_35, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_27));
#line 1199 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_35, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_36));
#line 1199 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_35, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnifyCallSetExpr_34));
#line 1199 "add_mutable_aux_preds.m"
        }
#line 1198 "add_mutable_aux_preds.m"
      }
#line 1201 "add_mutable_aux_preds.m"
    {
#line 1201 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__InitPredName_37 = parse_tree__prog_mutable__mutable_init_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_20, hlds__make_hlds__add_mutable_aux_preds__MutableName_21);
    }
#line 1204 "add_mutable_aux_preds.m"
    {
#line 1204 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__add_mutable_aux_preds__VarSetMutableX_30, (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__InitPredName_37, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_35, hlds__make_hlds__add_mutable_aux_preds__PredStatus_16, hlds__make_hlds__add_mutable_aux_preds__Context_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_54_54, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_41, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_42, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_43, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_56_56);
    }
#line 1225 "add_mutable_aux_preds.m"
    {
#line 1225 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_new_user_init_pred_5_p_0(hlds__make_hlds__add_mutable_aux_preds__InitPredName_37, (MR_Integer) 0, &hlds__make_hlds__add_mutable_aux_preds__CName_70, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_54_54, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_24_75);
    }
#line 1226 "add_mutable_aux_preds.m"
    {
#line 1226 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1226 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_71, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InitPredName_37));
#line 1226 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1226 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_71, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1226 "add_mutable_aux_preds.m"
    }
#line 1227 "add_mutable_aux_preds.m"
    {
#line 1227 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__FPEInfo_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1227 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_72, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Lang_15));
#line 1227 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_72, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_71));
#line 1227 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_72, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CName_70));
#line 1227 "add_mutable_aux_preds.m"
    }
#line 1230 "add_mutable_aux_preds.m"
    {
#line 1230 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0((MR_Word) MR_mkword(MR_mktag(1), ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[34]))), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_72, hlds__make_hlds__add_mutable_aux_preds__Context_27, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_24_75, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_40, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_56_56, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_44);
#line 1230 "add_mutable_aux_preds.m"
      return;
    }
#line 1184 "add_mutable_aux_preds.m"
  }
#line 1178 "add_mutable_aux_preds.m"
}

#line 1032 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_main_get_set_preds_14_p_0_1(
#line 1032 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 1032 "add_mutable_aux_preds.m"
{
#line 1032 "add_mutable_aux_preds.m"
  {
#line 1032 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1032 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 1032 "add_mutable_aux_preds.m"
    {
#line 1032 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_main_get_set_preds__1032__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 1032 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1032 "add_mutable_aux_preds.m"
  }
#line 1032 "add_mutable_aux_preds.m"
}

#line 954 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_main_get_set_preds_14_p_0(
#line 954 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15,
#line 954 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_16,
#line 954 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17,
#line 954 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_18,
#line 954 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_19,
#line 954 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_20,
#line 954 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21,
#line 954 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_22,
#line 954 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_85,
#line 954 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_86,
#line 954 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_87,
#line 954 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_88,
#line 954 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_89,
#line 954 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_90)
#line 954 "add_mutable_aux_preds.m"
{
#line 963 "add_mutable_aux_preds.m"
  {
#line 963 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 963 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_253_253;
#line 963 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_26;
#line 963 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_27;
#line 963 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_30;
#line 963 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_31;
#line 963 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_33;
#line 963 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_35;
#line 963 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_36;
#line 963 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__AttachToIO_37;
#line 963 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ImplLang_38;
#line 963 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_40;
#line 963 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__X_44;
#line 963 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_45;
#line 963 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_92_92;
#line 965 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Type_28;
#line 965 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___InitTerm_29;
#line 965 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___VarSetMutable_32;
#line 965 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_34;
#line 970 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Lang_39;
#line 970 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___PreInit_41;
#line 970 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___LockUnlock_42;
#line 970 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_43;

#line 964 "add_mutable_aux_preds.m"
    {
#line 964 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_85, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_26);
    }
#line 965 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutableName_27 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15, (MR_Integer) 0)));
#line 965 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Type_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15, (MR_Integer) 1)));
#line 965 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___InitTerm_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15, (MR_Integer) 2)));
#line 965 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Inst_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15, (MR_Integer) 3)));
#line 965 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutAttrs_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15, (MR_Integer) 4)));
#line 965 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___VarSetMutable_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15, (MR_Integer) 5)));
#line 965 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Context_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15, (MR_Integer) 6)));
#line 965 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___SeqNum_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15, (MR_Integer) 7)));
#line 967 "add_mutable_aux_preds.m"
    {
#line 967 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsConstant_35 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_31);
    }
#line 968 "add_mutable_aux_preds.m"
    {
#line 968 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_36 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_31);
    }
#line 969 "add_mutable_aux_preds.m"
    {
#line 969 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__AttachToIO_37 = parse_tree__prog_item__mutable_var_attach_to_io_state_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_31);
    }
#line 970 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__ImplLang_38 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_16, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 970 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Lang_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_16, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
#line 970 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_16, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 970 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___PreInit_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_16, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 970 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___LockUnlock_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_16, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 970 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_16, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 4119 "hlds.make_hlds.add_mutable_aux_preds.c"
    hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_253_253 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 972 "add_mutable_aux_preds.m"
    {
#line 972 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_92_92 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_253_253);
    }
#line 972 "add_mutable_aux_preds.m"
    {
#line 972 "add_mutable_aux_preds.m"
      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_253_253, (MR_String) "X", &hlds__make_hlds__add_mutable_aux_preds__X_44, hlds__make_hlds__add_mutable_aux_preds__V_92_92, &hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_45);
    }
#line 1034 "add_mutable_aux_preds.m"
#line 1034 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__IsConstant_35) {
#line 1034 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1034 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 975 "add_mutable_aux_preds.m"
        {
#line 975 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_254_254;
#line 975 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__ConstantGetPredName_46;
#line 975 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__ConstantGetAttrs0_48;
#line 975 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__ConstantGetAttrs_49;
#line 975 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__ConstantGetCode_51;
#line 975 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__ConstantSetCode_52;
#line 975 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_53;
#line 975 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_54;
#line 975 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_225_225;
#line 975 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_226_226;
#line 975 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_228_228;
#line 975 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_230_230;
#line 975 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_231_231;
#line 975 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_232_232;
#line 975 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_234_234;
#line 975 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_235_235;
#line 975 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_237_237;
#line 975 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_239_239;
#line 975 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_240_240;
#line 975 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_243_243;
#line 975 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_244_244;
#line 975 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_248_248;

#line 976 "add_mutable_aux_preds.m"
          {
#line 976 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__ConstantGetPredName_46 = parse_tree__prog_mutable__mutable_get_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_26, hlds__make_hlds__add_mutable_aux_preds__MutableName_27);
          }
#line 978 "add_mutable_aux_preds.m"
          {
#line 978 "add_mutable_aux_preds.m"
            *hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21 = parse_tree__prog_mutable__mutable_secret_set_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_26, hlds__make_hlds__add_mutable_aux_preds__MutableName_27);
          }
#line 982 "add_mutable_aux_preds.m"
          {
#line 982 "add_mutable_aux_preds.m"
            parse_tree__prog_data__set_purity_3_p_0((MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__Attrs_18, &hlds__make_hlds__add_mutable_aux_preds__ConstantGetAttrs0_48);
          }
#line 983 "add_mutable_aux_preds.m"
          {
#line 983 "add_mutable_aux_preds.m"
            parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__ConstantGetAttrs0_48, &hlds__make_hlds__add_mutable_aux_preds__ConstantGetAttrs_49);
          }
#line 992 "add_mutable_aux_preds.m"
#line 992 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__ImplLang_38) {
#line 992 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 992 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 992 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 992 "add_mutable_aux_preds.m"
            case (MR_Integer) 2:
#line 989 "add_mutable_aux_preds.m"
              {
#line 989 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_221_221;

#line 990 "add_mutable_aux_preds.m"
                {
#line 990 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_221_221 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17, (MR_String) ";\n");
                }
#line 990 "add_mutable_aux_preds.m"
                {
#line 990 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__ConstantGetCode_51 = mercury__string__f_43_43_2_f_0((MR_String) "X = ", hlds__make_hlds__add_mutable_aux_preds__V_221_221);
                }
#line 991 "add_mutable_aux_preds.m"
                {
#line 991 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__ConstantSetCode_52 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17, (MR_String) " = X;\n");
                }
#line 989 "add_mutable_aux_preds.m"
              }
#line 992 "add_mutable_aux_preds.m"
              break;
#line 992 "add_mutable_aux_preds.m"
            case (MR_Integer) 3:
#line 993 "add_mutable_aux_preds.m"
              {
#line 993 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_203_203;
#line 993 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_205_205;
#line 993 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_218_218;

#line 999 "add_mutable_aux_preds.m"
                {
#line 999 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_205_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 999 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_205_205, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17));
#line 999 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_205_205, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[26])));
#line 999 "add_mutable_aux_preds.m"
                }
#line 998 "add_mutable_aux_preds.m"
                {
#line 998 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_203_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 998 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_203_203, 0) = ((MR_Box) ((MR_String) "\'ML_erlang_global_server\' ! {get_mutable, "));
#line 998 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_203_203, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_205_205));
#line 998 "add_mutable_aux_preds.m"
                }
#line 997 "add_mutable_aux_preds.m"
                {
#line 997 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__ConstantGetCode_51 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_203_203);
                }
#line 1007 "add_mutable_aux_preds.m"
                {
#line 1007 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_218_218 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17, (MR_String) ", X}");
                }
#line 1006 "add_mutable_aux_preds.m"
                {
#line 1006 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__ConstantSetCode_52 = mercury__string__f_43_43_2_f_0((MR_String) "\'ML_erlang_global_server\' ! {set_mutable, ", hlds__make_hlds__add_mutable_aux_preds__V_218_218);
                }
#line 993 "add_mutable_aux_preds.m"
              }
#line 992 "add_mutable_aux_preds.m"
              break;
#line 992 "add_mutable_aux_preds.m"
          }
#line 1012 "add_mutable_aux_preds.m"
          {
#line 1012 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_228_228 = parse_tree__prog_mode__out_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_30);
          }
#line 1012 "add_mutable_aux_preds.m"
          {
#line 1012 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_226_226 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1012 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_226_226, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_44));
#line 1012 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_226_226, 1) = ((MR_Box) ((MR_String) "X"));
#line 1012 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_226_226, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_228_228));
#line 1012 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_226_226, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_40));
#line 1012 "add_mutable_aux_preds.m"
          }
#line 1012 "add_mutable_aux_preds.m"
          {
#line 1012 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_225_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1012 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_225_225, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_226_226));
#line 1012 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_225_225, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1012 "add_mutable_aux_preds.m"
          }
#line 4321 "hlds.make_hlds.add_mutable_aux_preds.c"
          hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_254_254 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
#line 1014 "add_mutable_aux_preds.m"
          {
#line 1014 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_230_230 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_254_254);
          }
#line 1015 "add_mutable_aux_preds.m"
          {
#line 1015 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_232_232 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1015 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_232_232, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1015 "add_mutable_aux_preds.m"
          }
#line 1015 "add_mutable_aux_preds.m"
          {
#line 1015 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_231_231 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1015 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_231_231, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ConstantGetCode_51));
#line 1015 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_231_231, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_232_232));
#line 1015 "add_mutable_aux_preds.m"
          }
#line 1009 "add_mutable_aux_preds.m"
          {
#line 1009 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1009 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_53, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ConstantGetAttrs_49));
#line 1009 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_53, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ConstantGetPredName_46));
#line 1009 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_53, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1009 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_53, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_225_225));
#line 1009 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_53, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_45));
#line 1009 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_53, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_230_230));
#line 1009 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_53, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_231_231));
#line 1009 "add_mutable_aux_preds.m"
          }
#line 1022 "add_mutable_aux_preds.m"
          {
#line 1022 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_237_237 = parse_tree__prog_mode__in_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_30);
          }
#line 1022 "add_mutable_aux_preds.m"
          {
#line 1022 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_235_235 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1022 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_235_235, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_44));
#line 1022 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_235_235, 1) = ((MR_Box) ((MR_String) "X"));
#line 1022 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_235_235, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_237_237));
#line 1022 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_235_235, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_40));
#line 1022 "add_mutable_aux_preds.m"
          }
#line 1022 "add_mutable_aux_preds.m"
          {
#line 1022 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_234_234 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1022 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_234_234, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_235_235));
#line 1022 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_234_234, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1022 "add_mutable_aux_preds.m"
          }
#line 1024 "add_mutable_aux_preds.m"
          {
#line 1024 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_239_239 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_254_254);
          }
#line 1025 "add_mutable_aux_preds.m"
          {
#line 1025 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_240_240 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1025 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_240_240, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ConstantSetCode_52));
#line 1025 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_240_240, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_232_232));
#line 1025 "add_mutable_aux_preds.m"
          }
#line 1019 "add_mutable_aux_preds.m"
          {
#line 1019 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1019 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_54, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Attrs_18));
#line 1019 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_54, 1) = ((MR_Box) (*hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21));
#line 1019 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_54, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1019 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_54, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_234_234));
#line 1019 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_54, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_45));
#line 1019 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_54, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_239_239));
#line 1019 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_54, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_240_240));
#line 1019 "add_mutable_aux_preds.m"
          }
#line 1027 "add_mutable_aux_preds.m"
          {
#line 1027 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_53, hlds__make_hlds__add_mutable_aux_preds__PredStatus_22, hlds__make_hlds__add_mutable_aux_preds__Context_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_85, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_243_243, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_89, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_244_244);
          }
#line 1029 "add_mutable_aux_preds.m"
          {
#line 1029 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_54, hlds__make_hlds__add_mutable_aux_preds__PredStatus_22, hlds__make_hlds__add_mutable_aux_preds__Context_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_243_243, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_86, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_244_244, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_90);
          }
#line 1032 "add_mutable_aux_preds.m"
          {
#line 1032 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_248_248 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1032 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_248_248, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[3]));
#line 1032 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_248_248, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__define_main_get_set_preds_14_p_0_1));
#line 1032 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_248_248, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1032 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_248_248, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__AttachToIO_37));
#line 1032 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_248_248, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1032 "add_mutable_aux_preds.m"
          }
#line 1032 "add_mutable_aux_preds.m"
          {
#line 1032 "add_mutable_aux_preds.m"
            mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_248_248, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_main_get_set_preds\'/14", (MR_String) "AttachToIO = mutable_attach_to_io_state");
          }
#line 975 "add_mutable_aux_preds.m"
          *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_88 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_87;
#line 975 "add_mutable_aux_preds.m"
        }
#line 1034 "add_mutable_aux_preds.m"
        break;
#line 1034 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 1035 "add_mutable_aux_preds.m"
        {
#line 1035 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__StdGetPredName_55;
#line 1035 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59;
#line 1035 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60;
#line 1035 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_170_170;
#line 1035 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_171_171;
#line 1035 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_172_172;

#line 1036 "add_mutable_aux_preds.m"
          {
#line 1036 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__StdGetPredName_55 = parse_tree__prog_mutable__mutable_get_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_26, hlds__make_hlds__add_mutable_aux_preds__MutableName_27);
          }
#line 1037 "add_mutable_aux_preds.m"
          {
#line 1037 "add_mutable_aux_preds.m"
            *hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21 = parse_tree__prog_mutable__mutable_set_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_26, hlds__make_hlds__add_mutable_aux_preds__MutableName_27);
          }
#line 1074 "add_mutable_aux_preds.m"
#line 1074 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__ImplLang_38) {
#line 1074 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1074 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 1074 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 1074 "add_mutable_aux_preds.m"
            case (MR_Integer) 2:
#line 1043 "add_mutable_aux_preds.m"
              {
#line 1043 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr_57;
#line 1043 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr_58;
#line 1043 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__StdPredArgs_63;
#line 1043 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__StdGetPredExpr_64;
#line 1043 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_158_158;
#line 1043 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_164_164;
#line 1043 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_165_165;
#line 1043 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_166_166;

#line 1047 "add_mutable_aux_preds.m"
                if ((hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1048 "add_mutable_aux_preds.m"
                  {
#line 1049 "add_mutable_aux_preds.m"
                    {
#line 1049 "add_mutable_aux_preds.m"
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_main_get_set_preds\'/14", (MR_String) "mutable_not_constant but MaybeUnsafeGetSetExprs = no");
#line 1049 "add_mutable_aux_preds.m"
                      return;
                    }
#line 1048 "add_mutable_aux_preds.m"
                  }
#line 1047 "add_mutable_aux_preds.m"
                else
#line 1045 "add_mutable_aux_preds.m"
                  {
#line 1045 "add_mutable_aux_preds.m"
                    MR_Tuple hlds__make_hlds__add_mutable_aux_preds__V_154_154 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_20, (MR_Integer) 0)));

#line 1046 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_154_154, (MR_Integer) 0)));
#line 1046 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_154_154, (MR_Integer) 1)));
#line 1045 "add_mutable_aux_preds.m"
                  }
#line 1056 "add_mutable_aux_preds.m"
                if ((hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1053 "add_mutable_aux_preds.m"
                  {
#line 1054 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59 = hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr_57;
#line 1055 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60 = hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr_58;
#line 1053 "add_mutable_aux_preds.m"
                  }
#line 1056 "add_mutable_aux_preds.m"
                else
#line 1057 "add_mutable_aux_preds.m"
                  {
#line 1057 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__CallLockExpr_61;
#line 1057 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr_62;
#line 1057 "add_mutable_aux_preds.m"
                    MR_Tuple hlds__make_hlds__add_mutable_aux_preds__V_155_155 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_19, (MR_Integer) 0)));
#line 1057 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_156_156;
#line 1057 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_157_157;

#line 1057 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__CallLockExpr_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_155_155, (MR_Integer) 0)));
#line 1057 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_155_155, (MR_Integer) 1)));
#line 1059 "add_mutable_aux_preds.m"
                    {
#line 1059 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__V_156_156 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1059 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__V_156_156, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1059 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__V_156_156, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr_57));
#line 1059 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__V_156_156, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr_62));
#line 1059 "add_mutable_aux_preds.m"
                    }
#line 1058 "add_mutable_aux_preds.m"
                    {
#line 1058 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1058 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1058 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallLockExpr_61));
#line 1058 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_156_156));
#line 1058 "add_mutable_aux_preds.m"
                    }
#line 1061 "add_mutable_aux_preds.m"
                    {
#line 1061 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__V_157_157 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1061 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__V_157_157, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1061 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__V_157_157, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr_58));
#line 1061 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__V_157_157, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr_62));
#line 1061 "add_mutable_aux_preds.m"
                    }
#line 1060 "add_mutable_aux_preds.m"
                    {
#line 1060 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1060 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1060 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallLockExpr_61));
#line 1060 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_157_157));
#line 1060 "add_mutable_aux_preds.m"
                    }
#line 1057 "add_mutable_aux_preds.m"
                  }
#line 1064 "add_mutable_aux_preds.m"
                {
#line 1064 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1064 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_158_158, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_44));
#line 1064 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_158_158, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1064 "add_mutable_aux_preds.m"
                }
#line 1064 "add_mutable_aux_preds.m"
                {
#line 1064 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__StdPredArgs_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1064 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__StdPredArgs_63, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_158_158));
#line 1064 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__StdPredArgs_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1064 "add_mutable_aux_preds.m"
                }
#line 1065 "add_mutable_aux_preds.m"
                {
#line 1065 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__StdGetPredExpr_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1065 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__StdGetPredExpr_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 1065 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__StdGetPredExpr_64, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1065 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__StdGetPredExpr_64, 2) = ((MR_Box) ((MR_Integer) 1));
#line 1065 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__StdGetPredExpr_64, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59));
#line 1065 "add_mutable_aux_preds.m"
                }
#line 1068 "add_mutable_aux_preds.m"
                {
#line 1068 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_45, (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__StdGetPredName_55, hlds__make_hlds__add_mutable_aux_preds__StdPredArgs_63, hlds__make_hlds__add_mutable_aux_preds__StdGetPredExpr_64, hlds__make_hlds__add_mutable_aux_preds__PredStatus_22, hlds__make_hlds__add_mutable_aux_preds__Context_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_85, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_164_164, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_87, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_165_165, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_89, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_166_166);
                }
#line 1071 "add_mutable_aux_preds.m"
                {
#line 1071 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_45, (MR_Integer) 0, *hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21, hlds__make_hlds__add_mutable_aux_preds__StdPredArgs_63, hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60, hlds__make_hlds__add_mutable_aux_preds__PredStatus_22, hlds__make_hlds__add_mutable_aux_preds__Context_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_164_164, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_170_170, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_165_165, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_171_171, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_166_166, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_172_172);
                }
#line 1043 "add_mutable_aux_preds.m"
              }
#line 1074 "add_mutable_aux_preds.m"
              break;
#line 1074 "add_mutable_aux_preds.m"
            case (MR_Integer) 3:
#line 1075 "add_mutable_aux_preds.m"
              {
#line 1075 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_256_256;
#line 1075 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__ThreadSafeAttrs_66;
#line 1075 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__ErlangGetAttrs_67;
#line 1075 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__ErlangSetAttrs_68;
#line 1075 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__StdGetCode_69;
#line 1075 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__StdSetCode_70;
#line 1075 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_71;
#line 1075 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_72;
#line 1075 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_120_120;
#line 1075 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_121_121;
#line 1075 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_123_123;
#line 1075 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_125_125;
#line 1075 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_126_126;
#line 1075 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_127_127;
#line 1075 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_129_129;
#line 1075 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_130_130;
#line 1075 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_132_132;
#line 1075 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_134_134;
#line 1075 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_135_135;
#line 1075 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_138_138;
#line 1075 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_139_139;
#line 1075 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_143_143;
#line 1075 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_144_144;

#line 1083 "add_mutable_aux_preds.m"
                {
#line 1083 "add_mutable_aux_preds.m"
                  parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__Attrs_18, &hlds__make_hlds__add_mutable_aux_preds__ThreadSafeAttrs_66);
                }
#line 1084 "add_mutable_aux_preds.m"
                {
#line 1084 "add_mutable_aux_preds.m"
                  parse_tree__prog_data__set_purity_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__ThreadSafeAttrs_66, &hlds__make_hlds__add_mutable_aux_preds__ErlangGetAttrs_67);
                }
#line 1085 "add_mutable_aux_preds.m"
                {
#line 1085 "add_mutable_aux_preds.m"
                  parse_tree__prog_data__set_purity_3_p_0((MR_Integer) 2, hlds__make_hlds__add_mutable_aux_preds__ThreadSafeAttrs_66, &hlds__make_hlds__add_mutable_aux_preds__ErlangSetAttrs_68);
                }
#line 1092 "add_mutable_aux_preds.m"
#line 1092 "add_mutable_aux_preds.m"
                switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_36) {
#line 1092 "add_mutable_aux_preds.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1092 "add_mutable_aux_preds.m"
                  case (MR_Integer) 0:
#line 1093 "add_mutable_aux_preds.m"
                    {
#line 1093 "add_mutable_aux_preds.m"
                      MR_Word hlds__make_hlds__add_mutable_aux_preds__V_96_96;
#line 1093 "add_mutable_aux_preds.m"
                      MR_Word hlds__make_hlds__add_mutable_aux_preds__V_98_98;
#line 1093 "add_mutable_aux_preds.m"
                      MR_String hlds__make_hlds__add_mutable_aux_preds__V_111_111;

#line 1099 "add_mutable_aux_preds.m"
                      {
#line 1099 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1099 "add_mutable_aux_preds.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_98_98, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17));
#line 1099 "add_mutable_aux_preds.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[26])));
#line 1099 "add_mutable_aux_preds.m"
                      }
#line 1098 "add_mutable_aux_preds.m"
                      {
#line 1098 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1098 "add_mutable_aux_preds.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_96_96, 0) = ((MR_Box) ((MR_String) "\'ML_erlang_global_server\' ! {get_mutable, "));
#line 1098 "add_mutable_aux_preds.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_96_96, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_98_98));
#line 1098 "add_mutable_aux_preds.m"
                      }
#line 1097 "add_mutable_aux_preds.m"
                      {
#line 1097 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__StdGetCode_69 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_96_96);
                      }
#line 1107 "add_mutable_aux_preds.m"
                      {
#line 1107 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__V_111_111 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17, (MR_String) ", X}");
                      }
#line 1106 "add_mutable_aux_preds.m"
                      {
#line 1106 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__StdSetCode_70 = mercury__string__f_43_43_2_f_0((MR_String) "\'ML_erlang_global_server\' ! {set_mutable, ", hlds__make_hlds__add_mutable_aux_preds__V_111_111);
                      }
#line 1093 "add_mutable_aux_preds.m"
                    }
#line 1092 "add_mutable_aux_preds.m"
                    break;
#line 1092 "add_mutable_aux_preds.m"
                  case (MR_Integer) 1:
#line 1087 "add_mutable_aux_preds.m"
                    {
#line 1087 "add_mutable_aux_preds.m"
                      MR_String hlds__make_hlds__add_mutable_aux_preds__V_114_114;
#line 1087 "add_mutable_aux_preds.m"
                      MR_String hlds__make_hlds__add_mutable_aux_preds__V_117_117;

#line 1089 "add_mutable_aux_preds.m"
                      {
#line 1089 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__V_114_114 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17, (MR_String) "})");
                      }
#line 1088 "add_mutable_aux_preds.m"
                      {
#line 1088 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__StdGetCode_69 = mercury__string__f_43_43_2_f_0((MR_String) "X = get({\'MR_thread_local_mutable\', ", hlds__make_hlds__add_mutable_aux_preds__V_114_114);
                      }
#line 1091 "add_mutable_aux_preds.m"
                      {
#line 1091 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__V_117_117 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17, (MR_String) "}, X)");
                      }
#line 1090 "add_mutable_aux_preds.m"
                      {
#line 1090 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__StdSetCode_70 = mercury__string__f_43_43_2_f_0((MR_String) "put({\'MR_thread_local_mutable\', ", hlds__make_hlds__add_mutable_aux_preds__V_117_117);
                      }
#line 1087 "add_mutable_aux_preds.m"
                    }
#line 1092 "add_mutable_aux_preds.m"
                    break;
#line 1092 "add_mutable_aux_preds.m"
                }
#line 1112 "add_mutable_aux_preds.m"
                {
#line 1112 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_123_123 = parse_tree__prog_mode__out_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_30);
                }
#line 1112 "add_mutable_aux_preds.m"
                {
#line 1112 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1112 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_121_121, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_44));
#line 1112 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_121_121, 1) = ((MR_Box) ((MR_String) "X"));
#line 1112 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_121_121, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_123_123));
#line 1112 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_121_121, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_40));
#line 1112 "add_mutable_aux_preds.m"
                }
#line 1112 "add_mutable_aux_preds.m"
                {
#line 1112 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1112 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_120_120, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_121_121));
#line 1112 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_120_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1112 "add_mutable_aux_preds.m"
                }
#line 4862 "hlds.make_hlds.add_mutable_aux_preds.c"
                hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_256_256 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
#line 1114 "add_mutable_aux_preds.m"
                {
#line 1114 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_125_125 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_256_256);
                }
#line 1115 "add_mutable_aux_preds.m"
                {
#line 1115 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1115 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_127_127, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1115 "add_mutable_aux_preds.m"
                }
#line 1115 "add_mutable_aux_preds.m"
                {
#line 1115 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_126_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1115 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_126_126, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__StdGetCode_69));
#line 1115 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_126_126, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_127_127));
#line 1115 "add_mutable_aux_preds.m"
                }
#line 1109 "add_mutable_aux_preds.m"
                {
#line 1109 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1109 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_71, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ErlangGetAttrs_67));
#line 1109 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_71, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__StdGetPredName_55));
#line 1109 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_71, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1109 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_71, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_120_120));
#line 1109 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_71, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_45));
#line 1109 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_71, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_125_125));
#line 1109 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_71, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_126_126));
#line 1109 "add_mutable_aux_preds.m"
                }
#line 1120 "add_mutable_aux_preds.m"
                {
#line 1120 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_132_132 = parse_tree__prog_mode__in_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_30);
                }
#line 1120 "add_mutable_aux_preds.m"
                {
#line 1120 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_130_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1120 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_130_130, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_44));
#line 1120 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_130_130, 1) = ((MR_Box) ((MR_String) "X"));
#line 1120 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_130_130, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_132_132));
#line 1120 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_130_130, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_40));
#line 1120 "add_mutable_aux_preds.m"
                }
#line 1120 "add_mutable_aux_preds.m"
                {
#line 1120 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1120 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_129_129, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_130_130));
#line 1120 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_129_129, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1120 "add_mutable_aux_preds.m"
                }
#line 1122 "add_mutable_aux_preds.m"
                {
#line 1122 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_134_134 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_256_256);
                }
#line 1123 "add_mutable_aux_preds.m"
                {
#line 1123 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_135_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1123 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_135_135, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__StdSetCode_70));
#line 1123 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_135_135, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_127_127));
#line 1123 "add_mutable_aux_preds.m"
                }
#line 1117 "add_mutable_aux_preds.m"
                {
#line 1117 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1117 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_72, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ErlangSetAttrs_68));
#line 1117 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_72, 1) = ((MR_Box) (*hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21));
#line 1117 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_72, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1117 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_72, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_129_129));
#line 1117 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_72, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_45));
#line 1117 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_72, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_134_134));
#line 1117 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_72, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_135_135));
#line 1117 "add_mutable_aux_preds.m"
                }
#line 1125 "add_mutable_aux_preds.m"
                {
#line 1125 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_71, hlds__make_hlds__add_mutable_aux_preds__PredStatus_22, hlds__make_hlds__add_mutable_aux_preds__Context_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_85, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_138_138, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_89, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_139_139);
                }
#line 1127 "add_mutable_aux_preds.m"
                {
#line 1127 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_72, hlds__make_hlds__add_mutable_aux_preds__PredStatus_22, hlds__make_hlds__add_mutable_aux_preds__Context_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_138_138, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_170_170, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_139_139, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_172_172);
                }
#line 1131 "add_mutable_aux_preds.m"
                {
#line 1131 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_144_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1131 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_144_144, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_44));
#line 1131 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_144_144, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1131 "add_mutable_aux_preds.m"
                }
#line 1131 "add_mutable_aux_preds.m"
                {
#line 1131 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1131 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_143_143, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_144_144));
#line 1131 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_143_143, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1131 "add_mutable_aux_preds.m"
                }
#line 1130 "add_mutable_aux_preds.m"
                {
#line 1130 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1130 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1130 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__StdGetPredName_55));
#line 1130 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_143_143));
#line 1130 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59, 3) = ((MR_Box) ((MR_Integer) 1));
#line 1130 "add_mutable_aux_preds.m"
                }
#line 1132 "add_mutable_aux_preds.m"
                {
#line 1132 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1132 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1132 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60, 1) = ((MR_Box) (*hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21));
#line 1132 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_143_143));
#line 1132 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1132 "add_mutable_aux_preds.m"
                }
#line 1075 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_171_171 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_87;
#line 1075 "add_mutable_aux_preds.m"
              }
#line 1074 "add_mutable_aux_preds.m"
              break;
#line 1074 "add_mutable_aux_preds.m"
          }
#line 1137 "add_mutable_aux_preds.m"
#line 1137 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__AttachToIO_37) {
#line 1137 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1137 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 1138 "add_mutable_aux_preds.m"
              {
#line 1138 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__IO0_74;
#line 1138 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__IO_75;
#line 1138 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__VarSetXandIOs_76;
#line 1138 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__IOPredArgs_79;
#line 1138 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_80;
#line 1138 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__IOGetPredExpr_81;
#line 1138 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__IOSetPredExpr_82;
#line 1138 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__PureIOGetPredExpr_83;
#line 1138 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__PureIOSetPredExpr_84;
#line 1138 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_VarSet_175_175;
#line 1138 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_178_178;
#line 1138 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_179_179;
#line 1138 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_180_180;
#line 1138 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_181_181;
#line 1138 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_182_182;
#line 1138 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_192_192;
#line 1138 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_193_193;
#line 1138 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_194_194;

#line 1141 "add_mutable_aux_preds.m"
                {
#line 1141 "add_mutable_aux_preds.m"
                  mercury__varset__new_named_var_4_p_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_253_253, (MR_String) "IO0", &hlds__make_hlds__add_mutable_aux_preds__IO0_74, hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_45, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_VarSet_175_175);
                }
#line 1142 "add_mutable_aux_preds.m"
                {
#line 1142 "add_mutable_aux_preds.m"
                  mercury__varset__new_named_var_4_p_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_253_253, (MR_String) "IO", &hlds__make_hlds__add_mutable_aux_preds__IO_75, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_VarSet_175_175, &hlds__make_hlds__add_mutable_aux_preds__VarSetXandIOs_76);
                }
#line 1147 "add_mutable_aux_preds.m"
                {
#line 1147 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_178_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1147 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_178_178, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_44));
#line 1147 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_178_178, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1147 "add_mutable_aux_preds.m"
                }
#line 1148 "add_mutable_aux_preds.m"
                {
#line 1148 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_180_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1148 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_180_180, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__IO0_74));
#line 1148 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_180_180, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1148 "add_mutable_aux_preds.m"
                }
#line 1148 "add_mutable_aux_preds.m"
                {
#line 1148 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_182_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1148 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_182_182, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__IO_75));
#line 1148 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_182_182, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1148 "add_mutable_aux_preds.m"
                }
#line 1148 "add_mutable_aux_preds.m"
                {
#line 1148 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_181_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1148 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_181_181, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_182_182));
#line 1148 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_181_181, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1148 "add_mutable_aux_preds.m"
                }
#line 1148 "add_mutable_aux_preds.m"
                {
#line 1148 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_179_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1148 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_179_179, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_180_180));
#line 1148 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_179_179, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_181_181));
#line 1148 "add_mutable_aux_preds.m"
                }
#line 1147 "add_mutable_aux_preds.m"
                {
#line 1147 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__IOPredArgs_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1147 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__IOPredArgs_79, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_178_178));
#line 1147 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__IOPredArgs_79, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_179_179));
#line 1147 "add_mutable_aux_preds.m"
                }
#line 1156 "add_mutable_aux_preds.m"
                {
#line 1156 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1156 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_80, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1156 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_80, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_180_180));
#line 1156 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_80, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_182_182));
#line 1156 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_80, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1156 "add_mutable_aux_preds.m"
                }
#line 1159 "add_mutable_aux_preds.m"
                {
#line 1159 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__IOGetPredExpr_81 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1159 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__IOGetPredExpr_81, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1159 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__IOGetPredExpr_81, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59));
#line 1159 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__IOGetPredExpr_81, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_80));
#line 1159 "add_mutable_aux_preds.m"
                }
#line 1160 "add_mutable_aux_preds.m"
                {
#line 1160 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__IOSetPredExpr_82 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1160 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__IOSetPredExpr_82, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1160 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__IOSetPredExpr_82, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60));
#line 1160 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__IOSetPredExpr_82, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_80));
#line 1160 "add_mutable_aux_preds.m"
                }
#line 1162 "add_mutable_aux_preds.m"
                {
#line 1162 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__PureIOGetPredExpr_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1162 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOGetPredExpr_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 1162 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOGetPredExpr_83, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1162 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOGetPredExpr_83, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1162 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOGetPredExpr_83, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__IOGetPredExpr_81));
#line 1162 "add_mutable_aux_preds.m"
                }
#line 1164 "add_mutable_aux_preds.m"
                {
#line 1164 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__PureIOSetPredExpr_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1164 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOSetPredExpr_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 1164 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOSetPredExpr_84, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1164 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOSetPredExpr_84, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1164 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOSetPredExpr_84, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__IOSetPredExpr_82));
#line 1164 "add_mutable_aux_preds.m"
                }
#line 1166 "add_mutable_aux_preds.m"
                {
#line 1166 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__add_mutable_aux_preds__VarSetXandIOs_76, (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__StdGetPredName_55, hlds__make_hlds__add_mutable_aux_preds__IOPredArgs_79, hlds__make_hlds__add_mutable_aux_preds__PureIOGetPredExpr_83, hlds__make_hlds__add_mutable_aux_preds__PredStatus_22, hlds__make_hlds__add_mutable_aux_preds__Context_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_170_170, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_192_192, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_171_171, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_193_193, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_172_172, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_194_194);
                }
#line 1169 "add_mutable_aux_preds.m"
                {
#line 1169 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__add_mutable_aux_preds__VarSetXandIOs_76, (MR_Integer) 0, *hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21, hlds__make_hlds__add_mutable_aux_preds__IOPredArgs_79, hlds__make_hlds__add_mutable_aux_preds__PureIOSetPredExpr_84, hlds__make_hlds__add_mutable_aux_preds__PredStatus_22, hlds__make_hlds__add_mutable_aux_preds__Context_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_192_192, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_86, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_193_193, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_88, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_194_194, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_90);
#line 1169 "add_mutable_aux_preds.m"
                  return;
                }
#line 1138 "add_mutable_aux_preds.m"
              }
#line 1137 "add_mutable_aux_preds.m"
              break;
#line 1137 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 1136 "add_mutable_aux_preds.m"
              {
#line 1136 "add_mutable_aux_preds.m"
                *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_86 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_170_170;
#line 1136 "add_mutable_aux_preds.m"
                *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_88 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_171_171;
#line 1136 "add_mutable_aux_preds.m"
                *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_90 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_172_172;
#line 1136 "add_mutable_aux_preds.m"
              }
#line 1137 "add_mutable_aux_preds.m"
              break;
#line 1137 "add_mutable_aux_preds.m"
          }
#line 1035 "add_mutable_aux_preds.m"
        }
#line 1034 "add_mutable_aux_preds.m"
        break;
#line 1034 "add_mutable_aux_preds.m"
    }
#line 963 "add_mutable_aux_preds.m"
  }
#line 954 "add_mutable_aux_preds.m"
}

#line 834 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_unsafe_get_set_preds_12_p_0_1(
#line 834 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 834 "add_mutable_aux_preds.m"
{
#line 834 "add_mutable_aux_preds.m"
  {
#line 834 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 834 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 834 "add_mutable_aux_preds.m"
    {
#line 834 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_unsafe_get_set_preds__834__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 834 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 834 "add_mutable_aux_preds.m"
  }
#line 834 "add_mutable_aux_preds.m"
}

#line 818 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_unsafe_get_set_preds_12_p_0(
#line 818 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13,
#line 818 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_14,
#line 818 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15,
#line 818 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_16,
#line 818 "add_mutable_aux_preds.m"
  MR_Tuple * hlds__make_hlds__add_mutable_aux_preds__UnsafeGetSetExprs_17,
#line 818 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_18,
#line 818 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_56,
#line 818 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_57,
#line 818 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_58,
#line 818 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_59,
#line 818 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_60,
#line 818 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_61)
#line 818 "add_mutable_aux_preds.m"
{
#line 826 "add_mutable_aux_preds.m"
  {
#line 826 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 826 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_154_154;
#line 826 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_155_155;
#line 826 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_22;
#line 826 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_23;
#line 826 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_24;
#line 826 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_26;
#line 826 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27;
#line 826 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_29;
#line 826 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_31;
#line 826 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32;
#line 826 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ImplLang_33;
#line 826 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_34;
#line 826 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_35;
#line 826 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__X_39;
#line 826 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_40;
#line 826 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeGetAttrs_42;
#line 826 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeSetAttrs_43;
#line 826 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TrailedMutable_44;
#line 826 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__TrailCode_45;
#line 826 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_46;
#line 826 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__UnsafeSetCode_47;
#line 826 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeGetPredName_50;
#line 826 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeSetPredName_51;
#line 826 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_52;
#line 826 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_53;
#line 826 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr0_54;
#line 826 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr0_55;
#line 826 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_62_62;
#line 826 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_68_68;
#line 826 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_121_121;
#line 826 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_122_122;
#line 826 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_124_124;
#line 826 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_126_126;
#line 826 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_127_127;
#line 826 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_128_128;
#line 826 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_130_130;
#line 826 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_131_131;
#line 826 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_133_133;
#line 826 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_135_135;
#line 826 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_136_136;
#line 826 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__V_137_137;
#line 826 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_140_140;
#line 826 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_141_141;
#line 826 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_145_145;
#line 826 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_146_146;
#line 828 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___InitTerm_25;
#line 828 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___VarSetMutable_28;
#line 828 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_30;
#line 832 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___PreInit_36;
#line 832 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___LockUnlock_37;
#line 832 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_38;

#line 827 "add_mutable_aux_preds.m"
    {
#line 827 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_56, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_22);
    }
#line 828 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutableName_23 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 0)));
#line 828 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Type_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 1)));
#line 828 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___InitTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 2)));
#line 828 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Inst_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 3)));
#line 828 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 4)));
#line 828 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___VarSetMutable_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 5)));
#line 828 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Context_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 6)));
#line 828 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___SeqNum_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 7)));
#line 830 "add_mutable_aux_preds.m"
    {
#line 830 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsConstant_31 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27);
    }
#line 831 "add_mutable_aux_preds.m"
    {
#line 831 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27);
    }
#line 832 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__ImplLang_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 832 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Lang_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
#line 832 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 832 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___PreInit_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 832 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___LockUnlock_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 832 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 834 "add_mutable_aux_preds.m"
    {
#line 834 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 834 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_62_62, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[12]));
#line 834 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_62_62, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__define_unsafe_get_set_preds_12_p_0_1));
#line 834 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_62_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 834 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_62_62, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__IsConstant_31));
#line 834 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_62_62, 4) = ((MR_Box) ((MR_Integer) 0));
#line 834 "add_mutable_aux_preds.m"
    }
#line 834 "add_mutable_aux_preds.m"
    {
#line 834 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_62_62, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_unsafe_get_set_preds\'/12", (MR_String) "need_unsafe_get_set_preds, but IsConstant = mutable_constant");
    }
#line 5488 "hlds.make_hlds.add_mutable_aux_preds.c"
    hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_154_154 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 836 "add_mutable_aux_preds.m"
    {
#line 836 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_68_68 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_154_154);
    }
#line 836 "add_mutable_aux_preds.m"
    {
#line 836 "add_mutable_aux_preds.m"
      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_154_154, (MR_String) "X", &hlds__make_hlds__add_mutable_aux_preds__X_39, hlds__make_hlds__add_mutable_aux_preds__V_68_68, &hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_40);
    }
#line 838 "add_mutable_aux_preds.m"
    {
#line 838 "add_mutable_aux_preds.m"
      parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__Attrs_16, &hlds__make_hlds__add_mutable_aux_preds__UnsafeSetAttrs_43);
    }
#line 839 "add_mutable_aux_preds.m"
    {
#line 839 "add_mutable_aux_preds.m"
      parse_tree__prog_data__set_purity_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__UnsafeSetAttrs_43, &hlds__make_hlds__add_mutable_aux_preds__UnsafeGetAttrs_42);
    }
#line 842 "add_mutable_aux_preds.m"
    {
#line 842 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__TrailedMutable_44 = parse_tree__prog_item__mutable_var_trailed_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27);
    }
#line 868 "add_mutable_aux_preds.m"
#line 868 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__ImplLang_33) {
#line 868 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 868 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 844 "add_mutable_aux_preds.m"
        {
#line 848 "add_mutable_aux_preds.m"
#line 848 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__TrailedMutable_44) {
#line 848 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 848 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 849 "add_mutable_aux_preds.m"
              {
#line 849 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_102_102;

#line 853 "add_mutable_aux_preds.m"
                {
#line 853 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_102_102 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ");\n");
                }
#line 852 "add_mutable_aux_preds.m"
                {
#line 852 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__TrailCode_45 = mercury__string__f_43_43_2_f_0((MR_String) "MR_trail_current_value(&", hlds__make_hlds__add_mutable_aux_preds__V_102_102);
                }
#line 849 "add_mutable_aux_preds.m"
              }
#line 848 "add_mutable_aux_preds.m"
              break;
#line 848 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 847 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__TrailCode_45 = (MR_String) "";
#line 848 "add_mutable_aux_preds.m"
              break;
#line 848 "add_mutable_aux_preds.m"
          }
#line 859 "add_mutable_aux_preds.m"
#line 859 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32) {
#line 859 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 859 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 856 "add_mutable_aux_preds.m"
              {
#line 856 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_117_117;

#line 857 "add_mutable_aux_preds.m"
                {
#line 857 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_117_117 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ";\n");
                }
#line 857 "add_mutable_aux_preds.m"
                {
#line 857 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_46 = mercury__string__f_43_43_2_f_0((MR_String) "X = ", hlds__make_hlds__add_mutable_aux_preds__V_117_117);
                }
#line 858 "add_mutable_aux_preds.m"
                {
#line 858 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeSetCode_47 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) " = X;\n");
                }
#line 856 "add_mutable_aux_preds.m"
              }
#line 859 "add_mutable_aux_preds.m"
              break;
#line 859 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 860 "add_mutable_aux_preds.m"
              {
#line 860 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__TypeName_48;
#line 860 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_105_105;
#line 860 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_106_106;
#line 860 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_108_108;
#line 860 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_111_111;
#line 860 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_112_112;
#line 860 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_114_114;

#line 861 "add_mutable_aux_preds.m"
                {
#line 861 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__TypeName_48 = hlds__make_hlds__add_mutable_aux_preds__global_foreign_type_name_4_f_0(hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_35, hlds__make_hlds__add_mutable_aux_preds__Lang_34, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_56, hlds__make_hlds__add_mutable_aux_preds__Type_24);
                }
#line 864 "add_mutable_aux_preds.m"
                {
#line 864 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_108_108 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ");\n");
                }
#line 864 "add_mutable_aux_preds.m"
                {
#line 864 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_106_106 = mercury__string__f_43_43_2_f_0((MR_String) ", X, ", hlds__make_hlds__add_mutable_aux_preds__V_108_108);
                }
#line 864 "add_mutable_aux_preds.m"
                {
#line 864 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_105_105 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeName_48, hlds__make_hlds__add_mutable_aux_preds__V_106_106);
                }
#line 863 "add_mutable_aux_preds.m"
                {
#line 863 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_46 = mercury__string__f_43_43_2_f_0((MR_String) "MR_get_thread_local_mutable(", hlds__make_hlds__add_mutable_aux_preds__V_105_105);
                }
#line 866 "add_mutable_aux_preds.m"
                {
#line 866 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_114_114 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ");\n");
                }
#line 866 "add_mutable_aux_preds.m"
                {
#line 866 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_112_112 = mercury__string__f_43_43_2_f_0((MR_String) ", X, ", hlds__make_hlds__add_mutable_aux_preds__V_114_114);
                }
#line 866 "add_mutable_aux_preds.m"
                {
#line 866 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_111_111 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeName_48, hlds__make_hlds__add_mutable_aux_preds__V_112_112);
                }
#line 865 "add_mutable_aux_preds.m"
                {
#line 865 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeSetCode_47 = mercury__string__f_43_43_2_f_0((MR_String) "MR_set_thread_local_mutable(", hlds__make_hlds__add_mutable_aux_preds__V_111_111);
                }
#line 860 "add_mutable_aux_preds.m"
              }
#line 859 "add_mutable_aux_preds.m"
              break;
#line 859 "add_mutable_aux_preds.m"
          }
#line 844 "add_mutable_aux_preds.m"
        }
#line 868 "add_mutable_aux_preds.m"
        break;
#line 868 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 869 "add_mutable_aux_preds.m"
        {
#line 872 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__TrailCode_45 = (MR_String) "";
#line 877 "add_mutable_aux_preds.m"
#line 877 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32) {
#line 877 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 877 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 874 "add_mutable_aux_preds.m"
              {
#line 874 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_96_96;
#line 874 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_99_99;

#line 875 "add_mutable_aux_preds.m"
                {
#line 875 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_96_96 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ";\n");
                }
#line 875 "add_mutable_aux_preds.m"
                {
#line 875 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_46 = mercury__string__f_43_43_2_f_0((MR_String) "\tX = ", hlds__make_hlds__add_mutable_aux_preds__V_96_96);
                }
#line 876 "add_mutable_aux_preds.m"
                {
#line 876 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_99_99 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) " = X;\n");
                }
#line 876 "add_mutable_aux_preds.m"
                {
#line 876 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeSetCode_47 = mercury__string__f_43_43_2_f_0((MR_String) "\t", hlds__make_hlds__add_mutable_aux_preds__V_99_99);
                }
#line 874 "add_mutable_aux_preds.m"
              }
#line 877 "add_mutable_aux_preds.m"
              break;
#line 877 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 878 "add_mutable_aux_preds.m"
              {
#line 878 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__Cast_49;
#line 878 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_87_87;
#line 878 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_88_88;
#line 878 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_90_90;
#line 878 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_93_93;
#line 879 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_156_156;

#line 879 "add_mutable_aux_preds.m"
                {
#line 879 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_156_156 = parse_tree__builtin_lib_types__int_type_0_f_0();
                }
#line 879 "add_mutable_aux_preds.m"
                {
#line 879 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__make_hlds__add_mutable_aux_preds__Type_24, hlds__make_hlds__add_mutable_aux_preds__V_156_156);
                }
#line 881 "add_mutable_aux_preds.m"
                if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 880 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__Cast_49 = (MR_String) "(int) ";
#line 881 "add_mutable_aux_preds.m"
                else
#line 882 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__Cast_49 = (MR_String) "";
#line 886 "add_mutable_aux_preds.m"
                {
#line 886 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_90_90 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ");\n");
                }
#line 885 "add_mutable_aux_preds.m"
                {
#line 885 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_88_88 = mercury__string__f_43_43_2_f_0((MR_String) "runtime.ThreadLocalMutables.get(", hlds__make_hlds__add_mutable_aux_preds__V_90_90);
                }
#line 884 "add_mutable_aux_preds.m"
                {
#line 884 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_87_87 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__Cast_49, hlds__make_hlds__add_mutable_aux_preds__V_88_88);
                }
#line 884 "add_mutable_aux_preds.m"
                {
#line 884 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_46 = mercury__string__f_43_43_2_f_0((MR_String) "\tX = ", hlds__make_hlds__add_mutable_aux_preds__V_87_87);
                }
#line 888 "add_mutable_aux_preds.m"
                {
#line 888 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_93_93 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ", X);\n");
                }
#line 887 "add_mutable_aux_preds.m"
                {
#line 887 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeSetCode_47 = mercury__string__f_43_43_2_f_0((MR_String) "\truntime.ThreadLocalMutables.set(", hlds__make_hlds__add_mutable_aux_preds__V_93_93);
                }
#line 878 "add_mutable_aux_preds.m"
              }
#line 877 "add_mutable_aux_preds.m"
              break;
#line 877 "add_mutable_aux_preds.m"
          }
#line 869 "add_mutable_aux_preds.m"
        }
#line 868 "add_mutable_aux_preds.m"
        break;
#line 868 "add_mutable_aux_preds.m"
      case (MR_Integer) 3:
#line 905 "add_mutable_aux_preds.m"
        {
#line 906 "add_mutable_aux_preds.m"
          {
#line 906 "add_mutable_aux_preds.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_unsafe_get_set_preds\'/12", (MR_String) "unsafe_get_set for erlang");
#line 906 "add_mutable_aux_preds.m"
            return;
          }
#line 905 "add_mutable_aux_preds.m"
        }
#line 868 "add_mutable_aux_preds.m"
        break;
#line 868 "add_mutable_aux_preds.m"
      case (MR_Integer) 2:
#line 891 "add_mutable_aux_preds.m"
        {
#line 894 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__TrailCode_45 = (MR_String) "";
#line 899 "add_mutable_aux_preds.m"
#line 899 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32) {
#line 899 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 899 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 896 "add_mutable_aux_preds.m"
              {
#line 896 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_81_81;
#line 896 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_84_84;

#line 897 "add_mutable_aux_preds.m"
                {
#line 897 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_81_81 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ";\n");
                }
#line 897 "add_mutable_aux_preds.m"
                {
#line 897 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_46 = mercury__string__f_43_43_2_f_0((MR_String) "\tX = ", hlds__make_hlds__add_mutable_aux_preds__V_81_81);
                }
#line 898 "add_mutable_aux_preds.m"
                {
#line 898 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_84_84 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) " = X;\n");
                }
#line 898 "add_mutable_aux_preds.m"
                {
#line 898 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeSetCode_47 = mercury__string__f_43_43_2_f_0((MR_String) "\t", hlds__make_hlds__add_mutable_aux_preds__V_84_84);
                }
#line 896 "add_mutable_aux_preds.m"
              }
#line 899 "add_mutable_aux_preds.m"
              break;
#line 899 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 900 "add_mutable_aux_preds.m"
              {
#line 900 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_75_75;
#line 900 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_78_78;

#line 901 "add_mutable_aux_preds.m"
                {
#line 901 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_75_75 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ".get();\n");
                }
#line 901 "add_mutable_aux_preds.m"
                {
#line 901 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_46 = mercury__string__f_43_43_2_f_0((MR_String) "\tX = ", hlds__make_hlds__add_mutable_aux_preds__V_75_75);
                }
#line 902 "add_mutable_aux_preds.m"
                {
#line 902 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_78_78 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ".set(X);\n");
                }
#line 902 "add_mutable_aux_preds.m"
                {
#line 902 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeSetCode_47 = mercury__string__f_43_43_2_f_0((MR_String) "\t", hlds__make_hlds__add_mutable_aux_preds__V_78_78);
                }
#line 900 "add_mutable_aux_preds.m"
              }
#line 899 "add_mutable_aux_preds.m"
              break;
#line 899 "add_mutable_aux_preds.m"
          }
#line 891 "add_mutable_aux_preds.m"
        }
#line 868 "add_mutable_aux_preds.m"
        break;
#line 868 "add_mutable_aux_preds.m"
    }
#line 909 "add_mutable_aux_preds.m"
    {
#line 909 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__UnsafeGetPredName_50 = parse_tree__prog_mutable__mutable_unsafe_get_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_22, hlds__make_hlds__add_mutable_aux_preds__MutableName_23);
    }
#line 911 "add_mutable_aux_preds.m"
    {
#line 911 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__UnsafeSetPredName_51 = parse_tree__prog_mutable__mutable_unsafe_set_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_22, hlds__make_hlds__add_mutable_aux_preds__MutableName_23);
    }
#line 916 "add_mutable_aux_preds.m"
    {
#line 916 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_124_124 = parse_tree__prog_mode__out_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_26);
    }
#line 916 "add_mutable_aux_preds.m"
    {
#line 916 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 916 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_122_122, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_39));
#line 916 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_122_122, 1) = ((MR_Box) ((MR_String) "X"));
#line 916 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_122_122, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_124_124));
#line 916 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_122_122, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_35));
#line 916 "add_mutable_aux_preds.m"
    }
#line 916 "add_mutable_aux_preds.m"
    {
#line 916 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 916 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_121_121, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_122_122));
#line 916 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_121_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 916 "add_mutable_aux_preds.m"
    }
#line 5921 "hlds.make_hlds.add_mutable_aux_preds.c"
    hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_155_155 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
#line 918 "add_mutable_aux_preds.m"
    {
#line 918 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_126_126 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_155_155);
    }
#line 919 "add_mutable_aux_preds.m"
    {
#line 919 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 919 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_128_128, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_29));
#line 919 "add_mutable_aux_preds.m"
    }
#line 919 "add_mutable_aux_preds.m"
    {
#line 919 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_127_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 919 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_127_127, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_46));
#line 919 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_127_127, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_128_128));
#line 919 "add_mutable_aux_preds.m"
    }
#line 913 "add_mutable_aux_preds.m"
    {
#line 913 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 913 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_52, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeGetAttrs_42));
#line 913 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_52, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeGetPredName_50));
#line 913 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_52, 2) = ((MR_Box) ((MR_Integer) 0));
#line 913 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_52, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_121_121));
#line 913 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_52, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_40));
#line 913 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_52, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_126_126));
#line 913 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_52, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_127_127));
#line 913 "add_mutable_aux_preds.m"
    }
#line 924 "add_mutable_aux_preds.m"
    {
#line 924 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_133_133 = parse_tree__prog_mode__in_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_26);
    }
#line 924 "add_mutable_aux_preds.m"
    {
#line 924 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_131_131 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 924 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_131_131, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_39));
#line 924 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_131_131, 1) = ((MR_Box) ((MR_String) "X"));
#line 924 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_131_131, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_133_133));
#line 924 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_131_131, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_35));
#line 924 "add_mutable_aux_preds.m"
    }
#line 924 "add_mutable_aux_preds.m"
    {
#line 924 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 924 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_130_130, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_131_131));
#line 924 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_130_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 924 "add_mutable_aux_preds.m"
    }
#line 926 "add_mutable_aux_preds.m"
    {
#line 926 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_135_135 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_155_155);
    }
#line 927 "add_mutable_aux_preds.m"
    {
#line 927 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_137_137 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TrailCode_45, hlds__make_hlds__add_mutable_aux_preds__UnsafeSetCode_47);
    }
#line 927 "add_mutable_aux_preds.m"
    {
#line 927 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_136_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 927 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_136_136, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_137_137));
#line 927 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_136_136, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_128_128));
#line 927 "add_mutable_aux_preds.m"
    }
#line 921 "add_mutable_aux_preds.m"
    {
#line 921 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 921 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_53, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeSetAttrs_43));
#line 921 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_53, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeSetPredName_51));
#line 921 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_53, 2) = ((MR_Box) ((MR_Integer) 0));
#line 921 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_53, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_130_130));
#line 921 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_53, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_40));
#line 921 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_53, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_135_135));
#line 921 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_53, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_136_136));
#line 921 "add_mutable_aux_preds.m"
    }
#line 929 "add_mutable_aux_preds.m"
    {
#line 929 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_52, hlds__make_hlds__add_mutable_aux_preds__PredStatus_18, hlds__make_hlds__add_mutable_aux_preds__Context_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_56, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_140_140, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_60, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_141_141);
    }
#line 931 "add_mutable_aux_preds.m"
    {
#line 931 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_53, hlds__make_hlds__add_mutable_aux_preds__PredStatus_18, hlds__make_hlds__add_mutable_aux_preds__Context_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_140_140, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_57, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_141_141, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_61);
    }
#line 935 "add_mutable_aux_preds.m"
    {
#line 935 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 935 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_146_146, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_39));
#line 935 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_146_146, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_29));
#line 935 "add_mutable_aux_preds.m"
    }
#line 935 "add_mutable_aux_preds.m"
    {
#line 935 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_145_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 935 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_145_145, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_146_146));
#line 935 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_145_145, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 935 "add_mutable_aux_preds.m"
    }
#line 934 "add_mutable_aux_preds.m"
    {
#line 934 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr0_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 934 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr0_54, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_29));
#line 934 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr0_54, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeGetPredName_50));
#line 934 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr0_54, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_145_145));
#line 934 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr0_54, 3) = ((MR_Box) ((MR_Integer) 1));
#line 934 "add_mutable_aux_preds.m"
    }
#line 936 "add_mutable_aux_preds.m"
    {
#line 936 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr0_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 936 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr0_55, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_29));
#line 936 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr0_55, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeSetPredName_51));
#line 936 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr0_55, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_145_145));
#line 936 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr0_55, 3) = ((MR_Box) ((MR_Integer) 2));
#line 936 "add_mutable_aux_preds.m"
    }
#line 938 "add_mutable_aux_preds.m"
    {
#line 938 "add_mutable_aux_preds.m"
      MR_Tuple base;
#line 938 "add_mutable_aux_preds.m"
      base = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 938 "add_mutable_aux_preds.m"
      *hlds__make_hlds__add_mutable_aux_preds__UnsafeGetSetExprs_17 = base;
#line 938 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr0_54));
#line 938 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr0_55));
#line 938 "add_mutable_aux_preds.m"
    }
#line 826 "add_mutable_aux_preds.m"
    *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_59 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_58;
#line 826 "add_mutable_aux_preds.m"
  }
#line 818 "add_mutable_aux_preds.m"
}

#line 747 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_lock_unlock_preds_12_p_0_1(
#line 747 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 747 "add_mutable_aux_preds.m"
{
#line 747 "add_mutable_aux_preds.m"
  {
#line 747 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 747 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 747 "add_mutable_aux_preds.m"
    {
#line 747 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_lock_unlock_preds__747__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 747 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 747 "add_mutable_aux_preds.m"
  }
#line 747 "add_mutable_aux_preds.m"
}

#line 732 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_lock_unlock_preds_12_p_0(
#line 732 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13,
#line 732 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_14,
#line 732 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15,
#line 732 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_16,
#line 732 "add_mutable_aux_preds.m"
  MR_Tuple * hlds__make_hlds__add_mutable_aux_preds__LockUnlockExprs_17,
#line 732 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_18,
#line 732 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_49,
#line 732 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_50,
#line 732 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_51,
#line 732 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_52,
#line 732 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_53,
#line 732 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_54)
#line 732 "add_mutable_aux_preds.m"
{
#line 739 "add_mutable_aux_preds.m"
  {
#line 739 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 739 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_22;
#line 739 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_23;
#line 739 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27;
#line 739 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_29;
#line 739 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_31;
#line 739 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32;
#line 739 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ImplLang_33;
#line 739 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_55_55;
#line 741 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Type_24;
#line 741 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___InitTerm_25;
#line 741 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Inst_26;
#line 741 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___VarSetMutable_28;
#line 741 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_30;
#line 745 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Lang_34;
#line 745 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_35;
#line 745 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___PreInit_36;
#line 745 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___LockUnlock_37;
#line 745 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_38;

#line 740 "add_mutable_aux_preds.m"
    {
#line 740 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_49, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_22);
    }
#line 741 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutableName_23 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 0)));
#line 741 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Type_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 1)));
#line 741 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___InitTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 2)));
#line 741 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Inst_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 3)));
#line 741 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 4)));
#line 741 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___VarSetMutable_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 5)));
#line 741 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Context_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 6)));
#line 741 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___SeqNum_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 7)));
#line 743 "add_mutable_aux_preds.m"
    {
#line 743 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsConstant_31 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27);
    }
#line 744 "add_mutable_aux_preds.m"
    {
#line 744 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27);
    }
#line 745 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__ImplLang_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 745 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Lang_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
#line 745 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 745 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___PreInit_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 745 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___LockUnlock_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 745 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 747 "add_mutable_aux_preds.m"
    {
#line 747 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 747 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[12]));
#line 747 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__define_lock_unlock_preds_12_p_0_1));
#line 747 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 747 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__IsConstant_31));
#line 747 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 4) = ((MR_Box) ((MR_Integer) 0));
#line 747 "add_mutable_aux_preds.m"
    }
#line 747 "add_mutable_aux_preds.m"
    {
#line 747 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_55_55, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_lock_unlock_preds\'/12", (MR_String) "need_lock_unlock_preds, but IsConstant = mutable_constant");
    }
#line 805 "add_mutable_aux_preds.m"
#line 805 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__ImplLang_33) {
#line 805 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 805 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 751 "add_mutable_aux_preds.m"
        {
#line 751 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_119_119;
#line 751 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_120_120;
#line 751 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__LockAndUnlockAttrs_39;
#line 751 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__MutableMutexVarName_40;
#line 751 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__LockForeignProcBody_41;
#line 751 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__UnlockForeignProcBody_42;
#line 751 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__LockPredName_43;
#line 751 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__UnlockPredName_44;
#line 751 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_45;
#line 751 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_46;
#line 751 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__CallLockExpr0_47;
#line 751 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr0_48;
#line 751 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_98_98;
#line 751 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_99_99;
#line 751 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_100_100;
#line 751 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_101_101;
#line 751 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_104_104;
#line 751 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_105_105;
#line 751 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_106_106;
#line 751 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_109_109;
#line 751 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_110_110;

#line 752 "add_mutable_aux_preds.m"
          {
#line 752 "add_mutable_aux_preds.m"
            parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__Attrs_16, &hlds__make_hlds__add_mutable_aux_preds__LockAndUnlockAttrs_39);
          }
#line 753 "add_mutable_aux_preds.m"
          {
#line 753 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__MutableMutexVarName_40 = parse_tree__prog_mutable__mutable_mutex_var_name_1_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15);
          }
#line 771 "add_mutable_aux_preds.m"
#line 771 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32) {
#line 771 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 771 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 756 "add_mutable_aux_preds.m"
              {
#line 756 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_70_70;
#line 756 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_72_72;
#line 756 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_73_73;
#line 756 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_75_75;
#line 756 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_76_76;
#line 756 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_78_78;
#line 756 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_83_83;
#line 756 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_85_85;
#line 756 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_86_86;
#line 756 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_88_88;
#line 756 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_89_89;
#line 756 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_91_91;

#line 762 "add_mutable_aux_preds.m"
                {
#line 762 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_78_78 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__MutableMutexVarName_40, (MR_String) "\");\n#endif\n");
                }
#line 762 "add_mutable_aux_preds.m"
                {
#line 762 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_76_76 = mercury__string__f_43_43_2_f_0((MR_String) ",\n                    \"", hlds__make_hlds__add_mutable_aux_preds__V_78_78);
                }
#line 761 "add_mutable_aux_preds.m"
                {
#line 761 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_75_75 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__MutableMutexVarName_40, hlds__make_hlds__add_mutable_aux_preds__V_76_76);
                }
#line 761 "add_mutable_aux_preds.m"
                {
#line 761 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_73_73 = mercury__string__f_43_43_2_f_0((MR_String) "  MR_LOCK(&", hlds__make_hlds__add_mutable_aux_preds__V_75_75);
                }
#line 764 "add_mutable_aux_preds.m"
                {
#line 764 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 764 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_72_72, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_73_73));
#line 764 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 764 "add_mutable_aux_preds.m"
                }
#line 760 "add_mutable_aux_preds.m"
                {
#line 760 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 760 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_70_70, 0) = ((MR_Box) ((MR_String) "#ifdef MR_THREAD_SAFE\n"));
#line 760 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_70_70, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_72_72));
#line 760 "add_mutable_aux_preds.m"
                }
#line 759 "add_mutable_aux_preds.m"
                {
#line 759 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__LockForeignProcBody_41 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_70_70);
                }
#line 768 "add_mutable_aux_preds.m"
                {
#line 768 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_91_91 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__MutableMutexVarName_40, (MR_String) "\");\n#endif\n");
                }
#line 768 "add_mutable_aux_preds.m"
                {
#line 768 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_89_89 = mercury__string__f_43_43_2_f_0((MR_String) ",\n                    \"", hlds__make_hlds__add_mutable_aux_preds__V_91_91);
                }
#line 767 "add_mutable_aux_preds.m"
                {
#line 767 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_88_88 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__MutableMutexVarName_40, hlds__make_hlds__add_mutable_aux_preds__V_89_89);
                }
#line 767 "add_mutable_aux_preds.m"
                {
#line 767 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_86_86 = mercury__string__f_43_43_2_f_0((MR_String) "  MR_UNLOCK(&", hlds__make_hlds__add_mutable_aux_preds__V_88_88);
                }
#line 770 "add_mutable_aux_preds.m"
                {
#line 770 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 770 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_85_85, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_86_86));
#line 770 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 770 "add_mutable_aux_preds.m"
                }
#line 766 "add_mutable_aux_preds.m"
                {
#line 766 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 766 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_83_83, 0) = ((MR_Box) ((MR_String) "#ifdef MR_THREAD_SAFE\n"));
#line 766 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_83_83, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_85_85));
#line 766 "add_mutable_aux_preds.m"
                }
#line 765 "add_mutable_aux_preds.m"
                {
#line 765 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnlockForeignProcBody_42 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_83_83);
                }
#line 756 "add_mutable_aux_preds.m"
              }
#line 771 "add_mutable_aux_preds.m"
              break;
#line 771 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 772 "add_mutable_aux_preds.m"
              {
#line 773 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__LockForeignProcBody_41 = (MR_String) "";
#line 774 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__UnlockForeignProcBody_42 = (MR_String) "";
#line 772 "add_mutable_aux_preds.m"
              }
#line 771 "add_mutable_aux_preds.m"
              break;
#line 771 "add_mutable_aux_preds.m"
          }
#line 776 "add_mutable_aux_preds.m"
          {
#line 776 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__LockPredName_43 = parse_tree__prog_mutable__mutable_lock_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_22, hlds__make_hlds__add_mutable_aux_preds__MutableName_23);
          }
#line 778 "add_mutable_aux_preds.m"
          {
#line 778 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__UnlockPredName_44 = parse_tree__prog_mutable__mutable_unlock_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_22, hlds__make_hlds__add_mutable_aux_preds__MutableName_23);
          }
#line 6488 "hlds.make_hlds.add_mutable_aux_preds.c"
          hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_119_119 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 784 "add_mutable_aux_preds.m"
          {
#line 784 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_98_98 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_119_119);
          }
#line 6495 "hlds.make_hlds.add_mutable_aux_preds.c"
          hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_120_120 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
#line 785 "add_mutable_aux_preds.m"
          {
#line 785 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_99_99 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_120_120);
          }
#line 786 "add_mutable_aux_preds.m"
          {
#line 786 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 786 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_101_101, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_29));
#line 786 "add_mutable_aux_preds.m"
          }
#line 786 "add_mutable_aux_preds.m"
          {
#line 786 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 786 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_100_100, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockForeignProcBody_41));
#line 786 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_100_100, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_101_101));
#line 786 "add_mutable_aux_preds.m"
          }
#line 780 "add_mutable_aux_preds.m"
          {
#line 780 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 780 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_45, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockAndUnlockAttrs_39));
#line 780 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_45, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockPredName_43));
#line 780 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_45, 2) = ((MR_Box) ((MR_Integer) 0));
#line 780 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_45, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 780 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_45, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_98_98));
#line 780 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_45, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_99_99));
#line 780 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_45, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_100_100));
#line 780 "add_mutable_aux_preds.m"
          }
#line 792 "add_mutable_aux_preds.m"
          {
#line 792 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_104_104 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_119_119);
          }
#line 793 "add_mutable_aux_preds.m"
          {
#line 793 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_105_105 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_120_120);
          }
#line 794 "add_mutable_aux_preds.m"
          {
#line 794 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 794 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_106_106, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnlockForeignProcBody_42));
#line 794 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_106_106, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_101_101));
#line 794 "add_mutable_aux_preds.m"
          }
#line 788 "add_mutable_aux_preds.m"
          {
#line 788 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 788 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_46, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockAndUnlockAttrs_39));
#line 788 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_46, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnlockPredName_44));
#line 788 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_46, 2) = ((MR_Box) ((MR_Integer) 0));
#line 788 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_46, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 788 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_46, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_104_104));
#line 788 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_46, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_105_105));
#line 788 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_46, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_106_106));
#line 788 "add_mutable_aux_preds.m"
          }
#line 796 "add_mutable_aux_preds.m"
          {
#line 796 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_45, hlds__make_hlds__add_mutable_aux_preds__PredStatus_18, hlds__make_hlds__add_mutable_aux_preds__Context_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_49, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_109_109, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_53, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_110_110);
          }
#line 798 "add_mutable_aux_preds.m"
          {
#line 798 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_46, hlds__make_hlds__add_mutable_aux_preds__PredStatus_18, hlds__make_hlds__add_mutable_aux_preds__Context_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_109_109, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_50, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_110_110, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_54);
          }
#line 801 "add_mutable_aux_preds.m"
          {
#line 801 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__CallLockExpr0_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 801 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallLockExpr0_47, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_29));
#line 801 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallLockExpr0_47, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockPredName_43));
#line 801 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallLockExpr0_47, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 801 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallLockExpr0_47, 3) = ((MR_Box) ((MR_Integer) 2));
#line 801 "add_mutable_aux_preds.m"
          }
#line 803 "add_mutable_aux_preds.m"
          {
#line 803 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr0_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 803 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr0_48, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_29));
#line 803 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr0_48, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnlockPredName_44));
#line 803 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr0_48, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 803 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr0_48, 3) = ((MR_Box) ((MR_Integer) 2));
#line 803 "add_mutable_aux_preds.m"
          }
#line 804 "add_mutable_aux_preds.m"
          {
#line 804 "add_mutable_aux_preds.m"
            MR_Tuple base;
#line 804 "add_mutable_aux_preds.m"
            base = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 804 "add_mutable_aux_preds.m"
            *hlds__make_hlds__add_mutable_aux_preds__LockUnlockExprs_17 = base;
#line 804 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallLockExpr0_47));
#line 804 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr0_48));
#line 804 "add_mutable_aux_preds.m"
          }
#line 751 "add_mutable_aux_preds.m"
        }
#line 805 "add_mutable_aux_preds.m"
        break;
#line 805 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 806 "add_mutable_aux_preds.m"
        {
#line 807 "add_mutable_aux_preds.m"
          {
#line 807 "add_mutable_aux_preds.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_lock_unlock_preds\'/12", (MR_String) "lock_unlock for csharp");
#line 807 "add_mutable_aux_preds.m"
            return;
          }
#line 806 "add_mutable_aux_preds.m"
        }
#line 805 "add_mutable_aux_preds.m"
        break;
#line 805 "add_mutable_aux_preds.m"
      case (MR_Integer) 3:
#line 812 "add_mutable_aux_preds.m"
        {
#line 813 "add_mutable_aux_preds.m"
          {
#line 813 "add_mutable_aux_preds.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_lock_unlock_preds\'/12", (MR_String) "lock_unlock for erlang");
#line 813 "add_mutable_aux_preds.m"
            return;
          }
#line 812 "add_mutable_aux_preds.m"
        }
#line 805 "add_mutable_aux_preds.m"
        break;
#line 805 "add_mutable_aux_preds.m"
      case (MR_Integer) 2:
#line 809 "add_mutable_aux_preds.m"
        {
#line 810 "add_mutable_aux_preds.m"
          {
#line 810 "add_mutable_aux_preds.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_lock_unlock_preds\'/12", (MR_String) "lock_unlock for java");
#line 810 "add_mutable_aux_preds.m"
            return;
          }
#line 809 "add_mutable_aux_preds.m"
        }
#line 805 "add_mutable_aux_preds.m"
        break;
#line 805 "add_mutable_aux_preds.m"
    }
#line 739 "add_mutable_aux_preds.m"
    *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_52 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_51;
#line 739 "add_mutable_aux_preds.m"
  }
#line 732 "add_mutable_aux_preds.m"
}

#line 686 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_pre_init_pred_12_p_0_1(
#line 686 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 686 "add_mutable_aux_preds.m"
{
#line 686 "add_mutable_aux_preds.m"
  {
#line 686 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 686 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 686 "add_mutable_aux_preds.m"
    {
#line 686 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_pre_init_pred__686__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 686 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 686 "add_mutable_aux_preds.m"
  }
#line 686 "add_mutable_aux_preds.m"
}

#line 670 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_pre_init_pred_12_p_0(
#line 670 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13,
#line 670 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_14,
#line 670 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15,
#line 670 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_16,
#line 670 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_17,
#line 670 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_18,
#line 670 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_42,
#line 670 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_43,
#line 670 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_44,
#line 670 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_45,
#line 670 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_46,
#line 670 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_47)
#line 670 "add_mutable_aux_preds.m"
{
#line 677 "add_mutable_aux_preds.m"
  {
#line 677 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 677 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_22;
#line 677 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_23;
#line 677 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27;
#line 677 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_29;
#line 677 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_31;
#line 677 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32;
#line 677 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ImplLang_33;
#line 677 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInitPredName_39;
#line 677 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__PreInitCode_40;
#line 677 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41;
#line 677 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_48_48;
#line 677 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_74_74;
#line 677 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_75_75;
#line 677 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_76_76;
#line 677 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_77_77;
#line 679 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Type_24;
#line 679 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___InitTerm_25;
#line 679 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Inst_26;
#line 679 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___VarSetMutable_28;
#line 679 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_30;
#line 683 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Lang_34;
#line 683 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_35;
#line 683 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___PreInit_36;
#line 683 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___LockUnlock_37;
#line 683 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_38;

#line 678 "add_mutable_aux_preds.m"
    {
#line 678 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_42, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_22);
    }
#line 679 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutableName_23 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 0)));
#line 679 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Type_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 1)));
#line 679 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___InitTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 2)));
#line 679 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Inst_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 3)));
#line 679 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 4)));
#line 679 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___VarSetMutable_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 5)));
#line 679 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Context_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 6)));
#line 679 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___SeqNum_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 7)));
#line 681 "add_mutable_aux_preds.m"
    {
#line 681 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsConstant_31 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27);
    }
#line 682 "add_mutable_aux_preds.m"
    {
#line 682 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27);
    }
#line 683 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__ImplLang_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 683 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Lang_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
#line 683 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 683 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___PreInit_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 683 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___LockUnlock_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 683 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 686 "add_mutable_aux_preds.m"
    {
#line 686 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 686 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_48_48, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[12]));
#line 686 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_48_48, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__define_pre_init_pred_12_p_0_1));
#line 686 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 686 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_48_48, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__IsConstant_31));
#line 686 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_48_48, 4) = ((MR_Box) ((MR_Integer) 0));
#line 686 "add_mutable_aux_preds.m"
    }
#line 686 "add_mutable_aux_preds.m"
    {
#line 686 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_48_48, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_pre_init_pred\'/12", (MR_String) "need_pre_init_pred, but IsConstant = mutable_constant");
    }
#line 688 "add_mutable_aux_preds.m"
    {
#line 688 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PreInitPredName_39 = parse_tree__prog_mutable__mutable_pre_init_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_22, hlds__make_hlds__add_mutable_aux_preds__MutableName_23);
    }
#line 706 "add_mutable_aux_preds.m"
#line 706 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__ImplLang_33) {
#line 706 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 706 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 701 "add_mutable_aux_preds.m"
#line 701 "add_mutable_aux_preds.m"
        switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32) {
#line 701 "add_mutable_aux_preds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 701 "add_mutable_aux_preds.m"
          case (MR_Integer) 0:
#line 693 "add_mutable_aux_preds.m"
            {
#line 693 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__V_61_61;
#line 693 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__V_63_63;
#line 693 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__V_65_65;
#line 693 "add_mutable_aux_preds.m"
              MR_String hlds__make_hlds__add_mutable_aux_preds__V_66_66;

#line 697 "add_mutable_aux_preds.m"
              {
#line 697 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_66_66 = parse_tree__prog_mutable__mutable_mutex_var_name_1_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15);
              }
#line 697 "add_mutable_aux_preds.m"
              {
#line 697 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_65_65, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_66_66));
#line 697 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[21])));
#line 697 "add_mutable_aux_preds.m"
              }
#line 696 "add_mutable_aux_preds.m"
              {
#line 696 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 696 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_63_63, 0) = ((MR_Box) ((MR_String) "   pthread_mutex_init(&"));
#line 696 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_63_63, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_65_65));
#line 696 "add_mutable_aux_preds.m"
              }
#line 695 "add_mutable_aux_preds.m"
              {
#line 695 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 695 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_61_61, 0) = ((MR_Box) ((MR_String) "#ifdef MR_THREAD_SAFE\n"));
#line 695 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_61_61, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_63_63));
#line 695 "add_mutable_aux_preds.m"
              }
#line 694 "add_mutable_aux_preds.m"
              {
#line 694 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__PreInitCode_40 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_61_61);
              }
#line 693 "add_mutable_aux_preds.m"
            }
#line 701 "add_mutable_aux_preds.m"
            break;
#line 701 "add_mutable_aux_preds.m"
          case (MR_Integer) 1:
#line 702 "add_mutable_aux_preds.m"
            {
#line 703 "add_mutable_aux_preds.m"
              {
#line 703 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__PreInitCode_40 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) " = MR_new_thread_local_mutable_index();\n");
              }
#line 702 "add_mutable_aux_preds.m"
            }
#line 701 "add_mutable_aux_preds.m"
            break;
#line 701 "add_mutable_aux_preds.m"
        }
#line 706 "add_mutable_aux_preds.m"
        break;
#line 706 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 707 "add_mutable_aux_preds.m"
        {
#line 708 "add_mutable_aux_preds.m"
          {
#line 708 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__PreInitCode_40 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) " = runtime.ThreadLocalMutables.new_index();\n");
          }
#line 707 "add_mutable_aux_preds.m"
        }
#line 706 "add_mutable_aux_preds.m"
        break;
#line 706 "add_mutable_aux_preds.m"
      case (MR_Integer) 3:
#line 714 "add_mutable_aux_preds.m"
        {
#line 715 "add_mutable_aux_preds.m"
          {
#line 715 "add_mutable_aux_preds.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_pre_init_pred\'/12", (MR_String) "preinit for erlang");
#line 715 "add_mutable_aux_preds.m"
            return;
          }
#line 714 "add_mutable_aux_preds.m"
        }
#line 706 "add_mutable_aux_preds.m"
        break;
#line 706 "add_mutable_aux_preds.m"
      case (MR_Integer) 2:
#line 711 "add_mutable_aux_preds.m"
        {
#line 712 "add_mutable_aux_preds.m"
          {
#line 712 "add_mutable_aux_preds.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_pre_init_pred\'/12", (MR_String) "preinit for java");
#line 712 "add_mutable_aux_preds.m"
            return;
          }
#line 711 "add_mutable_aux_preds.m"
        }
#line 706 "add_mutable_aux_preds.m"
        break;
#line 706 "add_mutable_aux_preds.m"
    }
#line 721 "add_mutable_aux_preds.m"
    {
#line 721 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_74_74 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 722 "add_mutable_aux_preds.m"
    {
#line 722 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_75_75 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
#line 723 "add_mutable_aux_preds.m"
    {
#line 723 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 723 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_77_77, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_29));
#line 723 "add_mutable_aux_preds.m"
    }
#line 723 "add_mutable_aux_preds.m"
    {
#line 723 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 723 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_76_76, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PreInitCode_40));
#line 723 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_76_76, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_77_77));
#line 723 "add_mutable_aux_preds.m"
    }
#line 717 "add_mutable_aux_preds.m"
    {
#line 717 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 717 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Attrs_16));
#line 717 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PreInitPredName_39));
#line 717 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41, 2) = ((MR_Box) ((MR_Integer) 0));
#line 717 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 717 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_74_74));
#line 717 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_75_75));
#line 717 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_76_76));
#line 717 "add_mutable_aux_preds.m"
    }
#line 725 "add_mutable_aux_preds.m"
    {
#line 725 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41, hlds__make_hlds__add_mutable_aux_preds__PredStatus_18, hlds__make_hlds__add_mutable_aux_preds__Context_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_42, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_43, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_46, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_47);
    }
#line 728 "add_mutable_aux_preds.m"
    {
#line 728 "add_mutable_aux_preds.m"
      MR_Word base;
#line 728 "add_mutable_aux_preds.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 728 "add_mutable_aux_preds.m"
      *hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_17 = base;
#line 728 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_29));
#line 728 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PreInitPredName_39));
#line 728 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 728 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) ((MR_Integer) 2));
#line 728 "add_mutable_aux_preds.m"
    }
#line 677 "add_mutable_aux_preds.m"
    *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_45 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_44;
#line 677 "add_mutable_aux_preds.m"
  }
#line 670 "add_mutable_aux_preds.m"
}

#line 586 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_aux_preds_10_p_0(
#line 586 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11,
#line 586 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_12,
#line 586 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_13,
#line 586 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_14,
#line 586 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34,
#line 586 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_35,
#line 586 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_36,
#line 586 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_37,
#line 586 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38,
#line 586 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39)
#line 586 "add_mutable_aux_preds.m"
{
#line 592 "add_mutable_aux_preds.m"
  {
#line 592 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 592 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ImplLang_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 592 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
#line 592 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 592 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInit_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 592 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__LockUnlock_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 592 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 592 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs0_24;
#line 592 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_26;
#line 592 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_27;
#line 592 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_29;
#line 592 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_31;
#line 592 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_33;
#line 592 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_43_43;
#line 592 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_44_44;
#line 592 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_45_45;
#line 592 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46;
#line 592 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_47_47;
#line 592 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_48_48;
#line 592 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_49_49;
#line 592 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_50_50;
#line 592 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51;
#line 592 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_52_52;
#line 592 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_53_53;
#line 592 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_54_54;

#line 598 "add_mutable_aux_preds.m"
    {
#line 598 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__Attrs0_24 = parse_tree__prog_data__default_attributes_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Lang_19);
    }
#line 603 "add_mutable_aux_preds.m"
#line 603 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__ImplLang_18) {
#line 603 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 603 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 600 "add_mutable_aux_preds.m"
        {
#line 600 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs1_25;

#line 601 "add_mutable_aux_preds.m"
          {
#line 601 "add_mutable_aux_preds.m"
            parse_tree__prog_data__set_box_policy_3_p_0(hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_20, hlds__make_hlds__add_mutable_aux_preds__Attrs0_24, &hlds__make_hlds__add_mutable_aux_preds__Attrs1_25);
          }
#line 602 "add_mutable_aux_preds.m"
          {
#line 602 "add_mutable_aux_preds.m"
            parse_tree__prog_data__set_may_call_mercury_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__Attrs1_25, &hlds__make_hlds__add_mutable_aux_preds__Attrs_26);
          }
#line 600 "add_mutable_aux_preds.m"
        }
#line 603 "add_mutable_aux_preds.m"
        break;
#line 603 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 603 "add_mutable_aux_preds.m"
      case (MR_Integer) 2:
#line 606 "add_mutable_aux_preds.m"
        {
#line 611 "add_mutable_aux_preds.m"
          {
#line 611 "add_mutable_aux_preds.m"
            parse_tree__prog_data__set_may_duplicate_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_4[2]), hlds__make_hlds__add_mutable_aux_preds__Attrs0_24, &hlds__make_hlds__add_mutable_aux_preds__Attrs_26);
          }
#line 606 "add_mutable_aux_preds.m"
        }
#line 603 "add_mutable_aux_preds.m"
        break;
#line 603 "add_mutable_aux_preds.m"
      case (MR_Integer) 3:
#line 614 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__Attrs_26 = hlds__make_hlds__add_mutable_aux_preds__Attrs0_24;
#line 603 "add_mutable_aux_preds.m"
        break;
#line 603 "add_mutable_aux_preds.m"
    }
#line 627 "add_mutable_aux_preds.m"
#line 627 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__PreInit_21) {
#line 627 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 627 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 625 "add_mutable_aux_preds.m"
        {
#line 626 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 625 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_43_43 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34;
#line 625 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_44_44 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_36;
#line 625 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_45_45 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38;
#line 625 "add_mutable_aux_preds.m"
        }
#line 627 "add_mutable_aux_preds.m"
        break;
#line 627 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 628 "add_mutable_aux_preds.m"
        {
#line 628 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_28;

#line 629 "add_mutable_aux_preds.m"
          {
#line 629 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__define_pre_init_pred_12_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11, hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_13, hlds__make_hlds__add_mutable_aux_preds__Attrs_26, &hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_28, hlds__make_hlds__add_mutable_aux_preds__PredStatus_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_43_43, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_36, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_44_44, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_45_45);
          }
#line 632 "add_mutable_aux_preds.m"
          {
#line 632 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 632 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_27, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_28));
#line 632 "add_mutable_aux_preds.m"
          }
#line 628 "add_mutable_aux_preds.m"
        }
#line 627 "add_mutable_aux_preds.m"
        break;
#line 627 "add_mutable_aux_preds.m"
    }
#line 637 "add_mutable_aux_preds.m"
#line 637 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__LockUnlock_22) {
#line 637 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 637 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 635 "add_mutable_aux_preds.m"
        {
#line 636 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 635 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_43_43;
#line 635 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_47_47 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_44_44;
#line 635 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_48_48 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_45_45;
#line 635 "add_mutable_aux_preds.m"
        }
#line 637 "add_mutable_aux_preds.m"
        break;
#line 637 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 638 "add_mutable_aux_preds.m"
        {
#line 638 "add_mutable_aux_preds.m"
          MR_Tuple hlds__make_hlds__add_mutable_aux_preds__LockUnlockExprs_30;

#line 639 "add_mutable_aux_preds.m"
          {
#line 639 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__define_lock_unlock_preds_12_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11, hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_13, hlds__make_hlds__add_mutable_aux_preds__Attrs_26, &hlds__make_hlds__add_mutable_aux_preds__LockUnlockExprs_30, hlds__make_hlds__add_mutable_aux_preds__PredStatus_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_43_43, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_44_44, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_47_47, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_45_45, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_48_48);
          }
#line 642 "add_mutable_aux_preds.m"
          {
#line 642 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 642 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_29, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockUnlockExprs_30));
#line 642 "add_mutable_aux_preds.m"
          }
#line 638 "add_mutable_aux_preds.m"
        }
#line 637 "add_mutable_aux_preds.m"
        break;
#line 637 "add_mutable_aux_preds.m"
    }
#line 647 "add_mutable_aux_preds.m"
#line 647 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_23) {
#line 647 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 647 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 645 "add_mutable_aux_preds.m"
        {
#line 646 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 645 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_49_49 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46;
#line 645 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_50_50 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_47_47;
#line 645 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_48_48;
#line 645 "add_mutable_aux_preds.m"
        }
#line 647 "add_mutable_aux_preds.m"
        break;
#line 647 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 648 "add_mutable_aux_preds.m"
        {
#line 648 "add_mutable_aux_preds.m"
          MR_Tuple hlds__make_hlds__add_mutable_aux_preds__UnsafeGetSetExprs_32;

#line 649 "add_mutable_aux_preds.m"
          {
#line 649 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__define_unsafe_get_set_preds_12_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11, hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_13, hlds__make_hlds__add_mutable_aux_preds__Attrs_26, &hlds__make_hlds__add_mutable_aux_preds__UnsafeGetSetExprs_32, hlds__make_hlds__add_mutable_aux_preds__PredStatus_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_49_49, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_47_47, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_50_50, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_48_48, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51);
          }
#line 652 "add_mutable_aux_preds.m"
          {
#line 652 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 652 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_31, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeGetSetExprs_32));
#line 652 "add_mutable_aux_preds.m"
          }
#line 648 "add_mutable_aux_preds.m"
        }
#line 647 "add_mutable_aux_preds.m"
        break;
#line 647 "add_mutable_aux_preds.m"
    }
#line 658 "add_mutable_aux_preds.m"
    {
#line 658 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__define_main_get_set_preds_14_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11, hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_13, hlds__make_hlds__add_mutable_aux_preds__Attrs_26, hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_29, hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_31, &hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_33, hlds__make_hlds__add_mutable_aux_preds__PredStatus_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_49_49, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_52_52, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_50_50, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_53_53, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_54_54);
    }
#line 665 "add_mutable_aux_preds.m"
    {
#line 665 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__define_init_pred_11_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11, hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_27, hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_33, hlds__make_hlds__add_mutable_aux_preds__Lang_19, hlds__make_hlds__add_mutable_aux_preds__PredStatus_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_52_52, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_35, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_53_53, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_37, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_54_54, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39);
#line 665 "add_mutable_aux_preds.m"
      return;
    }
#line 592 "add_mutable_aux_preds.m"
  }
#line 586 "add_mutable_aux_preds.m"
}

#line 550 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_global_var_java_6_p_0(
#line 550 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_7,
#line 550 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_8,
#line 550 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_9,
#line 550 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_10,
#line 550 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_15,
#line 550 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_16)
#line 550 "add_mutable_aux_preds.m"
{
#line 555 "add_mutable_aux_preds.m"
  {
#line 555 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 555 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__DefnBody_13;
#line 555 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_14;
#line 555 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_36_36;

#line 567 "add_mutable_aux_preds.m"
#line 567 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_9) {
#line 567 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 567 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 557 "add_mutable_aux_preds.m"
        {
#line 557 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__TypeStr_12;
#line 557 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__V_30_30;
#line 557 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__V_31_31;
#line 557 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__V_33_33;
#line 561 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_39_39;

#line 561 "add_mutable_aux_preds.m"
          {
#line 561 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_39_39 = parse_tree__builtin_lib_types__int_type_0_f_0();
          }
#line 561 "add_mutable_aux_preds.m"
          {
#line 561 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__make_hlds__add_mutable_aux_preds__Type_8, hlds__make_hlds__add_mutable_aux_preds__V_39_39);
          }
#line 563 "add_mutable_aux_preds.m"
          if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 562 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__TypeStr_12 = (MR_String) "int";
#line 563 "add_mutable_aux_preds.m"
          else
#line 564 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__TypeStr_12 = (MR_String) "java.lang.Object";
#line 566 "add_mutable_aux_preds.m"
          {
#line 566 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_33_33 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_7, (MR_String) ";\n");
          }
#line 566 "add_mutable_aux_preds.m"
          {
#line 566 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_31_31 = mercury__string__f_43_43_2_f_0((MR_String) " ", hlds__make_hlds__add_mutable_aux_preds__V_33_33);
          }
#line 566 "add_mutable_aux_preds.m"
          {
#line 566 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_30_30 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeStr_12, hlds__make_hlds__add_mutable_aux_preds__V_31_31);
          }
#line 566 "add_mutable_aux_preds.m"
          {
#line 566 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__DefnBody_13 = mercury__string__f_43_43_2_f_0((MR_String) "static ", hlds__make_hlds__add_mutable_aux_preds__V_30_30);
          }
#line 557 "add_mutable_aux_preds.m"
        }
#line 567 "add_mutable_aux_preds.m"
        break;
#line 567 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 568 "add_mutable_aux_preds.m"
        {
#line 568 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_17_17;
#line 568 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_19_19;
#line 568 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_20_20;
#line 568 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_22_22;
#line 568 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_23_23;
#line 568 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_25_25;
#line 568 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__TypeStr_38;
#line 569 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_40_40;

#line 569 "add_mutable_aux_preds.m"
          {
#line 569 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_40_40 = parse_tree__builtin_lib_types__int_type_0_f_0();
          }
#line 569 "add_mutable_aux_preds.m"
          {
#line 569 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__make_hlds__add_mutable_aux_preds__Type_8, hlds__make_hlds__add_mutable_aux_preds__V_40_40);
          }
#line 571 "add_mutable_aux_preds.m"
          if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 570 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__TypeStr_38 = (MR_String) "java.lang.Integer";
#line 571 "add_mutable_aux_preds.m"
          else
#line 572 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__TypeStr_38 = (MR_String) "java.lang.Object";
#line 577 "add_mutable_aux_preds.m"
          {
#line 577 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 577 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_25_25, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TypeStr_38));
#line 577 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[33])));
#line 577 "add_mutable_aux_preds.m"
          }
#line 577 "add_mutable_aux_preds.m"
          {
#line 577 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 577 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_23_23, 0) = ((MR_Box) ((MR_String) " = new java.lang.InheritableThreadLocal<"));
#line 577 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_23_23, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_25_25));
#line 577 "add_mutable_aux_preds.m"
          }
#line 576 "add_mutable_aux_preds.m"
          {
#line 576 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 576 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_22_22, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_7));
#line 576 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_22_22, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_23_23));
#line 576 "add_mutable_aux_preds.m"
          }
#line 575 "add_mutable_aux_preds.m"
          {
#line 575 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 575 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_20_20, 0) = ((MR_Box) ((MR_String) "> "));
#line 575 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_20_20, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_22_22));
#line 575 "add_mutable_aux_preds.m"
          }
#line 575 "add_mutable_aux_preds.m"
          {
#line 575 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 575 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_19_19, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TypeStr_38));
#line 575 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_19_19, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_20_20));
#line 575 "add_mutable_aux_preds.m"
          }
#line 575 "add_mutable_aux_preds.m"
          {
#line 575 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 575 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_17_17, 0) = ((MR_Box) ((MR_String) "static java.lang.ThreadLocal<"));
#line 575 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_17_17, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_19_19));
#line 575 "add_mutable_aux_preds.m"
          }
#line 574 "add_mutable_aux_preds.m"
          {
#line 574 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__DefnBody_13 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_17_17);
          }
#line 568 "add_mutable_aux_preds.m"
        }
#line 567 "add_mutable_aux_preds.m"
        break;
#line 567 "add_mutable_aux_preds.m"
    }
#line 581 "add_mutable_aux_preds.m"
    {
#line 581 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 581 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_36_36, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__DefnBody_13));
#line 581 "add_mutable_aux_preds.m"
    }
#line 581 "add_mutable_aux_preds.m"
    {
#line 581 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 581 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_14, 0) = ((MR_Box) ((MR_Integer) 2));
#line 581 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_14, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_36_36));
#line 581 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_14, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_10));
#line 581 "add_mutable_aux_preds.m"
    }
#line 582 "add_mutable_aux_preds.m"
    {
#line 582 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_add_foreign_body_code_3_p_0(hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_15, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_16);
#line 582 "add_mutable_aux_preds.m"
      return;
    }
#line 555 "add_mutable_aux_preds.m"
  }
#line 550 "add_mutable_aux_preds.m"
}

#line 449 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_global_var_c_7_p_0(
#line 449 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_8,
#line 449 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_9,
#line 449 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_10,
#line 449 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_11,
#line 449 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_12,
#line 449 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_26,
#line 449 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_27)
#line 449 "add_mutable_aux_preds.m"
{
#line 454 "add_mutable_aux_preds.m"
  {
#line 454 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 454 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__HighLevelTypeName_14;
#line 454 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__LowLevelTypeName_15;
#line 454 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__TypeName_18;
#line 454 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__LockDeclStrs_19;
#line 454 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__LockDefnStrs_20;
#line 454 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__DeclBody_22;
#line 454 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignDeclCode_23;
#line 454 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__DefnBody_24;
#line 454 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignBodyCode_25;
#line 454 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_51_51;
#line 454 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_53_53;
#line 454 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_55_55;
#line 454 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_56_56;
#line 454 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_58_58;
#line 454 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_59_59;
#line 454 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_61_61;
#line 454 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_63_63;
#line 454 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_65_65;
#line 454 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_66_66;
#line 454 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_68_68;
#line 454 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_69_69;
#line 454 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_71_71;
#line 454 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_75_75;
#line 454 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_76_76;
#line 454 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_77_77;
#line 454 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_78_78;
#line 454 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_80_80;
#line 454 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_81_81;
#line 454 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_84_84;

#line 477 "add_mutable_aux_preds.m"
#line 477 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_11) {
#line 477 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 477 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 460 "add_mutable_aux_preds.m"
        {
#line 460 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__Globals_16;
#line 460 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__HighLevelCode_17;

#line 1324 "add_mutable_aux_preds.m"
          {
#line 1324 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__HighLevelTypeName_14 = backend_libs__foreign__mercury_exported_type_to_string_3_f_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_26, (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__Type_9);
          }
#line 1322 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LowLevelTypeName_15 = (MR_String) "MR_Word";
#line 468 "add_mutable_aux_preds.m"
          {
#line 468 "add_mutable_aux_preds.m"
            hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_26, &hlds__make_hlds__add_mutable_aux_preds__Globals_16);
          }
#line 469 "add_mutable_aux_preds.m"
          {
#line 469 "add_mutable_aux_preds.m"
            libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_16, (MR_Integer) 251, &hlds__make_hlds__add_mutable_aux_preds__HighLevelCode_17);
          }
#line 473 "add_mutable_aux_preds.m"
#line 473 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__HighLevelCode_17) {
#line 473 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 473 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 472 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__TypeName_18 = hlds__make_hlds__add_mutable_aux_preds__LowLevelTypeName_15;
#line 473 "add_mutable_aux_preds.m"
              break;
#line 473 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 475 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__TypeName_18 = hlds__make_hlds__add_mutable_aux_preds__HighLevelTypeName_14;
#line 473 "add_mutable_aux_preds.m"
              break;
#line 473 "add_mutable_aux_preds.m"
          }
#line 460 "add_mutable_aux_preds.m"
        }
#line 477 "add_mutable_aux_preds.m"
        break;
#line 477 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 478 "add_mutable_aux_preds.m"
        {
#line 481 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__TypeName_18 = (MR_String) "MR_Unsigned";
#line 482 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__HighLevelTypeName_14 = hlds__make_hlds__add_mutable_aux_preds__TypeName_18;
#line 483 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LowLevelTypeName_15 = hlds__make_hlds__add_mutable_aux_preds__TypeName_18;
#line 478 "add_mutable_aux_preds.m"
        }
#line 477 "add_mutable_aux_preds.m"
        break;
#line 477 "add_mutable_aux_preds.m"
    }
#line 489 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__IsConstant_10 == (MR_Integer) 1);
#line 490 "add_mutable_aux_preds.m"
    if (!(hlds__make_hlds__add_mutable_aux_preds__succeeded))
#line 490 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_11 == (MR_Integer) 1);
#line 495 "add_mutable_aux_preds.m"
    if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 493 "add_mutable_aux_preds.m"
      {
#line 493 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__LockDeclStrs_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 494 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__LockDefnStrs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 493 "add_mutable_aux_preds.m"
      }
#line 495 "add_mutable_aux_preds.m"
    else
#line 496 "add_mutable_aux_preds.m"
      {
#line 496 "add_mutable_aux_preds.m"
        MR_String hlds__make_hlds__add_mutable_aux_preds__MutexVarName_21;
#line 496 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_34_34;
#line 496 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_36_36;
#line 496 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_43_43;

#line 496 "add_mutable_aux_preds.m"
        {
#line 496 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__MutexVarName_21 = parse_tree__prog_mutable__mutable_mutex_var_name_1_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_8);
        }
#line 499 "add_mutable_aux_preds.m"
        {
#line 499 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 499 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_36_36, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__MutexVarName_21));
#line 499 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[20])));
#line 499 "add_mutable_aux_preds.m"
        }
#line 499 "add_mutable_aux_preds.m"
        {
#line 499 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 499 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_34_34, 0) = ((MR_Box) ((MR_String) "    extern MercuryLock "));
#line 499 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_34_34, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_36_36));
#line 499 "add_mutable_aux_preds.m"
        }
#line 498 "add_mutable_aux_preds.m"
        {
#line 498 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LockDeclStrs_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 498 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__LockDeclStrs_19, 0) = ((MR_Box) ((MR_String) "#ifdef MR_THREAD_SAFE\n"));
#line 498 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__LockDeclStrs_19, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_34_34));
#line 498 "add_mutable_aux_preds.m"
        }
#line 504 "add_mutable_aux_preds.m"
        {
#line 504 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 504 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_43_43, 0) = ((MR_Box) ((MR_String) "    MercuryLock "));
#line 504 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_43_43, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_36_36));
#line 504 "add_mutable_aux_preds.m"
        }
#line 503 "add_mutable_aux_preds.m"
        {
#line 503 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LockDefnStrs_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__LockDefnStrs_20, 0) = ((MR_Box) ((MR_String) "#ifdef MR_THREAD_SAFE\n"));
#line 503 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__LockDefnStrs_20, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_43_43));
#line 503 "add_mutable_aux_preds.m"
        }
#line 496 "add_mutable_aux_preds.m"
      }
#line 514 "add_mutable_aux_preds.m"
    {
#line 514 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 514 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_71_71, 0) = ((MR_Box) ((MR_String) "#endif\n"));
#line 514 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_71_71, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockDeclStrs_19));
#line 514 "add_mutable_aux_preds.m"
    }
#line 513 "add_mutable_aux_preds.m"
    {
#line 513 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 513 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_69_69, 0) = ((MR_Box) ((MR_String) ";\n"));
#line 513 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_69_69, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_71_71));
#line 513 "add_mutable_aux_preds.m"
    }
#line 513 "add_mutable_aux_preds.m"
    {
#line 513 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 513 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_68_68, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_8));
#line 513 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_68_68, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_69_69));
#line 513 "add_mutable_aux_preds.m"
    }
#line 513 "add_mutable_aux_preds.m"
    {
#line 513 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 513 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_66_66, 0) = ((MR_Box) ((MR_String) " "));
#line 513 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_66_66, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_68_68));
#line 513 "add_mutable_aux_preds.m"
    }
#line 513 "add_mutable_aux_preds.m"
    {
#line 513 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 513 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_65_65, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LowLevelTypeName_15));
#line 513 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_65_65, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_66_66));
#line 513 "add_mutable_aux_preds.m"
    }
#line 513 "add_mutable_aux_preds.m"
    {
#line 513 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 513 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_63_63, 0) = ((MR_Box) ((MR_String) "    extern "));
#line 513 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_63_63, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_65_65));
#line 513 "add_mutable_aux_preds.m"
    }
#line 512 "add_mutable_aux_preds.m"
    {
#line 512 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 512 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_61_61, 0) = ((MR_Box) ((MR_String) "#else\n"));
#line 512 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_61_61, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_63_63));
#line 512 "add_mutable_aux_preds.m"
    }
#line 511 "add_mutable_aux_preds.m"
    {
#line 511 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 511 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_59_59, 0) = ((MR_Box) ((MR_String) ";\n"));
#line 511 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_59_59, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_61_61));
#line 511 "add_mutable_aux_preds.m"
    }
#line 511 "add_mutable_aux_preds.m"
    {
#line 511 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 511 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_58_58, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_8));
#line 511 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_58_58, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_59_59));
#line 511 "add_mutable_aux_preds.m"
    }
#line 511 "add_mutable_aux_preds.m"
    {
#line 511 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 511 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_56_56, 0) = ((MR_Box) ((MR_String) " "));
#line 511 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_56_56, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_58_58));
#line 511 "add_mutable_aux_preds.m"
    }
#line 511 "add_mutable_aux_preds.m"
    {
#line 511 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 511 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__HighLevelTypeName_14));
#line 511 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_56_56));
#line 511 "add_mutable_aux_preds.m"
    }
#line 511 "add_mutable_aux_preds.m"
    {
#line 511 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 511 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_53_53, 0) = ((MR_Box) ((MR_String) "    extern "));
#line 511 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_53_53, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_55_55));
#line 511 "add_mutable_aux_preds.m"
    }
#line 510 "add_mutable_aux_preds.m"
    {
#line 510 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 510 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_51_51, 0) = ((MR_Box) ((MR_String) "#ifdef MR_HIGHLEVEL_CODE\n"));
#line 510 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_51_51, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_53_53));
#line 510 "add_mutable_aux_preds.m"
    }
#line 509 "add_mutable_aux_preds.m"
    {
#line 509 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__DeclBody_22 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_51_51);
    }
#line 516 "add_mutable_aux_preds.m"
    {
#line 516 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 516 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_75_75, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__DeclBody_22));
#line 516 "add_mutable_aux_preds.m"
    }
#line 515 "add_mutable_aux_preds.m"
    {
#line 515 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__ForeignDeclCode_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 515 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignDeclCode_23, 0) = ((MR_Box) ((MR_Integer) 0));
#line 515 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignDeclCode_23, 1) = ((MR_Box) ((MR_Integer) 1));
#line 515 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignDeclCode_23, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_75_75));
#line 515 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignDeclCode_23, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_12));
#line 515 "add_mutable_aux_preds.m"
    }
#line 517 "add_mutable_aux_preds.m"
    {
#line 517 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_add_foreign_decl_code_3_p_0(hlds__make_hlds__add_mutable_aux_preds__ForeignDeclCode_23, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_26, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_76_76);
    }
#line 520 "add_mutable_aux_preds.m"
    {
#line 520 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 520 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_81_81, 0) = ((MR_Box) ((MR_String) ";\n"));
#line 520 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_81_81, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockDefnStrs_20));
#line 520 "add_mutable_aux_preds.m"
    }
#line 520 "add_mutable_aux_preds.m"
    {
#line 520 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 520 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_80_80, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_8));
#line 520 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_80_80, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_81_81));
#line 520 "add_mutable_aux_preds.m"
    }
#line 520 "add_mutable_aux_preds.m"
    {
#line 520 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 520 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_78_78, 0) = ((MR_Box) ((MR_String) " "));
#line 520 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_78_78, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_80_80));
#line 520 "add_mutable_aux_preds.m"
    }
#line 520 "add_mutable_aux_preds.m"
    {
#line 520 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 520 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_77_77, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TypeName_18));
#line 520 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_77_77, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_78_78));
#line 520 "add_mutable_aux_preds.m"
    }
#line 519 "add_mutable_aux_preds.m"
    {
#line 519 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__DefnBody_24 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_77_77);
    }
#line 521 "add_mutable_aux_preds.m"
    {
#line 521 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 521 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_84_84, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__DefnBody_24));
#line 521 "add_mutable_aux_preds.m"
    }
#line 521 "add_mutable_aux_preds.m"
    {
#line 521 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__ForeignBodyCode_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 521 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignBodyCode_25, 0) = ((MR_Box) ((MR_Integer) 0));
#line 521 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignBodyCode_25, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_84_84));
#line 521 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignBodyCode_25, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_12));
#line 521 "add_mutable_aux_preds.m"
    }
#line 522 "add_mutable_aux_preds.m"
    {
#line 522 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_add_foreign_body_code_3_p_0(hlds__make_hlds__add_mutable_aux_preds__ForeignBodyCode_25, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_76_76, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_27);
#line 522 "add_mutable_aux_preds.m"
      return;
    }
#line 454 "add_mutable_aux_preds.m"
  }
#line 449 "add_mutable_aux_preds.m"
}

#line 313 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_8(
#line 313 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 313 "add_mutable_aux_preds.m"
{
#line 313 "add_mutable_aux_preds.m"
  {
#line 313 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 313 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 313 "add_mutable_aux_preds.m"
    {
#line 313 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__313__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 313 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 313 "add_mutable_aux_preds.m"
  }
#line 313 "add_mutable_aux_preds.m"
}

#line 311 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_7(
#line 311 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 311 "add_mutable_aux_preds.m"
{
#line 311 "add_mutable_aux_preds.m"
  {
#line 311 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 311 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 311 "add_mutable_aux_preds.m"
    {
#line 311 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__311__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 311 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 311 "add_mutable_aux_preds.m"
  }
#line 311 "add_mutable_aux_preds.m"
}

#line 310 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_6(
#line 310 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 310 "add_mutable_aux_preds.m"
{
#line 310 "add_mutable_aux_preds.m"
  {
#line 310 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 310 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 310 "add_mutable_aux_preds.m"
    {
#line 310 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__310__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 310 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 310 "add_mutable_aux_preds.m"
  }
#line 310 "add_mutable_aux_preds.m"
}

#line 309 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_5(
#line 309 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 309 "add_mutable_aux_preds.m"
{
#line 309 "add_mutable_aux_preds.m"
  {
#line 309 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 309 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 309 "add_mutable_aux_preds.m"
    {
#line 309 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__309__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 309 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 309 "add_mutable_aux_preds.m"
  }
#line 309 "add_mutable_aux_preds.m"
}

#line 307 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_4(
#line 307 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 307 "add_mutable_aux_preds.m"
{
#line 307 "add_mutable_aux_preds.m"
  {
#line 307 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 307 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 307 "add_mutable_aux_preds.m"
    {
#line 307 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__307__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 307 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 307 "add_mutable_aux_preds.m"
  }
#line 307 "add_mutable_aux_preds.m"
}

#line 306 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_3(
#line 306 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 306 "add_mutable_aux_preds.m"
{
#line 306 "add_mutable_aux_preds.m"
  {
#line 306 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 306 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 306 "add_mutable_aux_preds.m"
    {
#line 306 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__306__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 306 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 306 "add_mutable_aux_preds.m"
  }
#line 306 "add_mutable_aux_preds.m"
}

#line 304 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_2(
#line 304 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 304 "add_mutable_aux_preds.m"
{
#line 304 "add_mutable_aux_preds.m"
  {
#line 304 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 304 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 304 "add_mutable_aux_preds.m"
    {
#line 304 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__304__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 304 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 304 "add_mutable_aux_preds.m"
  }
#line 304 "add_mutable_aux_preds.m"
}

#line 302 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_1(
#line 302 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 302 "add_mutable_aux_preds.m"
{
#line 302 "add_mutable_aux_preds.m"
  {
#line 302 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 302 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 302 "add_mutable_aux_preds.m"
    {
#line 302 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__302__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 302 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 302 "add_mutable_aux_preds.m"
  }
#line 302 "add_mutable_aux_preds.m"
}

#line 291 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0(
#line 291 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_11,
#line 291 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_12,
#line 291 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_13,
#line 291 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Kind_14,
#line 291 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_15,
#line 291 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_16,
#line 291 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_36,
#line 291 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_37,
#line 291 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38,
#line 291 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39)
#line 291 "add_mutable_aux_preds.m"
{
#line 297 "add_mutable_aux_preds.m"
  {
#line 297 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 297 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredOrigin_19;
#line 297 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_20;
#line 297 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredOrFunc_21;
#line 297 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TypesAndModes_22;
#line 297 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__WithType_23;
#line 297 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__WithInst_24;
#line 297 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeDetism_25;
#line 297 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_27;
#line 297 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InstVarSet_28;
#line 297 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ExistQVars_29;
#line 297 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Purity_30;
#line 297 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Constraints_31;
#line 297 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_32;
#line 297 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Markers_34;
#line 297 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_40_40;
#line 297 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_44_44;
#line 297 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_45_45;
#line 297 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_49_49;
#line 297 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_50_50;
#line 297 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_55_55;
#line 297 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_60_60;
#line 297 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_65_65;
#line 297 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_70_70;
#line 297 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_76_76;
#line 299 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Origin_26;
#line 299 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_33;
#line 316 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_35_35;

#line 298 "add_mutable_aux_preds.m"
    {
#line 298 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredOrigin_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 298 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PredOrigin_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 298 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PredOrigin_19, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ModuleName_12));
#line 298 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PredOrigin_19, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Name_13));
#line 298 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PredOrigin_19, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Kind_14));
#line 298 "add_mutable_aux_preds.m"
    }
#line 299 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__PredName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_11, (MR_Integer) 0)));
#line 299 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__PredOrFunc_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_11, (MR_Integer) 1)));
#line 299 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__TypesAndModes_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_11, (MR_Integer) 2)));
#line 299 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__WithType_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_11, (MR_Integer) 3)));
#line 299 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__WithInst_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_11, (MR_Integer) 4)));
#line 299 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MaybeDetism_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_11, (MR_Integer) 5)));
#line 299 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Origin_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_11, (MR_Integer) 6)));
#line 299 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_11, (MR_Integer) 7)));
#line 299 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__InstVarSet_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_11, (MR_Integer) 8)));
#line 299 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__ExistQVars_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_11, (MR_Integer) 9)));
#line 299 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Purity_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_11, (MR_Integer) 10)));
#line 299 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Constraints_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_11, (MR_Integer) 11)));
#line 299 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Context_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_11, (MR_Integer) 12)));
#line 299 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___SeqNum_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_11, (MR_Integer) 13)));
#line 302 "add_mutable_aux_preds.m"
    {
#line 302 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_44_44 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
    }
#line 302 "add_mutable_aux_preds.m"
    {
#line 302 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 302 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_40_40, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[4]));
#line 302 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_40_40, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_1));
#line 302 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 302 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_40_40, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_27));
#line 302 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_40_40, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_44_44));
#line 302 "add_mutable_aux_preds.m"
    }
#line 302 "add_mutable_aux_preds.m"
    {
#line 302 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_40_40, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/10", (MR_String) "TypeVarSet != varset.init");
    }
#line 304 "add_mutable_aux_preds.m"
    {
#line 304 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_49_49 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
#line 304 "add_mutable_aux_preds.m"
    {
#line 304 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 304 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_45_45, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[5]));
#line 304 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_45_45, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_2));
#line 304 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 304 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_45_45, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InstVarSet_28));
#line 304 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_45_45, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_49_49));
#line 304 "add_mutable_aux_preds.m"
    }
#line 304 "add_mutable_aux_preds.m"
    {
#line 304 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_45_45, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/10", (MR_String) "InstVarSet != varset.init");
    }
#line 306 "add_mutable_aux_preds.m"
    {
#line 306 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 306 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_50_50, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[6]));
#line 306 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_50_50, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_3));
#line 306 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 306 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_50_50, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ExistQVars_29));
#line 306 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_50_50, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 306 "add_mutable_aux_preds.m"
    }
#line 306 "add_mutable_aux_preds.m"
    {
#line 306 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_50_50, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/10", (MR_String) "ExistQVars != []");
    }
#line 307 "add_mutable_aux_preds.m"
    {
#line 307 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 307 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[7]));
#line 307 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_4));
#line 307 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 307 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PredOrFunc_21));
#line 307 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 4) = ((MR_Box) ((MR_Integer) 0));
#line 307 "add_mutable_aux_preds.m"
    }
#line 307 "add_mutable_aux_preds.m"
    {
#line 307 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_55_55, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/10", (MR_String) "PredOrFunc != pf_predicate");
    }
#line 309 "add_mutable_aux_preds.m"
    {
#line 309 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 309 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_60_60, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[8]));
#line 309 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_60_60, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_5));
#line 309 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 309 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_60_60, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__WithType_23));
#line 309 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_60_60, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 309 "add_mutable_aux_preds.m"
    }
#line 309 "add_mutable_aux_preds.m"
    {
#line 309 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_60_60, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/10", (MR_String) "WithType != no");
    }
#line 310 "add_mutable_aux_preds.m"
    {
#line 310 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 310 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_65_65, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[9]));
#line 310 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_65_65, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_6));
#line 310 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_65_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 310 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_65_65, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__WithInst_24));
#line 310 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_65_65, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 310 "add_mutable_aux_preds.m"
    }
#line 310 "add_mutable_aux_preds.m"
    {
#line 310 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_65_65, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/10", (MR_String) "WithInst != no");
    }
#line 311 "add_mutable_aux_preds.m"
    {
#line 311 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 311 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_70_70, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[10]));
#line 311 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_70_70, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_7));
#line 311 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_70_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 311 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_70_70, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__MaybeDetism_25));
#line 311 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_70_70, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_4[1])));
#line 311 "add_mutable_aux_preds.m"
    }
#line 311 "add_mutable_aux_preds.m"
    {
#line 311 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_70_70, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/10", (MR_String) "MaybeDet != yes(detism_det)");
    }
#line 313 "add_mutable_aux_preds.m"
    {
#line 313 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 313 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_76_76, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[11]));
#line 313 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_76_76, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_8));
#line 313 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_76_76, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 313 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_76_76, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Constraints_31));
#line 313 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_76_76, 4) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[31]));
#line 313 "add_mutable_aux_preds.m"
    }
#line 313 "add_mutable_aux_preds.m"
    {
#line 313 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_76_76, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/10", (MR_String) "Constraints != constraints([], [])");
    }
#line 315 "add_mutable_aux_preds.m"
    {
#line 315 "add_mutable_aux_preds.m"
      hlds__hlds_pred__marker_list_to_markers_2_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[32]), &hlds__make_hlds__add_mutable_aux_preds__Markers_34);
    }
#line 316 "add_mutable_aux_preds.m"
    {
#line 316 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_pred__module_add_pred_or_func_19_p_0(hlds__make_hlds__add_mutable_aux_preds__PredOrigin_19, hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_27, hlds__make_hlds__add_mutable_aux_preds__InstVarSet_28, hlds__make_hlds__add_mutable_aux_preds__ExistQVars_29, hlds__make_hlds__add_mutable_aux_preds__PredOrFunc_21, hlds__make_hlds__add_mutable_aux_preds__PredName_20, hlds__make_hlds__add_mutable_aux_preds__TypesAndModes_22, hlds__make_hlds__add_mutable_aux_preds__MaybeDetism_25, hlds__make_hlds__add_mutable_aux_preds__Purity_30, hlds__make_hlds__add_mutable_aux_preds__Constraints_31, hlds__make_hlds__add_mutable_aux_preds__Markers_34, hlds__make_hlds__add_mutable_aux_preds__Context_32, hlds__make_hlds__add_mutable_aux_preds__PredStatus_15, hlds__make_hlds__add_mutable_aux_preds__NeedQual_16, &hlds__make_hlds__add_mutable_aux_preds__V_35_35, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_36, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_37, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39);
    }
#line 297 "add_mutable_aux_preds.m"
  }
#line 291 "add_mutable_aux_preds.m"
}

#line 270 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_13_p_0(
#line 270 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_14,
#line 270 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_15,
#line 270 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Kind_16,
#line 270 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_17,
#line 270 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_18,
#line 270 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Purity_19,
#line 270 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_20,
#line 270 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_21,
#line 270 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_22,
#line 270 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_32,
#line 270 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_33,
#line 270 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_34,
#line 270 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_35)
#line 270 "add_mutable_aux_preds.m"
{
#line 277 "add_mutable_aux_preds.m"
  {
#line 277 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 277 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredOrigin_25;
#line 277 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_26;
#line 277 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InstVarSet_27;
#line 277 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Markers_30;
#line 284 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_31_31;

#line 278 "add_mutable_aux_preds.m"
    {
#line 278 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredOrigin_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 278 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PredOrigin_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 278 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PredOrigin_25, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ModuleName_14));
#line 278 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PredOrigin_25, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Name_15));
#line 278 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PredOrigin_25, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Kind_16));
#line 278 "add_mutable_aux_preds.m"
    }
#line 279 "add_mutable_aux_preds.m"
    {
#line 279 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_26 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
    }
#line 280 "add_mutable_aux_preds.m"
    {
#line 280 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__InstVarSet_27 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
#line 283 "add_mutable_aux_preds.m"
    {
#line 283 "add_mutable_aux_preds.m"
      hlds__hlds_pred__marker_list_to_markers_2_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[32]), &hlds__make_hlds__add_mutable_aux_preds__Markers_30);
    }
#line 284 "add_mutable_aux_preds.m"
    {
#line 284 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_pred__module_add_pred_or_func_19_p_0(hlds__make_hlds__add_mutable_aux_preds__PredOrigin_25, hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_26, hlds__make_hlds__add_mutable_aux_preds__InstVarSet_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__PredName_17, hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_18, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_4[1]), hlds__make_hlds__add_mutable_aux_preds__Purity_19, (MR_Word) &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[31], hlds__make_hlds__add_mutable_aux_preds__Markers_30, hlds__make_hlds__add_mutable_aux_preds__Context_22, hlds__make_hlds__add_mutable_aux_preds__PredStatus_20, hlds__make_hlds__add_mutable_aux_preds__NeedQual_21, &hlds__make_hlds__add_mutable_aux_preds__V_31_31, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_32, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_33, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_34, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_35);
    }
#line 277 "add_mutable_aux_preds.m"
  }
#line 270 "add_mutable_aux_preds.m"
}

#line 255 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_pre_init_pred_decl_9_p_0(
#line 255 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_10,
#line 255 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_11,
#line 255 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_12,
#line 255 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_13,
#line 255 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_14,
#line 255 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_19,
#line 255 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_20,
#line 255 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_21,
#line 255 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_22)
#line 255 "add_mutable_aux_preds.m"
{
#line 261 "add_mutable_aux_preds.m"
  {
#line 261 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 261 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_17;

#line 262 "add_mutable_aux_preds.m"
    {
#line 262 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredName_17 = parse_tree__prog_mutable__mutable_pre_init_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_10, hlds__make_hlds__add_mutable_aux_preds__Name_11);
    }
#line 264 "add_mutable_aux_preds.m"
    {
#line 264 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_13_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_10, hlds__make_hlds__add_mutable_aux_preds__Name_11, (MR_Integer) 10, hlds__make_hlds__add_mutable_aux_preds__PredName_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 2, hlds__make_hlds__add_mutable_aux_preds__PredStatus_12, hlds__make_hlds__add_mutable_aux_preds__NeedQual_13, hlds__make_hlds__add_mutable_aux_preds__Context_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_19, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_20, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_21, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_22);
#line 264 "add_mutable_aux_preds.m"
      return;
    }
#line 261 "add_mutable_aux_preds.m"
  }
#line 255 "add_mutable_aux_preds.m"
}

#line 237 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_init_pred_decl_9_p_0(
#line 237 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_10,
#line 237 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_11,
#line 237 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_12,
#line 237 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_13,
#line 237 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_14,
#line 237 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_19,
#line 237 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_20,
#line 237 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_21,
#line 237 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_22)
#line 237 "add_mutable_aux_preds.m"
{
#line 243 "add_mutable_aux_preds.m"
  {
#line 243 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 243 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_17;

#line 244 "add_mutable_aux_preds.m"
    {
#line 244 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredName_17 = parse_tree__prog_mutable__mutable_init_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_10, hlds__make_hlds__add_mutable_aux_preds__Name_11);
    }
#line 246 "add_mutable_aux_preds.m"
    {
#line 246 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_13_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_10, hlds__make_hlds__add_mutable_aux_preds__Name_11, (MR_Integer) 10, hlds__make_hlds__add_mutable_aux_preds__PredName_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 2, hlds__make_hlds__add_mutable_aux_preds__PredStatus_12, hlds__make_hlds__add_mutable_aux_preds__NeedQual_13, hlds__make_hlds__add_mutable_aux_preds__Context_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_19, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_20, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_21, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_22);
#line 246 "add_mutable_aux_preds.m"
      return;
    }
#line 243 "add_mutable_aux_preds.m"
  }
#line 237 "add_mutable_aux_preds.m"
}

#line 198 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_unlock_pred_decl_9_p_0(
#line 198 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_10,
#line 198 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_11,
#line 198 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_12,
#line 198 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_13,
#line 198 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_14,
#line 198 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_19,
#line 198 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_20,
#line 198 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_21,
#line 198 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_22)
#line 198 "add_mutable_aux_preds.m"
{
#line 228 "add_mutable_aux_preds.m"
  {
#line 228 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 228 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_17;

#line 229 "add_mutable_aux_preds.m"
    {
#line 229 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredName_17 = parse_tree__prog_mutable__mutable_unlock_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_10, hlds__make_hlds__add_mutable_aux_preds__Name_11);
    }
#line 231 "add_mutable_aux_preds.m"
    {
#line 231 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_13_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_10, hlds__make_hlds__add_mutable_aux_preds__Name_11, (MR_Integer) 9, hlds__make_hlds__add_mutable_aux_preds__PredName_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 2, hlds__make_hlds__add_mutable_aux_preds__PredStatus_12, hlds__make_hlds__add_mutable_aux_preds__NeedQual_13, hlds__make_hlds__add_mutable_aux_preds__Context_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_19, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_20, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_21, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_22);
#line 231 "add_mutable_aux_preds.m"
      return;
    }
#line 228 "add_mutable_aux_preds.m"
  }
#line 198 "add_mutable_aux_preds.m"
}

#line 194 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_lock_pred_decl_9_p_0(
#line 194 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_10,
#line 194 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_11,
#line 194 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_12,
#line 194 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_13,
#line 194 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_14,
#line 194 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_19,
#line 194 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_20,
#line 194 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_21,
#line 194 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_22)
#line 194 "add_mutable_aux_preds.m"
{
#line 220 "add_mutable_aux_preds.m"
  {
#line 220 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 220 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_17;

#line 221 "add_mutable_aux_preds.m"
    {
#line 221 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredName_17 = parse_tree__prog_mutable__mutable_lock_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_10, hlds__make_hlds__add_mutable_aux_preds__Name_11);
    }
#line 223 "add_mutable_aux_preds.m"
    {
#line 223 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_13_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_10, hlds__make_hlds__add_mutable_aux_preds__Name_11, (MR_Integer) 8, hlds__make_hlds__add_mutable_aux_preds__PredName_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 2, hlds__make_hlds__add_mutable_aux_preds__PredStatus_12, hlds__make_hlds__add_mutable_aux_preds__NeedQual_13, hlds__make_hlds__add_mutable_aux_preds__Context_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_19, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_20, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_21, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_22);
#line 223 "add_mutable_aux_preds.m"
      return;
    }
#line 220 "add_mutable_aux_preds.m"
  }
#line 194 "add_mutable_aux_preds.m"
}

#line 190 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_unsafe_set_pred_decl_11_p_0(
#line 190 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_12,
#line 190 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_13,
#line 190 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_14,
#line 190 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_15,
#line 190 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_16,
#line 190 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_17,
#line 190 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_18,
#line 190 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_23,
#line 190 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_24,
#line 190 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_25,
#line 190 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_26)
#line 190 "add_mutable_aux_preds.m"
{
#line 212 "add_mutable_aux_preds.m"
  {
#line 212 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 212 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_21;
#line 212 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_22;
#line 212 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_27_27;
#line 212 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_28_28;

#line 213 "add_mutable_aux_preds.m"
    {
#line 213 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredName_21 = parse_tree__prog_mutable__mutable_unsafe_set_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_12, hlds__make_hlds__add_mutable_aux_preds__Name_13);
    }
#line 214 "add_mutable_aux_preds.m"
    {
#line 214 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_28_28 = parse_tree__prog_mode__in_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_15);
    }
#line 214 "add_mutable_aux_preds.m"
    {
#line 214 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 214 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_27_27, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Type_14));
#line 214 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_27_27, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_28_28));
#line 214 "add_mutable_aux_preds.m"
    }
#line 214 "add_mutable_aux_preds.m"
    {
#line 214 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 214 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_22, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_27_27));
#line 214 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 214 "add_mutable_aux_preds.m"
    }
#line 215 "add_mutable_aux_preds.m"
    {
#line 215 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_13_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_12, hlds__make_hlds__add_mutable_aux_preds__Name_13, (MR_Integer) 5, hlds__make_hlds__add_mutable_aux_preds__PredName_21, hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_22, (MR_Integer) 2, hlds__make_hlds__add_mutable_aux_preds__PredStatus_16, hlds__make_hlds__add_mutable_aux_preds__NeedQual_17, hlds__make_hlds__add_mutable_aux_preds__Context_18, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_23, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_24, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_25, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_26);
#line 215 "add_mutable_aux_preds.m"
      return;
    }
#line 212 "add_mutable_aux_preds.m"
  }
#line 190 "add_mutable_aux_preds.m"
}

#line 186 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_unsafe_get_pred_decl_11_p_0(
#line 186 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_12,
#line 186 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_13,
#line 186 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_14,
#line 186 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_15,
#line 186 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_16,
#line 186 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_17,
#line 186 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_18,
#line 186 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_23,
#line 186 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_24,
#line 186 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_25,
#line 186 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_26)
#line 186 "add_mutable_aux_preds.m"
{
#line 204 "add_mutable_aux_preds.m"
  {
#line 204 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 204 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_21;
#line 204 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_22;
#line 204 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_27_27;
#line 204 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_28_28;

#line 205 "add_mutable_aux_preds.m"
    {
#line 205 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredName_21 = parse_tree__prog_mutable__mutable_unsafe_get_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_12, hlds__make_hlds__add_mutable_aux_preds__Name_13);
    }
#line 206 "add_mutable_aux_preds.m"
    {
#line 206 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_28_28 = parse_tree__prog_mode__out_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_15);
    }
#line 206 "add_mutable_aux_preds.m"
    {
#line 206 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 206 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_27_27, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Type_14));
#line 206 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_27_27, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_28_28));
#line 206 "add_mutable_aux_preds.m"
    }
#line 206 "add_mutable_aux_preds.m"
    {
#line 206 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 206 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_22, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_27_27));
#line 206 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 206 "add_mutable_aux_preds.m"
    }
#line 207 "add_mutable_aux_preds.m"
    {
#line 207 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_13_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_12, hlds__make_hlds__add_mutable_aux_preds__Name_13, (MR_Integer) 4, hlds__make_hlds__add_mutable_aux_preds__PredName_21, hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_22, (MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__PredStatus_16, hlds__make_hlds__add_mutable_aux_preds__NeedQual_17, hlds__make_hlds__add_mutable_aux_preds__Context_18, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_23, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_24, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_25, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_26);
#line 207 "add_mutable_aux_preds.m"
      return;
    }
#line 204 "add_mutable_aux_preds.m"
  }
#line 186 "add_mutable_aux_preds.m"
}

#line 34 "add_mutable_aux_preds.m"
void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_defns_8_p_0(
#line 34 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9,
#line 34 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_10,
#line 34 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34,
#line 34 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_35,
#line 34 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_36,
#line 34 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_37,
#line 34 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38,
#line 34 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39)
#line 34 "add_mutable_aux_preds.m"
{
#line 395 "add_mutable_aux_preds.m"
  {
#line 395 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 395 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_14 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 0)));
#line 395 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 1)));
#line 395 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 4)));
#line 395 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 6)));
#line 395 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_23;
#line 395 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ImplLang_24;
#line 395 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_25;
#line 395 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_26;
#line 395 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___PreInit_27;
#line 395 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___LockUnlock_28;
#line 395 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_29;
#line 395 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_30;
#line 395 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_31;
#line 395 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_32;
#line 395 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_33;
#line 395 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_42_42;
#line 395 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Globals_49;
#line 395 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_50;
#line 395 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInit0_53;
#line 395 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__LockUnlock0_54;
#line 395 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess0_55;
#line 395 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_59;
#line 396 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___InitTerm_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 2)));
#line 396 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Inst_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 3)));
#line 396 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___VarSet_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 5)));
#line 396 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 7)));

#line 1367 "add_mutable_aux_preds.m"
    {
#line 1367 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34, &hlds__make_hlds__add_mutable_aux_preds__Globals_49);
    }
#line 1368 "add_mutable_aux_preds.m"
    {
#line 1368 "add_mutable_aux_preds.m"
      libs__globals__get_target_2_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_49, &hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_50);
    }
#line 1385 "add_mutable_aux_preds.m"
#line 1385 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_50) {
#line 1385 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1385 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 1371 "add_mutable_aux_preds.m"
        {
#line 1371 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__HighLevelCode_56;

#line 1372 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__ImplLang_24 = (MR_Integer) 0;
#line 1373 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__Lang_25 = (MR_Integer) 0;
#line 1374 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__PreInit0_53 = (MR_Integer) 1;
#line 1375 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LockUnlock0_54 = (MR_Integer) 1;
#line 1376 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess0_55 = (MR_Integer) 1;
#line 1377 "add_mutable_aux_preds.m"
          {
#line 1377 "add_mutable_aux_preds.m"
            libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_49, (MR_Integer) 251, &hlds__make_hlds__add_mutable_aux_preds__HighLevelCode_56);
          }
#line 1381 "add_mutable_aux_preds.m"
#line 1381 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__HighLevelCode_56) {
#line 1381 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1381 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 1380 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_26 = (MR_Integer) 1;
#line 1381 "add_mutable_aux_preds.m"
              break;
#line 1381 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 1383 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_26 = (MR_Integer) 0;
#line 1381 "add_mutable_aux_preds.m"
              break;
#line 1381 "add_mutable_aux_preds.m"
          }
#line 1371 "add_mutable_aux_preds.m"
        }
#line 1385 "add_mutable_aux_preds.m"
        break;
#line 1385 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 1386 "add_mutable_aux_preds.m"
        {
#line 1386 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_58;

#line 1387 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__ImplLang_24 = (MR_Integer) 1;
#line 1388 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__Lang_25 = (MR_Integer) 1;
#line 1389 "add_mutable_aux_preds.m"
          {
#line 1389 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_58 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_18);
          }
#line 1393 "add_mutable_aux_preds.m"
#line 1393 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_58) {
#line 1393 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1393 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 1395 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__PreInit0_53 = (MR_Integer) 0;
#line 1393 "add_mutable_aux_preds.m"
              break;
#line 1393 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 1392 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__PreInit0_53 = (MR_Integer) 1;
#line 1393 "add_mutable_aux_preds.m"
              break;
#line 1393 "add_mutable_aux_preds.m"
          }
#line 1397 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LockUnlock0_54 = (MR_Integer) 0;
#line 1398 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess0_55 = (MR_Integer) 1;
#line 1399 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_26 = (MR_Integer) 0;
#line 1386 "add_mutable_aux_preds.m"
        }
#line 1385 "add_mutable_aux_preds.m"
        break;
#line 1385 "add_mutable_aux_preds.m"
      case (MR_Integer) 3:
#line 1409 "add_mutable_aux_preds.m"
        {
#line 1410 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__ImplLang_24 = (MR_Integer) 3;
#line 1411 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__Lang_25 = (MR_Integer) 3;
#line 1412 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__PreInit0_53 = (MR_Integer) 0;
#line 1413 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LockUnlock0_54 = (MR_Integer) 0;
#line 1414 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess0_55 = (MR_Integer) 0;
#line 1415 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_26 = (MR_Integer) 0;
#line 1409 "add_mutable_aux_preds.m"
        }
#line 1385 "add_mutable_aux_preds.m"
        break;
#line 1385 "add_mutable_aux_preds.m"
      case (MR_Integer) 2:
#line 1401 "add_mutable_aux_preds.m"
        {
#line 1402 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__ImplLang_24 = (MR_Integer) 2;
#line 1403 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__Lang_25 = (MR_Integer) 2;
#line 1404 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__PreInit0_53 = (MR_Integer) 0;
#line 1405 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LockUnlock0_54 = (MR_Integer) 0;
#line 1406 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess0_55 = (MR_Integer) 1;
#line 1407 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_26 = (MR_Integer) 0;
#line 1401 "add_mutable_aux_preds.m"
        }
#line 1385 "add_mutable_aux_preds.m"
        break;
#line 1385 "add_mutable_aux_preds.m"
    }
#line 1417 "add_mutable_aux_preds.m"
    {
#line 1417 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsConstant_59 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_18);
    }
#line 1423 "add_mutable_aux_preds.m"
#line 1423 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__IsConstant_59) {
#line 1423 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1423 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 1424 "add_mutable_aux_preds.m"
        {
#line 1425 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds___PreInit_27 = (MR_Integer) 0;
#line 1426 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds___LockUnlock_28 = (MR_Integer) 0;
#line 1427 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_29 = (MR_Integer) 0;
#line 1424 "add_mutable_aux_preds.m"
        }
#line 1423 "add_mutable_aux_preds.m"
        break;
#line 1423 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 1419 "add_mutable_aux_preds.m"
        {
#line 1420 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds___PreInit_27 = hlds__make_hlds__add_mutable_aux_preds__PreInit0_53;
#line 1421 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds___LockUnlock_28 = hlds__make_hlds__add_mutable_aux_preds__LockUnlock0_54;
#line 1422 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_29 = hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess0_55;
#line 1419 "add_mutable_aux_preds.m"
        }
#line 1423 "add_mutable_aux_preds.m"
        break;
#line 1423 "add_mutable_aux_preds.m"
    }
#line 1429 "add_mutable_aux_preds.m"
    {
#line 1429 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__TargetParams_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1429 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_23, 0) = ((MR_Box) ((hlds__make_hlds__add_mutable_aux_preds__ImplLang_24 | ((((hlds__make_hlds__add_mutable_aux_preds__Lang_25 << (MR_Integer) 2)) | ((((hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_26 << (MR_Integer) 4)) | ((((hlds__make_hlds__add_mutable_aux_preds___PreInit_27 << (MR_Integer) 5)) | ((((hlds__make_hlds__add_mutable_aux_preds___LockUnlock_28 << (MR_Integer) 6)) | ((hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_29 << (MR_Integer) 7)))))))))))));
#line 1429 "add_mutable_aux_preds.m"
    }
#line 405 "add_mutable_aux_preds.m"
    {
#line 405 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsConstant_30 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_18);
    }
#line 406 "add_mutable_aux_preds.m"
    {
#line 406 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_31 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_18);
    }
#line 409 "add_mutable_aux_preds.m"
    {
#line 409 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_32);
    }
#line 410 "add_mutable_aux_preds.m"
    {
#line 410 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_109_117_116_97_98_108_101_95_116_97_114_103_101_116_95_118_97_114_95_110_97_109_101_95_95_91_54_93_95_48_7_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34, hlds__make_hlds__add_mutable_aux_preds__MutAttrs_18, hlds__make_hlds__add_mutable_aux_preds__ModuleName_32, hlds__make_hlds__add_mutable_aux_preds__MutableName_14, hlds__make_hlds__add_mutable_aux_preds__Lang_25, &hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_33);
    }
#line 421 "add_mutable_aux_preds.m"
#line 421 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__ImplLang_24) {
#line 421 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 421 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 419 "add_mutable_aux_preds.m"
        {
#line 419 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__define_global_var_c_7_p_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_33, hlds__make_hlds__add_mutable_aux_preds__Type_15, hlds__make_hlds__add_mutable_aux_preds__IsConstant_30, hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_31, hlds__make_hlds__add_mutable_aux_preds__Context_20, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_42_42);
        }
#line 421 "add_mutable_aux_preds.m"
        break;
#line 421 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 531 "add_mutable_aux_preds.m"
        {
#line 531 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__TypeStr_72;
#line 531 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__DefnBody_73;
#line 531 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_74;
#line 531 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__V_76_76;
#line 531 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__V_77_77;
#line 531 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__V_79_79;
#line 531 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_82_82;

#line 539 "add_mutable_aux_preds.m"
#line 539 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_31) {
#line 539 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 539 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 536 "add_mutable_aux_preds.m"
              {
#line 534 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_84_84;

#line 534 "add_mutable_aux_preds.m"
                {
#line 534 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_84_84 = parse_tree__builtin_lib_types__int_type_0_f_0();
                }
#line 534 "add_mutable_aux_preds.m"
                {
#line 534 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__make_hlds__add_mutable_aux_preds__Type_15, hlds__make_hlds__add_mutable_aux_preds__V_84_84);
                }
#line 536 "add_mutable_aux_preds.m"
                if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 535 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__TypeStr_72 = (MR_String) "int";
#line 536 "add_mutable_aux_preds.m"
                else
#line 537 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__TypeStr_72 = (MR_String) "object";
#line 536 "add_mutable_aux_preds.m"
              }
#line 539 "add_mutable_aux_preds.m"
              break;
#line 539 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 541 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__TypeStr_72 = (MR_String) "int";
#line 539 "add_mutable_aux_preds.m"
              break;
#line 539 "add_mutable_aux_preds.m"
          }
#line 543 "add_mutable_aux_preds.m"
          {
#line 543 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_79_79 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_33, (MR_String) ";\n");
          }
#line 543 "add_mutable_aux_preds.m"
          {
#line 543 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_77_77 = mercury__string__f_43_43_2_f_0((MR_String) " ", hlds__make_hlds__add_mutable_aux_preds__V_79_79);
          }
#line 543 "add_mutable_aux_preds.m"
          {
#line 543 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_76_76 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeStr_72, hlds__make_hlds__add_mutable_aux_preds__V_77_77);
          }
#line 543 "add_mutable_aux_preds.m"
          {
#line 543 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__DefnBody_73 = mercury__string__f_43_43_2_f_0((MR_String) "static ", hlds__make_hlds__add_mutable_aux_preds__V_76_76);
          }
#line 545 "add_mutable_aux_preds.m"
          {
#line 545 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 545 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_82_82, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__DefnBody_73));
#line 545 "add_mutable_aux_preds.m"
          }
#line 545 "add_mutable_aux_preds.m"
          {
#line 545 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 545 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_74, 0) = ((MR_Box) ((MR_Integer) 1));
#line 545 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_74, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_82_82));
#line 545 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_74, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_20));
#line 545 "add_mutable_aux_preds.m"
          }
#line 546 "add_mutable_aux_preds.m"
          {
#line 546 "add_mutable_aux_preds.m"
            hlds__hlds_module__module_add_foreign_body_code_3_p_0(hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_74, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_42_42);
          }
#line 531 "add_mutable_aux_preds.m"
        }
#line 421 "add_mutable_aux_preds.m"
        break;
#line 421 "add_mutable_aux_preds.m"
      case (MR_Integer) 3:
#line 430 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_42_42 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34;
#line 421 "add_mutable_aux_preds.m"
        break;
#line 421 "add_mutable_aux_preds.m"
      case (MR_Integer) 2:
#line 427 "add_mutable_aux_preds.m"
        {
#line 427 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__define_global_var_java_6_p_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_33, hlds__make_hlds__add_mutable_aux_preds__Type_15, hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_31, hlds__make_hlds__add_mutable_aux_preds__Context_20, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_42_42);
        }
#line 421 "add_mutable_aux_preds.m"
        break;
#line 421 "add_mutable_aux_preds.m"
    }
#line 437 "add_mutable_aux_preds.m"
    {
#line 437 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__define_aux_preds_10_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, hlds__make_hlds__add_mutable_aux_preds__TargetParams_23, hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_33, hlds__make_hlds__add_mutable_aux_preds__PredStatus_10, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_42_42, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_35, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_36, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_37, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39);
#line 437 "add_mutable_aux_preds.m"
      return;
    }
#line 395 "add_mutable_aux_preds.m"
  }
#line 34 "add_mutable_aux_preds.m"
}

#line 28 "add_mutable_aux_preds.m"
void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__do_mutable_checks_5_p_0(
#line 28 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_6,
#line 28 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34,
#line 28 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_35,
#line 28 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_36,
#line 28 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_37)
#line 28 "add_mutable_aux_preds.m"
{
#line 323 "add_mutable_aux_preds.m"
  {
#line 323 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 323 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_9;
#line 323 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__Name_10;
#line 323 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_13;
#line 323 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_14;
#line 323 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_16;
#line 323 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Globals_18;
#line 323 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_19;
#line 323 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_20;
#line 323 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_21;
#line 323 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TrailMutableUpdates_24;
#line 323 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UseTrail_25;
#line 323 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_38_38;
#line 323 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_58_58;
#line 325 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Type_11;
#line 325 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___InitTerm_12;
#line 325 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___VarSet_15;
#line 325 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_17;

#line 324 "add_mutable_aux_preds.m"
    {
#line 324 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_9);
    }
#line 325 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Name_10 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_6, (MR_Integer) 0)));
#line 325 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_6, (MR_Integer) 1)));
#line 325 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___InitTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_6, (MR_Integer) 2)));
#line 325 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Inst_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_6, (MR_Integer) 3)));
#line 325 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutAttrs_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_6, (MR_Integer) 4)));
#line 325 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___VarSet_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_6, (MR_Integer) 5)));
#line 325 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_6, (MR_Integer) 6)));
#line 325 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___SeqNum_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_6, (MR_Integer) 7)));
#line 327 "add_mutable_aux_preds.m"
    {
#line 327 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34, &hlds__make_hlds__add_mutable_aux_preds__Globals_18);
    }
#line 328 "add_mutable_aux_preds.m"
    {
#line 328 "add_mutable_aux_preds.m"
      libs__globals__get_target_2_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_18, &hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_19);
    }
#line 335 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_20 = ((&hlds__make_hlds__add_mutable_aux_preds_vector_common_3[0 + hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_19]))->hlds__make_hlds__add_mutable_aux_preds__vector_common_type_3_0__vct_3_f_0;
#line 339 "add_mutable_aux_preds.m"
    {
#line 339 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_21 = parse_tree__prog_item__mutable_var_maybe_foreign_names_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_14);
    }
#line 342 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 341 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_38_38 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_36;
#line 342 "add_mutable_aux_preds.m"
    else
#line 343 "add_mutable_aux_preds.m"
      {
#line 343 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignNames_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_21, (MR_Integer) 0)));
#line 346 "add_mutable_aux_preds.m"
        MR_String hlds__make_hlds__add_mutable_aux_preds___TargetMutableName_23;

#line 346 "add_mutable_aux_preds.m"
        {
#line 346 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__get_global_name_from_foreign_names_9_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34, hlds__make_hlds__add_mutable_aux_preds__Context_16, hlds__make_hlds__add_mutable_aux_preds__ModuleName_9, hlds__make_hlds__add_mutable_aux_preds__Name_10, hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_20, hlds__make_hlds__add_mutable_aux_preds__ForeignNames_22, &hlds__make_hlds__add_mutable_aux_preds___TargetMutableName_23, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_36, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_38_38);
        }
#line 343 "add_mutable_aux_preds.m"
      }
#line 353 "add_mutable_aux_preds.m"
    {
#line 353 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__TrailMutableUpdates_24 = parse_tree__prog_item__mutable_var_trailed_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_14);
    }
#line 354 "add_mutable_aux_preds.m"
    {
#line 354 "add_mutable_aux_preds.m"
      libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_18, (MR_Integer) 215, &hlds__make_hlds__add_mutable_aux_preds__UseTrail_25);
    }
#line 356 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__TrailMutableUpdates_24 == (MR_Integer) 1);
#line 356 "add_mutable_aux_preds.m"
    if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 357 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__UseTrail_25 == (MR_Integer) 0);
#line 365 "add_mutable_aux_preds.m"
    if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 360 "add_mutable_aux_preds.m"
      {
#line 360 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__TrailMsg_27;
#line 360 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__TrailSpec_28;
#line 360 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_56_56;

#line 361 "add_mutable_aux_preds.m"
        {
#line 361 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__TrailMsg_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 361 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TrailMsg_27, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_16));
#line 361 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TrailMsg_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[29])));
#line 361 "add_mutable_aux_preds.m"
        }
#line 363 "add_mutable_aux_preds.m"
        {
#line 363 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 363 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_56_56, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TrailMsg_27));
#line 363 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 363 "add_mutable_aux_preds.m"
        }
#line 362 "add_mutable_aux_preds.m"
        {
#line 362 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__TrailSpec_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 362 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TrailSpec_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 362 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TrailSpec_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 362 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TrailSpec_28, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_56_56));
#line 362 "add_mutable_aux_preds.m"
        }
#line 364 "add_mutable_aux_preds.m"
        {
#line 364 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 364 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_58_58, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TrailSpec_28));
#line 364 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_58_58, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_38_38));
#line 364 "add_mutable_aux_preds.m"
        }
#line 360 "add_mutable_aux_preds.m"
      }
#line 365 "add_mutable_aux_preds.m"
    else
#line 365 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_58_58 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_38_38;
#line 371 "add_mutable_aux_preds.m"
    {
#line 371 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__hlds_code_util__is_valid_mutable_inst_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34, hlds__make_hlds__add_mutable_aux_preds__Inst_13);
    }
#line 373 "add_mutable_aux_preds.m"
    if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 373 "add_mutable_aux_preds.m"
      *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_37 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_58_58;
#line 373 "add_mutable_aux_preds.m"
    else
#line 377 "add_mutable_aux_preds.m"
      {
#line 377 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__DummyInstVarset_29;
#line 377 "add_mutable_aux_preds.m"
        MR_String hlds__make_hlds__add_mutable_aux_preds__InstStr_30;
#line 377 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__InvalidInstPieces_31;
#line 377 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__InvalidInstMsg_32;
#line 377 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__InvalidInstSpec_33;
#line 377 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_62_62;
#line 377 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_63_63;
#line 377 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_74_74;
#line 377 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_75_75;
#line 377 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_79_79;

#line 377 "add_mutable_aux_preds.m"
        {
#line 377 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__DummyInstVarset_29 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
        }
#line 378 "add_mutable_aux_preds.m"
        {
#line 378 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__InstStr_30 = hlds__hlds_out__hlds_out_mode__mercury_expanded_inst_to_string_4_f_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34, hlds__make_hlds__add_mutable_aux_preds__DummyInstVarset_29, hlds__make_hlds__add_mutable_aux_preds__Inst_13);
        }
#line 380 "add_mutable_aux_preds.m"
        {
#line 380 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_63_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 380 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__V_63_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 380 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__V_63_63, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InstStr_30));
#line 380 "add_mutable_aux_preds.m"
        }
#line 380 "add_mutable_aux_preds.m"
        {
#line 380 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 380 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_62_62, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_63_63));
#line 380 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[18])));
#line 380 "add_mutable_aux_preds.m"
        }
#line 380 "add_mutable_aux_preds.m"
        {
#line 380 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__InvalidInstPieces_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 380 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__InvalidInstPieces_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[30])));
#line 380 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__InvalidInstPieces_31, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_62_62));
#line 380 "add_mutable_aux_preds.m"
        }
#line 385 "add_mutable_aux_preds.m"
        {
#line 385 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 385 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_75_75, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InvalidInstPieces_31));
#line 385 "add_mutable_aux_preds.m"
        }
#line 385 "add_mutable_aux_preds.m"
        {
#line 385 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 385 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_74_74, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_75_75));
#line 385 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 385 "add_mutable_aux_preds.m"
        }
#line 385 "add_mutable_aux_preds.m"
        {
#line 385 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__InvalidInstMsg_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 385 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__InvalidInstMsg_32, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_16));
#line 385 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__InvalidInstMsg_32, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_74_74));
#line 385 "add_mutable_aux_preds.m"
        }
#line 387 "add_mutable_aux_preds.m"
        {
#line 387 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 387 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_79_79, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InvalidInstMsg_32));
#line 387 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 387 "add_mutable_aux_preds.m"
        }
#line 386 "add_mutable_aux_preds.m"
        {
#line 386 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__InvalidInstSpec_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 386 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__InvalidInstSpec_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 386 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__InvalidInstSpec_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 386 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__InvalidInstSpec_33, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_79_79));
#line 386 "add_mutable_aux_preds.m"
        }
#line 388 "add_mutable_aux_preds.m"
        {
#line 388 "add_mutable_aux_preds.m"
          MR_Word base;
#line 388 "add_mutable_aux_preds.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 388 "add_mutable_aux_preds.m"
          *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_37 = base;
#line 388 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InvalidInstSpec_33));
#line 388 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_58_58));
#line 388 "add_mutable_aux_preds.m"
        }
#line 377 "add_mutable_aux_preds.m"
      }
#line 323 "add_mutable_aux_preds.m"
    *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_35 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34;
#line 323 "add_mutable_aux_preds.m"
  }
#line 28 "add_mutable_aux_preds.m"
}

#line 130 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decls_7_p_0_4(
#line 130 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 130 "add_mutable_aux_preds.m"
{
#line 130 "add_mutable_aux_preds.m"
  {
#line 130 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 130 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 130 "add_mutable_aux_preds.m"
    {
#line 130 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_mutable_aux_pred_decls__130__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 130 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 130 "add_mutable_aux_preds.m"
  }
#line 130 "add_mutable_aux_preds.m"
}

#line 128 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decls_7_p_0_3(
#line 128 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 128 "add_mutable_aux_preds.m"
{
#line 128 "add_mutable_aux_preds.m"
  {
#line 128 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 128 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 128 "add_mutable_aux_preds.m"
    {
#line 128 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_mutable_aux_pred_decls__128__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 128 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 128 "add_mutable_aux_preds.m"
  }
#line 128 "add_mutable_aux_preds.m"
}

#line 126 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decls_7_p_0_2(
#line 126 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 126 "add_mutable_aux_preds.m"
{
#line 126 "add_mutable_aux_preds.m"
  {
#line 126 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 126 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 126 "add_mutable_aux_preds.m"
    {
#line 126 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_mutable_aux_pred_decls__126__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 126 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 126 "add_mutable_aux_preds.m"
  }
#line 126 "add_mutable_aux_preds.m"
}

#line 124 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decls_7_p_0_1(
#line 124 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 124 "add_mutable_aux_preds.m"
{
#line 124 "add_mutable_aux_preds.m"
  {
#line 124 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 124 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 124 "add_mutable_aux_preds.m"
    {
#line 124 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_mutable_aux_pred_decls__124__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 124 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 124 "add_mutable_aux_preds.m"
  }
#line 124 "add_mutable_aux_preds.m"
}

#line 22 "add_mutable_aux_preds.m"
void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decls_7_p_0(
#line 22 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_8,
#line 22 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_9,
#line 22 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_10,
#line 22 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_38,
#line 22 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_39,
#line 22 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_40,
#line 22 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_41)
#line 22 "add_mutable_aux_preds.m"
{
#line 70 "add_mutable_aux_preds.m"
  {
#line 70 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 70 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_8, (MR_Integer) 0)));
#line 70 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_8, (MR_Integer) 1)));
#line 70 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_8, (MR_Integer) 3)));
#line 70 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_8, (MR_Integer) 4)));
#line 70 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_8, (MR_Integer) 6)));
#line 70 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_21;
#line 71 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___InitValue_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_8, (MR_Integer) 2)));
#line 71 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___VarSet_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_8, (MR_Integer) 5)));
#line 71 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_8, (MR_Integer) 7)));

#line 73 "add_mutable_aux_preds.m"
    {
#line 73 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__get_mutable_target_params_3_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_38, hlds__make_hlds__add_mutable_aux_preds__MutAttrs_17, &hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_21);
    }
#line 76 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 75 "add_mutable_aux_preds.m"
      {
#line 75 "add_mutable_aux_preds.m"
        *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_39 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_38;
#line 75 "add_mutable_aux_preds.m"
        *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_41 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_40;
#line 75 "add_mutable_aux_preds.m"
      }
#line 76 "add_mutable_aux_preds.m"
    else
#line 77 "add_mutable_aux_preds.m"
      {
#line 77 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_21, (MR_Integer) 0)));
#line 77 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInit_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_22, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 77 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__LockUnlock_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_22, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 77 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_22, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 77 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_29;
#line 77 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_30;
#line 77 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__AttachToIO_31;
#line 77 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_42_42;
#line 77 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_43_43;
#line 77 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_44_44;
#line 77 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_45_45;
#line 77 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_48_48;
#line 77 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_49_49;
#line 77 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_52_52;
#line 77 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_53_53;
#line 78 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds___ImplLang_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_22, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 78 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds___Lang_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_22, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
#line 78 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_22, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 80 "add_mutable_aux_preds.m"
        {
#line 80 "add_mutable_aux_preds.m"
          hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_38, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_29);
        }
#line 90 "add_mutable_aux_preds.m"
#line 90 "add_mutable_aux_preds.m"
        switch (hlds__make_hlds__add_mutable_aux_preds__PreInit_26) {
#line 90 "add_mutable_aux_preds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 90 "add_mutable_aux_preds.m"
          case (MR_Integer) 0:
#line 89 "add_mutable_aux_preds.m"
            {
#line 89 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_42_42 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_38;
#line 89 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_43_43 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_40;
#line 89 "add_mutable_aux_preds.m"
            }
#line 90 "add_mutable_aux_preds.m"
            break;
#line 90 "add_mutable_aux_preds.m"
          case (MR_Integer) 1:
#line 92 "add_mutable_aux_preds.m"
            {
#line 92 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__add_mutable_pre_init_pred_decl_9_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_29, hlds__make_hlds__add_mutable_aux_preds__Name_13, hlds__make_hlds__add_mutable_aux_preds__PredStatus_9, hlds__make_hlds__add_mutable_aux_preds__NeedQual_10, hlds__make_hlds__add_mutable_aux_preds__Context_19, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_38, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_42_42, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_40, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_43_43);
            }
#line 90 "add_mutable_aux_preds.m"
            break;
#line 90 "add_mutable_aux_preds.m"
        }
#line 97 "add_mutable_aux_preds.m"
        {
#line 97 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__add_mutable_init_pred_decl_9_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_29, hlds__make_hlds__add_mutable_aux_preds__Name_13, hlds__make_hlds__add_mutable_aux_preds__PredStatus_9, hlds__make_hlds__add_mutable_aux_preds__NeedQual_10, hlds__make_hlds__add_mutable_aux_preds__Context_19, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_42_42, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_44_44, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_43_43, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_45_45);
        }
#line 103 "add_mutable_aux_preds.m"
#line 103 "add_mutable_aux_preds.m"
        switch (hlds__make_hlds__add_mutable_aux_preds__LockUnlock_27) {
#line 103 "add_mutable_aux_preds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 103 "add_mutable_aux_preds.m"
          case (MR_Integer) 0:
#line 102 "add_mutable_aux_preds.m"
            {
#line 102 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_48_48 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_44_44;
#line 102 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_49_49 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_45_45;
#line 102 "add_mutable_aux_preds.m"
            }
#line 103 "add_mutable_aux_preds.m"
            break;
#line 103 "add_mutable_aux_preds.m"
          case (MR_Integer) 1:
#line 104 "add_mutable_aux_preds.m"
            {
#line 104 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46;
#line 104 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_47_47;

#line 105 "add_mutable_aux_preds.m"
              {
#line 105 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__add_mutable_lock_pred_decl_9_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_29, hlds__make_hlds__add_mutable_aux_preds__Name_13, hlds__make_hlds__add_mutable_aux_preds__PredStatus_9, hlds__make_hlds__add_mutable_aux_preds__NeedQual_10, hlds__make_hlds__add_mutable_aux_preds__Context_19, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_44_44, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_45_45, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_47_47);
              }
#line 107 "add_mutable_aux_preds.m"
              {
#line 107 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__add_mutable_unlock_pred_decl_9_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_29, hlds__make_hlds__add_mutable_aux_preds__Name_13, hlds__make_hlds__add_mutable_aux_preds__PredStatus_9, hlds__make_hlds__add_mutable_aux_preds__NeedQual_10, hlds__make_hlds__add_mutable_aux_preds__Context_19, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_48_48, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_47_47, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_49_49);
              }
#line 104 "add_mutable_aux_preds.m"
            }
#line 103 "add_mutable_aux_preds.m"
            break;
#line 103 "add_mutable_aux_preds.m"
        }
#line 112 "add_mutable_aux_preds.m"
#line 112 "add_mutable_aux_preds.m"
        switch (hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_28) {
#line 112 "add_mutable_aux_preds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 112 "add_mutable_aux_preds.m"
          case (MR_Integer) 0:
#line 111 "add_mutable_aux_preds.m"
            {
#line 111 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_52_52 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_48_48;
#line 111 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_53_53 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_49_49;
#line 111 "add_mutable_aux_preds.m"
            }
#line 112 "add_mutable_aux_preds.m"
            break;
#line 112 "add_mutable_aux_preds.m"
          case (MR_Integer) 1:
#line 113 "add_mutable_aux_preds.m"
            {
#line 113 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_50_50;
#line 113 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51;

#line 114 "add_mutable_aux_preds.m"
              {
#line 114 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__add_mutable_unsafe_get_pred_decl_11_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_29, hlds__make_hlds__add_mutable_aux_preds__Name_13, hlds__make_hlds__add_mutable_aux_preds__Type_14, hlds__make_hlds__add_mutable_aux_preds__Inst_16, hlds__make_hlds__add_mutable_aux_preds__PredStatus_9, hlds__make_hlds__add_mutable_aux_preds__NeedQual_10, hlds__make_hlds__add_mutable_aux_preds__Context_19, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_48_48, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_50_50, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_49_49, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51);
              }
#line 116 "add_mutable_aux_preds.m"
              {
#line 116 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__add_mutable_unsafe_set_pred_decl_11_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_29, hlds__make_hlds__add_mutable_aux_preds__Name_13, hlds__make_hlds__add_mutable_aux_preds__Type_14, hlds__make_hlds__add_mutable_aux_preds__Inst_16, hlds__make_hlds__add_mutable_aux_preds__PredStatus_9, hlds__make_hlds__add_mutable_aux_preds__NeedQual_10, hlds__make_hlds__add_mutable_aux_preds__Context_19, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_50_50, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_52_52, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_53_53);
              }
#line 113 "add_mutable_aux_preds.m"
            }
#line 112 "add_mutable_aux_preds.m"
            break;
#line 112 "add_mutable_aux_preds.m"
        }
#line 120 "add_mutable_aux_preds.m"
        {
#line 120 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__IsConstant_30 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_17);
        }
#line 121 "add_mutable_aux_preds.m"
        {
#line 121 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__AttachToIO_31 = parse_tree__prog_item__mutable_var_attach_to_io_state_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_17);
        }
#line 146 "add_mutable_aux_preds.m"
#line 146 "add_mutable_aux_preds.m"
        switch (hlds__make_hlds__add_mutable_aux_preds__IsConstant_30) {
#line 146 "add_mutable_aux_preds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 146 "add_mutable_aux_preds.m"
          case (MR_Integer) 1:
#line 123 "add_mutable_aux_preds.m"
            {
#line 123 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__ConstantGetPredDecl_32;
#line 123 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__ConstantSetPredDecl_33;
#line 123 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__V_66_66;
#line 123 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__V_71_71;
#line 123 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__V_76_76;
#line 123 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__V_81_81;
#line 123 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_87_87;
#line 123 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_88_88;

#line 124 "add_mutable_aux_preds.m"
              {
#line 124 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 124 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_66_66, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[0]));
#line 124 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_66_66, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decls_7_p_0_1));
#line 124 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_66_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 124 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_66_66, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PreInit_26));
#line 124 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_66_66, 4) = ((MR_Box) ((MR_Integer) 0));
#line 124 "add_mutable_aux_preds.m"
              }
#line 124 "add_mutable_aux_preds.m"
              {
#line 124 "add_mutable_aux_preds.m"
                mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_66_66, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_mutable_aux_pred_decls\'/7", (MR_String) "PreInit = need_pre_init_pred");
              }
#line 126 "add_mutable_aux_preds.m"
              {
#line 126 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 126 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_71_71, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[1]));
#line 126 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_71_71, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decls_7_p_0_2));
#line 126 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_71_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 126 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_71_71, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockUnlock_27));
#line 126 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_71_71, 4) = ((MR_Box) ((MR_Integer) 0));
#line 126 "add_mutable_aux_preds.m"
              }
#line 126 "add_mutable_aux_preds.m"
              {
#line 126 "add_mutable_aux_preds.m"
                mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_71_71, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_mutable_aux_pred_decls\'/7", (MR_String) "LockUnlock = need_lock_unlock_preds");
              }
#line 128 "add_mutable_aux_preds.m"
              {
#line 128 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 128 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_76_76, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[2]));
#line 128 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_76_76, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decls_7_p_0_3));
#line 128 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_76_76, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 128 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_76_76, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_28));
#line 128 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_76_76, 4) = ((MR_Box) ((MR_Integer) 0));
#line 128 "add_mutable_aux_preds.m"
              }
#line 128 "add_mutable_aux_preds.m"
              {
#line 128 "add_mutable_aux_preds.m"
                mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_76_76, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_mutable_aux_pred_decls\'/7", (MR_String) "UnsafeAccess = need_unsafe_get_set_preds");
              }
#line 130 "add_mutable_aux_preds.m"
              {
#line 130 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 130 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_81_81, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[3]));
#line 130 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_81_81, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decls_7_p_0_4));
#line 130 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_81_81, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 130 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_81_81, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__AttachToIO_31));
#line 130 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_81_81, 4) = ((MR_Box) ((MR_Integer) 0));
#line 130 "add_mutable_aux_preds.m"
              }
#line 130 "add_mutable_aux_preds.m"
              {
#line 130 "add_mutable_aux_preds.m"
                mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_81_81, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_mutable_aux_pred_decls\'/7", (MR_String) "AttachToIO = mutable_attach_to_io_state");
              }
#line 136 "add_mutable_aux_preds.m"
              {
#line 136 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__ConstantGetPredDecl_32 = parse_tree__prog_mutable__constant_get_pred_decl_5_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_29, hlds__make_hlds__add_mutable_aux_preds__Name_13, hlds__make_hlds__add_mutable_aux_preds__Type_14, hlds__make_hlds__add_mutable_aux_preds__Inst_16, hlds__make_hlds__add_mutable_aux_preds__Context_19);
              }
#line 138 "add_mutable_aux_preds.m"
              {
#line 138 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__ConstantSetPredDecl_33 = parse_tree__prog_mutable__constant_set_pred_decl_5_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_29, hlds__make_hlds__add_mutable_aux_preds__Name_13, hlds__make_hlds__add_mutable_aux_preds__Type_14, hlds__make_hlds__add_mutable_aux_preds__Inst_16, hlds__make_hlds__add_mutable_aux_preds__Context_19);
              }
#line 140 "add_mutable_aux_preds.m"
              {
#line 140 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0(hlds__make_hlds__add_mutable_aux_preds__ConstantGetPredDecl_32, hlds__make_hlds__add_mutable_aux_preds__ModuleName_29, hlds__make_hlds__add_mutable_aux_preds__Name_13, (MR_Integer) 6, hlds__make_hlds__add_mutable_aux_preds__PredStatus_9, hlds__make_hlds__add_mutable_aux_preds__NeedQual_10, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_52_52, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_87_87, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_53_53, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_88_88);
              }
#line 143 "add_mutable_aux_preds.m"
              {
#line 143 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0(hlds__make_hlds__add_mutable_aux_preds__ConstantSetPredDecl_33, hlds__make_hlds__add_mutable_aux_preds__ModuleName_29, hlds__make_hlds__add_mutable_aux_preds__Name_13, (MR_Integer) 7, hlds__make_hlds__add_mutable_aux_preds__PredStatus_9, hlds__make_hlds__add_mutable_aux_preds__NeedQual_10, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_87_87, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_39, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_88_88, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_41);
#line 143 "add_mutable_aux_preds.m"
                return;
              }
#line 123 "add_mutable_aux_preds.m"
            }
#line 146 "add_mutable_aux_preds.m"
            break;
#line 146 "add_mutable_aux_preds.m"
          case (MR_Integer) 0:
#line 147 "add_mutable_aux_preds.m"
            {
#line 147 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__StdGetPredDecl_34;
#line 147 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__StdSetPredDecl_35;
#line 147 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_55_55;
#line 147 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_56_56;
#line 147 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_58_58;
#line 147 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_59_59;

#line 151 "add_mutable_aux_preds.m"
              {
#line 151 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__StdGetPredDecl_34 = parse_tree__prog_mutable__std_get_pred_decl_5_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_29, hlds__make_hlds__add_mutable_aux_preds__Name_13, hlds__make_hlds__add_mutable_aux_preds__Type_14, hlds__make_hlds__add_mutable_aux_preds__Inst_16, hlds__make_hlds__add_mutable_aux_preds__Context_19);
              }
#line 153 "add_mutable_aux_preds.m"
              {
#line 153 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__StdSetPredDecl_35 = parse_tree__prog_mutable__std_set_pred_decl_5_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_29, hlds__make_hlds__add_mutable_aux_preds__Name_13, hlds__make_hlds__add_mutable_aux_preds__Type_14, hlds__make_hlds__add_mutable_aux_preds__Inst_16, hlds__make_hlds__add_mutable_aux_preds__Context_19);
              }
#line 155 "add_mutable_aux_preds.m"
              {
#line 155 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0(hlds__make_hlds__add_mutable_aux_preds__StdGetPredDecl_34, hlds__make_hlds__add_mutable_aux_preds__ModuleName_29, hlds__make_hlds__add_mutable_aux_preds__Name_13, (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__PredStatus_9, hlds__make_hlds__add_mutable_aux_preds__NeedQual_10, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_52_52, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_55_55, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_53_53, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_56_56);
              }
#line 158 "add_mutable_aux_preds.m"
              {
#line 158 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0(hlds__make_hlds__add_mutable_aux_preds__StdSetPredDecl_35, hlds__make_hlds__add_mutable_aux_preds__ModuleName_29, hlds__make_hlds__add_mutable_aux_preds__Name_13, (MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__PredStatus_9, hlds__make_hlds__add_mutable_aux_preds__NeedQual_10, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_55_55, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_58_58, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_56_56, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_59_59);
              }
#line 166 "add_mutable_aux_preds.m"
#line 166 "add_mutable_aux_preds.m"
              switch (hlds__make_hlds__add_mutable_aux_preds__AttachToIO_31) {
#line 166 "add_mutable_aux_preds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 166 "add_mutable_aux_preds.m"
                case (MR_Integer) 1:
#line 167 "add_mutable_aux_preds.m"
                  {
#line 167 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__IOGetPredDecl_36;
#line 167 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__IOSetPredDecl_37;
#line 167 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_61_61;
#line 167 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_62_62;

#line 168 "add_mutable_aux_preds.m"
                    {
#line 168 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__IOGetPredDecl_36 = parse_tree__prog_mutable__io_get_pred_decl_5_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_29, hlds__make_hlds__add_mutable_aux_preds__Name_13, hlds__make_hlds__add_mutable_aux_preds__Type_14, hlds__make_hlds__add_mutable_aux_preds__Inst_16, hlds__make_hlds__add_mutable_aux_preds__Context_19);
                    }
#line 170 "add_mutable_aux_preds.m"
                    {
#line 170 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__IOSetPredDecl_37 = parse_tree__prog_mutable__io_set_pred_decl_5_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_29, hlds__make_hlds__add_mutable_aux_preds__Name_13, hlds__make_hlds__add_mutable_aux_preds__Type_14, hlds__make_hlds__add_mutable_aux_preds__Inst_16, hlds__make_hlds__add_mutable_aux_preds__Context_19);
                    }
#line 172 "add_mutable_aux_preds.m"
                    {
#line 172 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0(hlds__make_hlds__add_mutable_aux_preds__IOGetPredDecl_36, hlds__make_hlds__add_mutable_aux_preds__ModuleName_29, hlds__make_hlds__add_mutable_aux_preds__Name_13, (MR_Integer) 2, hlds__make_hlds__add_mutable_aux_preds__PredStatus_9, hlds__make_hlds__add_mutable_aux_preds__NeedQual_10, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_58_58, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_61_61, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_59_59, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_62_62);
                    }
#line 175 "add_mutable_aux_preds.m"
                    {
#line 175 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0(hlds__make_hlds__add_mutable_aux_preds__IOSetPredDecl_37, hlds__make_hlds__add_mutable_aux_preds__ModuleName_29, hlds__make_hlds__add_mutable_aux_preds__Name_13, (MR_Integer) 3, hlds__make_hlds__add_mutable_aux_preds__PredStatus_9, hlds__make_hlds__add_mutable_aux_preds__NeedQual_10, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_61_61, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_39, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_62_62, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_41);
#line 175 "add_mutable_aux_preds.m"
                      return;
                    }
#line 167 "add_mutable_aux_preds.m"
                  }
#line 166 "add_mutable_aux_preds.m"
                  break;
#line 166 "add_mutable_aux_preds.m"
                case (MR_Integer) 0:
#line 165 "add_mutable_aux_preds.m"
                  {
#line 165 "add_mutable_aux_preds.m"
                    *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_39 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_58_58;
#line 165 "add_mutable_aux_preds.m"
                    *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_41 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_59_59;
#line 165 "add_mutable_aux_preds.m"
                  }
#line 166 "add_mutable_aux_preds.m"
                  break;
#line 166 "add_mutable_aux_preds.m"
              }
#line 147 "add_mutable_aux_preds.m"
            }
#line 146 "add_mutable_aux_preds.m"
            break;
#line 146 "add_mutable_aux_preds.m"
        }
#line 77 "add_mutable_aux_preds.m"
      }
#line 70 "add_mutable_aux_preds.m"
  }
#line 22 "add_mutable_aux_preds.m"
}

void mercury__hlds__make_hlds__add_mutable_aux_preds__init(void)
{
}

void mercury__hlds__make_hlds__add_mutable_aux_preds__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_mutable_impl_lang_0);
	MR_register_type_ctor_info(&hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_mutable_target_params_0);
	MR_register_type_ctor_info(&hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_need_lock_unlock_preds_0);
	MR_register_type_ctor_info(&hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_need_pre_init_pred_0);
	MR_register_type_ctor_info(&hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_need_unsafe_get_set_preds_0);
}

void mercury__hlds__make_hlds__add_mutable_aux_preds__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.make_hlds.add_mutable_aux_preds. */
