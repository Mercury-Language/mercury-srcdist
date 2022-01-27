/*
** Automatically generated from `add_mutable_aux_preds.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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
#include "hlds.error_msg_inst.mih"
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
#include "hlds.make_hlds.mih"
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
#include "parse_tree.maybe_error.mih"
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
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.add_clause.mih"
#include "hlds.make_hlds.add_foreign_proc.mih"
#include "hlds.make_hlds.add_pred.mih"
#include "hlds.make_hlds.add_special_pred.mih"
#include "hlds.make_hlds.make_hlds_error.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 159 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 162 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 165 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 168 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 171 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 174 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 177 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_determinism_0;

#line 180 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_0;

#line 183 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_1;

#line 186 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_2;

#line 189 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_3;

#line 192 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_value_ordered_mutable_impl_lang_0[4];

#line 195 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_name_ordered_mutable_impl_lang_0[4];

#line 198 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_mutable_impl_lang_0[4];

#line 201 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_PseudoTypeInfo hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__field_types_mutable_target_params_0_0[6];

#line 204 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_DuArgLocn hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__field_locns_mutable_target_params_0_0[6];

#line 207 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_DuFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_functor_desc_mutable_target_params_0_0;

#line 210 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_stag_ordered_mutable_target_params_0_0[1];

#line 213 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_DuPtagLayout hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_ptag_ordered_mutable_target_params_0[1];

#line 216 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_name_ordered_mutable_target_params_0[1];

#line 219 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_mutable_target_params_0[1];

#line 222 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_lock_unlock_preds_0_0;

#line 225 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_lock_unlock_preds_0_1;

#line 228 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_value_ordered_need_lock_unlock_preds_0[2];

#line 231 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_name_ordered_need_lock_unlock_preds_0[2];

#line 234 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_need_lock_unlock_preds_0[2];

#line 237 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_pre_init_pred_0_0;

#line 240 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_pre_init_pred_0_1;

#line 243 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_value_ordered_need_pre_init_pred_0[2];

#line 246 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_name_ordered_need_pre_init_pred_0[2];

#line 249 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_need_pre_init_pred_0[2];

#line 252 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_unsafe_get_set_preds_0_0;

#line 255 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_unsafe_get_set_preds_0_1;

#line 258 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_value_ordered_need_unsafe_get_set_preds_0[2];

#line 261 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_name_ordered_need_unsafe_get_set_preds_0[2];

#line 264 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_need_unsafe_get_set_preds_0[2];

#line 267 "hlds.make_hlds.add_mutable_aux_preds.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_impl_lang_0_0_10001(
#line 270 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 272 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2);

#line 275 "hlds.make_hlds.add_mutable_aux_preds.c"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_impl_lang_0_0_10001(
#line 278 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box * hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 280 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2,
#line 282 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3);

#line 285 "hlds.make_hlds.add_mutable_aux_preds.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_target_params_0_0_10001(
#line 288 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 290 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2);

#line 293 "hlds.make_hlds.add_mutable_aux_preds.c"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_target_params_0_0_10001(
#line 296 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box * hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 298 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2,
#line 300 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3);

#line 303 "hlds.make_hlds.add_mutable_aux_preds.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_lock_unlock_preds_0_0_10001(
#line 306 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 308 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2);

#line 311 "hlds.make_hlds.add_mutable_aux_preds.c"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_lock_unlock_preds_0_0_10001(
#line 314 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box * hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 316 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2,
#line 318 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3);

#line 321 "hlds.make_hlds.add_mutable_aux_preds.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_pre_init_pred_0_0_10001(
#line 324 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 326 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2);

#line 329 "hlds.make_hlds.add_mutable_aux_preds.c"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_pre_init_pred_0_0_10001(
#line 332 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box * hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 334 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2,
#line 336 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3);

#line 339 "hlds.make_hlds.add_mutable_aux_preds.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_unsafe_get_set_preds_0_0_10001(
#line 342 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 344 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2);

#line 347 "hlds.make_hlds.add_mutable_aux_preds.c"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_unsafe_get_set_preds_0_0_10001(
#line 350 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box * hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 352 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2,
#line 354 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3);

#line 1529 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_109_117_116_97_98_108_101_95_116_97_114_103_101_116_95_118_97_114_95_110_97_109_101_95_95_91_54_93_95_48_7_p_0(
#line 1529 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_8,
#line 1529 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_9,
#line 1529 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_10,
#line 1529 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_11,
#line 1529 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_12,
#line 1529 "add_mutable_aux_preds.m"
  MR_String * hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_14);

#line 1321 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_main_get_set_preds__1321__1_2_p_0(
#line 1321 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__AttachToIO_39,
#line 1321 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_258);

#line 1122 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_unsafe_get_set_preds__1122__1_2_p_0(
#line 1122 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_33,
#line 1122 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_68);

#line 1034 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_lock_unlock_preds__1034__1_2_p_0(
#line 1034 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_33,
#line 1034 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_61);

#line 972 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_pre_init_pred__972__1_2_p_0(
#line 972 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_33,
#line 972 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_54);

#line 650 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__650__1_2_p_0(
#line 650 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Constraints_31,
#line 650 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_80);

#line 648 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__648__1_2_p_0(
#line 648 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeDetism_25,
#line 648 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_74);

#line 647 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__647__1_2_p_0(
#line 647 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__WithInst_24,
#line 647 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_69);

#line 646 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__646__1_2_p_0(
#line 646 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__WithType_23,
#line 646 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_64);

#line 644 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__644__1_2_p_0(
#line 644 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredOrFunc_21,
#line 644 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_59);

#line 643 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__643__1_2_p_0(
#line 643 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ExistQVars_29,
#line 643 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_54);

#line 641 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__641__1_2_p_0(
#line 641 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__InstVarSet_28,
#line 641 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_49);

#line 639 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__639__1_2_p_0(
#line 639 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_27,
#line 639 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_44);

#line 466 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_aux_pred_decls_for_mutable__466__1_2_p_0(
#line 466 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__AttachToIO_33,
#line 466 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_87);

#line 464 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_aux_pred_decls_for_mutable__464__1_2_p_0(
#line 464 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_30,
#line 464 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_82);

#line 462 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_aux_pred_decls_for_mutable__462__1_2_p_0(
#line 462 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__LockUnlock_29,
#line 462 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_77);

#line 460 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_aux_pred_decls_for_mutable__460__1_2_p_0(
#line 460 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInit_28,
#line 460 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_72);

#line 1632 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_unsafe_get_set_preds_0_0(
#line 1632 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1632 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1632 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3);

#line 1632 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_unsafe_get_set_preds_0_0(
#line 1632 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1,
#line 1632 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);

#line 1624 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_pre_init_pred_0_0(
#line 1624 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1624 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1624 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3);

#line 1624 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_pre_init_pred_0_0(
#line 1624 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1,
#line 1624 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);

#line 1628 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_lock_unlock_preds_0_0(
#line 1628 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1628 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1628 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3);

#line 1628 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_lock_unlock_preds_0_0(
#line 1628 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1,
#line 1628 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);

#line 1636 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_target_params_0_0(
#line 1636 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1636 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1636 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3);

#line 1636 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_target_params_0_0(
#line 1636 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1636 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);

#line 1618 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_impl_lang_0_0(
#line 1618 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1618 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1618 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3);

#line 1618 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_impl_lang_0_0(
#line 1618 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1,
#line 1618 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);

#line 1650 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__get_mutable_target_params_3_p_0(
#line 1650 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_4,
#line 1650 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_5,
#line 1650 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_6);

#line 1609 "add_mutable_aux_preds.m"
static MR_String MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__global_foreign_type_name_4_f_0(
#line 1609 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1609 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_2,
#line 1609 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_3,
#line 1609 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_4);

#line 1587 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__get_matching_foreign_names_3_p_0(
#line 1587 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1587 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1587 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3);

#line 1553 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__get_global_name_from_foreign_names_9_p_0(
#line 1553 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_10,
#line 1553 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_11,
#line 1553 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_12,
#line 1553 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_13,
#line 1553 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_14,
#line 1553 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignNames_15,
#line 1553 "add_mutable_aux_preds.m"
  MR_String * hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_16,
#line 1553 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_28,
#line 1553 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_29);

#line 1467 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_init_pred_11_p_0(
#line 1467 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12,
#line 1467 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_13,
#line 1467 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_14,
#line 1467 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_15,
#line 1467 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_16,
#line 1467 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_41,
#line 1467 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_42,
#line 1467 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_43,
#line 1467 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_44,
#line 1467 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_45,
#line 1467 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_46);

#line 1321 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_main_get_set_preds_14_p_0_1(
#line 1321 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 1242 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_main_get_set_preds_14_p_0(
#line 1242 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15,
#line 1242 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_16,
#line 1242 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17,
#line 1242 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_18,
#line 1242 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_19,
#line 1242 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_20,
#line 1242 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21,
#line 1242 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_22,
#line 1242 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_87,
#line 1242 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_88,
#line 1242 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_89,
#line 1242 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_90,
#line 1242 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_91,
#line 1242 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_92);

#line 1122 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_unsafe_get_set_preds_12_p_0_1(
#line 1122 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 1105 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_unsafe_get_set_preds_12_p_0(
#line 1105 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13,
#line 1105 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_14,
#line 1105 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15,
#line 1105 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_16,
#line 1105 "add_mutable_aux_preds.m"
  MR_Tuple * hlds__make_hlds__add_mutable_aux_preds__UnsafeGetSetExprs_17,
#line 1105 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_18,
#line 1105 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_58,
#line 1105 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_59,
#line 1105 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_60,
#line 1105 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_61,
#line 1105 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_62,
#line 1105 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_63);

#line 1034 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_lock_unlock_preds_12_p_0_1(
#line 1034 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 1018 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_lock_unlock_preds_12_p_0(
#line 1018 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13,
#line 1018 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_14,
#line 1018 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15,
#line 1018 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_16,
#line 1018 "add_mutable_aux_preds.m"
  MR_Tuple * hlds__make_hlds__add_mutable_aux_preds__LockUnlockExprs_17,
#line 1018 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_18,
#line 1018 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_51,
#line 1018 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_52,
#line 1018 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_53,
#line 1018 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_54,
#line 1018 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_55,
#line 1018 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_56);

#line 972 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_pre_init_pred_12_p_0_1(
#line 972 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 955 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_pre_init_pred_12_p_0(
#line 955 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13,
#line 955 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_14,
#line 955 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15,
#line 955 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_16,
#line 955 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_17,
#line 955 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_18,
#line 955 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_44,
#line 955 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_45,
#line 955 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_46,
#line 955 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_47,
#line 955 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_48,
#line 955 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_49);

#line 871 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_aux_preds_10_p_0(
#line 871 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11,
#line 871 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_12,
#line 871 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_13,
#line 871 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_14,
#line 871 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34,
#line 871 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_35,
#line 871 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_36,
#line 871 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_37,
#line 871 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38,
#line 871 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39);

#line 835 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_global_var_java_6_p_0(
#line 835 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_7,
#line 835 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_8,
#line 835 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_9,
#line 835 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_10,
#line 835 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_15,
#line 835 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_16);

#line 734 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_global_var_c_7_p_0(
#line 734 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_8,
#line 734 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_9,
#line 734 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_10,
#line 734 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_11,
#line 734 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_12,
#line 734 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_26,
#line 734 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_27);

#line 673 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_defns_for_mutable_8_p_0(
#line 673 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9,
#line 673 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_10,
#line 673 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_36,
#line 673 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_37,
#line 673 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_38,
#line 673 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_39,
#line 673 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_40,
#line 673 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_41);

#line 650 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_8(
#line 650 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 648 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_7(
#line 648 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 647 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_6(
#line 647 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 646 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_5(
#line 646 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 644 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_4(
#line 644 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 643 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_3(
#line 643 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 641 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_2(
#line 641 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 639 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_1(
#line 639 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 628 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0(
#line 628 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_11,
#line 628 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_12,
#line 628 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_13,
#line 628 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Kind_14,
#line 628 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_15,
#line 628 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_16,
#line 628 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_36,
#line 628 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_37,
#line 628 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38,
#line 628 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39);

#line 606 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_13_p_0(
#line 606 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_14,
#line 606 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_15,
#line 606 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Kind_16,
#line 606 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_17,
#line 606 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_18,
#line 606 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Purity_19,
#line 606 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_20,
#line 606 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_21,
#line 606 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_22,
#line 606 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_32,
#line 606 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_33,
#line 606 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_34,
#line 606 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_35);

#line 591 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_pre_init_pred_decl_9_p_0(
#line 591 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_10,
#line 591 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_11,
#line 591 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_12,
#line 591 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_13,
#line 591 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_14,
#line 591 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_19,
#line 591 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_20,
#line 591 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_21,
#line 591 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_22);

#line 573 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_init_pred_decl_9_p_0(
#line 573 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_10,
#line 573 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_11,
#line 573 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_12,
#line 573 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_13,
#line 573 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_14,
#line 573 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_19,
#line 573 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_20,
#line 573 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_21,
#line 573 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_22);

#line 534 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_unlock_pred_decl_9_p_0(
#line 534 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_10,
#line 534 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_11,
#line 534 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_12,
#line 534 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_13,
#line 534 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_14,
#line 534 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_19,
#line 534 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_20,
#line 534 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_21,
#line 534 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_22);

#line 530 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_lock_pred_decl_9_p_0(
#line 530 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_10,
#line 530 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_11,
#line 530 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_12,
#line 530 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_13,
#line 530 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_14,
#line 530 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_19,
#line 530 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_20,
#line 530 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_21,
#line 530 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_22);

#line 526 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_unsafe_set_pred_decl_11_p_0(
#line 526 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_12,
#line 526 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_13,
#line 526 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_14,
#line 526 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_15,
#line 526 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_16,
#line 526 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_17,
#line 526 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_18,
#line 526 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_23,
#line 526 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_24,
#line 526 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_25,
#line 526 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_26);

#line 522 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_unsafe_get_pred_decl_11_p_0(
#line 522 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_12,
#line 522 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_13,
#line 522 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_14,
#line 522 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_15,
#line 522 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_16,
#line 522 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_17,
#line 522 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_18,
#line 522 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_23,
#line 522 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_24,
#line 522 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_25,
#line 522 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_26);

#line 466 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0_4(
#line 466 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 464 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0_3(
#line 464 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 462 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0_2(
#line 462 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 460 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0_1(
#line 460 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 398 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0(
#line 398 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_8,
#line 398 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_9,
#line 398 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_10,
#line 398 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_40,
#line 398 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_41,
#line 398 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_42,
#line 398 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_43);

#line 378 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__named_parents_to_pieces_2_p_0(
#line 378 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 378 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);

#line 361 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__invalid_inst_in_mutable_8_p_0(
#line 361 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_9,
#line 361 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_10,
#line 361 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__InstVarSet_11,
#line 361 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ParentInsts_12,
#line 361 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_13,
#line 361 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ProblemPieces_14,
#line 361 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_21,
#line 361 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_22);

#line 327 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__check_mutable_inst_uniqueness_8_p_0(
#line 327 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_9,
#line 327 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_10,
#line 327 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__InstVarSet_11,
#line 327 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ParentInsts_12,
#line 327 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_13,
#line 327 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Uniq_14,
#line 327 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_19,
#line 327 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_20);

#line 312 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__check_mutable_insts_7_p_0(
#line 312 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 312 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 312 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3,
#line 312 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__4_4,
#line 312 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__5_5,
#line 312 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_6,
#line 312 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_7);

#line 298 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__check_mutable_bound_insts_7_p_0(
#line 298 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 298 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 298 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3,
#line 298 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__4_4,
#line 298 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__5_5,
#line 298 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_6,
#line 298 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_7);

#line 186 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__check_mutable_inst_7_p_0(
#line 186 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_8,
#line 186 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_9,
#line 186 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__InstVarSet_10,
#line 186 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ParentInsts_11,
#line 186 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_12,
#line 186 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_69,
#line 186 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_70);


static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[71][2];

static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[3][1];

static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_4[13][5];


#line 109 "add_mutable_aux_preds.m"
/* sealed */ struct hlds__make_hlds__add_mutable_aux_preds__vector_common_type_2_0_s {
#line 109 "add_mutable_aux_preds.m"
  const MR_Word hlds__make_hlds__add_mutable_aux_preds__vector_common_type_2_0__vct_2_f_0;
#line 109 "add_mutable_aux_preds.m"
};

static /* final */ const struct hlds__make_hlds__add_mutable_aux_preds__vector_common_type_2_0_s hlds__make_hlds__add_mutable_aux_preds_vector_common_2[4];



static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[71][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "mutable"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration in non-trailing grade."))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[13])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: trailed"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declarations."))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[18])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "may not appear in"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[19])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is abstract, and thus"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[21])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is constrained, and thus"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[21])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "which may not appear in"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[19])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[27])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[11])))
  },
  /* row 32 */
  {
    ((MR_Box) ((MR_String) "#endif\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_String) ";\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[32])))
  },
  /* row 34 */
  {
    ((MR_Box) ((MR_String) ", MR_MUTEX_ATTR);\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[32])))
  },
  /* row 35 */
  {
    ((MR_Box) ((MR_String) "end\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 36 */
  {
    ((MR_Box) ((MR_String) "       X = Value\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[35])))
  },
  /* row 37 */
  {
    ((MR_Box) ((MR_String) "   {get_mutable_ack, Value} ->\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[36])))
  },
  /* row 38 */
  {
    ((MR_Box) ((MR_String) "receive\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[37])))
  },
  /* row 39 */
  {
    ((MR_Box) ((MR_String) ", self()},\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[38])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "backend."))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[11])))
  },
  /* row 42 */
  {
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[0])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not defined."))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has uniqueness"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "clobbered"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[29])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[47])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "mostly_clobbered"))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[29])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[50])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "mostly_unique"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[29])))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[53])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "unique"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[29])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[56])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 15)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 15)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the inst"))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in the expansion of the named inst"))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 66 */
  {
    ((MR_Box) ((MR_Integer) 22)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 67 */
  {
    ((MR_Box) ((MR_String) ">();\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 68 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: multiple foreign_name attributes"))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "specified for the"))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[3][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[16])))
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

static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_4[13][5] = {
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


static /* final */ const struct hlds__make_hlds__add_mutable_aux_preds__vector_common_type_2_0_s hlds__make_hlds__add_mutable_aux_preds_vector_common_2[4] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 2 },
  /* row 3 */   {     (MR_Integer) 3 },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1790 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1798 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1806 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1814 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__add_mutable_aux_preds__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1822 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1830 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1838 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_determinism_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0
  }
};

#line 1846 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_0 = {
  (MR_String) "mutable_lang_c",
  (MR_Integer) 0
};

#line 1852 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_1 = {
  (MR_String) "mutable_lang_csharp",
  (MR_Integer) 1
};

#line 1858 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_2 = {
  (MR_String) "mutable_lang_java",
  (MR_Integer) 2
};

#line 1864 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_3 = {
  (MR_String) "mutable_lang_erlang",
  (MR_Integer) 3
};

#line 1870 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_value_ordered_mutable_impl_lang_0[4] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_1,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_2,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_3
};

#line 1878 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_name_ordered_mutable_impl_lang_0[4] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_1,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_3,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_2
};

#line 1886 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_mutable_impl_lang_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2
};

#line 1894 "hlds.make_hlds.add_mutable_aux_preds.c"
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

#line 1911 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_PseudoTypeInfo hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__field_types_mutable_target_params_0_0[6] = {
  (MR_PseudoTypeInfo) &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_mutable_impl_lang_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_box_policy_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_need_pre_init_pred_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_need_lock_unlock_preds_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_need_unsafe_get_set_preds_0
};

#line 1921 "hlds.make_hlds.add_mutable_aux_preds.c"
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

#line 1955 "hlds.make_hlds.add_mutable_aux_preds.c"
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

#line 1970 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_stag_ordered_mutable_target_params_0_0[1] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_functor_desc_mutable_target_params_0_0
};

#line 1975 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_DuPtagLayout hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_ptag_ordered_mutable_target_params_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_stag_ordered_mutable_target_params_0_0
  }
};

#line 1984 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_name_ordered_mutable_target_params_0[1] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_functor_desc_mutable_target_params_0_0
};

#line 1989 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_mutable_target_params_0[1] = {
  (MR_Integer) 0
};

#line 1994 "hlds.make_hlds.add_mutable_aux_preds.c"
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

#line 2011 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_lock_unlock_preds_0_0 = {
  (MR_String) "dont_need_lock_unlock_preds",
  (MR_Integer) 0
};

#line 2017 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_lock_unlock_preds_0_1 = {
  (MR_String) "need_lock_unlock_preds",
  (MR_Integer) 1
};

#line 2023 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_value_ordered_need_lock_unlock_preds_0[2] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_lock_unlock_preds_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_lock_unlock_preds_0_1
};

#line 2029 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_name_ordered_need_lock_unlock_preds_0[2] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_lock_unlock_preds_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_lock_unlock_preds_0_1
};

#line 2035 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_need_lock_unlock_preds_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2041 "hlds.make_hlds.add_mutable_aux_preds.c"
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

#line 2058 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_pre_init_pred_0_0 = {
  (MR_String) "dont_need_pre_init_pred",
  (MR_Integer) 0
};

#line 2064 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_pre_init_pred_0_1 = {
  (MR_String) "need_pre_init_pred",
  (MR_Integer) 1
};

#line 2070 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_value_ordered_need_pre_init_pred_0[2] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_pre_init_pred_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_pre_init_pred_0_1
};

#line 2076 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_name_ordered_need_pre_init_pred_0[2] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_pre_init_pred_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_pre_init_pred_0_1
};

#line 2082 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_need_pre_init_pred_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2088 "hlds.make_hlds.add_mutable_aux_preds.c"
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

#line 2105 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_unsafe_get_set_preds_0_0 = {
  (MR_String) "dont_need_unsafe_get_set_preds",
  (MR_Integer) 0
};

#line 2111 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_unsafe_get_set_preds_0_1 = {
  (MR_String) "need_unsafe_get_set_preds",
  (MR_Integer) 1
};

#line 2117 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_value_ordered_need_unsafe_get_set_preds_0[2] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_unsafe_get_set_preds_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_unsafe_get_set_preds_0_1
};

#line 2123 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_name_ordered_need_unsafe_get_set_preds_0[2] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_unsafe_get_set_preds_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_unsafe_get_set_preds_0_1
};

#line 2129 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_need_unsafe_get_set_preds_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2135 "hlds.make_hlds.add_mutable_aux_preds.c"
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

#line 2152 "hlds.make_hlds.add_mutable_aux_preds.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_impl_lang_0_0_10001(
#line 2155 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 2157 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2)
#line 2159 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 2161 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 2163 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 2166 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 2168 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_impl_lang_0_0(((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2));
    }
#line 2171 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 2173 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 2175 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 2178 "hlds.make_hlds.add_mutable_aux_preds.c"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_impl_lang_0_0_10001(
#line 2181 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box * hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 2183 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2,
#line 2185 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3)
#line 2187 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 2189 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 2191 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1;

#line 2194 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 2196 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_impl_lang_0_0(&hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3));
    }
#line 2199 "hlds.make_hlds.add_mutable_aux_preds.c"
    *hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1));
#line 2201 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 2203 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 2206 "hlds.make_hlds.add_mutable_aux_preds.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_target_params_0_0_10001(
#line 2209 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 2211 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2)
#line 2213 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 2215 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 2217 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 2220 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 2222 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_target_params_0_0(((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2));
    }
#line 2225 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 2227 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 2229 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 2232 "hlds.make_hlds.add_mutable_aux_preds.c"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_target_params_0_0_10001(
#line 2235 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box * hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 2237 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2,
#line 2239 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3)
#line 2241 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 2243 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 2245 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1;

#line 2248 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 2250 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_target_params_0_0(&hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3));
    }
#line 2253 "hlds.make_hlds.add_mutable_aux_preds.c"
    *hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1));
#line 2255 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 2257 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 2260 "hlds.make_hlds.add_mutable_aux_preds.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_lock_unlock_preds_0_0_10001(
#line 2263 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 2265 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2)
#line 2267 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 2269 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 2271 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 2274 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 2276 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds____Unify____need_lock_unlock_preds_0_0(((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2));
    }
#line 2279 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 2281 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 2283 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 2286 "hlds.make_hlds.add_mutable_aux_preds.c"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_lock_unlock_preds_0_0_10001(
#line 2289 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box * hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 2291 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2,
#line 2293 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3)
#line 2295 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 2297 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 2299 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1;

#line 2302 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 2304 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds____Compare____need_lock_unlock_preds_0_0(&hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3));
    }
#line 2307 "hlds.make_hlds.add_mutable_aux_preds.c"
    *hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1));
#line 2309 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 2311 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 2314 "hlds.make_hlds.add_mutable_aux_preds.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_pre_init_pred_0_0_10001(
#line 2317 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 2319 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2)
#line 2321 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 2323 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 2325 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 2328 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 2330 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds____Unify____need_pre_init_pred_0_0(((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2));
    }
#line 2333 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 2335 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 2337 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 2340 "hlds.make_hlds.add_mutable_aux_preds.c"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_pre_init_pred_0_0_10001(
#line 2343 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box * hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 2345 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2,
#line 2347 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3)
#line 2349 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 2351 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 2353 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1;

#line 2356 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 2358 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds____Compare____need_pre_init_pred_0_0(&hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3));
    }
#line 2361 "hlds.make_hlds.add_mutable_aux_preds.c"
    *hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1));
#line 2363 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 2365 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 2368 "hlds.make_hlds.add_mutable_aux_preds.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_unsafe_get_set_preds_0_0_10001(
#line 2371 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 2373 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2)
#line 2375 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 2377 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 2379 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 2382 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 2384 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds____Unify____need_unsafe_get_set_preds_0_0(((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2));
    }
#line 2387 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 2389 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 2391 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 2394 "hlds.make_hlds.add_mutable_aux_preds.c"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_unsafe_get_set_preds_0_0_10001(
#line 2397 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box * hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 2399 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2,
#line 2401 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3)
#line 2403 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 2405 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 2407 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1;

#line 2410 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 2412 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds____Compare____need_unsafe_get_set_preds_0_0(&hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3));
    }
#line 2415 "hlds.make_hlds.add_mutable_aux_preds.c"
    *hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1));
#line 2417 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 2419 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 1529 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_109_117_116_97_98_108_101_95_116_97_114_103_101_116_95_118_97_114_95_110_97_109_101_95_95_91_54_93_95_48_7_p_0(
#line 1529 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_8,
#line 1529 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_9,
#line 1529 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_10,
#line 1529 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_11,
#line 1529 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_12,
#line 1529 "add_mutable_aux_preds.m"
  MR_String * hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_14)
#line 1529 "add_mutable_aux_preds.m"
{
#line 1534 "add_mutable_aux_preds.m"
  {
#line 1534 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1534 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_15;

#line 1535 "add_mutable_aux_preds.m"
    {
#line 1535 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_15 = parse_tree__prog_item__mutable_var_maybe_foreign_names_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_9);
    }
#line 1540 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1539 "add_mutable_aux_preds.m"
      {
#line 1539 "add_mutable_aux_preds.m"
        *hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_14 = parse_tree__prog_mutable__mutable_c_var_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_10, hlds__make_hlds__add_mutable_aux_preds__MutableName_11);
      }
#line 1540 "add_mutable_aux_preds.m"
    else
#line 1541 "add_mutable_aux_preds.m"
      {
#line 1541 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_15, (MR_Integer) 0)));
#line 1541 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetMutableNames_29;

#line 1561 "add_mutable_aux_preds.m"
        {
#line 1561 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__get_matching_foreign_names_3_p_0(hlds__make_hlds__add_mutable_aux_preds__ForeignNames_16, hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_12, &hlds__make_hlds__add_mutable_aux_preds__TargetMutableNames_29);
        }
#line 1567 "add_mutable_aux_preds.m"
        if ((hlds__make_hlds__add_mutable_aux_preds__TargetMutableNames_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1566 "add_mutable_aux_preds.m"
          {
#line 1566 "add_mutable_aux_preds.m"
            *hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_14 = parse_tree__prog_mutable__mutable_c_var_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_10, hlds__make_hlds__add_mutable_aux_preds__MutableName_11);
          }
#line 1567 "add_mutable_aux_preds.m"
        else
#line 1567 "add_mutable_aux_preds.m"
          {
#line 1567 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__TargetMutableNames_29, (MR_Integer) 1)));
#line 1567 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__TargetMutableNames_29, (MR_Integer) 0)));

#line 1567 "add_mutable_aux_preds.m"
            if ((hlds__make_hlds__add_mutable_aux_preds__V_64_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1568 "add_mutable_aux_preds.m"
              {
#line 1568 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_65_65, (MR_Integer) 0)));

#line 1568 "add_mutable_aux_preds.m"
                *hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_14 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_65_65, (MR_Integer) 1)));
#line 1568 "add_mutable_aux_preds.m"
              }
#line 1567 "add_mutable_aux_preds.m"
            else
#line 1572 "add_mutable_aux_preds.m"
              {
#line 1572 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__Globals_34;
#line 1572 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_35;
#line 1577 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_47_47;

#line 1573 "add_mutable_aux_preds.m"
                {
#line 1573 "add_mutable_aux_preds.m"
                  hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_8, &hlds__make_hlds__add_mutable_aux_preds__Globals_34);
                }
#line 1574 "add_mutable_aux_preds.m"
                {
#line 1574 "add_mutable_aux_preds.m"
                  libs__globals__get_target_2_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_34, &hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_35);
                }
#line 1577 "add_mutable_aux_preds.m"
                {
#line 1577 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_47_47 = libs__globals__compilation_target_string_1_f_0(hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_35);
                }
#line 1584 "add_mutable_aux_preds.m"
                {
#line 1584 "add_mutable_aux_preds.m"
                  *hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_14 = parse_tree__prog_mutable__mutable_c_var_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_10, hlds__make_hlds__add_mutable_aux_preds__MutableName_11);
                }
#line 1572 "add_mutable_aux_preds.m"
              }
#line 1567 "add_mutable_aux_preds.m"
          }
#line 1541 "add_mutable_aux_preds.m"
      }
#line 1534 "add_mutable_aux_preds.m"
  }
#line 1529 "add_mutable_aux_preds.m"
}

#line 1321 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_main_get_set_preds__1321__1_2_p_0(
#line 1321 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__AttachToIO_39,
#line 1321 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_258)
#line 1321 "add_mutable_aux_preds.m"
{
#line 1321 "add_mutable_aux_preds.m"
  {
#line 1321 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__AttachToIO_39 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_258);

#line 1321 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1321 "add_mutable_aux_preds.m"
  }
#line 1321 "add_mutable_aux_preds.m"
}

#line 1122 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_unsafe_get_set_preds__1122__1_2_p_0(
#line 1122 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_33,
#line 1122 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_68)
#line 1122 "add_mutable_aux_preds.m"
{
#line 1122 "add_mutable_aux_preds.m"
  {
#line 1122 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__IsConstant_33 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_68);

#line 1122 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1122 "add_mutable_aux_preds.m"
  }
#line 1122 "add_mutable_aux_preds.m"
}

#line 1034 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_lock_unlock_preds__1034__1_2_p_0(
#line 1034 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_33,
#line 1034 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_61)
#line 1034 "add_mutable_aux_preds.m"
{
#line 1034 "add_mutable_aux_preds.m"
  {
#line 1034 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__IsConstant_33 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_61);

#line 1034 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1034 "add_mutable_aux_preds.m"
  }
#line 1034 "add_mutable_aux_preds.m"
}

#line 972 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_pre_init_pred__972__1_2_p_0(
#line 972 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_33,
#line 972 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_54)
#line 972 "add_mutable_aux_preds.m"
{
#line 972 "add_mutable_aux_preds.m"
  {
#line 972 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__IsConstant_33 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_54);

#line 972 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 972 "add_mutable_aux_preds.m"
  }
#line 972 "add_mutable_aux_preds.m"
}

#line 650 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__650__1_2_p_0(
#line 650 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Constraints_31,
#line 650 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_80)
#line 650 "add_mutable_aux_preds.m"
{
#line 650 "add_mutable_aux_preds.m"
  {
#line 650 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 650 "add_mutable_aux_preds.m"
    {
#line 650 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = parse_tree__prog_data____Unify____prog_constraints_0_0(hlds__make_hlds__add_mutable_aux_preds__Constraints_31, hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_80);
    }
#line 650 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 650 "add_mutable_aux_preds.m"
  }
#line 650 "add_mutable_aux_preds.m"
}

#line 648 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__648__1_2_p_0(
#line 648 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeDetism_25,
#line 648 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_74)
#line 648 "add_mutable_aux_preds.m"
{
#line 648 "add_mutable_aux_preds.m"
  {
#line 648 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 648 "add_mutable_aux_preds.m"
    {
#line 648 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[6], ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__MaybeDetism_25)), ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_74)));
    }
#line 648 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 648 "add_mutable_aux_preds.m"
  }
#line 648 "add_mutable_aux_preds.m"
}

#line 647 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__647__1_2_p_0(
#line 647 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__WithInst_24,
#line 647 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_69)
#line 647 "add_mutable_aux_preds.m"
{
#line 647 "add_mutable_aux_preds.m"
  {
#line 647 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 647 "add_mutable_aux_preds.m"
    {
#line 647 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[5], ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__WithInst_24)), ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_69)));
    }
#line 647 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 647 "add_mutable_aux_preds.m"
  }
#line 647 "add_mutable_aux_preds.m"
}

#line 646 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__646__1_2_p_0(
#line 646 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__WithType_23,
#line 646 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_64)
#line 646 "add_mutable_aux_preds.m"
{
#line 646 "add_mutable_aux_preds.m"
  {
#line 646 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 646 "add_mutable_aux_preds.m"
    {
#line 646 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[4], ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__WithType_23)), ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_64)));
    }
#line 646 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 646 "add_mutable_aux_preds.m"
  }
#line 646 "add_mutable_aux_preds.m"
}

#line 644 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__644__1_2_p_0(
#line 644 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredOrFunc_21,
#line 644 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_59)
#line 644 "add_mutable_aux_preds.m"
{
#line 644 "add_mutable_aux_preds.m"
  {
#line 644 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__PredOrFunc_21 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_59);

#line 644 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 644 "add_mutable_aux_preds.m"
  }
#line 644 "add_mutable_aux_preds.m"
}

#line 643 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__643__1_2_p_0(
#line 643 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ExistQVars_29,
#line 643 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_54)
#line 643 "add_mutable_aux_preds.m"
{
#line 643 "add_mutable_aux_preds.m"
  {
#line 643 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 643 "add_mutable_aux_preds.m"
    {
#line 643 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[3], ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ExistQVars_29)), ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_54)));
    }
#line 643 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 643 "add_mutable_aux_preds.m"
  }
#line 643 "add_mutable_aux_preds.m"
}

#line 641 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__641__1_2_p_0(
#line 641 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__InstVarSet_28,
#line 641 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_49)
#line 641 "add_mutable_aux_preds.m"
{
#line 641 "add_mutable_aux_preds.m"
  {
#line 641 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 641 "add_mutable_aux_preds.m"
    {
#line 641 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[1], ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InstVarSet_28)), ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_49)));
    }
#line 641 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 641 "add_mutable_aux_preds.m"
  }
#line 641 "add_mutable_aux_preds.m"
}

#line 639 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__639__1_2_p_0(
#line 639 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_27,
#line 639 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_44)
#line 639 "add_mutable_aux_preds.m"
{
#line 639 "add_mutable_aux_preds.m"
  {
#line 639 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 639 "add_mutable_aux_preds.m"
    {
#line 639 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[0], ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_27)), ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_44)));
    }
#line 639 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 639 "add_mutable_aux_preds.m"
  }
#line 639 "add_mutable_aux_preds.m"
}

#line 466 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_aux_pred_decls_for_mutable__466__1_2_p_0(
#line 466 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__AttachToIO_33,
#line 466 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_87)
#line 466 "add_mutable_aux_preds.m"
{
#line 466 "add_mutable_aux_preds.m"
  {
#line 466 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__AttachToIO_33 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_87);

#line 466 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 466 "add_mutable_aux_preds.m"
  }
#line 466 "add_mutable_aux_preds.m"
}

#line 464 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_aux_pred_decls_for_mutable__464__1_2_p_0(
#line 464 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_30,
#line 464 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_82)
#line 464 "add_mutable_aux_preds.m"
{
#line 464 "add_mutable_aux_preds.m"
  {
#line 464 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_30 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_82);

#line 464 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 464 "add_mutable_aux_preds.m"
  }
#line 464 "add_mutable_aux_preds.m"
}

#line 462 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_aux_pred_decls_for_mutable__462__1_2_p_0(
#line 462 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__LockUnlock_29,
#line 462 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_77)
#line 462 "add_mutable_aux_preds.m"
{
#line 462 "add_mutable_aux_preds.m"
  {
#line 462 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__LockUnlock_29 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_77);

#line 462 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 462 "add_mutable_aux_preds.m"
  }
#line 462 "add_mutable_aux_preds.m"
}

#line 460 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_aux_pred_decls_for_mutable__460__1_2_p_0(
#line 460 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInit_28,
#line 460 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_72)
#line 460 "add_mutable_aux_preds.m"
{
#line 460 "add_mutable_aux_preds.m"
  {
#line 460 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__PreInit_28 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_72);

#line 460 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 460 "add_mutable_aux_preds.m"
  }
#line 460 "add_mutable_aux_preds.m"
}

#line 1632 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_unsafe_get_set_preds_0_0(
#line 1632 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1632 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1632 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3)
#line 1632 "add_mutable_aux_preds.m"
{
#line 1632 "add_mutable_aux_preds.m"
  {
#line 1632 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1632 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar1_4 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2;
#line 1632 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar2_5 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3;

#line 1632 "add_mutable_aux_preds.m"
    {
#line 1632 "add_mutable_aux_preds.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar1_4, hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar2_5);
    }
#line 1632 "add_mutable_aux_preds.m"
  }
#line 1632 "add_mutable_aux_preds.m"
}

#line 1632 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_unsafe_get_set_preds_0_0(
#line 1632 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1,
#line 1632 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2)
#line 1632 "add_mutable_aux_preds.m"
{
#line 2951 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 2953 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);

#line 2956 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 2958 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 1632 "add_mutable_aux_preds.m"
}

#line 1624 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_pre_init_pred_0_0(
#line 1624 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1624 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1624 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3)
#line 1624 "add_mutable_aux_preds.m"
{
#line 1624 "add_mutable_aux_preds.m"
  {
#line 1624 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1624 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar1_4 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2;
#line 1624 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar2_5 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3;

#line 1624 "add_mutable_aux_preds.m"
    {
#line 1624 "add_mutable_aux_preds.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar1_4, hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar2_5);
    }
#line 1624 "add_mutable_aux_preds.m"
  }
#line 1624 "add_mutable_aux_preds.m"
}

#line 1624 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_pre_init_pred_0_0(
#line 1624 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1,
#line 1624 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2)
#line 1624 "add_mutable_aux_preds.m"
{
#line 3002 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 3004 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);

#line 3007 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 3009 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 1624 "add_mutable_aux_preds.m"
}

#line 1628 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_lock_unlock_preds_0_0(
#line 1628 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1628 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1628 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3)
#line 1628 "add_mutable_aux_preds.m"
{
#line 1628 "add_mutable_aux_preds.m"
  {
#line 1628 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1628 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar1_4 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2;
#line 1628 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar2_5 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3;

#line 1628 "add_mutable_aux_preds.m"
    {
#line 1628 "add_mutable_aux_preds.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar1_4, hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar2_5);
    }
#line 1628 "add_mutable_aux_preds.m"
  }
#line 1628 "add_mutable_aux_preds.m"
}

#line 1628 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_lock_unlock_preds_0_0(
#line 1628 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1,
#line 1628 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2)
#line 1628 "add_mutable_aux_preds.m"
{
#line 3053 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 3055 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);

#line 3058 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 3060 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 1628 "add_mutable_aux_preds.m"
}

#line 1636 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_target_params_0_0(
#line 1636 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1636 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1636 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3)
#line 1636 "add_mutable_aux_preds.m"
{
#line 1636 "add_mutable_aux_preds.m"
  {
#line 1636 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1636 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__CastX_21 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2;
#line 1636 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__CastY_22 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3;

#line 1636 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__CastX_21 == hlds__make_hlds__add_mutable_aux_preds__CastY_22);
#line 1636 "add_mutable_aux_preds.m"
    if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 3089 "hlds.make_hlds.add_mutable_aux_preds.c"
      *hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1 = (MR_Integer) 0;
#line 1636 "add_mutable_aux_preds.m"
    else
#line 1636 "add_mutable_aux_preds.m"
      {
#line 1636 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1636 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
#line 1636 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1636 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1636 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1636 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1636 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1636 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
#line 1636 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1636 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1636 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1636 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1636 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_16_16;
#line 1636 "add_mutable_aux_preds.m"
        MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_29_29 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_4_4;
#line 1636 "add_mutable_aux_preds.m"
        MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_30_30 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_10_10;

#line 1636 "add_mutable_aux_preds.m"
        {
#line 1636 "add_mutable_aux_preds.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__make_hlds__add_mutable_aux_preds__V_16_16, hlds__make_hlds__add_mutable_aux_preds__V_29_29, hlds__make_hlds__add_mutable_aux_preds__V_30_30);
        }
#line 3131 "hlds.make_hlds.add_mutable_aux_preds.c"
        hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_16_16 == (MR_Integer) 0);
#line 1636 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__succeeded = !(hlds__make_hlds__add_mutable_aux_preds__succeeded);
#line 1636 "add_mutable_aux_preds.m"
        if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1636 "add_mutable_aux_preds.m"
          *hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1 = hlds__make_hlds__add_mutable_aux_preds__V_16_16;
#line 1636 "add_mutable_aux_preds.m"
        else
#line 1636 "add_mutable_aux_preds.m"
          {
#line 1636 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_17_17;
#line 1636 "add_mutable_aux_preds.m"
            MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_31_31 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_5_5;
#line 1636 "add_mutable_aux_preds.m"
            MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_32_32 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_11_11;

#line 1636 "add_mutable_aux_preds.m"
            {
#line 1636 "add_mutable_aux_preds.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__make_hlds__add_mutable_aux_preds__V_17_17, hlds__make_hlds__add_mutable_aux_preds__V_31_31, hlds__make_hlds__add_mutable_aux_preds__V_32_32);
            }
#line 3155 "hlds.make_hlds.add_mutable_aux_preds.c"
            hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_17_17 == (MR_Integer) 0);
#line 1636 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__succeeded = !(hlds__make_hlds__add_mutable_aux_preds__succeeded);
#line 1636 "add_mutable_aux_preds.m"
            if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1636 "add_mutable_aux_preds.m"
              *hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1 = hlds__make_hlds__add_mutable_aux_preds__V_17_17;
#line 1636 "add_mutable_aux_preds.m"
            else
#line 1636 "add_mutable_aux_preds.m"
              {
#line 1636 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_18_18;
#line 1636 "add_mutable_aux_preds.m"
                MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_33_33 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_6_6;
#line 1636 "add_mutable_aux_preds.m"
                MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_34_34 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_12_12;

#line 1636 "add_mutable_aux_preds.m"
                {
#line 1636 "add_mutable_aux_preds.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__make_hlds__add_mutable_aux_preds__V_18_18, hlds__make_hlds__add_mutable_aux_preds__V_33_33, hlds__make_hlds__add_mutable_aux_preds__V_34_34);
                }
#line 3179 "hlds.make_hlds.add_mutable_aux_preds.c"
                hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_18_18 == (MR_Integer) 0);
#line 1636 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__succeeded = !(hlds__make_hlds__add_mutable_aux_preds__succeeded);
#line 1636 "add_mutable_aux_preds.m"
                if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1636 "add_mutable_aux_preds.m"
                  *hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1 = hlds__make_hlds__add_mutable_aux_preds__V_18_18;
#line 1636 "add_mutable_aux_preds.m"
                else
#line 1636 "add_mutable_aux_preds.m"
                  {
#line 1636 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_19_19;
#line 1636 "add_mutable_aux_preds.m"
                    MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_35_35 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_7_7;
#line 1636 "add_mutable_aux_preds.m"
                    MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_36_36 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_13_13;

#line 1636 "add_mutable_aux_preds.m"
                    {
#line 1636 "add_mutable_aux_preds.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__make_hlds__add_mutable_aux_preds__V_19_19, hlds__make_hlds__add_mutable_aux_preds__V_35_35, hlds__make_hlds__add_mutable_aux_preds__V_36_36);
                    }
#line 3203 "hlds.make_hlds.add_mutable_aux_preds.c"
                    hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_19_19 == (MR_Integer) 0);
#line 1636 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__succeeded = !(hlds__make_hlds__add_mutable_aux_preds__succeeded);
#line 1636 "add_mutable_aux_preds.m"
                    if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1636 "add_mutable_aux_preds.m"
                      *hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1 = hlds__make_hlds__add_mutable_aux_preds__V_19_19;
#line 1636 "add_mutable_aux_preds.m"
                    else
#line 1636 "add_mutable_aux_preds.m"
                      {
#line 1636 "add_mutable_aux_preds.m"
                        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_20_20;
#line 1636 "add_mutable_aux_preds.m"
                        MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_37_37 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_8_8;
#line 1636 "add_mutable_aux_preds.m"
                        MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_38_38 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_14_14;

#line 1636 "add_mutable_aux_preds.m"
                        {
#line 1636 "add_mutable_aux_preds.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__make_hlds__add_mutable_aux_preds__V_20_20, hlds__make_hlds__add_mutable_aux_preds__V_37_37, hlds__make_hlds__add_mutable_aux_preds__V_38_38);
                        }
#line 3227 "hlds.make_hlds.add_mutable_aux_preds.c"
                        hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_20_20 == (MR_Integer) 0);
#line 1636 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__succeeded = !(hlds__make_hlds__add_mutable_aux_preds__succeeded);
#line 1636 "add_mutable_aux_preds.m"
                        if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1636 "add_mutable_aux_preds.m"
                          *hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1 = hlds__make_hlds__add_mutable_aux_preds__V_20_20;
#line 1636 "add_mutable_aux_preds.m"
                        else
#line 1636 "add_mutable_aux_preds.m"
                          {
#line 1636 "add_mutable_aux_preds.m"
                            MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_39_39 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_9_9;
#line 1636 "add_mutable_aux_preds.m"
                            MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_40_40 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_15_15;

#line 1636 "add_mutable_aux_preds.m"
                            {
#line 1636 "add_mutable_aux_preds.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, hlds__make_hlds__add_mutable_aux_preds__V_39_39, hlds__make_hlds__add_mutable_aux_preds__V_40_40);
                            }
#line 1636 "add_mutable_aux_preds.m"
                          }
#line 1636 "add_mutable_aux_preds.m"
                      }
#line 1636 "add_mutable_aux_preds.m"
                  }
#line 1636 "add_mutable_aux_preds.m"
              }
#line 1636 "add_mutable_aux_preds.m"
          }
#line 1636 "add_mutable_aux_preds.m"
      }
#line 1636 "add_mutable_aux_preds.m"
  }
#line 1636 "add_mutable_aux_preds.m"
}

#line 1636 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_target_params_0_0(
#line 1636 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1636 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2)
#line 1636 "add_mutable_aux_preds.m"
{
#line 1636 "add_mutable_aux_preds.m"
  {
#line 1636 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1636 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__CastX_15 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1;
#line 1636 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__CastY_16 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2;

#line 1636 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__CastX_15 == hlds__make_hlds__add_mutable_aux_preds__CastY_16);
#line 1636 "add_mutable_aux_preds.m"
    if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1636 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = MR_TRUE;
#line 1636 "add_mutable_aux_preds.m"
    else
#line 1636 "add_mutable_aux_preds.m"
      {
#line 1636 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_3_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1636 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
#line 1636 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1636 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1636 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1636 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1636 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1636 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
#line 1636 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1636 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1636 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1636 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);

#line 3319 "hlds.make_hlds.add_mutable_aux_preds.c"
        hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_3_3 == hlds__make_hlds__add_mutable_aux_preds__V_9_9);
#line 1636 "add_mutable_aux_preds.m"
        if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1636 "add_mutable_aux_preds.m"
          {
#line 3325 "hlds.make_hlds.add_mutable_aux_preds.c"
            hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_4_4 == hlds__make_hlds__add_mutable_aux_preds__V_10_10);
#line 1636 "add_mutable_aux_preds.m"
            if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1636 "add_mutable_aux_preds.m"
              {
#line 3331 "hlds.make_hlds.add_mutable_aux_preds.c"
                hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_5_5 == hlds__make_hlds__add_mutable_aux_preds__V_11_11);
#line 1636 "add_mutable_aux_preds.m"
                if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1636 "add_mutable_aux_preds.m"
                  {
#line 3337 "hlds.make_hlds.add_mutable_aux_preds.c"
                    hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_6_6 == hlds__make_hlds__add_mutable_aux_preds__V_12_12);
#line 1636 "add_mutable_aux_preds.m"
                    if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1636 "add_mutable_aux_preds.m"
                      {
#line 3343 "hlds.make_hlds.add_mutable_aux_preds.c"
                        hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_7_7 == hlds__make_hlds__add_mutable_aux_preds__V_13_13);
#line 1636 "add_mutable_aux_preds.m"
                        if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 3347 "hlds.make_hlds.add_mutable_aux_preds.c"
                          hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_8_8 == hlds__make_hlds__add_mutable_aux_preds__V_14_14);
#line 1636 "add_mutable_aux_preds.m"
                      }
#line 1636 "add_mutable_aux_preds.m"
                  }
#line 1636 "add_mutable_aux_preds.m"
              }
#line 1636 "add_mutable_aux_preds.m"
          }
#line 1636 "add_mutable_aux_preds.m"
      }
#line 1636 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1636 "add_mutable_aux_preds.m"
  }
#line 1636 "add_mutable_aux_preds.m"
}

#line 1618 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_impl_lang_0_0(
#line 1618 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1618 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1618 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3)
#line 1618 "add_mutable_aux_preds.m"
{
#line 1618 "add_mutable_aux_preds.m"
  {
#line 1618 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1618 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar1_4 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2;
#line 1618 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar2_5 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3;

#line 1618 "add_mutable_aux_preds.m"
    {
#line 1618 "add_mutable_aux_preds.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar1_4, hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar2_5);
    }
#line 1618 "add_mutable_aux_preds.m"
  }
#line 1618 "add_mutable_aux_preds.m"
}

#line 1618 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_impl_lang_0_0(
#line 1618 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1,
#line 1618 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2)
#line 1618 "add_mutable_aux_preds.m"
{
#line 3405 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 3407 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);

#line 3410 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 3412 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 1618 "add_mutable_aux_preds.m"
}

#line 1650 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__get_mutable_target_params_3_p_0(
#line 1650 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_4,
#line 1650 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_5,
#line 1650 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_6)
#line 1650 "add_mutable_aux_preds.m"
{
#line 1653 "add_mutable_aux_preds.m"
  {
#line 1653 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1653 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Globals_7;
#line 1653 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_8;
#line 1653 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ImplLang_9;
#line 1653 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_10;
#line 1653 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInit0_11;
#line 1653 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__LockUnlock0_12;
#line 1653 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess0_13;
#line 1653 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_15;
#line 1653 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_17;
#line 1653 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInit_18;
#line 1653 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__LockUnlock_19;
#line 1653 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_20;
#line 1653 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_21;

#line 1657 "add_mutable_aux_preds.m"
    {
#line 1657 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_4, &hlds__make_hlds__add_mutable_aux_preds__Globals_7);
    }
#line 1658 "add_mutable_aux_preds.m"
    {
#line 1658 "add_mutable_aux_preds.m"
      libs__globals__get_target_2_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_7, &hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_8);
    }
#line 1675 "add_mutable_aux_preds.m"
#line 1675 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_8) {
#line 1675 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1675 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 1661 "add_mutable_aux_preds.m"
        {
#line 1661 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__HighLevelCode_14;

#line 1662 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__ImplLang_9 = (MR_Integer) 0;
#line 1663 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__Lang_10 = (MR_Integer) 0;
#line 1664 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__PreInit0_11 = (MR_Integer) 1;
#line 1665 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LockUnlock0_12 = (MR_Integer) 1;
#line 1666 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess0_13 = (MR_Integer) 1;
#line 1667 "add_mutable_aux_preds.m"
          {
#line 1667 "add_mutable_aux_preds.m"
            libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_7, (MR_Integer) 252, &hlds__make_hlds__add_mutable_aux_preds__HighLevelCode_14);
          }
#line 1671 "add_mutable_aux_preds.m"
#line 1671 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__HighLevelCode_14) {
#line 1671 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1671 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 1670 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_15 = (MR_Integer) 1;
#line 1671 "add_mutable_aux_preds.m"
              break;
#line 1671 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 1673 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_15 = (MR_Integer) 0;
#line 1671 "add_mutable_aux_preds.m"
              break;
#line 1671 "add_mutable_aux_preds.m"
          }
#line 1661 "add_mutable_aux_preds.m"
        }
#line 1675 "add_mutable_aux_preds.m"
        break;
#line 1675 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 1676 "add_mutable_aux_preds.m"
        {
#line 1676 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_16;

#line 1677 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__ImplLang_9 = (MR_Integer) 1;
#line 1678 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__Lang_10 = (MR_Integer) 1;
#line 1679 "add_mutable_aux_preds.m"
          {
#line 1679 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_16 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_5);
          }
#line 1683 "add_mutable_aux_preds.m"
#line 1683 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_16) {
#line 1683 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1683 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 1685 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__PreInit0_11 = (MR_Integer) 0;
#line 1683 "add_mutable_aux_preds.m"
              break;
#line 1683 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 1682 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__PreInit0_11 = (MR_Integer) 1;
#line 1683 "add_mutable_aux_preds.m"
              break;
#line 1683 "add_mutable_aux_preds.m"
          }
#line 1687 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LockUnlock0_12 = (MR_Integer) 0;
#line 1688 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess0_13 = (MR_Integer) 1;
#line 1689 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_15 = (MR_Integer) 0;
#line 1676 "add_mutable_aux_preds.m"
        }
#line 1675 "add_mutable_aux_preds.m"
        break;
#line 1675 "add_mutable_aux_preds.m"
      case (MR_Integer) 3:
#line 1699 "add_mutable_aux_preds.m"
        {
#line 1700 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__ImplLang_9 = (MR_Integer) 3;
#line 1701 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__Lang_10 = (MR_Integer) 3;
#line 1702 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__PreInit0_11 = (MR_Integer) 0;
#line 1703 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LockUnlock0_12 = (MR_Integer) 0;
#line 1704 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess0_13 = (MR_Integer) 0;
#line 1705 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_15 = (MR_Integer) 0;
#line 1699 "add_mutable_aux_preds.m"
        }
#line 1675 "add_mutable_aux_preds.m"
        break;
#line 1675 "add_mutable_aux_preds.m"
      case (MR_Integer) 2:
#line 1691 "add_mutable_aux_preds.m"
        {
#line 1692 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__ImplLang_9 = (MR_Integer) 2;
#line 1693 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__Lang_10 = (MR_Integer) 2;
#line 1694 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__PreInit0_11 = (MR_Integer) 0;
#line 1695 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LockUnlock0_12 = (MR_Integer) 0;
#line 1696 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess0_13 = (MR_Integer) 1;
#line 1697 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_15 = (MR_Integer) 0;
#line 1691 "add_mutable_aux_preds.m"
        }
#line 1675 "add_mutable_aux_preds.m"
        break;
#line 1675 "add_mutable_aux_preds.m"
    }
#line 1707 "add_mutable_aux_preds.m"
    {
#line 1707 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsConstant_17 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_5);
    }
#line 1713 "add_mutable_aux_preds.m"
#line 1713 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__IsConstant_17) {
#line 1713 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1713 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 1714 "add_mutable_aux_preds.m"
        {
#line 1715 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__PreInit_18 = (MR_Integer) 0;
#line 1716 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LockUnlock_19 = (MR_Integer) 0;
#line 1717 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_20 = (MR_Integer) 0;
#line 1714 "add_mutable_aux_preds.m"
        }
#line 1713 "add_mutable_aux_preds.m"
        break;
#line 1713 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 1709 "add_mutable_aux_preds.m"
        {
#line 1710 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__PreInit_18 = hlds__make_hlds__add_mutable_aux_preds__PreInit0_11;
#line 1711 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LockUnlock_19 = hlds__make_hlds__add_mutable_aux_preds__LockUnlock0_12;
#line 1712 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_20 = hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess0_13;
#line 1709 "add_mutable_aux_preds.m"
        }
#line 1713 "add_mutable_aux_preds.m"
        break;
#line 1713 "add_mutable_aux_preds.m"
    }
#line 1719 "add_mutable_aux_preds.m"
    {
#line 1719 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__TargetParams_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1719 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_21, 0) = ((MR_Box) ((hlds__make_hlds__add_mutable_aux_preds__ImplLang_9 | ((((hlds__make_hlds__add_mutable_aux_preds__Lang_10 << (MR_Integer) 2)) | ((((hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_15 << (MR_Integer) 4)) | ((((hlds__make_hlds__add_mutable_aux_preds__PreInit_18 << (MR_Integer) 5)) | ((((hlds__make_hlds__add_mutable_aux_preds__LockUnlock_19 << (MR_Integer) 6)) | ((hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_20 << (MR_Integer) 7)))))))))))));
#line 1719 "add_mutable_aux_preds.m"
    }
#line 1721 "add_mutable_aux_preds.m"
    {
#line 1721 "add_mutable_aux_preds.m"
      MR_Word base;
#line 1721 "add_mutable_aux_preds.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1721 "add_mutable_aux_preds.m"
      *hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_6 = base;
#line 1721 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetParams_21));
#line 1721 "add_mutable_aux_preds.m"
    }
#line 1653 "add_mutable_aux_preds.m"
  }
#line 1650 "add_mutable_aux_preds.m"
}

#line 1609 "add_mutable_aux_preds.m"
static MR_String MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__global_foreign_type_name_4_f_0(
#line 1609 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1609 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_2,
#line 1609 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_3,
#line 1609 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_4)
#line 1609 "add_mutable_aux_preds.m"
{
#line 1612 "add_mutable_aux_preds.m"
  {
#line 1612 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1612 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__HeadVar__5_5;

#line 1612 "add_mutable_aux_preds.m"
#line 1612 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1) {
#line 1612 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1612 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 1612 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__HeadVar__5_5 = (MR_String) "MR_Word";
#line 1612 "add_mutable_aux_preds.m"
        break;
#line 1612 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 1614 "add_mutable_aux_preds.m"
        {
#line 1614 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__HeadVar__5_5 = backend_libs__foreign__mercury_exported_type_to_string_3_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_3, hlds__make_hlds__add_mutable_aux_preds__Lang_2, hlds__make_hlds__add_mutable_aux_preds__Type_4);
        }
#line 1612 "add_mutable_aux_preds.m"
        break;
#line 1612 "add_mutable_aux_preds.m"
    }
#line 1612 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__HeadVar__5_5;
#line 1612 "add_mutable_aux_preds.m"
  }
#line 1609 "add_mutable_aux_preds.m"
}

#line 1587 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__get_matching_foreign_names_3_p_0(
#line 1587 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1587 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1587 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3)
#line 1587 "add_mutable_aux_preds.m"
{
#line 1590 "add_mutable_aux_preds.m"
  {
#line 1590 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 1590 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1590 "add_mutable_aux_preds.m"
      *hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1590 "add_mutable_aux_preds.m"
    else
#line 1592 "add_mutable_aux_preds.m"
      {
#line 1592 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignName_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, (MR_Integer) 0)));
#line 1592 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignNames_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, (MR_Integer) 1)));
#line 1592 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__TailMatchingForeignNames_9;
#line 1592 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_10;
#line 1595 "add_mutable_aux_preds.m"
        MR_String hlds__make_hlds__add_mutable_aux_preds__V_11_11;

#line 1593 "add_mutable_aux_preds.m"
        {
#line 1593 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__get_matching_foreign_names_3_p_0(hlds__make_hlds__add_mutable_aux_preds__ForeignNames_6, hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, &hlds__make_hlds__add_mutable_aux_preds__TailMatchingForeignNames_9);
        }
#line 1595 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignName_5, (MR_Integer) 0)));
#line 1595 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignName_5, (MR_Integer) 1)));
#line 1596 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_10 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);
#line 1596 "add_mutable_aux_preds.m"
        if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1597 "add_mutable_aux_preds.m"
          {
#line 1597 "add_mutable_aux_preds.m"
            MR_Word base;
#line 1597 "add_mutable_aux_preds.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1597 "add_mutable_aux_preds.m"
            *hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3 = base;
#line 1597 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ForeignName_5));
#line 1597 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TailMatchingForeignNames_9));
#line 1597 "add_mutable_aux_preds.m"
          }
#line 1596 "add_mutable_aux_preds.m"
        else
#line 1599 "add_mutable_aux_preds.m"
          *hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3 = hlds__make_hlds__add_mutable_aux_preds__TailMatchingForeignNames_9;
#line 1592 "add_mutable_aux_preds.m"
      }
#line 1590 "add_mutable_aux_preds.m"
  }
#line 1587 "add_mutable_aux_preds.m"
}

#line 1553 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__get_global_name_from_foreign_names_9_p_0(
#line 1553 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_10,
#line 1553 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_11,
#line 1553 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_12,
#line 1553 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_13,
#line 1553 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_14,
#line 1553 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignNames_15,
#line 1553 "add_mutable_aux_preds.m"
  MR_String * hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_16,
#line 1553 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_28,
#line 1553 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_29)
#line 1553 "add_mutable_aux_preds.m"
{
#line 1560 "add_mutable_aux_preds.m"
  {
#line 1560 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1560 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetMutableNames_18;

#line 1561 "add_mutable_aux_preds.m"
    {
#line 1561 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__get_matching_foreign_names_3_p_0(hlds__make_hlds__add_mutable_aux_preds__ForeignNames_15, hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_14, &hlds__make_hlds__add_mutable_aux_preds__TargetMutableNames_18);
    }
#line 1567 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__TargetMutableNames_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1564 "add_mutable_aux_preds.m"
      {
#line 1566 "add_mutable_aux_preds.m"
        {
#line 1566 "add_mutable_aux_preds.m"
          *hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_16 = parse_tree__prog_mutable__mutable_c_var_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_12, hlds__make_hlds__add_mutable_aux_preds__MutableName_13);
        }
#line 1564 "add_mutable_aux_preds.m"
        *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_29 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_28;
#line 1564 "add_mutable_aux_preds.m"
      }
#line 1567 "add_mutable_aux_preds.m"
    else
#line 1567 "add_mutable_aux_preds.m"
      {
#line 1567 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__TargetMutableNames_18, (MR_Integer) 1)));
#line 1567 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__TargetMutableNames_18, (MR_Integer) 0)));

#line 1567 "add_mutable_aux_preds.m"
        if ((hlds__make_hlds__add_mutable_aux_preds__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1568 "add_mutable_aux_preds.m"
          {
#line 1568 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_56_56, (MR_Integer) 0)));

#line 1568 "add_mutable_aux_preds.m"
            *hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_16 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_56_56, (MR_Integer) 1)));
#line 1568 "add_mutable_aux_preds.m"
            *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_29 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_28;
#line 1568 "add_mutable_aux_preds.m"
          }
#line 1567 "add_mutable_aux_preds.m"
        else
#line 1572 "add_mutable_aux_preds.m"
          {
#line 1572 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__Globals_23;
#line 1572 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_24;
#line 1572 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__Pieces_25;
#line 1572 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__Msg_26;
#line 1572 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__Spec_27;
#line 1572 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_33_33;
#line 1572 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_36_36;
#line 1572 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_37_37;
#line 1572 "add_mutable_aux_preds.m"
            MR_String hlds__make_hlds__add_mutable_aux_preds__V_38_38;
#line 1572 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_45_45;
#line 1572 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_46_46;
#line 1572 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_50_50;

#line 1573 "add_mutable_aux_preds.m"
            {
#line 1573 "add_mutable_aux_preds.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_10, &hlds__make_hlds__add_mutable_aux_preds__Globals_23);
            }
#line 1574 "add_mutable_aux_preds.m"
            {
#line 1574 "add_mutable_aux_preds.m"
              libs__globals__get_target_2_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_23, &hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_24);
            }
#line 1577 "add_mutable_aux_preds.m"
            {
#line 1577 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_38_38 = libs__globals__compilation_target_string_1_f_0(hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_24);
            }
#line 1577 "add_mutable_aux_preds.m"
            {
#line 1577 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_37_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1577 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__V_37_37, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_38_38));
#line 1577 "add_mutable_aux_preds.m"
            }
#line 1577 "add_mutable_aux_preds.m"
            {
#line 1577 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1577 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_36_36, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_37_37));
#line 1577 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[41])));
#line 1577 "add_mutable_aux_preds.m"
            }
#line 1576 "add_mutable_aux_preds.m"
            {
#line 1576 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1576 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_33_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[70])));
#line 1576 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_33_33, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_36_36));
#line 1576 "add_mutable_aux_preds.m"
            }
#line 1575 "add_mutable_aux_preds.m"
            {
#line 1575 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__Pieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1575 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__Pieces_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[69])));
#line 1575 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__Pieces_25, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_33_33));
#line 1575 "add_mutable_aux_preds.m"
            }
#line 1579 "add_mutable_aux_preds.m"
            {
#line 1579 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1579 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_46_46, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Pieces_25));
#line 1579 "add_mutable_aux_preds.m"
            }
#line 1579 "add_mutable_aux_preds.m"
            {
#line 1579 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1579 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_45_45, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_46_46));
#line 1579 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1579 "add_mutable_aux_preds.m"
            }
#line 1579 "add_mutable_aux_preds.m"
            {
#line 1579 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__Msg_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1579 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Msg_26, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_11));
#line 1579 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Msg_26, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_45_45));
#line 1579 "add_mutable_aux_preds.m"
            }
#line 1580 "add_mutable_aux_preds.m"
            {
#line 1580 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1580 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_50_50, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Msg_26));
#line 1580 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1580 "add_mutable_aux_preds.m"
            }
#line 1580 "add_mutable_aux_preds.m"
            {
#line 1580 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__Spec_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1580 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Spec_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1580 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Spec_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 1580 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Spec_27, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_50_50));
#line 1580 "add_mutable_aux_preds.m"
            }
#line 1581 "add_mutable_aux_preds.m"
            {
#line 1581 "add_mutable_aux_preds.m"
              MR_Word base;
#line 1581 "add_mutable_aux_preds.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1581 "add_mutable_aux_preds.m"
              *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_29 = base;
#line 1581 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Spec_27));
#line 1581 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_28));
#line 1581 "add_mutable_aux_preds.m"
            }
#line 1584 "add_mutable_aux_preds.m"
            {
#line 1584 "add_mutable_aux_preds.m"
              *hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_16 = parse_tree__prog_mutable__mutable_c_var_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_12, hlds__make_hlds__add_mutable_aux_preds__MutableName_13);
            }
#line 1572 "add_mutable_aux_preds.m"
          }
#line 1567 "add_mutable_aux_preds.m"
      }
#line 1560 "add_mutable_aux_preds.m"
  }
#line 1553 "add_mutable_aux_preds.m"
}

#line 1467 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_init_pred_11_p_0(
#line 1467 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12,
#line 1467 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_13,
#line 1467 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_14,
#line 1467 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_15,
#line 1467 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_16,
#line 1467 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_41,
#line 1467 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_42,
#line 1467 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_43,
#line 1467 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_44,
#line 1467 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_45,
#line 1467 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_46)
#line 1467 "add_mutable_aux_preds.m"
{
#line 1473 "add_mutable_aux_preds.m"
  {
#line 1473 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1473 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_20;
#line 1473 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_21;
#line 1473 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InitTerm_26;
#line 1473 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__VarSetMutable_27;
#line 1473 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_29;
#line 1473 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__X_31;
#line 1473 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__VarSetMutableX_32;
#line 1473 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__VarX_33;
#line 1473 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_34;
#line 1473 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__CallSetExpr_35;
#line 1473 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnifyCallSetExpr_36;
#line 1473 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_37;
#line 1473 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InitPredName_39;
#line 1473 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_49_49;
#line 1473 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_54_54;
#line 1473 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_57_57;
#line 1473 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_59_59;
#line 1473 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__CName_73;
#line 1473 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_74;
#line 1473 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__FPEInfo_75;
#line 1473 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_24_78;
#line 1475 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___OrigType_22;
#line 1475 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Type_23;
#line 1475 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___OrigInst_24;
#line 1475 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Inst_25;
#line 1475 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___MutAttrs_28;
#line 1475 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_30;

#line 1474 "add_mutable_aux_preds.m"
    {
#line 1474 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_41, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_20);
    }
#line 1475 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutableName_21 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12, (MR_Integer) 0)));
#line 1475 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___OrigType_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12, (MR_Integer) 1)));
#line 1475 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Type_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12, (MR_Integer) 2)));
#line 1475 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___OrigInst_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12, (MR_Integer) 3)));
#line 1475 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Inst_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12, (MR_Integer) 4)));
#line 1475 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__InitTerm_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12, (MR_Integer) 5)));
#line 1475 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__VarSetMutable_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12, (MR_Integer) 6)));
#line 1475 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___MutAttrs_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12, (MR_Integer) 7)));
#line 1475 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Context_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12, (MR_Integer) 8)));
#line 1475 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___SeqNum_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12, (MR_Integer) 9)));
#line 1478 "add_mutable_aux_preds.m"
    {
#line 1478 "add_mutable_aux_preds.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "X", &hlds__make_hlds__add_mutable_aux_preds__X_31, hlds__make_hlds__add_mutable_aux_preds__VarSetMutable_27, &hlds__make_hlds__add_mutable_aux_preds__VarSetMutableX_32);
    }
#line 1479 "add_mutable_aux_preds.m"
    {
#line 1479 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__VarX_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1479 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__VarX_33, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_31));
#line 1479 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__VarX_33, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_29));
#line 1479 "add_mutable_aux_preds.m"
    }
#line 1481 "add_mutable_aux_preds.m"
    {
#line 1481 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1481 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_34, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_29));
#line 1481 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_34, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarX_33));
#line 1481 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_34, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InitTerm_26));
#line 1481 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_34, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1481 "add_mutable_aux_preds.m"
    }
#line 1482 "add_mutable_aux_preds.m"
    {
#line 1482 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1482 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_49_49, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarX_33));
#line 1482 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1482 "add_mutable_aux_preds.m"
    }
#line 1482 "add_mutable_aux_preds.m"
    {
#line 1482 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__CallSetExpr_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1482 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallSetExpr_35, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_29));
#line 1482 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallSetExpr_35, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_14));
#line 1482 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallSetExpr_35, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_49_49));
#line 1482 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallSetExpr_35, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1482 "add_mutable_aux_preds.m"
    }
#line 1483 "add_mutable_aux_preds.m"
    {
#line 1483 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__UnifyCallSetExpr_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1483 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__UnifyCallSetExpr_36, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_29));
#line 1483 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__UnifyCallSetExpr_36, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_34));
#line 1483 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__UnifyCallSetExpr_36, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallSetExpr_35));
#line 1483 "add_mutable_aux_preds.m"
    }
#line 1487 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1486 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_37 = hlds__make_hlds__add_mutable_aux_preds__UnifyCallSetExpr_36;
#line 1487 "add_mutable_aux_preds.m"
    else
#line 1488 "add_mutable_aux_preds.m"
      {
#line 1488 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_13, (MR_Integer) 0)));

#line 1489 "add_mutable_aux_preds.m"
        {
#line 1489 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1489 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_37, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_29));
#line 1489 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_37, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_38));
#line 1489 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_37, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnifyCallSetExpr_36));
#line 1489 "add_mutable_aux_preds.m"
        }
#line 1488 "add_mutable_aux_preds.m"
      }
#line 1491 "add_mutable_aux_preds.m"
    {
#line 1491 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__InitPredName_39 = parse_tree__prog_mutable__mutable_init_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_20, hlds__make_hlds__add_mutable_aux_preds__MutableName_21);
    }
#line 1495 "add_mutable_aux_preds.m"
    {
#line 1495 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1495 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_54_54, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_37));
#line 1495 "add_mutable_aux_preds.m"
    }
#line 1494 "add_mutable_aux_preds.m"
    {
#line 1494 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__add_mutable_aux_preds__VarSetMutableX_32, (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__InitPredName_39, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__V_54_54, hlds__make_hlds__add_mutable_aux_preds__PredStatus_16, hlds__make_hlds__add_mutable_aux_preds__Context_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_41, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_57_57, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_43, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_44, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_45, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_59_59);
    }
#line 1515 "add_mutable_aux_preds.m"
    {
#line 1515 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_new_user_init_pred_5_p_0(hlds__make_hlds__add_mutable_aux_preds__InitPredName_39, (MR_Integer) 0, &hlds__make_hlds__add_mutable_aux_preds__CName_73, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_57_57, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_24_78);
    }
#line 1516 "add_mutable_aux_preds.m"
    {
#line 1516 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1516 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_74, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InitPredName_39));
#line 1516 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1516 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_74, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1516 "add_mutable_aux_preds.m"
    }
#line 1517 "add_mutable_aux_preds.m"
    {
#line 1517 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__FPEInfo_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1517 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_75, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Lang_15));
#line 1517 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_75, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_74));
#line 1517 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_75, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CName_73));
#line 1517 "add_mutable_aux_preds.m"
    }
#line 1520 "add_mutable_aux_preds.m"
    {
#line 1520 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0((MR_Word) MR_mkword(MR_mktag(1), ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[68]))), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_75, hlds__make_hlds__add_mutable_aux_preds__Context_29, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_24_78, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_42, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_59_59, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_46);
    }
#line 1473 "add_mutable_aux_preds.m"
  }
#line 1467 "add_mutable_aux_preds.m"
}

#line 1321 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_main_get_set_preds_14_p_0_1(
#line 1321 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 1321 "add_mutable_aux_preds.m"
{
#line 1321 "add_mutable_aux_preds.m"
  {
#line 1321 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1321 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 1321 "add_mutable_aux_preds.m"
    {
#line 1321 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_main_get_set_preds__1321__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 1321 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1321 "add_mutable_aux_preds.m"
  }
#line 1321 "add_mutable_aux_preds.m"
}

#line 1242 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_main_get_set_preds_14_p_0(
#line 1242 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15,
#line 1242 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_16,
#line 1242 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17,
#line 1242 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_18,
#line 1242 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_19,
#line 1242 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_20,
#line 1242 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21,
#line 1242 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_22,
#line 1242 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_87,
#line 1242 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_88,
#line 1242 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_89,
#line 1242 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_90,
#line 1242 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_91,
#line 1242 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_92)
#line 1242 "add_mutable_aux_preds.m"
{
#line 1251 "add_mutable_aux_preds.m"
  {
#line 1251 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1251 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_259_259;
#line 1251 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_26;
#line 1251 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_27;
#line 1251 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_31;
#line 1251 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_34;
#line 1251 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_35;
#line 1251 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_37;
#line 1251 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_38;
#line 1251 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__AttachToIO_39;
#line 1251 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ImplLang_40;
#line 1251 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_42;
#line 1251 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__X_46;
#line 1251 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_47;
#line 1251 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_94_94;
#line 1253 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___OrigType_28;
#line 1253 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Type_29;
#line 1253 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___OrigInst_30;
#line 1253 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___InitTerm_32;
#line 1253 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___VarSetMutable_33;
#line 1253 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_36;
#line 1259 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Lang_41;
#line 1259 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___PreInit_43;
#line 1259 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___LockUnlock_44;
#line 1259 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_45;

#line 1252 "add_mutable_aux_preds.m"
    {
#line 1252 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_87, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_26);
    }
#line 1253 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutableName_27 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15, (MR_Integer) 0)));
#line 1253 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___OrigType_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15, (MR_Integer) 1)));
#line 1253 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Type_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15, (MR_Integer) 2)));
#line 1253 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___OrigInst_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15, (MR_Integer) 3)));
#line 1253 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Inst_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15, (MR_Integer) 4)));
#line 1253 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___InitTerm_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15, (MR_Integer) 5)));
#line 1253 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___VarSetMutable_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15, (MR_Integer) 6)));
#line 1253 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutAttrs_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15, (MR_Integer) 7)));
#line 1253 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Context_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15, (MR_Integer) 8)));
#line 1253 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___SeqNum_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15, (MR_Integer) 9)));
#line 1256 "add_mutable_aux_preds.m"
    {
#line 1256 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsConstant_37 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_34);
    }
#line 1257 "add_mutable_aux_preds.m"
    {
#line 1257 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_38 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_34);
    }
#line 1258 "add_mutable_aux_preds.m"
    {
#line 1258 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__AttachToIO_39 = parse_tree__prog_item__mutable_var_attach_to_io_state_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_34);
    }
#line 1259 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__ImplLang_40 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_16, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1259 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Lang_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_16, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
#line 1259 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_16, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1259 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___PreInit_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_16, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1259 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___LockUnlock_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_16, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1259 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_16, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 4445 "hlds.make_hlds.add_mutable_aux_preds.c"
    hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_259_259 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1261 "add_mutable_aux_preds.m"
    {
#line 1261 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_94_94 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_259_259);
    }
#line 1261 "add_mutable_aux_preds.m"
    {
#line 1261 "add_mutable_aux_preds.m"
      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_259_259, (MR_String) "X", &hlds__make_hlds__add_mutable_aux_preds__X_46, hlds__make_hlds__add_mutable_aux_preds__V_94_94, &hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_47);
    }
#line 1323 "add_mutable_aux_preds.m"
#line 1323 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__IsConstant_37) {
#line 1323 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1323 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 1264 "add_mutable_aux_preds.m"
        {
#line 1264 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_260_260;
#line 1264 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__ConstantGetPredName_48;
#line 1264 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__ConstantGetAttrs0_50;
#line 1264 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__ConstantGetAttrs_51;
#line 1264 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__ConstantGetCode_53;
#line 1264 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__ConstantSetCode_54;
#line 1264 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_55;
#line 1264 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_56;
#line 1264 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_231_231;
#line 1264 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_232_232;
#line 1264 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_234_234;
#line 1264 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_236_236;
#line 1264 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_237_237;
#line 1264 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_238_238;
#line 1264 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_240_240;
#line 1264 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_241_241;
#line 1264 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_243_243;
#line 1264 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_245_245;
#line 1264 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_246_246;
#line 1264 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_249_249;
#line 1264 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_250_250;
#line 1264 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_254_254;

#line 1265 "add_mutable_aux_preds.m"
          {
#line 1265 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__ConstantGetPredName_48 = parse_tree__prog_mutable__mutable_get_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_26, hlds__make_hlds__add_mutable_aux_preds__MutableName_27);
          }
#line 1267 "add_mutable_aux_preds.m"
          {
#line 1267 "add_mutable_aux_preds.m"
            *hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21 = parse_tree__prog_mutable__mutable_secret_set_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_26, hlds__make_hlds__add_mutable_aux_preds__MutableName_27);
          }
#line 1271 "add_mutable_aux_preds.m"
          {
#line 1271 "add_mutable_aux_preds.m"
            parse_tree__prog_data__set_purity_3_p_0((MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__Attrs_18, &hlds__make_hlds__add_mutable_aux_preds__ConstantGetAttrs0_50);
          }
#line 1272 "add_mutable_aux_preds.m"
          {
#line 1272 "add_mutable_aux_preds.m"
            parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__ConstantGetAttrs0_50, &hlds__make_hlds__add_mutable_aux_preds__ConstantGetAttrs_51);
          }
#line 1281 "add_mutable_aux_preds.m"
#line 1281 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__ImplLang_40) {
#line 1281 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1281 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 1281 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 1281 "add_mutable_aux_preds.m"
            case (MR_Integer) 2:
#line 1278 "add_mutable_aux_preds.m"
              {
#line 1278 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_227_227;

#line 1279 "add_mutable_aux_preds.m"
                {
#line 1279 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_227_227 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17, (MR_String) ";\n");
                }
#line 1279 "add_mutable_aux_preds.m"
                {
#line 1279 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__ConstantGetCode_53 = mercury__string__f_43_43_2_f_0((MR_String) "X = ", hlds__make_hlds__add_mutable_aux_preds__V_227_227);
                }
#line 1280 "add_mutable_aux_preds.m"
                {
#line 1280 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__ConstantSetCode_54 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17, (MR_String) " = X;\n");
                }
#line 1278 "add_mutable_aux_preds.m"
              }
#line 1281 "add_mutable_aux_preds.m"
              break;
#line 1281 "add_mutable_aux_preds.m"
            case (MR_Integer) 3:
#line 1282 "add_mutable_aux_preds.m"
              {
#line 1282 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_209_209;
#line 1282 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_211_211;
#line 1282 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_224_224;

#line 1288 "add_mutable_aux_preds.m"
                {
#line 1288 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_211_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1288 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_211_211, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17));
#line 1288 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_211_211, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[39])));
#line 1288 "add_mutable_aux_preds.m"
                }
#line 1287 "add_mutable_aux_preds.m"
                {
#line 1287 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_209_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1287 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_209_209, 0) = ((MR_Box) ((MR_String) "\'ML_erlang_global_server\' ! {get_mutable, "));
#line 1287 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_209_209, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_211_211));
#line 1287 "add_mutable_aux_preds.m"
                }
#line 1286 "add_mutable_aux_preds.m"
                {
#line 1286 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__ConstantGetCode_53 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_209_209);
                }
#line 1296 "add_mutable_aux_preds.m"
                {
#line 1296 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_224_224 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17, (MR_String) ", X}");
                }
#line 1295 "add_mutable_aux_preds.m"
                {
#line 1295 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__ConstantSetCode_54 = mercury__string__f_43_43_2_f_0((MR_String) "\'ML_erlang_global_server\' ! {set_mutable, ", hlds__make_hlds__add_mutable_aux_preds__V_224_224);
                }
#line 1282 "add_mutable_aux_preds.m"
              }
#line 1281 "add_mutable_aux_preds.m"
              break;
#line 1281 "add_mutable_aux_preds.m"
          }
#line 1301 "add_mutable_aux_preds.m"
          {
#line 1301 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_234_234 = parse_tree__prog_mode__out_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_31);
          }
#line 1301 "add_mutable_aux_preds.m"
          {
#line 1301 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_232_232 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1301 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_232_232, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_46));
#line 1301 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_232_232, 1) = ((MR_Box) ((MR_String) "X"));
#line 1301 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_232_232, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_234_234));
#line 1301 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_232_232, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_42));
#line 1301 "add_mutable_aux_preds.m"
          }
#line 1301 "add_mutable_aux_preds.m"
          {
#line 1301 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_231_231 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1301 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_231_231, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_232_232));
#line 1301 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_231_231, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1301 "add_mutable_aux_preds.m"
          }
#line 4647 "hlds.make_hlds.add_mutable_aux_preds.c"
          hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_260_260 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
#line 1303 "add_mutable_aux_preds.m"
          {
#line 1303 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_236_236 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_260_260);
          }
#line 1304 "add_mutable_aux_preds.m"
          {
#line 1304 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_238_238 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1304 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_238_238, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_35));
#line 1304 "add_mutable_aux_preds.m"
          }
#line 1304 "add_mutable_aux_preds.m"
          {
#line 1304 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_237_237 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1304 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_237_237, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ConstantGetCode_53));
#line 1304 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_237_237, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_238_238));
#line 1304 "add_mutable_aux_preds.m"
          }
#line 1298 "add_mutable_aux_preds.m"
          {
#line 1298 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1298 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_55, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ConstantGetAttrs_51));
#line 1298 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_55, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ConstantGetPredName_48));
#line 1298 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_55, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1298 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_55, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_231_231));
#line 1298 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_55, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_47));
#line 1298 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_55, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_236_236));
#line 1298 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_55, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_237_237));
#line 1298 "add_mutable_aux_preds.m"
          }
#line 1311 "add_mutable_aux_preds.m"
          {
#line 1311 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_243_243 = parse_tree__prog_mode__in_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_31);
          }
#line 1311 "add_mutable_aux_preds.m"
          {
#line 1311 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_241_241 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1311 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_241_241, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_46));
#line 1311 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_241_241, 1) = ((MR_Box) ((MR_String) "X"));
#line 1311 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_241_241, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_243_243));
#line 1311 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_241_241, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_42));
#line 1311 "add_mutable_aux_preds.m"
          }
#line 1311 "add_mutable_aux_preds.m"
          {
#line 1311 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_240_240 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1311 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_240_240, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_241_241));
#line 1311 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_240_240, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1311 "add_mutable_aux_preds.m"
          }
#line 1313 "add_mutable_aux_preds.m"
          {
#line 1313 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_245_245 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_260_260);
          }
#line 1314 "add_mutable_aux_preds.m"
          {
#line 1314 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_246_246 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1314 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_246_246, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ConstantSetCode_54));
#line 1314 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_246_246, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_238_238));
#line 1314 "add_mutable_aux_preds.m"
          }
#line 1308 "add_mutable_aux_preds.m"
          {
#line 1308 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1308 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_56, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Attrs_18));
#line 1308 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_56, 1) = ((MR_Box) (*hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21));
#line 1308 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_56, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1308 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_56, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_240_240));
#line 1308 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_56, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_47));
#line 1308 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_56, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_245_245));
#line 1308 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_56, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_246_246));
#line 1308 "add_mutable_aux_preds.m"
          }
#line 1316 "add_mutable_aux_preds.m"
          {
#line 1316 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_55, hlds__make_hlds__add_mutable_aux_preds__PredStatus_22, hlds__make_hlds__add_mutable_aux_preds__Context_35, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_87, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_249_249, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_91, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_250_250);
          }
#line 1318 "add_mutable_aux_preds.m"
          {
#line 1318 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_56, hlds__make_hlds__add_mutable_aux_preds__PredStatus_22, hlds__make_hlds__add_mutable_aux_preds__Context_35, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_249_249, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_88, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_250_250, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_92);
          }
#line 1321 "add_mutable_aux_preds.m"
          {
#line 1321 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_254_254 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1321 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_254_254, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_4[3]));
#line 1321 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_254_254, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__define_main_get_set_preds_14_p_0_1));
#line 1321 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_254_254, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1321 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_254_254, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__AttachToIO_39));
#line 1321 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_254_254, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1321 "add_mutable_aux_preds.m"
          }
#line 1321 "add_mutable_aux_preds.m"
          {
#line 1321 "add_mutable_aux_preds.m"
            mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_254_254, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_main_get_set_preds\'/14", (MR_String) "AttachToIO = mutable_attach_to_io_state");
          }
#line 1264 "add_mutable_aux_preds.m"
          *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_90 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_89;
#line 1264 "add_mutable_aux_preds.m"
        }
#line 1323 "add_mutable_aux_preds.m"
        break;
#line 1323 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 1324 "add_mutable_aux_preds.m"
        {
#line 1324 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__StdGetPredName_57;
#line 1324 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_61;
#line 1324 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_62;
#line 1324 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_174_174;
#line 1324 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_175_175;
#line 1324 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_176_176;

#line 1325 "add_mutable_aux_preds.m"
          {
#line 1325 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__StdGetPredName_57 = parse_tree__prog_mutable__mutable_get_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_26, hlds__make_hlds__add_mutable_aux_preds__MutableName_27);
          }
#line 1326 "add_mutable_aux_preds.m"
          {
#line 1326 "add_mutable_aux_preds.m"
            *hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21 = parse_tree__prog_mutable__mutable_set_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_26, hlds__make_hlds__add_mutable_aux_preds__MutableName_27);
          }
#line 1363 "add_mutable_aux_preds.m"
#line 1363 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__ImplLang_40) {
#line 1363 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1363 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 1363 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 1363 "add_mutable_aux_preds.m"
            case (MR_Integer) 2:
#line 1332 "add_mutable_aux_preds.m"
              {
#line 1332 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr_59;
#line 1332 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr_60;
#line 1332 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__StdPredArgs_65;
#line 1332 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__StdGetPredExpr_66;
#line 1332 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_160_160;
#line 1332 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_164_164;
#line 1332 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_167_167;
#line 1332 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_168_168;
#line 1332 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_169_169;
#line 1332 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_171_171;

#line 1336 "add_mutable_aux_preds.m"
                if ((hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1337 "add_mutable_aux_preds.m"
                  {
#line 1338 "add_mutable_aux_preds.m"
                    {
#line 1338 "add_mutable_aux_preds.m"
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_main_get_set_preds\'/14", (MR_String) "mutable_not_constant but MaybeUnsafeGetSetExprs = no");
#line 1338 "add_mutable_aux_preds.m"
                      return;
                    }
#line 1337 "add_mutable_aux_preds.m"
                  }
#line 1336 "add_mutable_aux_preds.m"
                else
#line 1334 "add_mutable_aux_preds.m"
                  {
#line 1334 "add_mutable_aux_preds.m"
                    MR_Tuple hlds__make_hlds__add_mutable_aux_preds__V_156_156 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_20, (MR_Integer) 0)));

#line 1335 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_156_156, (MR_Integer) 0)));
#line 1335 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_156_156, (MR_Integer) 1)));
#line 1334 "add_mutable_aux_preds.m"
                  }
#line 1345 "add_mutable_aux_preds.m"
                if ((hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1342 "add_mutable_aux_preds.m"
                  {
#line 1343 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_61 = hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr_59;
#line 1344 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_62 = hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr_60;
#line 1342 "add_mutable_aux_preds.m"
                  }
#line 1345 "add_mutable_aux_preds.m"
                else
#line 1346 "add_mutable_aux_preds.m"
                  {
#line 1346 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__CallLockExpr_63;
#line 1346 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr_64;
#line 1346 "add_mutable_aux_preds.m"
                    MR_Tuple hlds__make_hlds__add_mutable_aux_preds__V_157_157 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_19, (MR_Integer) 0)));
#line 1346 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_158_158;
#line 1346 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_159_159;

#line 1346 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__CallLockExpr_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_157_157, (MR_Integer) 0)));
#line 1346 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_157_157, (MR_Integer) 1)));
#line 1348 "add_mutable_aux_preds.m"
                    {
#line 1348 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__V_158_158 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1348 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__V_158_158, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_35));
#line 1348 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__V_158_158, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr_59));
#line 1348 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__V_158_158, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr_64));
#line 1348 "add_mutable_aux_preds.m"
                    }
#line 1347 "add_mutable_aux_preds.m"
                    {
#line 1347 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1347 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_61, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_35));
#line 1347 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_61, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallLockExpr_63));
#line 1347 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_61, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_158_158));
#line 1347 "add_mutable_aux_preds.m"
                    }
#line 1350 "add_mutable_aux_preds.m"
                    {
#line 1350 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__V_159_159 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1350 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__V_159_159, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_35));
#line 1350 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__V_159_159, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr_60));
#line 1350 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__V_159_159, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr_64));
#line 1350 "add_mutable_aux_preds.m"
                    }
#line 1349 "add_mutable_aux_preds.m"
                    {
#line 1349 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_62 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1349 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_62, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_35));
#line 1349 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_62, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallLockExpr_63));
#line 1349 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_62, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_159_159));
#line 1349 "add_mutable_aux_preds.m"
                    }
#line 1346 "add_mutable_aux_preds.m"
                  }
#line 1353 "add_mutable_aux_preds.m"
                {
#line 1353 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_160_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1353 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_160_160, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_46));
#line 1353 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_160_160, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_35));
#line 1353 "add_mutable_aux_preds.m"
                }
#line 1353 "add_mutable_aux_preds.m"
                {
#line 1353 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__StdPredArgs_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1353 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__StdPredArgs_65, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_160_160));
#line 1353 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__StdPredArgs_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1353 "add_mutable_aux_preds.m"
                }
#line 1354 "add_mutable_aux_preds.m"
                {
#line 1354 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__StdGetPredExpr_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1354 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__StdGetPredExpr_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1354 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__StdGetPredExpr_66, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_35));
#line 1354 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__StdGetPredExpr_66, 2) = ((MR_Box) ((MR_Integer) 1));
#line 1354 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__StdGetPredExpr_66, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_61));
#line 1354 "add_mutable_aux_preds.m"
                }
#line 1358 "add_mutable_aux_preds.m"
                {
#line 1358 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1358 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_164_164, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__StdGetPredExpr_66));
#line 1358 "add_mutable_aux_preds.m"
                }
#line 1357 "add_mutable_aux_preds.m"
                {
#line 1357 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_47, (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__StdGetPredName_57, hlds__make_hlds__add_mutable_aux_preds__StdPredArgs_65, hlds__make_hlds__add_mutable_aux_preds__V_164_164, hlds__make_hlds__add_mutable_aux_preds__PredStatus_22, hlds__make_hlds__add_mutable_aux_preds__Context_35, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_87, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_167_167, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_89, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_168_168, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_91, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_169_169);
                }
#line 1361 "add_mutable_aux_preds.m"
                {
#line 1361 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_171_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1361 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_171_171, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_62));
#line 1361 "add_mutable_aux_preds.m"
                }
#line 1360 "add_mutable_aux_preds.m"
                {
#line 1360 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_47, (MR_Integer) 0, *hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21, hlds__make_hlds__add_mutable_aux_preds__StdPredArgs_65, hlds__make_hlds__add_mutable_aux_preds__V_171_171, hlds__make_hlds__add_mutable_aux_preds__PredStatus_22, hlds__make_hlds__add_mutable_aux_preds__Context_35, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_167_167, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_174_174, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_168_168, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_175_175, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_169_169, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_176_176);
                }
#line 1332 "add_mutable_aux_preds.m"
              }
#line 1363 "add_mutable_aux_preds.m"
              break;
#line 1363 "add_mutable_aux_preds.m"
            case (MR_Integer) 3:
#line 1364 "add_mutable_aux_preds.m"
              {
#line 1364 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_262_262;
#line 1364 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__ThreadSafeAttrs_68;
#line 1364 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__ErlangGetAttrs_69;
#line 1364 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__ErlangSetAttrs_70;
#line 1364 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__StdGetCode_71;
#line 1364 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__StdSetCode_72;
#line 1364 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_73;
#line 1364 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_74;
#line 1364 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_122_122;
#line 1364 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_123_123;
#line 1364 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_125_125;
#line 1364 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_127_127;
#line 1364 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_128_128;
#line 1364 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_129_129;
#line 1364 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_131_131;
#line 1364 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_132_132;
#line 1364 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_134_134;
#line 1364 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_136_136;
#line 1364 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_137_137;
#line 1364 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_140_140;
#line 1364 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_141_141;
#line 1364 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_145_145;
#line 1364 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_146_146;

#line 1372 "add_mutable_aux_preds.m"
                {
#line 1372 "add_mutable_aux_preds.m"
                  parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__Attrs_18, &hlds__make_hlds__add_mutable_aux_preds__ThreadSafeAttrs_68);
                }
#line 1373 "add_mutable_aux_preds.m"
                {
#line 1373 "add_mutable_aux_preds.m"
                  parse_tree__prog_data__set_purity_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__ThreadSafeAttrs_68, &hlds__make_hlds__add_mutable_aux_preds__ErlangGetAttrs_69);
                }
#line 1374 "add_mutable_aux_preds.m"
                {
#line 1374 "add_mutable_aux_preds.m"
                  parse_tree__prog_data__set_purity_3_p_0((MR_Integer) 2, hlds__make_hlds__add_mutable_aux_preds__ThreadSafeAttrs_68, &hlds__make_hlds__add_mutable_aux_preds__ErlangSetAttrs_70);
                }
#line 1381 "add_mutable_aux_preds.m"
#line 1381 "add_mutable_aux_preds.m"
                switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_38) {
#line 1381 "add_mutable_aux_preds.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1381 "add_mutable_aux_preds.m"
                  case (MR_Integer) 0:
#line 1382 "add_mutable_aux_preds.m"
                    {
#line 1382 "add_mutable_aux_preds.m"
                      MR_Word hlds__make_hlds__add_mutable_aux_preds__V_98_98;
#line 1382 "add_mutable_aux_preds.m"
                      MR_Word hlds__make_hlds__add_mutable_aux_preds__V_100_100;
#line 1382 "add_mutable_aux_preds.m"
                      MR_String hlds__make_hlds__add_mutable_aux_preds__V_113_113;

#line 1388 "add_mutable_aux_preds.m"
                      {
#line 1388 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1388 "add_mutable_aux_preds.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_100_100, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17));
#line 1388 "add_mutable_aux_preds.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[39])));
#line 1388 "add_mutable_aux_preds.m"
                      }
#line 1387 "add_mutable_aux_preds.m"
                      {
#line 1387 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1387 "add_mutable_aux_preds.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_98_98, 0) = ((MR_Box) ((MR_String) "\'ML_erlang_global_server\' ! {get_mutable, "));
#line 1387 "add_mutable_aux_preds.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_98_98, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_100_100));
#line 1387 "add_mutable_aux_preds.m"
                      }
#line 1386 "add_mutable_aux_preds.m"
                      {
#line 1386 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__StdGetCode_71 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_98_98);
                      }
#line 1396 "add_mutable_aux_preds.m"
                      {
#line 1396 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__V_113_113 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17, (MR_String) ", X}");
                      }
#line 1395 "add_mutable_aux_preds.m"
                      {
#line 1395 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__StdSetCode_72 = mercury__string__f_43_43_2_f_0((MR_String) "\'ML_erlang_global_server\' ! {set_mutable, ", hlds__make_hlds__add_mutable_aux_preds__V_113_113);
                      }
#line 1382 "add_mutable_aux_preds.m"
                    }
#line 1381 "add_mutable_aux_preds.m"
                    break;
#line 1381 "add_mutable_aux_preds.m"
                  case (MR_Integer) 1:
#line 1376 "add_mutable_aux_preds.m"
                    {
#line 1376 "add_mutable_aux_preds.m"
                      MR_String hlds__make_hlds__add_mutable_aux_preds__V_116_116;
#line 1376 "add_mutable_aux_preds.m"
                      MR_String hlds__make_hlds__add_mutable_aux_preds__V_119_119;

#line 1378 "add_mutable_aux_preds.m"
                      {
#line 1378 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__V_116_116 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17, (MR_String) "})");
                      }
#line 1377 "add_mutable_aux_preds.m"
                      {
#line 1377 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__StdGetCode_71 = mercury__string__f_43_43_2_f_0((MR_String) "X = get({\'MR_thread_local_mutable\', ", hlds__make_hlds__add_mutable_aux_preds__V_116_116);
                      }
#line 1380 "add_mutable_aux_preds.m"
                      {
#line 1380 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__V_119_119 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17, (MR_String) "}, X)");
                      }
#line 1379 "add_mutable_aux_preds.m"
                      {
#line 1379 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__StdSetCode_72 = mercury__string__f_43_43_2_f_0((MR_String) "put({\'MR_thread_local_mutable\', ", hlds__make_hlds__add_mutable_aux_preds__V_119_119);
                      }
#line 1376 "add_mutable_aux_preds.m"
                    }
#line 1381 "add_mutable_aux_preds.m"
                    break;
#line 1381 "add_mutable_aux_preds.m"
                }
#line 1401 "add_mutable_aux_preds.m"
                {
#line 1401 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_125_125 = parse_tree__prog_mode__out_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_31);
                }
#line 1401 "add_mutable_aux_preds.m"
                {
#line 1401 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_123_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1401 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_123_123, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_46));
#line 1401 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_123_123, 1) = ((MR_Box) ((MR_String) "X"));
#line 1401 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_123_123, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_125_125));
#line 1401 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_123_123, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_42));
#line 1401 "add_mutable_aux_preds.m"
                }
#line 1401 "add_mutable_aux_preds.m"
                {
#line 1401 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1401 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_122_122, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_123_123));
#line 1401 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_122_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1401 "add_mutable_aux_preds.m"
                }
#line 5208 "hlds.make_hlds.add_mutable_aux_preds.c"
                hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_262_262 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
#line 1403 "add_mutable_aux_preds.m"
                {
#line 1403 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_127_127 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_262_262);
                }
#line 1404 "add_mutable_aux_preds.m"
                {
#line 1404 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1404 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_129_129, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_35));
#line 1404 "add_mutable_aux_preds.m"
                }
#line 1404 "add_mutable_aux_preds.m"
                {
#line 1404 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_128_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1404 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_128_128, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__StdGetCode_71));
#line 1404 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_128_128, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_129_129));
#line 1404 "add_mutable_aux_preds.m"
                }
#line 1398 "add_mutable_aux_preds.m"
                {
#line 1398 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1398 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_73, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ErlangGetAttrs_69));
#line 1398 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_73, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__StdGetPredName_57));
#line 1398 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_73, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1398 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_73, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_122_122));
#line 1398 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_73, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_47));
#line 1398 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_73, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_127_127));
#line 1398 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_73, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_128_128));
#line 1398 "add_mutable_aux_preds.m"
                }
#line 1409 "add_mutable_aux_preds.m"
                {
#line 1409 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_134_134 = parse_tree__prog_mode__in_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_31);
                }
#line 1409 "add_mutable_aux_preds.m"
                {
#line 1409 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_132_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1409 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_132_132, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_46));
#line 1409 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_132_132, 1) = ((MR_Box) ((MR_String) "X"));
#line 1409 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_132_132, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_134_134));
#line 1409 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_132_132, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_42));
#line 1409 "add_mutable_aux_preds.m"
                }
#line 1409 "add_mutable_aux_preds.m"
                {
#line 1409 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1409 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_131_131, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_132_132));
#line 1409 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_131_131, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1409 "add_mutable_aux_preds.m"
                }
#line 1411 "add_mutable_aux_preds.m"
                {
#line 1411 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_136_136 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_262_262);
                }
#line 1412 "add_mutable_aux_preds.m"
                {
#line 1412 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_137_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1412 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_137_137, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__StdSetCode_72));
#line 1412 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_137_137, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_129_129));
#line 1412 "add_mutable_aux_preds.m"
                }
#line 1406 "add_mutable_aux_preds.m"
                {
#line 1406 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1406 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_74, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ErlangSetAttrs_70));
#line 1406 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_74, 1) = ((MR_Box) (*hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21));
#line 1406 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_74, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1406 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_74, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_131_131));
#line 1406 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_74, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_47));
#line 1406 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_74, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_136_136));
#line 1406 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_74, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_137_137));
#line 1406 "add_mutable_aux_preds.m"
                }
#line 1414 "add_mutable_aux_preds.m"
                {
#line 1414 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_73, hlds__make_hlds__add_mutable_aux_preds__PredStatus_22, hlds__make_hlds__add_mutable_aux_preds__Context_35, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_87, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_140_140, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_91, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_141_141);
                }
#line 1416 "add_mutable_aux_preds.m"
                {
#line 1416 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_74, hlds__make_hlds__add_mutable_aux_preds__PredStatus_22, hlds__make_hlds__add_mutable_aux_preds__Context_35, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_140_140, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_174_174, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_141_141, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_176_176);
                }
#line 1420 "add_mutable_aux_preds.m"
                {
#line 1420 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1420 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_146_146, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_46));
#line 1420 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_146_146, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_35));
#line 1420 "add_mutable_aux_preds.m"
                }
#line 1420 "add_mutable_aux_preds.m"
                {
#line 1420 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_145_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1420 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_145_145, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_146_146));
#line 1420 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_145_145, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1420 "add_mutable_aux_preds.m"
                }
#line 1419 "add_mutable_aux_preds.m"
                {
#line 1419 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1419 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_61, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_35));
#line 1419 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_61, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__StdGetPredName_57));
#line 1419 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_61, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_145_145));
#line 1419 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_61, 3) = ((MR_Box) ((MR_Integer) 1));
#line 1419 "add_mutable_aux_preds.m"
                }
#line 1421 "add_mutable_aux_preds.m"
                {
#line 1421 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1421 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_62, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_35));
#line 1421 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_62, 1) = ((MR_Box) (*hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21));
#line 1421 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_62, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_145_145));
#line 1421 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_62, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1421 "add_mutable_aux_preds.m"
                }
#line 1364 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_175_175 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_89;
#line 1364 "add_mutable_aux_preds.m"
              }
#line 1363 "add_mutable_aux_preds.m"
              break;
#line 1363 "add_mutable_aux_preds.m"
          }
#line 1426 "add_mutable_aux_preds.m"
#line 1426 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__AttachToIO_39) {
#line 1426 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1426 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 1427 "add_mutable_aux_preds.m"
              {
#line 1427 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__IO0_76;
#line 1427 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__IO_77;
#line 1427 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__VarSetXandIOs_78;
#line 1427 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__IOPredArgs_81;
#line 1427 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_82;
#line 1427 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__IOGetPredExpr_83;
#line 1427 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__IOSetPredExpr_84;
#line 1427 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__PureIOGetPredExpr_85;
#line 1427 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__PureIOSetPredExpr_86;
#line 1427 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_VarSet_179_179;
#line 1427 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_182_182;
#line 1427 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_183_183;
#line 1427 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_184_184;
#line 1427 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_185_185;
#line 1427 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_186_186;
#line 1427 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_194_194;
#line 1427 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_197_197;
#line 1427 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_198_198;
#line 1427 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_199_199;
#line 1427 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_201_201;

#line 1430 "add_mutable_aux_preds.m"
                {
#line 1430 "add_mutable_aux_preds.m"
                  mercury__varset__new_named_var_4_p_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_259_259, (MR_String) "IO0", &hlds__make_hlds__add_mutable_aux_preds__IO0_76, hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_47, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_VarSet_179_179);
                }
#line 1431 "add_mutable_aux_preds.m"
                {
#line 1431 "add_mutable_aux_preds.m"
                  mercury__varset__new_named_var_4_p_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_259_259, (MR_String) "IO", &hlds__make_hlds__add_mutable_aux_preds__IO_77, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_VarSet_179_179, &hlds__make_hlds__add_mutable_aux_preds__VarSetXandIOs_78);
                }
#line 1436 "add_mutable_aux_preds.m"
                {
#line 1436 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_182_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1436 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_182_182, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_46));
#line 1436 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_182_182, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_35));
#line 1436 "add_mutable_aux_preds.m"
                }
#line 1437 "add_mutable_aux_preds.m"
                {
#line 1437 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_184_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1437 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_184_184, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__IO0_76));
#line 1437 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_184_184, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_35));
#line 1437 "add_mutable_aux_preds.m"
                }
#line 1437 "add_mutable_aux_preds.m"
                {
#line 1437 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_186_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1437 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_186_186, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__IO_77));
#line 1437 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_186_186, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_35));
#line 1437 "add_mutable_aux_preds.m"
                }
#line 1437 "add_mutable_aux_preds.m"
                {
#line 1437 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_185_185 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1437 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_185_185, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_186_186));
#line 1437 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_185_185, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1437 "add_mutable_aux_preds.m"
                }
#line 1437 "add_mutable_aux_preds.m"
                {
#line 1437 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_183_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1437 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_183_183, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_184_184));
#line 1437 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_183_183, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_185_185));
#line 1437 "add_mutable_aux_preds.m"
                }
#line 1436 "add_mutable_aux_preds.m"
                {
#line 1436 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__IOPredArgs_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1436 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__IOPredArgs_81, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_182_182));
#line 1436 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__IOPredArgs_81, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_183_183));
#line 1436 "add_mutable_aux_preds.m"
                }
#line 1445 "add_mutable_aux_preds.m"
                {
#line 1445 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1445 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_82, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_35));
#line 1445 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_82, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_184_184));
#line 1445 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_82, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_186_186));
#line 1445 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_82, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1445 "add_mutable_aux_preds.m"
                }
#line 1448 "add_mutable_aux_preds.m"
                {
#line 1448 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__IOGetPredExpr_83 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1448 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__IOGetPredExpr_83, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_35));
#line 1448 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__IOGetPredExpr_83, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_61));
#line 1448 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__IOGetPredExpr_83, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_82));
#line 1448 "add_mutable_aux_preds.m"
                }
#line 1449 "add_mutable_aux_preds.m"
                {
#line 1449 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__IOSetPredExpr_84 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1449 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__IOSetPredExpr_84, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_35));
#line 1449 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__IOSetPredExpr_84, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_62));
#line 1449 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__IOSetPredExpr_84, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_82));
#line 1449 "add_mutable_aux_preds.m"
                }
#line 1451 "add_mutable_aux_preds.m"
                {
#line 1451 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__PureIOGetPredExpr_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1451 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOGetPredExpr_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1451 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOGetPredExpr_85, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_35));
#line 1451 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOGetPredExpr_85, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1451 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOGetPredExpr_85, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__IOGetPredExpr_83));
#line 1451 "add_mutable_aux_preds.m"
                }
#line 1453 "add_mutable_aux_preds.m"
                {
#line 1453 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__PureIOSetPredExpr_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1453 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOSetPredExpr_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1453 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOSetPredExpr_86, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_35));
#line 1453 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOSetPredExpr_86, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1453 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOSetPredExpr_86, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__IOSetPredExpr_84));
#line 1453 "add_mutable_aux_preds.m"
                }
#line 1456 "add_mutable_aux_preds.m"
                {
#line 1456 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_194_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1456 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_194_194, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PureIOGetPredExpr_85));
#line 1456 "add_mutable_aux_preds.m"
                }
#line 1455 "add_mutable_aux_preds.m"
                {
#line 1455 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__add_mutable_aux_preds__VarSetXandIOs_78, (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__StdGetPredName_57, hlds__make_hlds__add_mutable_aux_preds__IOPredArgs_81, hlds__make_hlds__add_mutable_aux_preds__V_194_194, hlds__make_hlds__add_mutable_aux_preds__PredStatus_22, hlds__make_hlds__add_mutable_aux_preds__Context_35, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_174_174, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_197_197, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_175_175, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_198_198, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_176_176, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_199_199);
                }
#line 1459 "add_mutable_aux_preds.m"
                {
#line 1459 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_201_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1459 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_201_201, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PureIOSetPredExpr_86));
#line 1459 "add_mutable_aux_preds.m"
                }
#line 1458 "add_mutable_aux_preds.m"
                {
#line 1458 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__add_mutable_aux_preds__VarSetXandIOs_78, (MR_Integer) 0, *hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21, hlds__make_hlds__add_mutable_aux_preds__IOPredArgs_81, hlds__make_hlds__add_mutable_aux_preds__V_201_201, hlds__make_hlds__add_mutable_aux_preds__PredStatus_22, hlds__make_hlds__add_mutable_aux_preds__Context_35, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_197_197, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_88, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_198_198, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_90, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_199_199, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_92);
                }
#line 1427 "add_mutable_aux_preds.m"
              }
#line 1426 "add_mutable_aux_preds.m"
              break;
#line 1426 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 1425 "add_mutable_aux_preds.m"
              {
#line 1425 "add_mutable_aux_preds.m"
                *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_88 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_174_174;
#line 1425 "add_mutable_aux_preds.m"
                *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_90 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_175_175;
#line 1425 "add_mutable_aux_preds.m"
                *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_92 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_176_176;
#line 1425 "add_mutable_aux_preds.m"
              }
#line 1426 "add_mutable_aux_preds.m"
              break;
#line 1426 "add_mutable_aux_preds.m"
          }
#line 1324 "add_mutable_aux_preds.m"
        }
#line 1323 "add_mutable_aux_preds.m"
        break;
#line 1323 "add_mutable_aux_preds.m"
    }
#line 1251 "add_mutable_aux_preds.m"
  }
#line 1242 "add_mutable_aux_preds.m"
}

#line 1122 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_unsafe_get_set_preds_12_p_0_1(
#line 1122 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 1122 "add_mutable_aux_preds.m"
{
#line 1122 "add_mutable_aux_preds.m"
  {
#line 1122 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1122 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 1122 "add_mutable_aux_preds.m"
    {
#line 1122 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_unsafe_get_set_preds__1122__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 1122 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1122 "add_mutable_aux_preds.m"
  }
#line 1122 "add_mutable_aux_preds.m"
}

#line 1105 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_unsafe_get_set_preds_12_p_0(
#line 1105 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13,
#line 1105 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_14,
#line 1105 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15,
#line 1105 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_16,
#line 1105 "add_mutable_aux_preds.m"
  MR_Tuple * hlds__make_hlds__add_mutable_aux_preds__UnsafeGetSetExprs_17,
#line 1105 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_18,
#line 1105 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_58,
#line 1105 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_59,
#line 1105 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_60,
#line 1105 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_61,
#line 1105 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_62,
#line 1105 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_63)
#line 1105 "add_mutable_aux_preds.m"
{
#line 1113 "add_mutable_aux_preds.m"
  {
#line 1113 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1113 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_156_156;
#line 1113 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_157_157;
#line 1113 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_22;
#line 1113 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_23;
#line 1113 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_25;
#line 1113 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_27;
#line 1113 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_30;
#line 1113 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_31;
#line 1113 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_33;
#line 1113 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_34;
#line 1113 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ImplLang_35;
#line 1113 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_36;
#line 1113 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_37;
#line 1113 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__X_41;
#line 1113 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_42;
#line 1113 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeGetAttrs_44;
#line 1113 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeSetAttrs_45;
#line 1113 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TrailedMutable_46;
#line 1113 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__TrailCode_47;
#line 1113 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_48;
#line 1113 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__UnsafeSetCode_49;
#line 1113 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeGetPredName_52;
#line 1113 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeSetPredName_53;
#line 1113 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_54;
#line 1113 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_55;
#line 1113 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr0_56;
#line 1113 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr0_57;
#line 1113 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_64_64;
#line 1113 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_70_70;
#line 1113 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_123_123;
#line 1113 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_124_124;
#line 1113 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_126_126;
#line 1113 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_128_128;
#line 1113 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_129_129;
#line 1113 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_130_130;
#line 1113 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_132_132;
#line 1113 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_133_133;
#line 1113 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_135_135;
#line 1113 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_137_137;
#line 1113 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_138_138;
#line 1113 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__V_139_139;
#line 1113 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_142_142;
#line 1113 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_143_143;
#line 1113 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_147_147;
#line 1113 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_148_148;
#line 1115 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___OrigType_24;
#line 1115 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___OrigInst_26;
#line 1115 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___InitTerm_28;
#line 1115 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___VarSetMutable_29;
#line 1115 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_32;
#line 1120 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___PreInit_38;
#line 1120 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___LockUnlock_39;
#line 1120 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_40;

#line 1114 "add_mutable_aux_preds.m"
    {
#line 1114 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_58, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_22);
    }
#line 1115 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutableName_23 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 0)));
#line 1115 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___OrigType_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 1)));
#line 1115 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Type_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 2)));
#line 1115 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___OrigInst_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 3)));
#line 1115 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Inst_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 4)));
#line 1115 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___InitTerm_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 5)));
#line 1115 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___VarSetMutable_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 6)));
#line 1115 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutAttrs_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 7)));
#line 1115 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Context_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 8)));
#line 1115 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___SeqNum_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 9)));
#line 1118 "add_mutable_aux_preds.m"
    {
#line 1118 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsConstant_33 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_30);
    }
#line 1119 "add_mutable_aux_preds.m"
    {
#line 1119 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_34 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_30);
    }
#line 1120 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__ImplLang_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1120 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Lang_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
#line 1120 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1120 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___PreInit_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1120 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___LockUnlock_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1120 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1122 "add_mutable_aux_preds.m"
    {
#line 1122 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1122 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_64_64, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_4[12]));
#line 1122 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_64_64, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__define_unsafe_get_set_preds_12_p_0_1));
#line 1122 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1122 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_64_64, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__IsConstant_33));
#line 1122 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_64_64, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1122 "add_mutable_aux_preds.m"
    }
#line 1122 "add_mutable_aux_preds.m"
    {
#line 1122 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_64_64, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_unsafe_get_set_preds\'/12", (MR_String) "need_unsafe_get_set_preds, but IsConstant = mutable_constant");
    }
#line 5860 "hlds.make_hlds.add_mutable_aux_preds.c"
    hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_156_156 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1124 "add_mutable_aux_preds.m"
    {
#line 1124 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_70_70 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_156_156);
    }
#line 1124 "add_mutable_aux_preds.m"
    {
#line 1124 "add_mutable_aux_preds.m"
      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_156_156, (MR_String) "X", &hlds__make_hlds__add_mutable_aux_preds__X_41, hlds__make_hlds__add_mutable_aux_preds__V_70_70, &hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_42);
    }
#line 1126 "add_mutable_aux_preds.m"
    {
#line 1126 "add_mutable_aux_preds.m"
      parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__Attrs_16, &hlds__make_hlds__add_mutable_aux_preds__UnsafeSetAttrs_45);
    }
#line 1127 "add_mutable_aux_preds.m"
    {
#line 1127 "add_mutable_aux_preds.m"
      parse_tree__prog_data__set_purity_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__UnsafeSetAttrs_45, &hlds__make_hlds__add_mutable_aux_preds__UnsafeGetAttrs_44);
    }
#line 1130 "add_mutable_aux_preds.m"
    {
#line 1130 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__TrailedMutable_46 = parse_tree__prog_item__mutable_var_trailed_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_30);
    }
#line 1156 "add_mutable_aux_preds.m"
#line 1156 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__ImplLang_35) {
#line 1156 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1156 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 1132 "add_mutable_aux_preds.m"
        {
#line 1136 "add_mutable_aux_preds.m"
#line 1136 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__TrailedMutable_46) {
#line 1136 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1136 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 1137 "add_mutable_aux_preds.m"
              {
#line 1137 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_104_104;

#line 1141 "add_mutable_aux_preds.m"
                {
#line 1141 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_104_104 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ");\n");
                }
#line 1140 "add_mutable_aux_preds.m"
                {
#line 1140 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__TrailCode_47 = mercury__string__f_43_43_2_f_0((MR_String) "MR_trail_current_value(&", hlds__make_hlds__add_mutable_aux_preds__V_104_104);
                }
#line 1137 "add_mutable_aux_preds.m"
              }
#line 1136 "add_mutable_aux_preds.m"
              break;
#line 1136 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 1135 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__TrailCode_47 = (MR_String) "";
#line 1136 "add_mutable_aux_preds.m"
              break;
#line 1136 "add_mutable_aux_preds.m"
          }
#line 1147 "add_mutable_aux_preds.m"
#line 1147 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_34) {
#line 1147 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1147 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 1144 "add_mutable_aux_preds.m"
              {
#line 1144 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_119_119;

#line 1145 "add_mutable_aux_preds.m"
                {
#line 1145 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_119_119 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ";\n");
                }
#line 1145 "add_mutable_aux_preds.m"
                {
#line 1145 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_48 = mercury__string__f_43_43_2_f_0((MR_String) "X = ", hlds__make_hlds__add_mutable_aux_preds__V_119_119);
                }
#line 1146 "add_mutable_aux_preds.m"
                {
#line 1146 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeSetCode_49 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) " = X;\n");
                }
#line 1144 "add_mutable_aux_preds.m"
              }
#line 1147 "add_mutable_aux_preds.m"
              break;
#line 1147 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 1148 "add_mutable_aux_preds.m"
              {
#line 1148 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__TypeName_50;
#line 1148 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_107_107;
#line 1148 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_108_108;
#line 1148 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_110_110;
#line 1148 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_113_113;
#line 1148 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_114_114;
#line 1148 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_116_116;

#line 1149 "add_mutable_aux_preds.m"
                {
#line 1149 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__TypeName_50 = hlds__make_hlds__add_mutable_aux_preds__global_foreign_type_name_4_f_0(hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_37, hlds__make_hlds__add_mutable_aux_preds__Lang_36, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_58, hlds__make_hlds__add_mutable_aux_preds__Type_25);
                }
#line 1152 "add_mutable_aux_preds.m"
                {
#line 1152 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_110_110 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ");\n");
                }
#line 1152 "add_mutable_aux_preds.m"
                {
#line 1152 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_108_108 = mercury__string__f_43_43_2_f_0((MR_String) ", X, ", hlds__make_hlds__add_mutable_aux_preds__V_110_110);
                }
#line 1152 "add_mutable_aux_preds.m"
                {
#line 1152 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_107_107 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeName_50, hlds__make_hlds__add_mutable_aux_preds__V_108_108);
                }
#line 1151 "add_mutable_aux_preds.m"
                {
#line 1151 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_48 = mercury__string__f_43_43_2_f_0((MR_String) "MR_get_thread_local_mutable(", hlds__make_hlds__add_mutable_aux_preds__V_107_107);
                }
#line 1154 "add_mutable_aux_preds.m"
                {
#line 1154 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_116_116 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ");\n");
                }
#line 1154 "add_mutable_aux_preds.m"
                {
#line 1154 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_114_114 = mercury__string__f_43_43_2_f_0((MR_String) ", X, ", hlds__make_hlds__add_mutable_aux_preds__V_116_116);
                }
#line 1154 "add_mutable_aux_preds.m"
                {
#line 1154 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_113_113 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeName_50, hlds__make_hlds__add_mutable_aux_preds__V_114_114);
                }
#line 1153 "add_mutable_aux_preds.m"
                {
#line 1153 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeSetCode_49 = mercury__string__f_43_43_2_f_0((MR_String) "MR_set_thread_local_mutable(", hlds__make_hlds__add_mutable_aux_preds__V_113_113);
                }
#line 1148 "add_mutable_aux_preds.m"
              }
#line 1147 "add_mutable_aux_preds.m"
              break;
#line 1147 "add_mutable_aux_preds.m"
          }
#line 1132 "add_mutable_aux_preds.m"
        }
#line 1156 "add_mutable_aux_preds.m"
        break;
#line 1156 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 1157 "add_mutable_aux_preds.m"
        {
#line 1160 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__TrailCode_47 = (MR_String) "";
#line 1165 "add_mutable_aux_preds.m"
#line 1165 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_34) {
#line 1165 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1165 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 1162 "add_mutable_aux_preds.m"
              {
#line 1162 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_98_98;
#line 1162 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_101_101;

#line 1163 "add_mutable_aux_preds.m"
                {
#line 1163 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_98_98 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ";\n");
                }
#line 1163 "add_mutable_aux_preds.m"
                {
#line 1163 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_48 = mercury__string__f_43_43_2_f_0((MR_String) "\tX = ", hlds__make_hlds__add_mutable_aux_preds__V_98_98);
                }
#line 1164 "add_mutable_aux_preds.m"
                {
#line 1164 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_101_101 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) " = X;\n");
                }
#line 1164 "add_mutable_aux_preds.m"
                {
#line 1164 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeSetCode_49 = mercury__string__f_43_43_2_f_0((MR_String) "\t", hlds__make_hlds__add_mutable_aux_preds__V_101_101);
                }
#line 1162 "add_mutable_aux_preds.m"
              }
#line 1165 "add_mutable_aux_preds.m"
              break;
#line 1165 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 1166 "add_mutable_aux_preds.m"
              {
#line 1166 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__Cast_51;
#line 1166 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_89_89;
#line 1166 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_90_90;
#line 1166 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_92_92;
#line 1166 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_95_95;
#line 1167 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_158_158;

#line 1167 "add_mutable_aux_preds.m"
                {
#line 1167 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_158_158 = parse_tree__builtin_lib_types__int_type_0_f_0();
                }
#line 1167 "add_mutable_aux_preds.m"
                {
#line 1167 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__make_hlds__add_mutable_aux_preds__Type_25, hlds__make_hlds__add_mutable_aux_preds__V_158_158);
                }
#line 1167 "add_mutable_aux_preds.m"
                if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1168 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__Cast_51 = (MR_String) "(int) ";
#line 1167 "add_mutable_aux_preds.m"
                else
#line 1170 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__Cast_51 = (MR_String) "";
#line 1174 "add_mutable_aux_preds.m"
                {
#line 1174 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_92_92 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ");\n");
                }
#line 1173 "add_mutable_aux_preds.m"
                {
#line 1173 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_90_90 = mercury__string__f_43_43_2_f_0((MR_String) "runtime.ThreadLocalMutables.get(", hlds__make_hlds__add_mutable_aux_preds__V_92_92);
                }
#line 1172 "add_mutable_aux_preds.m"
                {
#line 1172 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_89_89 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__Cast_51, hlds__make_hlds__add_mutable_aux_preds__V_90_90);
                }
#line 1172 "add_mutable_aux_preds.m"
                {
#line 1172 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_48 = mercury__string__f_43_43_2_f_0((MR_String) "\tX = ", hlds__make_hlds__add_mutable_aux_preds__V_89_89);
                }
#line 1176 "add_mutable_aux_preds.m"
                {
#line 1176 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_95_95 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ", X);\n");
                }
#line 1175 "add_mutable_aux_preds.m"
                {
#line 1175 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeSetCode_49 = mercury__string__f_43_43_2_f_0((MR_String) "\truntime.ThreadLocalMutables.set(", hlds__make_hlds__add_mutable_aux_preds__V_95_95);
                }
#line 1166 "add_mutable_aux_preds.m"
              }
#line 1165 "add_mutable_aux_preds.m"
              break;
#line 1165 "add_mutable_aux_preds.m"
          }
#line 1157 "add_mutable_aux_preds.m"
        }
#line 1156 "add_mutable_aux_preds.m"
        break;
#line 1156 "add_mutable_aux_preds.m"
      case (MR_Integer) 3:
#line 1193 "add_mutable_aux_preds.m"
        {
#line 1194 "add_mutable_aux_preds.m"
          {
#line 1194 "add_mutable_aux_preds.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_unsafe_get_set_preds\'/12", (MR_String) "unsafe_get_set for erlang");
#line 1194 "add_mutable_aux_preds.m"
            return;
          }
#line 1193 "add_mutable_aux_preds.m"
        }
#line 1156 "add_mutable_aux_preds.m"
        break;
#line 1156 "add_mutable_aux_preds.m"
      case (MR_Integer) 2:
#line 1179 "add_mutable_aux_preds.m"
        {
#line 1182 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__TrailCode_47 = (MR_String) "";
#line 1187 "add_mutable_aux_preds.m"
#line 1187 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_34) {
#line 1187 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1187 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 1184 "add_mutable_aux_preds.m"
              {
#line 1184 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_83_83;
#line 1184 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_86_86;

#line 1185 "add_mutable_aux_preds.m"
                {
#line 1185 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_83_83 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ";\n");
                }
#line 1185 "add_mutable_aux_preds.m"
                {
#line 1185 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_48 = mercury__string__f_43_43_2_f_0((MR_String) "\tX = ", hlds__make_hlds__add_mutable_aux_preds__V_83_83);
                }
#line 1186 "add_mutable_aux_preds.m"
                {
#line 1186 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_86_86 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) " = X;\n");
                }
#line 1186 "add_mutable_aux_preds.m"
                {
#line 1186 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeSetCode_49 = mercury__string__f_43_43_2_f_0((MR_String) "\t", hlds__make_hlds__add_mutable_aux_preds__V_86_86);
                }
#line 1184 "add_mutable_aux_preds.m"
              }
#line 1187 "add_mutable_aux_preds.m"
              break;
#line 1187 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 1188 "add_mutable_aux_preds.m"
              {
#line 1188 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_77_77;
#line 1188 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_80_80;

#line 1189 "add_mutable_aux_preds.m"
                {
#line 1189 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_77_77 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ".get();\n");
                }
#line 1189 "add_mutable_aux_preds.m"
                {
#line 1189 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_48 = mercury__string__f_43_43_2_f_0((MR_String) "\tX = ", hlds__make_hlds__add_mutable_aux_preds__V_77_77);
                }
#line 1190 "add_mutable_aux_preds.m"
                {
#line 1190 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_80_80 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ".set(X);\n");
                }
#line 1190 "add_mutable_aux_preds.m"
                {
#line 1190 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeSetCode_49 = mercury__string__f_43_43_2_f_0((MR_String) "\t", hlds__make_hlds__add_mutable_aux_preds__V_80_80);
                }
#line 1188 "add_mutable_aux_preds.m"
              }
#line 1187 "add_mutable_aux_preds.m"
              break;
#line 1187 "add_mutable_aux_preds.m"
          }
#line 1179 "add_mutable_aux_preds.m"
        }
#line 1156 "add_mutable_aux_preds.m"
        break;
#line 1156 "add_mutable_aux_preds.m"
    }
#line 1197 "add_mutable_aux_preds.m"
    {
#line 1197 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__UnsafeGetPredName_52 = parse_tree__prog_mutable__mutable_unsafe_get_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_22, hlds__make_hlds__add_mutable_aux_preds__MutableName_23);
    }
#line 1199 "add_mutable_aux_preds.m"
    {
#line 1199 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__UnsafeSetPredName_53 = parse_tree__prog_mutable__mutable_unsafe_set_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_22, hlds__make_hlds__add_mutable_aux_preds__MutableName_23);
    }
#line 1204 "add_mutable_aux_preds.m"
    {
#line 1204 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_126_126 = parse_tree__prog_mode__out_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_27);
    }
#line 1204 "add_mutable_aux_preds.m"
    {
#line 1204 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_124_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1204 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_124_124, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_41));
#line 1204 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_124_124, 1) = ((MR_Box) ((MR_String) "X"));
#line 1204 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_124_124, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_126_126));
#line 1204 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_124_124, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_37));
#line 1204 "add_mutable_aux_preds.m"
    }
#line 1204 "add_mutable_aux_preds.m"
    {
#line 1204 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1204 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_123_123, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_124_124));
#line 1204 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_123_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1204 "add_mutable_aux_preds.m"
    }
#line 6293 "hlds.make_hlds.add_mutable_aux_preds.c"
    hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_157_157 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
#line 1206 "add_mutable_aux_preds.m"
    {
#line 1206 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_128_128 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_157_157);
    }
#line 1207 "add_mutable_aux_preds.m"
    {
#line 1207 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1207 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_130_130, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_31));
#line 1207 "add_mutable_aux_preds.m"
    }
#line 1207 "add_mutable_aux_preds.m"
    {
#line 1207 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_129_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1207 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_129_129, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_48));
#line 1207 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_129_129, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_130_130));
#line 1207 "add_mutable_aux_preds.m"
    }
#line 1201 "add_mutable_aux_preds.m"
    {
#line 1201 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1201 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_54, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeGetAttrs_44));
#line 1201 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_54, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeGetPredName_52));
#line 1201 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_54, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1201 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_54, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_123_123));
#line 1201 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_54, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_42));
#line 1201 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_54, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_128_128));
#line 1201 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_54, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_129_129));
#line 1201 "add_mutable_aux_preds.m"
    }
#line 1212 "add_mutable_aux_preds.m"
    {
#line 1212 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_135_135 = parse_tree__prog_mode__in_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_27);
    }
#line 1212 "add_mutable_aux_preds.m"
    {
#line 1212 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_133_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1212 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_133_133, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_41));
#line 1212 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_133_133, 1) = ((MR_Box) ((MR_String) "X"));
#line 1212 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_133_133, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_135_135));
#line 1212 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_133_133, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_37));
#line 1212 "add_mutable_aux_preds.m"
    }
#line 1212 "add_mutable_aux_preds.m"
    {
#line 1212 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1212 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_132_132, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_133_133));
#line 1212 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_132_132, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1212 "add_mutable_aux_preds.m"
    }
#line 1214 "add_mutable_aux_preds.m"
    {
#line 1214 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_137_137 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_157_157);
    }
#line 1215 "add_mutable_aux_preds.m"
    {
#line 1215 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_139_139 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TrailCode_47, hlds__make_hlds__add_mutable_aux_preds__UnsafeSetCode_49);
    }
#line 1215 "add_mutable_aux_preds.m"
    {
#line 1215 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_138_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1215 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_138_138, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_139_139));
#line 1215 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_138_138, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_130_130));
#line 1215 "add_mutable_aux_preds.m"
    }
#line 1209 "add_mutable_aux_preds.m"
    {
#line 1209 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1209 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_55, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeSetAttrs_45));
#line 1209 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_55, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeSetPredName_53));
#line 1209 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_55, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1209 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_55, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_132_132));
#line 1209 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_55, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_42));
#line 1209 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_55, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_137_137));
#line 1209 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_55, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_138_138));
#line 1209 "add_mutable_aux_preds.m"
    }
#line 1217 "add_mutable_aux_preds.m"
    {
#line 1217 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_54, hlds__make_hlds__add_mutable_aux_preds__PredStatus_18, hlds__make_hlds__add_mutable_aux_preds__Context_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_58, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_142_142, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_62, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_143_143);
    }
#line 1219 "add_mutable_aux_preds.m"
    {
#line 1219 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_55, hlds__make_hlds__add_mutable_aux_preds__PredStatus_18, hlds__make_hlds__add_mutable_aux_preds__Context_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_142_142, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_59, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_143_143, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_63);
    }
#line 1223 "add_mutable_aux_preds.m"
    {
#line 1223 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_148_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1223 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_148_148, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_41));
#line 1223 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_148_148, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_31));
#line 1223 "add_mutable_aux_preds.m"
    }
#line 1223 "add_mutable_aux_preds.m"
    {
#line 1223 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_147_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1223 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_147_147, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_148_148));
#line 1223 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_147_147, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1223 "add_mutable_aux_preds.m"
    }
#line 1222 "add_mutable_aux_preds.m"
    {
#line 1222 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr0_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1222 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr0_56, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_31));
#line 1222 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr0_56, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeGetPredName_52));
#line 1222 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr0_56, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_147_147));
#line 1222 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr0_56, 3) = ((MR_Box) ((MR_Integer) 1));
#line 1222 "add_mutable_aux_preds.m"
    }
#line 1224 "add_mutable_aux_preds.m"
    {
#line 1224 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr0_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1224 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr0_57, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_31));
#line 1224 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr0_57, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeSetPredName_53));
#line 1224 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr0_57, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_147_147));
#line 1224 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr0_57, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1224 "add_mutable_aux_preds.m"
    }
#line 1226 "add_mutable_aux_preds.m"
    {
#line 1226 "add_mutable_aux_preds.m"
      MR_Tuple base;
#line 1226 "add_mutable_aux_preds.m"
      base = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1226 "add_mutable_aux_preds.m"
      *hlds__make_hlds__add_mutable_aux_preds__UnsafeGetSetExprs_17 = base;
#line 1226 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr0_56));
#line 1226 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr0_57));
#line 1226 "add_mutable_aux_preds.m"
    }
#line 1113 "add_mutable_aux_preds.m"
    *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_61 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_60;
#line 1113 "add_mutable_aux_preds.m"
  }
#line 1105 "add_mutable_aux_preds.m"
}

#line 1034 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_lock_unlock_preds_12_p_0_1(
#line 1034 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 1034 "add_mutable_aux_preds.m"
{
#line 1034 "add_mutable_aux_preds.m"
  {
#line 1034 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1034 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 1034 "add_mutable_aux_preds.m"
    {
#line 1034 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_lock_unlock_preds__1034__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 1034 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1034 "add_mutable_aux_preds.m"
  }
#line 1034 "add_mutable_aux_preds.m"
}

#line 1018 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_lock_unlock_preds_12_p_0(
#line 1018 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13,
#line 1018 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_14,
#line 1018 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15,
#line 1018 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_16,
#line 1018 "add_mutable_aux_preds.m"
  MR_Tuple * hlds__make_hlds__add_mutable_aux_preds__LockUnlockExprs_17,
#line 1018 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_18,
#line 1018 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_51,
#line 1018 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_52,
#line 1018 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_53,
#line 1018 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_54,
#line 1018 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_55,
#line 1018 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_56)
#line 1018 "add_mutable_aux_preds.m"
{
#line 1025 "add_mutable_aux_preds.m"
  {
#line 1025 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1025 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_22;
#line 1025 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_23;
#line 1025 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_30;
#line 1025 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_31;
#line 1025 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_33;
#line 1025 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_34;
#line 1025 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ImplLang_35;
#line 1025 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_57_57;
#line 1027 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___OrigType_24;
#line 1027 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Type_25;
#line 1027 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___OrigInst_26;
#line 1027 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Inst_27;
#line 1027 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___InitTerm_28;
#line 1027 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___VarSetMutable_29;
#line 1027 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_32;
#line 1032 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Lang_36;
#line 1032 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_37;
#line 1032 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___PreInit_38;
#line 1032 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___LockUnlock_39;
#line 1032 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_40;

#line 1026 "add_mutable_aux_preds.m"
    {
#line 1026 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_51, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_22);
    }
#line 1027 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutableName_23 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 0)));
#line 1027 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___OrigType_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 1)));
#line 1027 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Type_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 2)));
#line 1027 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___OrigInst_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 3)));
#line 1027 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Inst_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 4)));
#line 1027 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___InitTerm_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 5)));
#line 1027 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___VarSetMutable_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 6)));
#line 1027 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutAttrs_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 7)));
#line 1027 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Context_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 8)));
#line 1027 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___SeqNum_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 9)));
#line 1030 "add_mutable_aux_preds.m"
    {
#line 1030 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsConstant_33 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_30);
    }
#line 1031 "add_mutable_aux_preds.m"
    {
#line 1031 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_34 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_30);
    }
#line 1032 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__ImplLang_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1032 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Lang_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
#line 1032 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1032 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___PreInit_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1032 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___LockUnlock_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1032 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1034 "add_mutable_aux_preds.m"
    {
#line 1034 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1034 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_57_57, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_4[12]));
#line 1034 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_57_57, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__define_lock_unlock_preds_12_p_0_1));
#line 1034 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1034 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_57_57, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__IsConstant_33));
#line 1034 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_57_57, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1034 "add_mutable_aux_preds.m"
    }
#line 1034 "add_mutable_aux_preds.m"
    {
#line 1034 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_57_57, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_lock_unlock_preds\'/12", (MR_String) "need_lock_unlock_preds, but IsConstant = mutable_constant");
    }
#line 1092 "add_mutable_aux_preds.m"
#line 1092 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__ImplLang_35) {
#line 1092 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1092 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 1038 "add_mutable_aux_preds.m"
        {
#line 1038 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_121_121;
#line 1038 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_122_122;
#line 1038 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__LockAndUnlockAttrs_41;
#line 1038 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__MutableMutexVarName_42;
#line 1038 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__LockForeignProcBody_43;
#line 1038 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__UnlockForeignProcBody_44;
#line 1038 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__LockPredName_45;
#line 1038 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__UnlockPredName_46;
#line 1038 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_47;
#line 1038 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_48;
#line 1038 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__CallLockExpr0_49;
#line 1038 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr0_50;
#line 1038 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_100_100;
#line 1038 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_101_101;
#line 1038 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_102_102;
#line 1038 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_103_103;
#line 1038 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_106_106;
#line 1038 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_107_107;
#line 1038 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_108_108;
#line 1038 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_111_111;
#line 1038 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_112_112;

#line 1039 "add_mutable_aux_preds.m"
          {
#line 1039 "add_mutable_aux_preds.m"
            parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__Attrs_16, &hlds__make_hlds__add_mutable_aux_preds__LockAndUnlockAttrs_41);
          }
#line 1040 "add_mutable_aux_preds.m"
          {
#line 1040 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__MutableMutexVarName_42 = parse_tree__prog_mutable__mutable_mutex_var_name_1_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15);
          }
#line 1058 "add_mutable_aux_preds.m"
#line 1058 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_34) {
#line 1058 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1058 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 1043 "add_mutable_aux_preds.m"
              {
#line 1043 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_72_72;
#line 1043 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_74_74;
#line 1043 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_75_75;
#line 1043 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_77_77;
#line 1043 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_78_78;
#line 1043 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_80_80;
#line 1043 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_85_85;
#line 1043 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_87_87;
#line 1043 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_88_88;
#line 1043 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_90_90;
#line 1043 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_91_91;
#line 1043 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_93_93;

#line 1049 "add_mutable_aux_preds.m"
                {
#line 1049 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_80_80 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__MutableMutexVarName_42, (MR_String) "\");\n#endif\n");
                }
#line 1049 "add_mutable_aux_preds.m"
                {
#line 1049 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_78_78 = mercury__string__f_43_43_2_f_0((MR_String) ",\n                    \"", hlds__make_hlds__add_mutable_aux_preds__V_80_80);
                }
#line 1048 "add_mutable_aux_preds.m"
                {
#line 1048 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_77_77 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__MutableMutexVarName_42, hlds__make_hlds__add_mutable_aux_preds__V_78_78);
                }
#line 1048 "add_mutable_aux_preds.m"
                {
#line 1048 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_75_75 = mercury__string__f_43_43_2_f_0((MR_String) "  MR_LOCK(&", hlds__make_hlds__add_mutable_aux_preds__V_77_77);
                }
#line 1051 "add_mutable_aux_preds.m"
                {
#line 1051 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1051 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_74_74, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_75_75));
#line 1051 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1051 "add_mutable_aux_preds.m"
                }
#line 1047 "add_mutable_aux_preds.m"
                {
#line 1047 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1047 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_72_72, 0) = ((MR_Box) ((MR_String) "#ifdef MR_THREAD_SAFE\n"));
#line 1047 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_72_72, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_74_74));
#line 1047 "add_mutable_aux_preds.m"
                }
#line 1046 "add_mutable_aux_preds.m"
                {
#line 1046 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__LockForeignProcBody_43 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_72_72);
                }
#line 1055 "add_mutable_aux_preds.m"
                {
#line 1055 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_93_93 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__MutableMutexVarName_42, (MR_String) "\");\n#endif\n");
                }
#line 1055 "add_mutable_aux_preds.m"
                {
#line 1055 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_91_91 = mercury__string__f_43_43_2_f_0((MR_String) ",\n                    \"", hlds__make_hlds__add_mutable_aux_preds__V_93_93);
                }
#line 1054 "add_mutable_aux_preds.m"
                {
#line 1054 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_90_90 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__MutableMutexVarName_42, hlds__make_hlds__add_mutable_aux_preds__V_91_91);
                }
#line 1054 "add_mutable_aux_preds.m"
                {
#line 1054 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_88_88 = mercury__string__f_43_43_2_f_0((MR_String) "  MR_UNLOCK(&", hlds__make_hlds__add_mutable_aux_preds__V_90_90);
                }
#line 1057 "add_mutable_aux_preds.m"
                {
#line 1057 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1057 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_87_87, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_88_88));
#line 1057 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_87_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1057 "add_mutable_aux_preds.m"
                }
#line 1053 "add_mutable_aux_preds.m"
                {
#line 1053 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1053 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_85_85, 0) = ((MR_Box) ((MR_String) "#ifdef MR_THREAD_SAFE\n"));
#line 1053 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_85_85, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_87_87));
#line 1053 "add_mutable_aux_preds.m"
                }
#line 1052 "add_mutable_aux_preds.m"
                {
#line 1052 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnlockForeignProcBody_44 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_85_85);
                }
#line 1043 "add_mutable_aux_preds.m"
              }
#line 1058 "add_mutable_aux_preds.m"
              break;
#line 1058 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 1059 "add_mutable_aux_preds.m"
              {
#line 1060 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__LockForeignProcBody_43 = (MR_String) "";
#line 1061 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__UnlockForeignProcBody_44 = (MR_String) "";
#line 1059 "add_mutable_aux_preds.m"
              }
#line 1058 "add_mutable_aux_preds.m"
              break;
#line 1058 "add_mutable_aux_preds.m"
          }
#line 1063 "add_mutable_aux_preds.m"
          {
#line 1063 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__LockPredName_45 = parse_tree__prog_mutable__mutable_lock_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_22, hlds__make_hlds__add_mutable_aux_preds__MutableName_23);
          }
#line 1065 "add_mutable_aux_preds.m"
          {
#line 1065 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__UnlockPredName_46 = parse_tree__prog_mutable__mutable_unlock_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_22, hlds__make_hlds__add_mutable_aux_preds__MutableName_23);
          }
#line 6868 "hlds.make_hlds.add_mutable_aux_preds.c"
          hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_121_121 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1071 "add_mutable_aux_preds.m"
          {
#line 1071 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_100_100 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_121_121);
          }
#line 6875 "hlds.make_hlds.add_mutable_aux_preds.c"
          hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_122_122 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
#line 1072 "add_mutable_aux_preds.m"
          {
#line 1072 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_101_101 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_122_122);
          }
#line 1073 "add_mutable_aux_preds.m"
          {
#line 1073 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1073 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_103_103, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_31));
#line 1073 "add_mutable_aux_preds.m"
          }
#line 1073 "add_mutable_aux_preds.m"
          {
#line 1073 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1073 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_102_102, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockForeignProcBody_43));
#line 1073 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_102_102, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_103_103));
#line 1073 "add_mutable_aux_preds.m"
          }
#line 1067 "add_mutable_aux_preds.m"
          {
#line 1067 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1067 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_47, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockAndUnlockAttrs_41));
#line 1067 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_47, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockPredName_45));
#line 1067 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_47, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1067 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_47, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1067 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_47, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_100_100));
#line 1067 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_47, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_101_101));
#line 1067 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_47, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_102_102));
#line 1067 "add_mutable_aux_preds.m"
          }
#line 1079 "add_mutable_aux_preds.m"
          {
#line 1079 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_106_106 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_121_121);
          }
#line 1080 "add_mutable_aux_preds.m"
          {
#line 1080 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_107_107 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_122_122);
          }
#line 1081 "add_mutable_aux_preds.m"
          {
#line 1081 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1081 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_108_108, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnlockForeignProcBody_44));
#line 1081 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_108_108, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_103_103));
#line 1081 "add_mutable_aux_preds.m"
          }
#line 1075 "add_mutable_aux_preds.m"
          {
#line 1075 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1075 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_48, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockAndUnlockAttrs_41));
#line 1075 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_48, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnlockPredName_46));
#line 1075 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_48, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1075 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_48, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1075 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_48, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_106_106));
#line 1075 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_48, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_107_107));
#line 1075 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_48, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_108_108));
#line 1075 "add_mutable_aux_preds.m"
          }
#line 1083 "add_mutable_aux_preds.m"
          {
#line 1083 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_47, hlds__make_hlds__add_mutable_aux_preds__PredStatus_18, hlds__make_hlds__add_mutable_aux_preds__Context_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_51, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_111_111, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_55, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_112_112);
          }
#line 1085 "add_mutable_aux_preds.m"
          {
#line 1085 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_48, hlds__make_hlds__add_mutable_aux_preds__PredStatus_18, hlds__make_hlds__add_mutable_aux_preds__Context_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_111_111, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_52, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_112_112, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_56);
          }
#line 1088 "add_mutable_aux_preds.m"
          {
#line 1088 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__CallLockExpr0_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1088 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallLockExpr0_49, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_31));
#line 1088 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallLockExpr0_49, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockPredName_45));
#line 1088 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallLockExpr0_49, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1088 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallLockExpr0_49, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1088 "add_mutable_aux_preds.m"
          }
#line 1090 "add_mutable_aux_preds.m"
          {
#line 1090 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr0_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1090 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr0_50, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_31));
#line 1090 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr0_50, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnlockPredName_46));
#line 1090 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr0_50, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1090 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr0_50, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1090 "add_mutable_aux_preds.m"
          }
#line 1091 "add_mutable_aux_preds.m"
          {
#line 1091 "add_mutable_aux_preds.m"
            MR_Tuple base;
#line 1091 "add_mutable_aux_preds.m"
            base = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1091 "add_mutable_aux_preds.m"
            *hlds__make_hlds__add_mutable_aux_preds__LockUnlockExprs_17 = base;
#line 1091 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallLockExpr0_49));
#line 1091 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr0_50));
#line 1091 "add_mutable_aux_preds.m"
          }
#line 1038 "add_mutable_aux_preds.m"
        }
#line 1092 "add_mutable_aux_preds.m"
        break;
#line 1092 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 1093 "add_mutable_aux_preds.m"
        {
#line 1094 "add_mutable_aux_preds.m"
          {
#line 1094 "add_mutable_aux_preds.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_lock_unlock_preds\'/12", (MR_String) "lock_unlock for csharp");
#line 1094 "add_mutable_aux_preds.m"
            return;
          }
#line 1093 "add_mutable_aux_preds.m"
        }
#line 1092 "add_mutable_aux_preds.m"
        break;
#line 1092 "add_mutable_aux_preds.m"
      case (MR_Integer) 3:
#line 1099 "add_mutable_aux_preds.m"
        {
#line 1100 "add_mutable_aux_preds.m"
          {
#line 1100 "add_mutable_aux_preds.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_lock_unlock_preds\'/12", (MR_String) "lock_unlock for erlang");
#line 1100 "add_mutable_aux_preds.m"
            return;
          }
#line 1099 "add_mutable_aux_preds.m"
        }
#line 1092 "add_mutable_aux_preds.m"
        break;
#line 1092 "add_mutable_aux_preds.m"
      case (MR_Integer) 2:
#line 1096 "add_mutable_aux_preds.m"
        {
#line 1097 "add_mutable_aux_preds.m"
          {
#line 1097 "add_mutable_aux_preds.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_lock_unlock_preds\'/12", (MR_String) "lock_unlock for java");
#line 1097 "add_mutable_aux_preds.m"
            return;
          }
#line 1096 "add_mutable_aux_preds.m"
        }
#line 1092 "add_mutable_aux_preds.m"
        break;
#line 1092 "add_mutable_aux_preds.m"
    }
#line 1025 "add_mutable_aux_preds.m"
    *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_54 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_53;
#line 1025 "add_mutable_aux_preds.m"
  }
#line 1018 "add_mutable_aux_preds.m"
}

#line 972 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_pre_init_pred_12_p_0_1(
#line 972 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 972 "add_mutable_aux_preds.m"
{
#line 972 "add_mutable_aux_preds.m"
  {
#line 972 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 972 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 972 "add_mutable_aux_preds.m"
    {
#line 972 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_pre_init_pred__972__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 972 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 972 "add_mutable_aux_preds.m"
  }
#line 972 "add_mutable_aux_preds.m"
}

#line 955 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_pre_init_pred_12_p_0(
#line 955 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13,
#line 955 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_14,
#line 955 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15,
#line 955 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_16,
#line 955 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_17,
#line 955 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_18,
#line 955 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_44,
#line 955 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_45,
#line 955 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_46,
#line 955 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_47,
#line 955 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_48,
#line 955 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_49)
#line 955 "add_mutable_aux_preds.m"
{
#line 962 "add_mutable_aux_preds.m"
  {
#line 962 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 962 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_22;
#line 962 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_23;
#line 962 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_30;
#line 962 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_31;
#line 962 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_33;
#line 962 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_34;
#line 962 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ImplLang_35;
#line 962 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInitPredName_41;
#line 962 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__PreInitCode_42;
#line 962 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_43;
#line 962 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_50_50;
#line 962 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_76_76;
#line 962 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_77_77;
#line 962 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_78_78;
#line 962 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_79_79;
#line 964 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___OrigType_24;
#line 964 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Type_25;
#line 964 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___OrigInst_26;
#line 964 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Inst_27;
#line 964 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___InitTerm_28;
#line 964 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___VarSetMutable_29;
#line 964 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_32;
#line 969 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Lang_36;
#line 969 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_37;
#line 969 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___PreInit_38;
#line 969 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___LockUnlock_39;
#line 969 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_40;

#line 963 "add_mutable_aux_preds.m"
    {
#line 963 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_44, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_22);
    }
#line 964 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutableName_23 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 0)));
#line 964 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___OrigType_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 1)));
#line 964 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Type_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 2)));
#line 964 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___OrigInst_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 3)));
#line 964 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Inst_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 4)));
#line 964 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___InitTerm_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 5)));
#line 964 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___VarSetMutable_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 6)));
#line 964 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutAttrs_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 7)));
#line 964 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Context_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 8)));
#line 964 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___SeqNum_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 9)));
#line 967 "add_mutable_aux_preds.m"
    {
#line 967 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsConstant_33 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_30);
    }
#line 968 "add_mutable_aux_preds.m"
    {
#line 968 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_34 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_30);
    }
#line 969 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__ImplLang_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 969 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Lang_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
#line 969 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 969 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___PreInit_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 969 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___LockUnlock_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 969 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 972 "add_mutable_aux_preds.m"
    {
#line 972 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 972 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_50_50, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_4[12]));
#line 972 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_50_50, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__define_pre_init_pred_12_p_0_1));
#line 972 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 972 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_50_50, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__IsConstant_33));
#line 972 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_50_50, 4) = ((MR_Box) ((MR_Integer) 0));
#line 972 "add_mutable_aux_preds.m"
    }
#line 972 "add_mutable_aux_preds.m"
    {
#line 972 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_50_50, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_pre_init_pred\'/12", (MR_String) "need_pre_init_pred, but IsConstant = mutable_constant");
    }
#line 974 "add_mutable_aux_preds.m"
    {
#line 974 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PreInitPredName_41 = parse_tree__prog_mutable__mutable_pre_init_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_22, hlds__make_hlds__add_mutable_aux_preds__MutableName_23);
    }
#line 992 "add_mutable_aux_preds.m"
#line 992 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__ImplLang_35) {
#line 992 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 992 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 987 "add_mutable_aux_preds.m"
#line 987 "add_mutable_aux_preds.m"
        switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_34) {
#line 987 "add_mutable_aux_preds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 987 "add_mutable_aux_preds.m"
          case (MR_Integer) 0:
#line 979 "add_mutable_aux_preds.m"
            {
#line 979 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__V_63_63;
#line 979 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__V_65_65;
#line 979 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__V_67_67;
#line 979 "add_mutable_aux_preds.m"
              MR_String hlds__make_hlds__add_mutable_aux_preds__V_68_68;

#line 983 "add_mutable_aux_preds.m"
              {
#line 983 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_68_68 = parse_tree__prog_mutable__mutable_mutex_var_name_1_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15);
              }
#line 983 "add_mutable_aux_preds.m"
              {
#line 983 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 983 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_67_67, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_68_68));
#line 983 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[34])));
#line 983 "add_mutable_aux_preds.m"
              }
#line 982 "add_mutable_aux_preds.m"
              {
#line 982 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 982 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_65_65, 0) = ((MR_Box) ((MR_String) "   pthread_mutex_init(&"));
#line 982 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_65_65, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_67_67));
#line 982 "add_mutable_aux_preds.m"
              }
#line 981 "add_mutable_aux_preds.m"
              {
#line 981 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 981 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_63_63, 0) = ((MR_Box) ((MR_String) "#ifdef MR_THREAD_SAFE\n"));
#line 981 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_63_63, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_65_65));
#line 981 "add_mutable_aux_preds.m"
              }
#line 980 "add_mutable_aux_preds.m"
              {
#line 980 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__PreInitCode_42 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_63_63);
              }
#line 979 "add_mutable_aux_preds.m"
            }
#line 987 "add_mutable_aux_preds.m"
            break;
#line 987 "add_mutable_aux_preds.m"
          case (MR_Integer) 1:
#line 988 "add_mutable_aux_preds.m"
            {
#line 989 "add_mutable_aux_preds.m"
              {
#line 989 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__PreInitCode_42 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) " = MR_new_thread_local_mutable_index();\n");
              }
#line 988 "add_mutable_aux_preds.m"
            }
#line 987 "add_mutable_aux_preds.m"
            break;
#line 987 "add_mutable_aux_preds.m"
        }
#line 992 "add_mutable_aux_preds.m"
        break;
#line 992 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 993 "add_mutable_aux_preds.m"
        {
#line 994 "add_mutable_aux_preds.m"
          {
#line 994 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__PreInitCode_42 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) " = runtime.ThreadLocalMutables.new_index();\n");
          }
#line 993 "add_mutable_aux_preds.m"
        }
#line 992 "add_mutable_aux_preds.m"
        break;
#line 992 "add_mutable_aux_preds.m"
      case (MR_Integer) 3:
#line 1000 "add_mutable_aux_preds.m"
        {
#line 1001 "add_mutable_aux_preds.m"
          {
#line 1001 "add_mutable_aux_preds.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_pre_init_pred\'/12", (MR_String) "preinit for erlang");
#line 1001 "add_mutable_aux_preds.m"
            return;
          }
#line 1000 "add_mutable_aux_preds.m"
        }
#line 992 "add_mutable_aux_preds.m"
        break;
#line 992 "add_mutable_aux_preds.m"
      case (MR_Integer) 2:
#line 997 "add_mutable_aux_preds.m"
        {
#line 998 "add_mutable_aux_preds.m"
          {
#line 998 "add_mutable_aux_preds.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_pre_init_pred\'/12", (MR_String) "preinit for java");
#line 998 "add_mutable_aux_preds.m"
            return;
          }
#line 997 "add_mutable_aux_preds.m"
        }
#line 992 "add_mutable_aux_preds.m"
        break;
#line 992 "add_mutable_aux_preds.m"
    }
#line 1007 "add_mutable_aux_preds.m"
    {
#line 1007 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_76_76 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 1008 "add_mutable_aux_preds.m"
    {
#line 1008 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_77_77 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
#line 1009 "add_mutable_aux_preds.m"
    {
#line 1009 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1009 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_79_79, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_31));
#line 1009 "add_mutable_aux_preds.m"
    }
#line 1009 "add_mutable_aux_preds.m"
    {
#line 1009 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1009 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_78_78, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PreInitCode_42));
#line 1009 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_78_78, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_79_79));
#line 1009 "add_mutable_aux_preds.m"
    }
#line 1003 "add_mutable_aux_preds.m"
    {
#line 1003 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1003 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_43, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Attrs_16));
#line 1003 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_43, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PreInitPredName_41));
#line 1003 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_43, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1003 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_43, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1003 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_43, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_76_76));
#line 1003 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_43, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_77_77));
#line 1003 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_43, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_78_78));
#line 1003 "add_mutable_aux_preds.m"
    }
#line 1011 "add_mutable_aux_preds.m"
    {
#line 1011 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_43, hlds__make_hlds__add_mutable_aux_preds__PredStatus_18, hlds__make_hlds__add_mutable_aux_preds__Context_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_44, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_45, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_48, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_49);
    }
#line 1014 "add_mutable_aux_preds.m"
    {
#line 1014 "add_mutable_aux_preds.m"
      MR_Word base;
#line 1014 "add_mutable_aux_preds.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1014 "add_mutable_aux_preds.m"
      *hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_17 = base;
#line 1014 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_31));
#line 1014 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PreInitPredName_41));
#line 1014 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1014 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1014 "add_mutable_aux_preds.m"
    }
#line 962 "add_mutable_aux_preds.m"
    *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_47 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_46;
#line 962 "add_mutable_aux_preds.m"
  }
#line 955 "add_mutable_aux_preds.m"
}

#line 871 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_aux_preds_10_p_0(
#line 871 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11,
#line 871 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_12,
#line 871 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_13,
#line 871 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_14,
#line 871 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34,
#line 871 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_35,
#line 871 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_36,
#line 871 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_37,
#line 871 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38,
#line 871 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39)
#line 871 "add_mutable_aux_preds.m"
{
#line 877 "add_mutable_aux_preds.m"
  {
#line 877 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 877 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ImplLang_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 877 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
#line 877 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 877 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInit_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 877 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__LockUnlock_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 877 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 877 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs0_24;
#line 877 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_26;
#line 877 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_27;
#line 877 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_29;
#line 877 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_31;
#line 877 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_33;
#line 877 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_43_43;
#line 877 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_44_44;
#line 877 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_45_45;
#line 877 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46;
#line 877 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_47_47;
#line 877 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_48_48;
#line 877 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_49_49;
#line 877 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_50_50;
#line 877 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51;
#line 877 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_52_52;
#line 877 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_53_53;
#line 877 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_54_54;

#line 883 "add_mutable_aux_preds.m"
    {
#line 883 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__Attrs0_24 = parse_tree__prog_data__default_attributes_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Lang_19);
    }
#line 888 "add_mutable_aux_preds.m"
#line 888 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__ImplLang_18) {
#line 888 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 888 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 885 "add_mutable_aux_preds.m"
        {
#line 885 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs1_25;

#line 886 "add_mutable_aux_preds.m"
          {
#line 886 "add_mutable_aux_preds.m"
            parse_tree__prog_data__set_box_policy_3_p_0(hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_20, hlds__make_hlds__add_mutable_aux_preds__Attrs0_24, &hlds__make_hlds__add_mutable_aux_preds__Attrs1_25);
          }
#line 887 "add_mutable_aux_preds.m"
          {
#line 887 "add_mutable_aux_preds.m"
            parse_tree__prog_data__set_may_call_mercury_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__Attrs1_25, &hlds__make_hlds__add_mutable_aux_preds__Attrs_26);
          }
#line 885 "add_mutable_aux_preds.m"
        }
#line 888 "add_mutable_aux_preds.m"
        break;
#line 888 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 888 "add_mutable_aux_preds.m"
      case (MR_Integer) 2:
#line 891 "add_mutable_aux_preds.m"
        {
#line 896 "add_mutable_aux_preds.m"
          {
#line 896 "add_mutable_aux_preds.m"
            parse_tree__prog_data__set_may_duplicate_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[2]), hlds__make_hlds__add_mutable_aux_preds__Attrs0_24, &hlds__make_hlds__add_mutable_aux_preds__Attrs_26);
          }
#line 891 "add_mutable_aux_preds.m"
        }
#line 888 "add_mutable_aux_preds.m"
        break;
#line 888 "add_mutable_aux_preds.m"
      case (MR_Integer) 3:
#line 899 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__Attrs_26 = hlds__make_hlds__add_mutable_aux_preds__Attrs0_24;
#line 888 "add_mutable_aux_preds.m"
        break;
#line 888 "add_mutable_aux_preds.m"
    }
#line 912 "add_mutable_aux_preds.m"
#line 912 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__PreInit_21) {
#line 912 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 912 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 910 "add_mutable_aux_preds.m"
        {
#line 911 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 910 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_43_43 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34;
#line 910 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_44_44 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_36;
#line 910 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_45_45 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38;
#line 910 "add_mutable_aux_preds.m"
        }
#line 912 "add_mutable_aux_preds.m"
        break;
#line 912 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 913 "add_mutable_aux_preds.m"
        {
#line 913 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_28;

#line 914 "add_mutable_aux_preds.m"
          {
#line 914 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__define_pre_init_pred_12_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11, hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_13, hlds__make_hlds__add_mutable_aux_preds__Attrs_26, &hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_28, hlds__make_hlds__add_mutable_aux_preds__PredStatus_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_43_43, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_36, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_44_44, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_45_45);
          }
#line 917 "add_mutable_aux_preds.m"
          {
#line 917 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 917 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_27, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_28));
#line 917 "add_mutable_aux_preds.m"
          }
#line 913 "add_mutable_aux_preds.m"
        }
#line 912 "add_mutable_aux_preds.m"
        break;
#line 912 "add_mutable_aux_preds.m"
    }
#line 922 "add_mutable_aux_preds.m"
#line 922 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__LockUnlock_22) {
#line 922 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 922 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 920 "add_mutable_aux_preds.m"
        {
#line 921 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 920 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_43_43;
#line 920 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_47_47 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_44_44;
#line 920 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_48_48 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_45_45;
#line 920 "add_mutable_aux_preds.m"
        }
#line 922 "add_mutable_aux_preds.m"
        break;
#line 922 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 923 "add_mutable_aux_preds.m"
        {
#line 923 "add_mutable_aux_preds.m"
          MR_Tuple hlds__make_hlds__add_mutable_aux_preds__LockUnlockExprs_30;

#line 924 "add_mutable_aux_preds.m"
          {
#line 924 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__define_lock_unlock_preds_12_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11, hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_13, hlds__make_hlds__add_mutable_aux_preds__Attrs_26, &hlds__make_hlds__add_mutable_aux_preds__LockUnlockExprs_30, hlds__make_hlds__add_mutable_aux_preds__PredStatus_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_43_43, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_44_44, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_47_47, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_45_45, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_48_48);
          }
#line 927 "add_mutable_aux_preds.m"
          {
#line 927 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 927 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_29, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockUnlockExprs_30));
#line 927 "add_mutable_aux_preds.m"
          }
#line 923 "add_mutable_aux_preds.m"
        }
#line 922 "add_mutable_aux_preds.m"
        break;
#line 922 "add_mutable_aux_preds.m"
    }
#line 932 "add_mutable_aux_preds.m"
#line 932 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_23) {
#line 932 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 932 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 930 "add_mutable_aux_preds.m"
        {
#line 931 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 930 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_49_49 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46;
#line 930 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_50_50 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_47_47;
#line 930 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_48_48;
#line 930 "add_mutable_aux_preds.m"
        }
#line 932 "add_mutable_aux_preds.m"
        break;
#line 932 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 933 "add_mutable_aux_preds.m"
        {
#line 933 "add_mutable_aux_preds.m"
          MR_Tuple hlds__make_hlds__add_mutable_aux_preds__UnsafeGetSetExprs_32;

#line 934 "add_mutable_aux_preds.m"
          {
#line 934 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__define_unsafe_get_set_preds_12_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11, hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_13, hlds__make_hlds__add_mutable_aux_preds__Attrs_26, &hlds__make_hlds__add_mutable_aux_preds__UnsafeGetSetExprs_32, hlds__make_hlds__add_mutable_aux_preds__PredStatus_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_49_49, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_47_47, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_50_50, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_48_48, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51);
          }
#line 937 "add_mutable_aux_preds.m"
          {
#line 937 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 937 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_31, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeGetSetExprs_32));
#line 937 "add_mutable_aux_preds.m"
          }
#line 933 "add_mutable_aux_preds.m"
        }
#line 932 "add_mutable_aux_preds.m"
        break;
#line 932 "add_mutable_aux_preds.m"
    }
#line 943 "add_mutable_aux_preds.m"
    {
#line 943 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__define_main_get_set_preds_14_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11, hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_13, hlds__make_hlds__add_mutable_aux_preds__Attrs_26, hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_29, hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_31, &hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_33, hlds__make_hlds__add_mutable_aux_preds__PredStatus_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_49_49, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_52_52, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_50_50, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_53_53, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_54_54);
    }
#line 950 "add_mutable_aux_preds.m"
    {
#line 950 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__define_init_pred_11_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11, hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_27, hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_33, hlds__make_hlds__add_mutable_aux_preds__Lang_19, hlds__make_hlds__add_mutable_aux_preds__PredStatus_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_52_52, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_35, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_53_53, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_37, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_54_54, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39);
    }
#line 877 "add_mutable_aux_preds.m"
  }
#line 871 "add_mutable_aux_preds.m"
}

#line 835 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_global_var_java_6_p_0(
#line 835 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_7,
#line 835 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_8,
#line 835 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_9,
#line 835 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_10,
#line 835 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_15,
#line 835 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_16)
#line 835 "add_mutable_aux_preds.m"
{
#line 840 "add_mutable_aux_preds.m"
  {
#line 840 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 840 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__DefnBody_13;
#line 840 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_14;
#line 840 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_36_36;

#line 852 "add_mutable_aux_preds.m"
#line 852 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_9) {
#line 852 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 852 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 842 "add_mutable_aux_preds.m"
        {
#line 842 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__TypeStr_12;
#line 842 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__V_30_30;
#line 842 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__V_31_31;
#line 842 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__V_33_33;
#line 846 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_39_39;

#line 846 "add_mutable_aux_preds.m"
          {
#line 846 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_39_39 = parse_tree__builtin_lib_types__int_type_0_f_0();
          }
#line 846 "add_mutable_aux_preds.m"
          {
#line 846 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__make_hlds__add_mutable_aux_preds__Type_8, hlds__make_hlds__add_mutable_aux_preds__V_39_39);
          }
#line 846 "add_mutable_aux_preds.m"
          if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 847 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__TypeStr_12 = (MR_String) "int";
#line 846 "add_mutable_aux_preds.m"
          else
#line 849 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__TypeStr_12 = (MR_String) "java.lang.Object";
#line 851 "add_mutable_aux_preds.m"
          {
#line 851 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_33_33 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_7, (MR_String) ";\n");
          }
#line 851 "add_mutable_aux_preds.m"
          {
#line 851 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_31_31 = mercury__string__f_43_43_2_f_0((MR_String) " ", hlds__make_hlds__add_mutable_aux_preds__V_33_33);
          }
#line 851 "add_mutable_aux_preds.m"
          {
#line 851 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_30_30 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeStr_12, hlds__make_hlds__add_mutable_aux_preds__V_31_31);
          }
#line 851 "add_mutable_aux_preds.m"
          {
#line 851 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__DefnBody_13 = mercury__string__f_43_43_2_f_0((MR_String) "static ", hlds__make_hlds__add_mutable_aux_preds__V_30_30);
          }
#line 842 "add_mutable_aux_preds.m"
        }
#line 852 "add_mutable_aux_preds.m"
        break;
#line 852 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 853 "add_mutable_aux_preds.m"
        {
#line 853 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_17_17;
#line 853 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_19_19;
#line 853 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_20_20;
#line 853 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_22_22;
#line 853 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_23_23;
#line 853 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_25_25;
#line 853 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__TypeStr_38;
#line 854 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_40_40;

#line 854 "add_mutable_aux_preds.m"
          {
#line 854 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_40_40 = parse_tree__builtin_lib_types__int_type_0_f_0();
          }
#line 854 "add_mutable_aux_preds.m"
          {
#line 854 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__make_hlds__add_mutable_aux_preds__Type_8, hlds__make_hlds__add_mutable_aux_preds__V_40_40);
          }
#line 854 "add_mutable_aux_preds.m"
          if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 855 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__TypeStr_38 = (MR_String) "java.lang.Integer";
#line 854 "add_mutable_aux_preds.m"
          else
#line 857 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__TypeStr_38 = (MR_String) "java.lang.Object";
#line 862 "add_mutable_aux_preds.m"
          {
#line 862 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 862 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_25_25, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TypeStr_38));
#line 862 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[67])));
#line 862 "add_mutable_aux_preds.m"
          }
#line 862 "add_mutable_aux_preds.m"
          {
#line 862 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 862 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_23_23, 0) = ((MR_Box) ((MR_String) " = new java.lang.InheritableThreadLocal<"));
#line 862 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_23_23, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_25_25));
#line 862 "add_mutable_aux_preds.m"
          }
#line 861 "add_mutable_aux_preds.m"
          {
#line 861 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 861 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_22_22, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_7));
#line 861 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_22_22, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_23_23));
#line 861 "add_mutable_aux_preds.m"
          }
#line 860 "add_mutable_aux_preds.m"
          {
#line 860 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 860 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_20_20, 0) = ((MR_Box) ((MR_String) "> "));
#line 860 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_20_20, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_22_22));
#line 860 "add_mutable_aux_preds.m"
          }
#line 860 "add_mutable_aux_preds.m"
          {
#line 860 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 860 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_19_19, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TypeStr_38));
#line 860 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_19_19, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_20_20));
#line 860 "add_mutable_aux_preds.m"
          }
#line 860 "add_mutable_aux_preds.m"
          {
#line 860 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 860 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_17_17, 0) = ((MR_Box) ((MR_String) "static java.lang.ThreadLocal<"));
#line 860 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_17_17, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_19_19));
#line 860 "add_mutable_aux_preds.m"
          }
#line 859 "add_mutable_aux_preds.m"
          {
#line 859 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__DefnBody_13 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_17_17);
          }
#line 853 "add_mutable_aux_preds.m"
        }
#line 852 "add_mutable_aux_preds.m"
        break;
#line 852 "add_mutable_aux_preds.m"
    }
#line 866 "add_mutable_aux_preds.m"
    {
#line 866 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 866 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_36_36, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__DefnBody_13));
#line 866 "add_mutable_aux_preds.m"
    }
#line 866 "add_mutable_aux_preds.m"
    {
#line 866 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 866 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_14, 0) = ((MR_Box) ((MR_Integer) 2));
#line 866 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_14, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_36_36));
#line 866 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_14, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_10));
#line 866 "add_mutable_aux_preds.m"
    }
#line 867 "add_mutable_aux_preds.m"
    {
#line 867 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_add_foreign_body_code_3_p_0(hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_15, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_16);
    }
#line 840 "add_mutable_aux_preds.m"
  }
#line 835 "add_mutable_aux_preds.m"
}

#line 734 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_global_var_c_7_p_0(
#line 734 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_8,
#line 734 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_9,
#line 734 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_10,
#line 734 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_11,
#line 734 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_12,
#line 734 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_26,
#line 734 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_27)
#line 734 "add_mutable_aux_preds.m"
{
#line 739 "add_mutable_aux_preds.m"
  {
#line 739 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 739 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__HighLevelTypeName_14;
#line 739 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__LowLevelTypeName_15;
#line 739 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__TypeName_18;
#line 739 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__LockDeclStrs_19;
#line 739 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__LockDefnStrs_20;
#line 739 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__DeclBody_22;
#line 739 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignDeclCode_23;
#line 739 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__DefnBody_24;
#line 739 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignBodyCode_25;
#line 739 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_51_51;
#line 739 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_53_53;
#line 739 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_55_55;
#line 739 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_56_56;
#line 739 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_58_58;
#line 739 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_59_59;
#line 739 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_61_61;
#line 739 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_63_63;
#line 739 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_65_65;
#line 739 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_66_66;
#line 739 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_68_68;
#line 739 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_69_69;
#line 739 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_71_71;
#line 739 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_75_75;
#line 739 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_76_76;
#line 739 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_77_77;
#line 739 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_78_78;
#line 739 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_80_80;
#line 739 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_81_81;
#line 739 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_84_84;

#line 762 "add_mutable_aux_preds.m"
#line 762 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_11) {
#line 762 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 762 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 745 "add_mutable_aux_preds.m"
        {
#line 745 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__Globals_16;
#line 745 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__HighLevelCode_17;

#line 1614 "add_mutable_aux_preds.m"
          {
#line 1614 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__HighLevelTypeName_14 = backend_libs__foreign__mercury_exported_type_to_string_3_f_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_26, (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__Type_9);
          }
#line 1612 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LowLevelTypeName_15 = (MR_String) "MR_Word";
#line 753 "add_mutable_aux_preds.m"
          {
#line 753 "add_mutable_aux_preds.m"
            hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_26, &hlds__make_hlds__add_mutable_aux_preds__Globals_16);
          }
#line 754 "add_mutable_aux_preds.m"
          {
#line 754 "add_mutable_aux_preds.m"
            libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_16, (MR_Integer) 252, &hlds__make_hlds__add_mutable_aux_preds__HighLevelCode_17);
          }
#line 758 "add_mutable_aux_preds.m"
#line 758 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__HighLevelCode_17) {
#line 758 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 758 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 757 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__TypeName_18 = hlds__make_hlds__add_mutable_aux_preds__LowLevelTypeName_15;
#line 758 "add_mutable_aux_preds.m"
              break;
#line 758 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 760 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__TypeName_18 = hlds__make_hlds__add_mutable_aux_preds__HighLevelTypeName_14;
#line 758 "add_mutable_aux_preds.m"
              break;
#line 758 "add_mutable_aux_preds.m"
          }
#line 745 "add_mutable_aux_preds.m"
        }
#line 762 "add_mutable_aux_preds.m"
        break;
#line 762 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 763 "add_mutable_aux_preds.m"
        {
#line 766 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__TypeName_18 = (MR_String) "MR_Unsigned";
#line 767 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__HighLevelTypeName_14 = hlds__make_hlds__add_mutable_aux_preds__TypeName_18;
#line 768 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LowLevelTypeName_15 = hlds__make_hlds__add_mutable_aux_preds__TypeName_18;
#line 763 "add_mutable_aux_preds.m"
        }
#line 762 "add_mutable_aux_preds.m"
        break;
#line 762 "add_mutable_aux_preds.m"
    }
#line 774 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__IsConstant_10 == (MR_Integer) 1);
#line 775 "add_mutable_aux_preds.m"
    if (!(hlds__make_hlds__add_mutable_aux_preds__succeeded))
#line 775 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_11 == (MR_Integer) 1);
#line 773 "add_mutable_aux_preds.m"
    if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 778 "add_mutable_aux_preds.m"
      {
#line 778 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__LockDeclStrs_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 779 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__LockDefnStrs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 778 "add_mutable_aux_preds.m"
      }
#line 773 "add_mutable_aux_preds.m"
    else
#line 781 "add_mutable_aux_preds.m"
      {
#line 781 "add_mutable_aux_preds.m"
        MR_String hlds__make_hlds__add_mutable_aux_preds__MutexVarName_21;
#line 781 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_34_34;
#line 781 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_36_36;
#line 781 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_43_43;

#line 781 "add_mutable_aux_preds.m"
        {
#line 781 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__MutexVarName_21 = parse_tree__prog_mutable__mutable_mutex_var_name_1_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_8);
        }
#line 784 "add_mutable_aux_preds.m"
        {
#line 784 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 784 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_36_36, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__MutexVarName_21));
#line 784 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[33])));
#line 784 "add_mutable_aux_preds.m"
        }
#line 784 "add_mutable_aux_preds.m"
        {
#line 784 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 784 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_34_34, 0) = ((MR_Box) ((MR_String) "    extern MercuryLock "));
#line 784 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_34_34, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_36_36));
#line 784 "add_mutable_aux_preds.m"
        }
#line 783 "add_mutable_aux_preds.m"
        {
#line 783 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LockDeclStrs_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 783 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__LockDeclStrs_19, 0) = ((MR_Box) ((MR_String) "#ifdef MR_THREAD_SAFE\n"));
#line 783 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__LockDeclStrs_19, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_34_34));
#line 783 "add_mutable_aux_preds.m"
        }
#line 789 "add_mutable_aux_preds.m"
        {
#line 789 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 789 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_43_43, 0) = ((MR_Box) ((MR_String) "    MercuryLock "));
#line 789 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_43_43, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_36_36));
#line 789 "add_mutable_aux_preds.m"
        }
#line 788 "add_mutable_aux_preds.m"
        {
#line 788 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LockDefnStrs_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 788 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__LockDefnStrs_20, 0) = ((MR_Box) ((MR_String) "#ifdef MR_THREAD_SAFE\n"));
#line 788 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__LockDefnStrs_20, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_43_43));
#line 788 "add_mutable_aux_preds.m"
        }
#line 781 "add_mutable_aux_preds.m"
      }
#line 799 "add_mutable_aux_preds.m"
    {
#line 799 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 799 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_71_71, 0) = ((MR_Box) ((MR_String) "#endif\n"));
#line 799 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_71_71, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockDeclStrs_19));
#line 799 "add_mutable_aux_preds.m"
    }
#line 798 "add_mutable_aux_preds.m"
    {
#line 798 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 798 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_69_69, 0) = ((MR_Box) ((MR_String) ";\n"));
#line 798 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_69_69, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_71_71));
#line 798 "add_mutable_aux_preds.m"
    }
#line 798 "add_mutable_aux_preds.m"
    {
#line 798 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 798 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_68_68, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_8));
#line 798 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_68_68, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_69_69));
#line 798 "add_mutable_aux_preds.m"
    }
#line 798 "add_mutable_aux_preds.m"
    {
#line 798 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 798 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_66_66, 0) = ((MR_Box) ((MR_String) " "));
#line 798 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_66_66, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_68_68));
#line 798 "add_mutable_aux_preds.m"
    }
#line 798 "add_mutable_aux_preds.m"
    {
#line 798 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 798 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_65_65, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LowLevelTypeName_15));
#line 798 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_65_65, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_66_66));
#line 798 "add_mutable_aux_preds.m"
    }
#line 798 "add_mutable_aux_preds.m"
    {
#line 798 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 798 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_63_63, 0) = ((MR_Box) ((MR_String) "    extern "));
#line 798 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_63_63, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_65_65));
#line 798 "add_mutable_aux_preds.m"
    }
#line 797 "add_mutable_aux_preds.m"
    {
#line 797 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 797 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_61_61, 0) = ((MR_Box) ((MR_String) "#else\n"));
#line 797 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_61_61, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_63_63));
#line 797 "add_mutable_aux_preds.m"
    }
#line 796 "add_mutable_aux_preds.m"
    {
#line 796 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 796 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_59_59, 0) = ((MR_Box) ((MR_String) ";\n"));
#line 796 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_59_59, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_61_61));
#line 796 "add_mutable_aux_preds.m"
    }
#line 796 "add_mutable_aux_preds.m"
    {
#line 796 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 796 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_58_58, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_8));
#line 796 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_58_58, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_59_59));
#line 796 "add_mutable_aux_preds.m"
    }
#line 796 "add_mutable_aux_preds.m"
    {
#line 796 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 796 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_56_56, 0) = ((MR_Box) ((MR_String) " "));
#line 796 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_56_56, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_58_58));
#line 796 "add_mutable_aux_preds.m"
    }
#line 796 "add_mutable_aux_preds.m"
    {
#line 796 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 796 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__HighLevelTypeName_14));
#line 796 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_56_56));
#line 796 "add_mutable_aux_preds.m"
    }
#line 796 "add_mutable_aux_preds.m"
    {
#line 796 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 796 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_53_53, 0) = ((MR_Box) ((MR_String) "    extern "));
#line 796 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_53_53, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_55_55));
#line 796 "add_mutable_aux_preds.m"
    }
#line 795 "add_mutable_aux_preds.m"
    {
#line 795 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 795 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_51_51, 0) = ((MR_Box) ((MR_String) "#ifdef MR_HIGHLEVEL_CODE\n"));
#line 795 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_51_51, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_53_53));
#line 795 "add_mutable_aux_preds.m"
    }
#line 794 "add_mutable_aux_preds.m"
    {
#line 794 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__DeclBody_22 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_51_51);
    }
#line 801 "add_mutable_aux_preds.m"
    {
#line 801 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 801 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_75_75, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__DeclBody_22));
#line 801 "add_mutable_aux_preds.m"
    }
#line 800 "add_mutable_aux_preds.m"
    {
#line 800 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__ForeignDeclCode_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 800 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignDeclCode_23, 0) = ((MR_Box) ((MR_Integer) 0));
#line 800 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignDeclCode_23, 1) = ((MR_Box) ((MR_Integer) 1));
#line 800 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignDeclCode_23, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_75_75));
#line 800 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignDeclCode_23, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_12));
#line 800 "add_mutable_aux_preds.m"
    }
#line 802 "add_mutable_aux_preds.m"
    {
#line 802 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_add_foreign_decl_code_3_p_0(hlds__make_hlds__add_mutable_aux_preds__ForeignDeclCode_23, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_26, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_76_76);
    }
#line 805 "add_mutable_aux_preds.m"
    {
#line 805 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 805 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_81_81, 0) = ((MR_Box) ((MR_String) ";\n"));
#line 805 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_81_81, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockDefnStrs_20));
#line 805 "add_mutable_aux_preds.m"
    }
#line 805 "add_mutable_aux_preds.m"
    {
#line 805 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 805 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_80_80, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_8));
#line 805 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_80_80, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_81_81));
#line 805 "add_mutable_aux_preds.m"
    }
#line 805 "add_mutable_aux_preds.m"
    {
#line 805 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 805 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_78_78, 0) = ((MR_Box) ((MR_String) " "));
#line 805 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_78_78, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_80_80));
#line 805 "add_mutable_aux_preds.m"
    }
#line 805 "add_mutable_aux_preds.m"
    {
#line 805 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 805 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_77_77, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TypeName_18));
#line 805 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_77_77, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_78_78));
#line 805 "add_mutable_aux_preds.m"
    }
#line 804 "add_mutable_aux_preds.m"
    {
#line 804 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__DefnBody_24 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_77_77);
    }
#line 806 "add_mutable_aux_preds.m"
    {
#line 806 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 806 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_84_84, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__DefnBody_24));
#line 806 "add_mutable_aux_preds.m"
    }
#line 806 "add_mutable_aux_preds.m"
    {
#line 806 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__ForeignBodyCode_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 806 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignBodyCode_25, 0) = ((MR_Box) ((MR_Integer) 0));
#line 806 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignBodyCode_25, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_84_84));
#line 806 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignBodyCode_25, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_12));
#line 806 "add_mutable_aux_preds.m"
    }
#line 807 "add_mutable_aux_preds.m"
    {
#line 807 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_add_foreign_body_code_3_p_0(hlds__make_hlds__add_mutable_aux_preds__ForeignBodyCode_25, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_76_76, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_27);
    }
#line 739 "add_mutable_aux_preds.m"
  }
#line 734 "add_mutable_aux_preds.m"
}

#line 673 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_defns_for_mutable_8_p_0(
#line 673 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9,
#line 673 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_10,
#line 673 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_36,
#line 673 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_37,
#line 673 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_38,
#line 673 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_39,
#line 673 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_40,
#line 673 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_41)
#line 673 "add_mutable_aux_preds.m"
{
#line 678 "add_mutable_aux_preds.m"
  {
#line 678 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 678 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_14 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 0)));
#line 678 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 2)));
#line 678 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 7)));
#line 678 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 8)));
#line 678 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_25;
#line 678 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ImplLang_26;
#line 678 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_27;
#line 678 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_28;
#line 678 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___PreInit_29;
#line 678 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___LockUnlock_30;
#line 678 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_31;
#line 678 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_32;
#line 678 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_33;
#line 678 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_34;
#line 678 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_35;
#line 678 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_44_44;
#line 678 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Globals_51;
#line 678 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_52;
#line 678 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInit0_55;
#line 678 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__LockUnlock0_56;
#line 678 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess0_57;
#line 678 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_61;
#line 681 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___OrigType_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 1)));
#line 681 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___OrigInst_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 3)));
#line 681 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Inst_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 4)));
#line 681 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___InitTerm_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 5)));
#line 681 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___VarSetMutable_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 6)));
#line 681 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 9)));

#line 1657 "add_mutable_aux_preds.m"
    {
#line 1657 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_36, &hlds__make_hlds__add_mutable_aux_preds__Globals_51);
    }
#line 1658 "add_mutable_aux_preds.m"
    {
#line 1658 "add_mutable_aux_preds.m"
      libs__globals__get_target_2_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_51, &hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_52);
    }
#line 1675 "add_mutable_aux_preds.m"
#line 1675 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_52) {
#line 1675 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1675 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 1661 "add_mutable_aux_preds.m"
        {
#line 1661 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__HighLevelCode_58;

#line 1662 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__ImplLang_26 = (MR_Integer) 0;
#line 1663 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__Lang_27 = (MR_Integer) 0;
#line 1664 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__PreInit0_55 = (MR_Integer) 1;
#line 1665 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LockUnlock0_56 = (MR_Integer) 1;
#line 1666 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess0_57 = (MR_Integer) 1;
#line 1667 "add_mutable_aux_preds.m"
          {
#line 1667 "add_mutable_aux_preds.m"
            libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_51, (MR_Integer) 252, &hlds__make_hlds__add_mutable_aux_preds__HighLevelCode_58);
          }
#line 1671 "add_mutable_aux_preds.m"
#line 1671 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__HighLevelCode_58) {
#line 1671 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1671 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 1670 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_28 = (MR_Integer) 1;
#line 1671 "add_mutable_aux_preds.m"
              break;
#line 1671 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 1673 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_28 = (MR_Integer) 0;
#line 1671 "add_mutable_aux_preds.m"
              break;
#line 1671 "add_mutable_aux_preds.m"
          }
#line 1661 "add_mutable_aux_preds.m"
        }
#line 1675 "add_mutable_aux_preds.m"
        break;
#line 1675 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 1676 "add_mutable_aux_preds.m"
        {
#line 1676 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_60;

#line 1677 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__ImplLang_26 = (MR_Integer) 1;
#line 1678 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__Lang_27 = (MR_Integer) 1;
#line 1679 "add_mutable_aux_preds.m"
          {
#line 1679 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_60 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_21);
          }
#line 1683 "add_mutable_aux_preds.m"
#line 1683 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_60) {
#line 1683 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1683 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 1685 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__PreInit0_55 = (MR_Integer) 0;
#line 1683 "add_mutable_aux_preds.m"
              break;
#line 1683 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 1682 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__PreInit0_55 = (MR_Integer) 1;
#line 1683 "add_mutable_aux_preds.m"
              break;
#line 1683 "add_mutable_aux_preds.m"
          }
#line 1687 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LockUnlock0_56 = (MR_Integer) 0;
#line 1688 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess0_57 = (MR_Integer) 1;
#line 1689 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_28 = (MR_Integer) 0;
#line 1676 "add_mutable_aux_preds.m"
        }
#line 1675 "add_mutable_aux_preds.m"
        break;
#line 1675 "add_mutable_aux_preds.m"
      case (MR_Integer) 3:
#line 1699 "add_mutable_aux_preds.m"
        {
#line 1700 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__ImplLang_26 = (MR_Integer) 3;
#line 1701 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__Lang_27 = (MR_Integer) 3;
#line 1702 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__PreInit0_55 = (MR_Integer) 0;
#line 1703 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LockUnlock0_56 = (MR_Integer) 0;
#line 1704 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess0_57 = (MR_Integer) 0;
#line 1705 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_28 = (MR_Integer) 0;
#line 1699 "add_mutable_aux_preds.m"
        }
#line 1675 "add_mutable_aux_preds.m"
        break;
#line 1675 "add_mutable_aux_preds.m"
      case (MR_Integer) 2:
#line 1691 "add_mutable_aux_preds.m"
        {
#line 1692 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__ImplLang_26 = (MR_Integer) 2;
#line 1693 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__Lang_27 = (MR_Integer) 2;
#line 1694 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__PreInit0_55 = (MR_Integer) 0;
#line 1695 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LockUnlock0_56 = (MR_Integer) 0;
#line 1696 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess0_57 = (MR_Integer) 1;
#line 1697 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_28 = (MR_Integer) 0;
#line 1691 "add_mutable_aux_preds.m"
        }
#line 1675 "add_mutable_aux_preds.m"
        break;
#line 1675 "add_mutable_aux_preds.m"
    }
#line 1707 "add_mutable_aux_preds.m"
    {
#line 1707 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsConstant_61 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_21);
    }
#line 1713 "add_mutable_aux_preds.m"
#line 1713 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__IsConstant_61) {
#line 1713 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1713 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 1714 "add_mutable_aux_preds.m"
        {
#line 1715 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds___PreInit_29 = (MR_Integer) 0;
#line 1716 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds___LockUnlock_30 = (MR_Integer) 0;
#line 1717 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_31 = (MR_Integer) 0;
#line 1714 "add_mutable_aux_preds.m"
        }
#line 1713 "add_mutable_aux_preds.m"
        break;
#line 1713 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 1709 "add_mutable_aux_preds.m"
        {
#line 1710 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds___PreInit_29 = hlds__make_hlds__add_mutable_aux_preds__PreInit0_55;
#line 1711 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds___LockUnlock_30 = hlds__make_hlds__add_mutable_aux_preds__LockUnlock0_56;
#line 1712 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_31 = hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess0_57;
#line 1709 "add_mutable_aux_preds.m"
        }
#line 1713 "add_mutable_aux_preds.m"
        break;
#line 1713 "add_mutable_aux_preds.m"
    }
#line 1719 "add_mutable_aux_preds.m"
    {
#line 1719 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__TargetParams_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1719 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_25, 0) = ((MR_Box) ((hlds__make_hlds__add_mutable_aux_preds__ImplLang_26 | ((((hlds__make_hlds__add_mutable_aux_preds__Lang_27 << (MR_Integer) 2)) | ((((hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_28 << (MR_Integer) 4)) | ((((hlds__make_hlds__add_mutable_aux_preds___PreInit_29 << (MR_Integer) 5)) | ((((hlds__make_hlds__add_mutable_aux_preds___LockUnlock_30 << (MR_Integer) 6)) | ((hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_31 << (MR_Integer) 7)))))))))))));
#line 1719 "add_mutable_aux_preds.m"
    }
#line 691 "add_mutable_aux_preds.m"
    {
#line 691 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsConstant_32 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_21);
    }
#line 692 "add_mutable_aux_preds.m"
    {
#line 692 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_33 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_21);
    }
#line 695 "add_mutable_aux_preds.m"
    {
#line 695 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_36, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_34);
    }
#line 696 "add_mutable_aux_preds.m"
    {
#line 696 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_109_117_116_97_98_108_101_95_116_97_114_103_101_116_95_118_97_114_95_110_97_109_101_95_95_91_54_93_95_48_7_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_36, hlds__make_hlds__add_mutable_aux_preds__MutAttrs_21, hlds__make_hlds__add_mutable_aux_preds__ModuleName_34, hlds__make_hlds__add_mutable_aux_preds__MutableName_14, hlds__make_hlds__add_mutable_aux_preds__Lang_27, &hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_35);
    }
#line 706 "add_mutable_aux_preds.m"
#line 706 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__ImplLang_26) {
#line 706 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 706 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 704 "add_mutable_aux_preds.m"
        {
#line 704 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__define_global_var_c_7_p_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_35, hlds__make_hlds__add_mutable_aux_preds__Type_16, hlds__make_hlds__add_mutable_aux_preds__IsConstant_32, hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_33, hlds__make_hlds__add_mutable_aux_preds__Context_22, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_36, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_44_44);
        }
#line 706 "add_mutable_aux_preds.m"
        break;
#line 706 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 816 "add_mutable_aux_preds.m"
        {
#line 816 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__TypeStr_74;
#line 816 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__DefnBody_75;
#line 816 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_76;
#line 816 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__V_78_78;
#line 816 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__V_79_79;
#line 816 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__V_81_81;
#line 816 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_84_84;

#line 824 "add_mutable_aux_preds.m"
#line 824 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_33) {
#line 824 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 824 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 819 "add_mutable_aux_preds.m"
              {
#line 819 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_86_86;

#line 819 "add_mutable_aux_preds.m"
                {
#line 819 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_86_86 = parse_tree__builtin_lib_types__int_type_0_f_0();
                }
#line 819 "add_mutable_aux_preds.m"
                {
#line 819 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__make_hlds__add_mutable_aux_preds__Type_16, hlds__make_hlds__add_mutable_aux_preds__V_86_86);
                }
#line 819 "add_mutable_aux_preds.m"
                if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 820 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__TypeStr_74 = (MR_String) "int";
#line 819 "add_mutable_aux_preds.m"
                else
#line 822 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__TypeStr_74 = (MR_String) "object";
#line 819 "add_mutable_aux_preds.m"
              }
#line 824 "add_mutable_aux_preds.m"
              break;
#line 824 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 826 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__TypeStr_74 = (MR_String) "int";
#line 824 "add_mutable_aux_preds.m"
              break;
#line 824 "add_mutable_aux_preds.m"
          }
#line 828 "add_mutable_aux_preds.m"
          {
#line 828 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_81_81 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_35, (MR_String) ";\n");
          }
#line 828 "add_mutable_aux_preds.m"
          {
#line 828 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_79_79 = mercury__string__f_43_43_2_f_0((MR_String) " ", hlds__make_hlds__add_mutable_aux_preds__V_81_81);
          }
#line 828 "add_mutable_aux_preds.m"
          {
#line 828 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_78_78 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeStr_74, hlds__make_hlds__add_mutable_aux_preds__V_79_79);
          }
#line 828 "add_mutable_aux_preds.m"
          {
#line 828 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__DefnBody_75 = mercury__string__f_43_43_2_f_0((MR_String) "static ", hlds__make_hlds__add_mutable_aux_preds__V_78_78);
          }
#line 830 "add_mutable_aux_preds.m"
          {
#line 830 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 830 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_84_84, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__DefnBody_75));
#line 830 "add_mutable_aux_preds.m"
          }
#line 830 "add_mutable_aux_preds.m"
          {
#line 830 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 830 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_76, 0) = ((MR_Box) ((MR_Integer) 1));
#line 830 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_76, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_84_84));
#line 830 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_76, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_22));
#line 830 "add_mutable_aux_preds.m"
          }
#line 831 "add_mutable_aux_preds.m"
          {
#line 831 "add_mutable_aux_preds.m"
            hlds__hlds_module__module_add_foreign_body_code_3_p_0(hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_76, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_36, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_44_44);
          }
#line 816 "add_mutable_aux_preds.m"
        }
#line 706 "add_mutable_aux_preds.m"
        break;
#line 706 "add_mutable_aux_preds.m"
      case (MR_Integer) 3:
#line 715 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_44_44 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_36;
#line 706 "add_mutable_aux_preds.m"
        break;
#line 706 "add_mutable_aux_preds.m"
      case (MR_Integer) 2:
#line 712 "add_mutable_aux_preds.m"
        {
#line 712 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__define_global_var_java_6_p_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_35, hlds__make_hlds__add_mutable_aux_preds__Type_16, hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_33, hlds__make_hlds__add_mutable_aux_preds__Context_22, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_36, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_44_44);
        }
#line 706 "add_mutable_aux_preds.m"
        break;
#line 706 "add_mutable_aux_preds.m"
    }
#line 722 "add_mutable_aux_preds.m"
    {
#line 722 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__define_aux_preds_10_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, hlds__make_hlds__add_mutable_aux_preds__TargetParams_25, hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_35, hlds__make_hlds__add_mutable_aux_preds__PredStatus_10, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_44_44, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_37, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_38, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_39, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_40, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_41);
    }
#line 678 "add_mutable_aux_preds.m"
  }
#line 673 "add_mutable_aux_preds.m"
}

#line 650 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_8(
#line 650 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 650 "add_mutable_aux_preds.m"
{
#line 650 "add_mutable_aux_preds.m"
  {
#line 650 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 650 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 650 "add_mutable_aux_preds.m"
    {
#line 650 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__650__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 650 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 650 "add_mutable_aux_preds.m"
  }
#line 650 "add_mutable_aux_preds.m"
}

#line 648 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_7(
#line 648 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 648 "add_mutable_aux_preds.m"
{
#line 648 "add_mutable_aux_preds.m"
  {
#line 648 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 648 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 648 "add_mutable_aux_preds.m"
    {
#line 648 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__648__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 648 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 648 "add_mutable_aux_preds.m"
  }
#line 648 "add_mutable_aux_preds.m"
}

#line 647 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_6(
#line 647 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 647 "add_mutable_aux_preds.m"
{
#line 647 "add_mutable_aux_preds.m"
  {
#line 647 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 647 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 647 "add_mutable_aux_preds.m"
    {
#line 647 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__647__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 647 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 647 "add_mutable_aux_preds.m"
  }
#line 647 "add_mutable_aux_preds.m"
}

#line 646 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_5(
#line 646 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 646 "add_mutable_aux_preds.m"
{
#line 646 "add_mutable_aux_preds.m"
  {
#line 646 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 646 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 646 "add_mutable_aux_preds.m"
    {
#line 646 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__646__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 646 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 646 "add_mutable_aux_preds.m"
  }
#line 646 "add_mutable_aux_preds.m"
}

#line 644 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_4(
#line 644 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 644 "add_mutable_aux_preds.m"
{
#line 644 "add_mutable_aux_preds.m"
  {
#line 644 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 644 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 644 "add_mutable_aux_preds.m"
    {
#line 644 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__644__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 644 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 644 "add_mutable_aux_preds.m"
  }
#line 644 "add_mutable_aux_preds.m"
}

#line 643 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_3(
#line 643 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 643 "add_mutable_aux_preds.m"
{
#line 643 "add_mutable_aux_preds.m"
  {
#line 643 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 643 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 643 "add_mutable_aux_preds.m"
    {
#line 643 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__643__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 643 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 643 "add_mutable_aux_preds.m"
  }
#line 643 "add_mutable_aux_preds.m"
}

#line 641 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_2(
#line 641 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 641 "add_mutable_aux_preds.m"
{
#line 641 "add_mutable_aux_preds.m"
  {
#line 641 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 641 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 641 "add_mutable_aux_preds.m"
    {
#line 641 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__641__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 641 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 641 "add_mutable_aux_preds.m"
  }
#line 641 "add_mutable_aux_preds.m"
}

#line 639 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_1(
#line 639 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 639 "add_mutable_aux_preds.m"
{
#line 639 "add_mutable_aux_preds.m"
  {
#line 639 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 639 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 639 "add_mutable_aux_preds.m"
    {
#line 639 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__639__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 639 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 639 "add_mutable_aux_preds.m"
  }
#line 639 "add_mutable_aux_preds.m"
}

#line 628 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0(
#line 628 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_11,
#line 628 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_12,
#line 628 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_13,
#line 628 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Kind_14,
#line 628 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_15,
#line 628 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_16,
#line 628 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_36,
#line 628 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_37,
#line 628 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38,
#line 628 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39)
#line 628 "add_mutable_aux_preds.m"
{
#line 634 "add_mutable_aux_preds.m"
  {
#line 634 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 634 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredOrigin_19;
#line 634 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_20;
#line 634 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredOrFunc_21;
#line 634 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TypesAndModes_22;
#line 634 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__WithType_23;
#line 634 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__WithInst_24;
#line 634 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeDetism_25;
#line 634 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_27;
#line 634 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InstVarSet_28;
#line 634 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ExistQVars_29;
#line 634 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Purity_30;
#line 634 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Constraints_31;
#line 634 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_32;
#line 634 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Markers_34;
#line 634 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_40_40;
#line 634 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_44_44;
#line 634 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_45_45;
#line 634 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_49_49;
#line 634 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_50_50;
#line 634 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_55_55;
#line 634 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_60_60;
#line 634 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_65_65;
#line 634 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_70_70;
#line 634 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_76_76;
#line 636 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Origin_26;
#line 636 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_33;
#line 653 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_35_35;

#line 635 "add_mutable_aux_preds.m"
    {
#line 635 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredOrigin_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 635 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PredOrigin_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 635 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PredOrigin_19, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ModuleName_12));
#line 635 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PredOrigin_19, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__MutableName_13));
#line 635 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PredOrigin_19, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Kind_14));
#line 635 "add_mutable_aux_preds.m"
    }
#line 636 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__PredName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_11, (MR_Integer) 0)));
#line 636 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__PredOrFunc_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_11, (MR_Integer) 1)));
#line 636 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__TypesAndModes_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_11, (MR_Integer) 2)));
#line 636 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__WithType_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_11, (MR_Integer) 3)));
#line 636 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__WithInst_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_11, (MR_Integer) 4)));
#line 636 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MaybeDetism_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_11, (MR_Integer) 5)));
#line 636 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Origin_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_11, (MR_Integer) 6)));
#line 636 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_11, (MR_Integer) 7)));
#line 636 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__InstVarSet_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_11, (MR_Integer) 8)));
#line 636 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__ExistQVars_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_11, (MR_Integer) 9)));
#line 636 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Purity_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_11, (MR_Integer) 10)));
#line 636 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Constraints_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_11, (MR_Integer) 11)));
#line 636 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Context_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_11, (MR_Integer) 12)));
#line 636 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___SeqNum_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_11, (MR_Integer) 13)));
#line 639 "add_mutable_aux_preds.m"
    {
#line 639 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_44_44 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
    }
#line 639 "add_mutable_aux_preds.m"
    {
#line 639 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 639 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_40_40, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_4[4]));
#line 639 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_40_40, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_1));
#line 639 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 639 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_40_40, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_27));
#line 639 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_40_40, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_44_44));
#line 639 "add_mutable_aux_preds.m"
    }
#line 639 "add_mutable_aux_preds.m"
    {
#line 639 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_40_40, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/10", (MR_String) "TypeVarSet != varset.init");
    }
#line 641 "add_mutable_aux_preds.m"
    {
#line 641 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_49_49 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
#line 641 "add_mutable_aux_preds.m"
    {
#line 641 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 641 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_45_45, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_4[5]));
#line 641 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_45_45, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_2));
#line 641 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 641 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_45_45, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InstVarSet_28));
#line 641 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_45_45, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_49_49));
#line 641 "add_mutable_aux_preds.m"
    }
#line 641 "add_mutable_aux_preds.m"
    {
#line 641 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_45_45, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/10", (MR_String) "InstVarSet != varset.init");
    }
#line 643 "add_mutable_aux_preds.m"
    {
#line 643 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 643 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_50_50, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_4[6]));
#line 643 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_50_50, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_3));
#line 643 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 643 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_50_50, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ExistQVars_29));
#line 643 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_50_50, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 643 "add_mutable_aux_preds.m"
    }
#line 643 "add_mutable_aux_preds.m"
    {
#line 643 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_50_50, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/10", (MR_String) "ExistQVars != []");
    }
#line 644 "add_mutable_aux_preds.m"
    {
#line 644 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 644 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_4[7]));
#line 644 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_4));
#line 644 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 644 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PredOrFunc_21));
#line 644 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 4) = ((MR_Box) ((MR_Integer) 0));
#line 644 "add_mutable_aux_preds.m"
    }
#line 644 "add_mutable_aux_preds.m"
    {
#line 644 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_55_55, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/10", (MR_String) "PredOrFunc != pf_predicate");
    }
#line 646 "add_mutable_aux_preds.m"
    {
#line 646 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 646 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_60_60, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_4[8]));
#line 646 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_60_60, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_5));
#line 646 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 646 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_60_60, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__WithType_23));
#line 646 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_60_60, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 646 "add_mutable_aux_preds.m"
    }
#line 646 "add_mutable_aux_preds.m"
    {
#line 646 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_60_60, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/10", (MR_String) "WithType != no");
    }
#line 647 "add_mutable_aux_preds.m"
    {
#line 647 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 647 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_65_65, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_4[9]));
#line 647 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_65_65, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_6));
#line 647 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_65_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 647 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_65_65, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__WithInst_24));
#line 647 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_65_65, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 647 "add_mutable_aux_preds.m"
    }
#line 647 "add_mutable_aux_preds.m"
    {
#line 647 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_65_65, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/10", (MR_String) "WithInst != no");
    }
#line 648 "add_mutable_aux_preds.m"
    {
#line 648 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 648 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_70_70, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_4[10]));
#line 648 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_70_70, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_7));
#line 648 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_70_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 648 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_70_70, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__MaybeDetism_25));
#line 648 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_70_70, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[1])));
#line 648 "add_mutable_aux_preds.m"
    }
#line 648 "add_mutable_aux_preds.m"
    {
#line 648 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_70_70, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/10", (MR_String) "MaybeDet != yes(detism_det)");
    }
#line 650 "add_mutable_aux_preds.m"
    {
#line 650 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 650 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_76_76, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_4[11]));
#line 650 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_76_76, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_8));
#line 650 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_76_76, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 650 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_76_76, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Constraints_31));
#line 650 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_76_76, 4) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[65]));
#line 650 "add_mutable_aux_preds.m"
    }
#line 650 "add_mutable_aux_preds.m"
    {
#line 650 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_76_76, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/10", (MR_String) "Constraints != constraints([], [])");
    }
#line 652 "add_mutable_aux_preds.m"
    {
#line 652 "add_mutable_aux_preds.m"
      hlds__hlds_pred__marker_list_to_markers_2_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[66]), &hlds__make_hlds__add_mutable_aux_preds__Markers_34);
    }
#line 653 "add_mutable_aux_preds.m"
    {
#line 653 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_pred__module_add_pred_or_func_19_p_0(hlds__make_hlds__add_mutable_aux_preds__PredOrigin_19, hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_27, hlds__make_hlds__add_mutable_aux_preds__InstVarSet_28, hlds__make_hlds__add_mutable_aux_preds__ExistQVars_29, hlds__make_hlds__add_mutable_aux_preds__PredOrFunc_21, hlds__make_hlds__add_mutable_aux_preds__PredName_20, hlds__make_hlds__add_mutable_aux_preds__TypesAndModes_22, hlds__make_hlds__add_mutable_aux_preds__MaybeDetism_25, hlds__make_hlds__add_mutable_aux_preds__Purity_30, hlds__make_hlds__add_mutable_aux_preds__Constraints_31, hlds__make_hlds__add_mutable_aux_preds__Markers_34, hlds__make_hlds__add_mutable_aux_preds__Context_32, hlds__make_hlds__add_mutable_aux_preds__PredStatus_15, hlds__make_hlds__add_mutable_aux_preds__NeedQual_16, &hlds__make_hlds__add_mutable_aux_preds__V_35_35, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_36, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_37, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39);
    }
#line 634 "add_mutable_aux_preds.m"
  }
#line 628 "add_mutable_aux_preds.m"
}

#line 606 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_13_p_0(
#line 606 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_14,
#line 606 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_15,
#line 606 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Kind_16,
#line 606 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_17,
#line 606 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_18,
#line 606 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Purity_19,
#line 606 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_20,
#line 606 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_21,
#line 606 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_22,
#line 606 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_32,
#line 606 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_33,
#line 606 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_34,
#line 606 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_35)
#line 606 "add_mutable_aux_preds.m"
{
#line 614 "add_mutable_aux_preds.m"
  {
#line 614 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 614 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredOrigin_25;
#line 614 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_26;
#line 614 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InstVarSet_27;
#line 614 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Markers_30;
#line 621 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_31_31;

#line 615 "add_mutable_aux_preds.m"
    {
#line 615 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredOrigin_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 615 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PredOrigin_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 615 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PredOrigin_25, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ModuleName_14));
#line 615 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PredOrigin_25, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__MutableName_15));
#line 615 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PredOrigin_25, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Kind_16));
#line 615 "add_mutable_aux_preds.m"
    }
#line 616 "add_mutable_aux_preds.m"
    {
#line 616 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_26 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
    }
#line 617 "add_mutable_aux_preds.m"
    {
#line 617 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__InstVarSet_27 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
#line 620 "add_mutable_aux_preds.m"
    {
#line 620 "add_mutable_aux_preds.m"
      hlds__hlds_pred__marker_list_to_markers_2_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[66]), &hlds__make_hlds__add_mutable_aux_preds__Markers_30);
    }
#line 621 "add_mutable_aux_preds.m"
    {
#line 621 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_pred__module_add_pred_or_func_19_p_0(hlds__make_hlds__add_mutable_aux_preds__PredOrigin_25, hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_26, hlds__make_hlds__add_mutable_aux_preds__InstVarSet_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__PredName_17, hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_18, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[1]), hlds__make_hlds__add_mutable_aux_preds__Purity_19, (MR_Word) &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[65], hlds__make_hlds__add_mutable_aux_preds__Markers_30, hlds__make_hlds__add_mutable_aux_preds__Context_22, hlds__make_hlds__add_mutable_aux_preds__PredStatus_20, hlds__make_hlds__add_mutable_aux_preds__NeedQual_21, &hlds__make_hlds__add_mutable_aux_preds__V_31_31, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_32, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_33, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_34, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_35);
    }
#line 614 "add_mutable_aux_preds.m"
  }
#line 606 "add_mutable_aux_preds.m"
}

#line 591 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_pre_init_pred_decl_9_p_0(
#line 591 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_10,
#line 591 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_11,
#line 591 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_12,
#line 591 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_13,
#line 591 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_14,
#line 591 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_19,
#line 591 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_20,
#line 591 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_21,
#line 591 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_22)
#line 591 "add_mutable_aux_preds.m"
{
#line 597 "add_mutable_aux_preds.m"
  {
#line 597 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 597 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_17;

#line 598 "add_mutable_aux_preds.m"
    {
#line 598 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredName_17 = parse_tree__prog_mutable__mutable_pre_init_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_10, hlds__make_hlds__add_mutable_aux_preds__MutableName_11);
    }
#line 600 "add_mutable_aux_preds.m"
    {
#line 600 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_13_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_10, hlds__make_hlds__add_mutable_aux_preds__MutableName_11, (MR_Integer) 10, hlds__make_hlds__add_mutable_aux_preds__PredName_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 2, hlds__make_hlds__add_mutable_aux_preds__PredStatus_12, hlds__make_hlds__add_mutable_aux_preds__NeedQual_13, hlds__make_hlds__add_mutable_aux_preds__Context_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_19, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_20, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_21, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_22);
    }
#line 597 "add_mutable_aux_preds.m"
  }
#line 591 "add_mutable_aux_preds.m"
}

#line 573 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_init_pred_decl_9_p_0(
#line 573 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_10,
#line 573 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_11,
#line 573 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_12,
#line 573 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_13,
#line 573 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_14,
#line 573 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_19,
#line 573 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_20,
#line 573 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_21,
#line 573 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_22)
#line 573 "add_mutable_aux_preds.m"
{
#line 579 "add_mutable_aux_preds.m"
  {
#line 579 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 579 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_17;

#line 580 "add_mutable_aux_preds.m"
    {
#line 580 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredName_17 = parse_tree__prog_mutable__mutable_init_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_10, hlds__make_hlds__add_mutable_aux_preds__MutableName_11);
    }
#line 582 "add_mutable_aux_preds.m"
    {
#line 582 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_13_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_10, hlds__make_hlds__add_mutable_aux_preds__MutableName_11, (MR_Integer) 10, hlds__make_hlds__add_mutable_aux_preds__PredName_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 2, hlds__make_hlds__add_mutable_aux_preds__PredStatus_12, hlds__make_hlds__add_mutable_aux_preds__NeedQual_13, hlds__make_hlds__add_mutable_aux_preds__Context_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_19, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_20, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_21, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_22);
    }
#line 579 "add_mutable_aux_preds.m"
  }
#line 573 "add_mutable_aux_preds.m"
}

#line 534 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_unlock_pred_decl_9_p_0(
#line 534 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_10,
#line 534 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_11,
#line 534 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_12,
#line 534 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_13,
#line 534 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_14,
#line 534 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_19,
#line 534 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_20,
#line 534 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_21,
#line 534 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_22)
#line 534 "add_mutable_aux_preds.m"
{
#line 564 "add_mutable_aux_preds.m"
  {
#line 564 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 564 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_17;

#line 565 "add_mutable_aux_preds.m"
    {
#line 565 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredName_17 = parse_tree__prog_mutable__mutable_unlock_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_10, hlds__make_hlds__add_mutable_aux_preds__MutableName_11);
    }
#line 567 "add_mutable_aux_preds.m"
    {
#line 567 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_13_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_10, hlds__make_hlds__add_mutable_aux_preds__MutableName_11, (MR_Integer) 9, hlds__make_hlds__add_mutable_aux_preds__PredName_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 2, hlds__make_hlds__add_mutable_aux_preds__PredStatus_12, hlds__make_hlds__add_mutable_aux_preds__NeedQual_13, hlds__make_hlds__add_mutable_aux_preds__Context_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_19, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_20, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_21, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_22);
    }
#line 564 "add_mutable_aux_preds.m"
  }
#line 534 "add_mutable_aux_preds.m"
}

#line 530 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_lock_pred_decl_9_p_0(
#line 530 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_10,
#line 530 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_11,
#line 530 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_12,
#line 530 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_13,
#line 530 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_14,
#line 530 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_19,
#line 530 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_20,
#line 530 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_21,
#line 530 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_22)
#line 530 "add_mutable_aux_preds.m"
{
#line 556 "add_mutable_aux_preds.m"
  {
#line 556 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 556 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_17;

#line 557 "add_mutable_aux_preds.m"
    {
#line 557 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredName_17 = parse_tree__prog_mutable__mutable_lock_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_10, hlds__make_hlds__add_mutable_aux_preds__MutableName_11);
    }
#line 559 "add_mutable_aux_preds.m"
    {
#line 559 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_13_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_10, hlds__make_hlds__add_mutable_aux_preds__MutableName_11, (MR_Integer) 8, hlds__make_hlds__add_mutable_aux_preds__PredName_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 2, hlds__make_hlds__add_mutable_aux_preds__PredStatus_12, hlds__make_hlds__add_mutable_aux_preds__NeedQual_13, hlds__make_hlds__add_mutable_aux_preds__Context_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_19, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_20, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_21, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_22);
    }
#line 556 "add_mutable_aux_preds.m"
  }
#line 530 "add_mutable_aux_preds.m"
}

#line 526 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_unsafe_set_pred_decl_11_p_0(
#line 526 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_12,
#line 526 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_13,
#line 526 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_14,
#line 526 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_15,
#line 526 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_16,
#line 526 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_17,
#line 526 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_18,
#line 526 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_23,
#line 526 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_24,
#line 526 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_25,
#line 526 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_26)
#line 526 "add_mutable_aux_preds.m"
{
#line 548 "add_mutable_aux_preds.m"
  {
#line 548 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 548 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_21;
#line 548 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_22;
#line 548 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_27_27;
#line 548 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_28_28;

#line 549 "add_mutable_aux_preds.m"
    {
#line 549 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredName_21 = parse_tree__prog_mutable__mutable_unsafe_set_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_12, hlds__make_hlds__add_mutable_aux_preds__MutableName_13);
    }
#line 550 "add_mutable_aux_preds.m"
    {
#line 550 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_28_28 = parse_tree__prog_mode__in_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_15);
    }
#line 550 "add_mutable_aux_preds.m"
    {
#line 550 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 550 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_27_27, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Type_14));
#line 550 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_27_27, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_28_28));
#line 550 "add_mutable_aux_preds.m"
    }
#line 550 "add_mutable_aux_preds.m"
    {
#line 550 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 550 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_22, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_27_27));
#line 550 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 550 "add_mutable_aux_preds.m"
    }
#line 551 "add_mutable_aux_preds.m"
    {
#line 551 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_13_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_12, hlds__make_hlds__add_mutable_aux_preds__MutableName_13, (MR_Integer) 5, hlds__make_hlds__add_mutable_aux_preds__PredName_21, hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_22, (MR_Integer) 2, hlds__make_hlds__add_mutable_aux_preds__PredStatus_16, hlds__make_hlds__add_mutable_aux_preds__NeedQual_17, hlds__make_hlds__add_mutable_aux_preds__Context_18, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_23, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_24, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_25, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_26);
    }
#line 548 "add_mutable_aux_preds.m"
  }
#line 526 "add_mutable_aux_preds.m"
}

#line 522 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_unsafe_get_pred_decl_11_p_0(
#line 522 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_12,
#line 522 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_13,
#line 522 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_14,
#line 522 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_15,
#line 522 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_16,
#line 522 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_17,
#line 522 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_18,
#line 522 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_23,
#line 522 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_24,
#line 522 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_25,
#line 522 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_26)
#line 522 "add_mutable_aux_preds.m"
{
#line 540 "add_mutable_aux_preds.m"
  {
#line 540 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 540 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_21;
#line 540 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_22;
#line 540 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_27_27;
#line 540 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_28_28;

#line 541 "add_mutable_aux_preds.m"
    {
#line 541 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredName_21 = parse_tree__prog_mutable__mutable_unsafe_get_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_12, hlds__make_hlds__add_mutable_aux_preds__MutableName_13);
    }
#line 542 "add_mutable_aux_preds.m"
    {
#line 542 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_28_28 = parse_tree__prog_mode__out_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_15);
    }
#line 542 "add_mutable_aux_preds.m"
    {
#line 542 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 542 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_27_27, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Type_14));
#line 542 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_27_27, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_28_28));
#line 542 "add_mutable_aux_preds.m"
    }
#line 542 "add_mutable_aux_preds.m"
    {
#line 542 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 542 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_22, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_27_27));
#line 542 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 542 "add_mutable_aux_preds.m"
    }
#line 543 "add_mutable_aux_preds.m"
    {
#line 543 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_13_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_12, hlds__make_hlds__add_mutable_aux_preds__MutableName_13, (MR_Integer) 4, hlds__make_hlds__add_mutable_aux_preds__PredName_21, hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_22, (MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__PredStatus_16, hlds__make_hlds__add_mutable_aux_preds__NeedQual_17, hlds__make_hlds__add_mutable_aux_preds__Context_18, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_23, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_24, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_25, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_26);
    }
#line 540 "add_mutable_aux_preds.m"
  }
#line 522 "add_mutable_aux_preds.m"
}

#line 466 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0_4(
#line 466 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 466 "add_mutable_aux_preds.m"
{
#line 466 "add_mutable_aux_preds.m"
  {
#line 466 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 466 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 466 "add_mutable_aux_preds.m"
    {
#line 466 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_aux_pred_decls_for_mutable__466__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 466 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 466 "add_mutable_aux_preds.m"
  }
#line 466 "add_mutable_aux_preds.m"
}

#line 464 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0_3(
#line 464 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 464 "add_mutable_aux_preds.m"
{
#line 464 "add_mutable_aux_preds.m"
  {
#line 464 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 464 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 464 "add_mutable_aux_preds.m"
    {
#line 464 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_aux_pred_decls_for_mutable__464__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 464 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 464 "add_mutable_aux_preds.m"
  }
#line 464 "add_mutable_aux_preds.m"
}

#line 462 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0_2(
#line 462 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 462 "add_mutable_aux_preds.m"
{
#line 462 "add_mutable_aux_preds.m"
  {
#line 462 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 462 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 462 "add_mutable_aux_preds.m"
    {
#line 462 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_aux_pred_decls_for_mutable__462__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 462 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 462 "add_mutable_aux_preds.m"
  }
#line 462 "add_mutable_aux_preds.m"
}

#line 460 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0_1(
#line 460 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 460 "add_mutable_aux_preds.m"
{
#line 460 "add_mutable_aux_preds.m"
  {
#line 460 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 460 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 460 "add_mutable_aux_preds.m"
    {
#line 460 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_aux_pred_decls_for_mutable__460__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 460 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 460 "add_mutable_aux_preds.m"
  }
#line 460 "add_mutable_aux_preds.m"
}

#line 398 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0(
#line 398 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_8,
#line 398 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_9,
#line 398 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_10,
#line 398 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_40,
#line 398 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_41,
#line 398 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_42,
#line 398 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_43)
#line 398 "add_mutable_aux_preds.m"
{
#line 403 "add_mutable_aux_preds.m"
  {
#line 403 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 403 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_13 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_8, (MR_Integer) 0)));
#line 403 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_8, (MR_Integer) 2)));
#line 403 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_8, (MR_Integer) 4)));
#line 403 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_8, (MR_Integer) 7)));
#line 403 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_8, (MR_Integer) 8)));
#line 403 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_23;
#line 404 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___OrigType_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_8, (MR_Integer) 1)));
#line 404 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___OrigInst_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_8, (MR_Integer) 3)));
#line 404 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___InitTerm_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_8, (MR_Integer) 5)));
#line 404 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___VarSetMutable_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_8, (MR_Integer) 6)));
#line 404 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_8, (MR_Integer) 9)));

#line 407 "add_mutable_aux_preds.m"
    {
#line 407 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__get_mutable_target_params_3_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_40, hlds__make_hlds__add_mutable_aux_preds__MutAttrs_20, &hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_23);
    }
#line 410 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 409 "add_mutable_aux_preds.m"
      {
#line 409 "add_mutable_aux_preds.m"
        *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_41 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_40;
#line 409 "add_mutable_aux_preds.m"
        *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_43 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_42;
#line 409 "add_mutable_aux_preds.m"
      }
#line 410 "add_mutable_aux_preds.m"
    else
#line 411 "add_mutable_aux_preds.m"
      {
#line 411 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_23, (MR_Integer) 0)));
#line 411 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInit_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_24, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 411 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__LockUnlock_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_24, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 411 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_24, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 411 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_31;
#line 411 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_32;
#line 411 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__AttachToIO_33;
#line 411 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_44_44;
#line 411 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_45_45;
#line 411 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46;
#line 411 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_47_47;
#line 411 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_50_50;
#line 411 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51;
#line 411 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_54_54;
#line 411 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_55_55;
#line 412 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds___ImplLang_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_24, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 412 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds___Lang_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_24, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
#line 412 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_24, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 414 "add_mutable_aux_preds.m"
        {
#line 414 "add_mutable_aux_preds.m"
          hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_40, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_31);
        }
#line 424 "add_mutable_aux_preds.m"
#line 424 "add_mutable_aux_preds.m"
        switch (hlds__make_hlds__add_mutable_aux_preds__PreInit_28) {
#line 424 "add_mutable_aux_preds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 424 "add_mutable_aux_preds.m"
          case (MR_Integer) 0:
#line 423 "add_mutable_aux_preds.m"
            {
#line 423 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_44_44 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_40;
#line 423 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_45_45 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_42;
#line 423 "add_mutable_aux_preds.m"
            }
#line 424 "add_mutable_aux_preds.m"
            break;
#line 424 "add_mutable_aux_preds.m"
          case (MR_Integer) 1:
#line 426 "add_mutable_aux_preds.m"
            {
#line 426 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__add_mutable_pre_init_pred_decl_9_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_31, hlds__make_hlds__add_mutable_aux_preds__MutableName_13, hlds__make_hlds__add_mutable_aux_preds__PredStatus_9, hlds__make_hlds__add_mutable_aux_preds__NeedQual_10, hlds__make_hlds__add_mutable_aux_preds__Context_21, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_40, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_44_44, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_42, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_45_45);
            }
#line 424 "add_mutable_aux_preds.m"
            break;
#line 424 "add_mutable_aux_preds.m"
        }
#line 431 "add_mutable_aux_preds.m"
        {
#line 431 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__add_mutable_init_pred_decl_9_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_31, hlds__make_hlds__add_mutable_aux_preds__MutableName_13, hlds__make_hlds__add_mutable_aux_preds__PredStatus_9, hlds__make_hlds__add_mutable_aux_preds__NeedQual_10, hlds__make_hlds__add_mutable_aux_preds__Context_21, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_44_44, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_45_45, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_47_47);
        }
#line 437 "add_mutable_aux_preds.m"
#line 437 "add_mutable_aux_preds.m"
        switch (hlds__make_hlds__add_mutable_aux_preds__LockUnlock_29) {
#line 437 "add_mutable_aux_preds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 437 "add_mutable_aux_preds.m"
          case (MR_Integer) 0:
#line 436 "add_mutable_aux_preds.m"
            {
#line 436 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_50_50 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46;
#line 436 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_47_47;
#line 436 "add_mutable_aux_preds.m"
            }
#line 437 "add_mutable_aux_preds.m"
            break;
#line 437 "add_mutable_aux_preds.m"
          case (MR_Integer) 1:
#line 438 "add_mutable_aux_preds.m"
            {
#line 438 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_48_48;
#line 438 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_49_49;

#line 439 "add_mutable_aux_preds.m"
              {
#line 439 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__add_mutable_lock_pred_decl_9_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_31, hlds__make_hlds__add_mutable_aux_preds__MutableName_13, hlds__make_hlds__add_mutable_aux_preds__PredStatus_9, hlds__make_hlds__add_mutable_aux_preds__NeedQual_10, hlds__make_hlds__add_mutable_aux_preds__Context_21, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_48_48, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_47_47, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_49_49);
              }
#line 441 "add_mutable_aux_preds.m"
              {
#line 441 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__add_mutable_unlock_pred_decl_9_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_31, hlds__make_hlds__add_mutable_aux_preds__MutableName_13, hlds__make_hlds__add_mutable_aux_preds__PredStatus_9, hlds__make_hlds__add_mutable_aux_preds__NeedQual_10, hlds__make_hlds__add_mutable_aux_preds__Context_21, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_48_48, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_50_50, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_49_49, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51);
              }
#line 438 "add_mutable_aux_preds.m"
            }
#line 437 "add_mutable_aux_preds.m"
            break;
#line 437 "add_mutable_aux_preds.m"
        }
#line 446 "add_mutable_aux_preds.m"
#line 446 "add_mutable_aux_preds.m"
        switch (hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_30) {
#line 446 "add_mutable_aux_preds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 446 "add_mutable_aux_preds.m"
          case (MR_Integer) 0:
#line 445 "add_mutable_aux_preds.m"
            {
#line 445 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_54_54 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_50_50;
#line 445 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_55_55 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51;
#line 445 "add_mutable_aux_preds.m"
            }
#line 446 "add_mutable_aux_preds.m"
            break;
#line 446 "add_mutable_aux_preds.m"
          case (MR_Integer) 1:
#line 447 "add_mutable_aux_preds.m"
            {
#line 447 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_52_52;
#line 447 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_53_53;

#line 448 "add_mutable_aux_preds.m"
              {
#line 448 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__add_mutable_unsafe_get_pred_decl_11_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_31, hlds__make_hlds__add_mutable_aux_preds__MutableName_13, hlds__make_hlds__add_mutable_aux_preds__Type_15, hlds__make_hlds__add_mutable_aux_preds__Inst_17, hlds__make_hlds__add_mutable_aux_preds__PredStatus_9, hlds__make_hlds__add_mutable_aux_preds__NeedQual_10, hlds__make_hlds__add_mutable_aux_preds__Context_21, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_50_50, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_52_52, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_53_53);
              }
#line 451 "add_mutable_aux_preds.m"
              {
#line 451 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__add_mutable_unsafe_set_pred_decl_11_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_31, hlds__make_hlds__add_mutable_aux_preds__MutableName_13, hlds__make_hlds__add_mutable_aux_preds__Type_15, hlds__make_hlds__add_mutable_aux_preds__Inst_17, hlds__make_hlds__add_mutable_aux_preds__PredStatus_9, hlds__make_hlds__add_mutable_aux_preds__NeedQual_10, hlds__make_hlds__add_mutable_aux_preds__Context_21, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_52_52, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_54_54, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_53_53, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_55_55);
              }
#line 447 "add_mutable_aux_preds.m"
            }
#line 446 "add_mutable_aux_preds.m"
            break;
#line 446 "add_mutable_aux_preds.m"
        }
#line 456 "add_mutable_aux_preds.m"
        {
#line 456 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__IsConstant_32 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_20);
        }
#line 457 "add_mutable_aux_preds.m"
        {
#line 457 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__AttachToIO_33 = parse_tree__prog_item__mutable_var_attach_to_io_state_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_20);
        }
#line 482 "add_mutable_aux_preds.m"
#line 482 "add_mutable_aux_preds.m"
        switch (hlds__make_hlds__add_mutable_aux_preds__IsConstant_32) {
#line 482 "add_mutable_aux_preds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 482 "add_mutable_aux_preds.m"
          case (MR_Integer) 1:
#line 459 "add_mutable_aux_preds.m"
            {
#line 459 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__ConstantGetPredDecl_34;
#line 459 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__ConstantSetPredDecl_35;
#line 459 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__V_68_68;
#line 459 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__V_73_73;
#line 459 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__V_78_78;
#line 459 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__V_83_83;
#line 459 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_89_89;
#line 459 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_90_90;

#line 460 "add_mutable_aux_preds.m"
              {
#line 460 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 460 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_68_68, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_4[0]));
#line 460 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_68_68, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0_1));
#line 460 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_68_68, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 460 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_68_68, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PreInit_28));
#line 460 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_68_68, 4) = ((MR_Box) ((MR_Integer) 0));
#line 460 "add_mutable_aux_preds.m"
              }
#line 460 "add_mutable_aux_preds.m"
              {
#line 460 "add_mutable_aux_preds.m"
                mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_68_68, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_aux_pred_decls_for_mutable\'/7", (MR_String) "PreInit = need_pre_init_pred");
              }
#line 462 "add_mutable_aux_preds.m"
              {
#line 462 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 462 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_73_73, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_4[1]));
#line 462 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_73_73, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0_2));
#line 462 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_73_73, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 462 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_73_73, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockUnlock_29));
#line 462 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_73_73, 4) = ((MR_Box) ((MR_Integer) 0));
#line 462 "add_mutable_aux_preds.m"
              }
#line 462 "add_mutable_aux_preds.m"
              {
#line 462 "add_mutable_aux_preds.m"
                mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_73_73, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_aux_pred_decls_for_mutable\'/7", (MR_String) "LockUnlock = need_lock_unlock_preds");
              }
#line 464 "add_mutable_aux_preds.m"
              {
#line 464 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 464 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_78_78, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_4[2]));
#line 464 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_78_78, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0_3));
#line 464 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_78_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 464 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_78_78, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_30));
#line 464 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_78_78, 4) = ((MR_Box) ((MR_Integer) 0));
#line 464 "add_mutable_aux_preds.m"
              }
#line 464 "add_mutable_aux_preds.m"
              {
#line 464 "add_mutable_aux_preds.m"
                mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_78_78, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_aux_pred_decls_for_mutable\'/7", (MR_String) "UnsafeAccess = need_unsafe_get_set_preds");
              }
#line 466 "add_mutable_aux_preds.m"
              {
#line 466 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 466 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_83_83, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_4[3]));
#line 466 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_83_83, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0_4));
#line 466 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_83_83, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 466 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_83_83, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__AttachToIO_33));
#line 466 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_83_83, 4) = ((MR_Box) ((MR_Integer) 0));
#line 466 "add_mutable_aux_preds.m"
              }
#line 466 "add_mutable_aux_preds.m"
              {
#line 466 "add_mutable_aux_preds.m"
                mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_83_83, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_aux_pred_decls_for_mutable\'/7", (MR_String) "AttachToIO = mutable_attach_to_io_state");
              }
#line 472 "add_mutable_aux_preds.m"
              {
#line 472 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__ConstantGetPredDecl_34 = parse_tree__prog_mutable__constant_get_pred_decl_5_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_31, hlds__make_hlds__add_mutable_aux_preds__MutableName_13, hlds__make_hlds__add_mutable_aux_preds__Type_15, hlds__make_hlds__add_mutable_aux_preds__Inst_17, hlds__make_hlds__add_mutable_aux_preds__Context_21);
              }
#line 474 "add_mutable_aux_preds.m"
              {
#line 474 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__ConstantSetPredDecl_35 = parse_tree__prog_mutable__constant_set_pred_decl_5_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_31, hlds__make_hlds__add_mutable_aux_preds__MutableName_13, hlds__make_hlds__add_mutable_aux_preds__Type_15, hlds__make_hlds__add_mutable_aux_preds__Inst_17, hlds__make_hlds__add_mutable_aux_preds__Context_21);
              }
#line 476 "add_mutable_aux_preds.m"
              {
#line 476 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0(hlds__make_hlds__add_mutable_aux_preds__ConstantGetPredDecl_34, hlds__make_hlds__add_mutable_aux_preds__ModuleName_31, hlds__make_hlds__add_mutable_aux_preds__MutableName_13, (MR_Integer) 6, hlds__make_hlds__add_mutable_aux_preds__PredStatus_9, hlds__make_hlds__add_mutable_aux_preds__NeedQual_10, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_54_54, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_89_89, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_55_55, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_90_90);
              }
#line 479 "add_mutable_aux_preds.m"
              {
#line 479 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0(hlds__make_hlds__add_mutable_aux_preds__ConstantSetPredDecl_35, hlds__make_hlds__add_mutable_aux_preds__ModuleName_31, hlds__make_hlds__add_mutable_aux_preds__MutableName_13, (MR_Integer) 7, hlds__make_hlds__add_mutable_aux_preds__PredStatus_9, hlds__make_hlds__add_mutable_aux_preds__NeedQual_10, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_89_89, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_41, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_90_90, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_43);
              }
#line 459 "add_mutable_aux_preds.m"
            }
#line 482 "add_mutable_aux_preds.m"
            break;
#line 482 "add_mutable_aux_preds.m"
          case (MR_Integer) 0:
#line 483 "add_mutable_aux_preds.m"
            {
#line 483 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__StdGetPredDecl_36;
#line 483 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__StdSetPredDecl_37;
#line 483 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_57_57;
#line 483 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_58_58;
#line 483 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_60_60;
#line 483 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_61_61;

#line 487 "add_mutable_aux_preds.m"
              {
#line 487 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__StdGetPredDecl_36 = parse_tree__prog_mutable__std_get_pred_decl_5_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_31, hlds__make_hlds__add_mutable_aux_preds__MutableName_13, hlds__make_hlds__add_mutable_aux_preds__Type_15, hlds__make_hlds__add_mutable_aux_preds__Inst_17, hlds__make_hlds__add_mutable_aux_preds__Context_21);
              }
#line 489 "add_mutable_aux_preds.m"
              {
#line 489 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__StdSetPredDecl_37 = parse_tree__prog_mutable__std_set_pred_decl_5_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_31, hlds__make_hlds__add_mutable_aux_preds__MutableName_13, hlds__make_hlds__add_mutable_aux_preds__Type_15, hlds__make_hlds__add_mutable_aux_preds__Inst_17, hlds__make_hlds__add_mutable_aux_preds__Context_21);
              }
#line 491 "add_mutable_aux_preds.m"
              {
#line 491 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0(hlds__make_hlds__add_mutable_aux_preds__StdGetPredDecl_36, hlds__make_hlds__add_mutable_aux_preds__ModuleName_31, hlds__make_hlds__add_mutable_aux_preds__MutableName_13, (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__PredStatus_9, hlds__make_hlds__add_mutable_aux_preds__NeedQual_10, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_54_54, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_57_57, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_55_55, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_58_58);
              }
#line 494 "add_mutable_aux_preds.m"
              {
#line 494 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0(hlds__make_hlds__add_mutable_aux_preds__StdSetPredDecl_37, hlds__make_hlds__add_mutable_aux_preds__ModuleName_31, hlds__make_hlds__add_mutable_aux_preds__MutableName_13, (MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__PredStatus_9, hlds__make_hlds__add_mutable_aux_preds__NeedQual_10, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_57_57, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_60_60, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_58_58, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_61_61);
              }
#line 502 "add_mutable_aux_preds.m"
#line 502 "add_mutable_aux_preds.m"
              switch (hlds__make_hlds__add_mutable_aux_preds__AttachToIO_33) {
#line 502 "add_mutable_aux_preds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 502 "add_mutable_aux_preds.m"
                case (MR_Integer) 1:
#line 503 "add_mutable_aux_preds.m"
                  {
#line 503 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__IOGetPredDecl_38;
#line 503 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__IOSetPredDecl_39;
#line 503 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_63_63;
#line 503 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_64_64;

#line 504 "add_mutable_aux_preds.m"
                    {
#line 504 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__IOGetPredDecl_38 = parse_tree__prog_mutable__io_get_pred_decl_5_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_31, hlds__make_hlds__add_mutable_aux_preds__MutableName_13, hlds__make_hlds__add_mutable_aux_preds__Type_15, hlds__make_hlds__add_mutable_aux_preds__Inst_17, hlds__make_hlds__add_mutable_aux_preds__Context_21);
                    }
#line 506 "add_mutable_aux_preds.m"
                    {
#line 506 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__IOSetPredDecl_39 = parse_tree__prog_mutable__io_set_pred_decl_5_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_31, hlds__make_hlds__add_mutable_aux_preds__MutableName_13, hlds__make_hlds__add_mutable_aux_preds__Type_15, hlds__make_hlds__add_mutable_aux_preds__Inst_17, hlds__make_hlds__add_mutable_aux_preds__Context_21);
                    }
#line 508 "add_mutable_aux_preds.m"
                    {
#line 508 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0(hlds__make_hlds__add_mutable_aux_preds__IOGetPredDecl_38, hlds__make_hlds__add_mutable_aux_preds__ModuleName_31, hlds__make_hlds__add_mutable_aux_preds__MutableName_13, (MR_Integer) 2, hlds__make_hlds__add_mutable_aux_preds__PredStatus_9, hlds__make_hlds__add_mutable_aux_preds__NeedQual_10, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_60_60, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_63_63, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_61_61, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_64_64);
                    }
#line 511 "add_mutable_aux_preds.m"
                    {
#line 511 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0(hlds__make_hlds__add_mutable_aux_preds__IOSetPredDecl_39, hlds__make_hlds__add_mutable_aux_preds__ModuleName_31, hlds__make_hlds__add_mutable_aux_preds__MutableName_13, (MR_Integer) 3, hlds__make_hlds__add_mutable_aux_preds__PredStatus_9, hlds__make_hlds__add_mutable_aux_preds__NeedQual_10, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_63_63, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_41, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_64_64, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_43);
                    }
#line 503 "add_mutable_aux_preds.m"
                  }
#line 502 "add_mutable_aux_preds.m"
                  break;
#line 502 "add_mutable_aux_preds.m"
                case (MR_Integer) 0:
#line 501 "add_mutable_aux_preds.m"
                  {
#line 501 "add_mutable_aux_preds.m"
                    *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_41 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_60_60;
#line 501 "add_mutable_aux_preds.m"
                    *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_43 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_61_61;
#line 501 "add_mutable_aux_preds.m"
                  }
#line 502 "add_mutable_aux_preds.m"
                  break;
#line 502 "add_mutable_aux_preds.m"
              }
#line 483 "add_mutable_aux_preds.m"
            }
#line 482 "add_mutable_aux_preds.m"
            break;
#line 482 "add_mutable_aux_preds.m"
        }
#line 411 "add_mutable_aux_preds.m"
      }
#line 403 "add_mutable_aux_preds.m"
  }
#line 398 "add_mutable_aux_preds.m"
}

#line 378 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__named_parents_to_pieces_2_p_0(
#line 378 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 378 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2)
#line 378 "add_mutable_aux_preds.m"
{
#line 381 "add_mutable_aux_preds.m"
  {
#line 381 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 381 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 381 "add_mutable_aux_preds.m"
      *hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 381 "add_mutable_aux_preds.m"
    else
#line 382 "add_mutable_aux_preds.m"
      {
#line 382 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__InstId_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, (MR_Integer) 0)));
#line 382 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__InstIds_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, (MR_Integer) 1)));
#line 382 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadPieces_6;
#line 382 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__TailPieces_7;
#line 382 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__InstName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__InstId_3, (MR_Integer) 0)));
#line 382 "add_mutable_aux_preds.m"
        MR_Integer hlds__make_hlds__add_mutable_aux_preds__InstArity_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__InstId_3, (MR_Integer) 1)));
#line 382 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_15_15;
#line 382 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_16_16;
#line 382 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_17_17;

#line 393 "add_mutable_aux_preds.m"
        {
#line 393 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 393 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_17_17, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InstName_11));
#line 393 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_17_17, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InstArity_12));
#line 393 "add_mutable_aux_preds.m"
        }
#line 393 "add_mutable_aux_preds.m"
        {
#line 393 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_16_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 393 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__V_16_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 393 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__V_16_16, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_17_17));
#line 393 "add_mutable_aux_preds.m"
        }
#line 393 "add_mutable_aux_preds.m"
        {
#line 393 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 393 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_15_15, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_16_16));
#line 393 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[31])));
#line 393 "add_mutable_aux_preds.m"
        }
#line 392 "add_mutable_aux_preds.m"
        {
#line 392 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__HeadPieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 392 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__HeadPieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[64])));
#line 392 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__HeadPieces_6, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_15_15));
#line 392 "add_mutable_aux_preds.m"
        }
#line 384 "add_mutable_aux_preds.m"
        {
#line 384 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__named_parents_to_pieces_2_p_0(hlds__make_hlds__add_mutable_aux_preds__InstIds_4, &hlds__make_hlds__add_mutable_aux_preds__TailPieces_7);
        }
#line 385 "add_mutable_aux_preds.m"
        {
#line 385 "add_mutable_aux_preds.m"
          *hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_mutable_aux_preds__HeadPieces_6, hlds__make_hlds__add_mutable_aux_preds__TailPieces_7);
        }
#line 382 "add_mutable_aux_preds.m"
      }
#line 381 "add_mutable_aux_preds.m"
  }
#line 378 "add_mutable_aux_preds.m"
}

#line 361 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__invalid_inst_in_mutable_8_p_0(
#line 361 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_9,
#line 361 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_10,
#line 361 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__InstVarSet_11,
#line 361 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ParentInsts_12,
#line 361 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_13,
#line 361 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ProblemPieces_14,
#line 361 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_21,
#line 361 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_22)
#line 361 "add_mutable_aux_preds.m"
{
#line 367 "add_mutable_aux_preds.m"
  {
#line 367 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 367 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_53_53;
#line 367 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ParentPieces_16;
#line 367 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InstPieces_17;
#line 367 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Pieces_18;
#line 367 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Msg_19;
#line 367 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Spec_20;
#line 367 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_34_34;
#line 367 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_37_37;
#line 367 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_38_38;
#line 367 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_41_41;
#line 367 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_45_45;
#line 367 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_46_46;
#line 367 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_50_50;

#line 368 "add_mutable_aux_preds.m"
    {
#line 368 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__named_parents_to_pieces_2_p_0(hlds__make_hlds__add_mutable_aux_preds__ParentInsts_12, &hlds__make_hlds__add_mutable_aux_preds__ParentPieces_16);
    }
#line 369 "add_mutable_aux_preds.m"
    {
#line 369 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__InstPieces_17 = hlds__error_msg_inst__error_msg_inst_8_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_9, hlds__make_hlds__add_mutable_aux_preds__InstVarSet_11, (MR_Integer) 0, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[59]), (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[61]), hlds__make_hlds__add_mutable_aux_preds__Inst_13);
    }
#line 10597 "hlds.make_hlds.add_mutable_aux_preds.c"
    hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_53_53 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 372 "add_mutable_aux_preds.m"
    {
#line 372 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 372 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_34_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[62])));
#line 372 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_34_34, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ParentPieces_16));
#line 372 "add_mutable_aux_preds.m"
    }
#line 373 "add_mutable_aux_preds.m"
    {
#line 373 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 373 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_38_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[63])));
#line 373 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_38_38, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InstPieces_17));
#line 373 "add_mutable_aux_preds.m"
    }
#line 373 "add_mutable_aux_preds.m"
    {
#line 373 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_41_41 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_53_53, hlds__make_hlds__add_mutable_aux_preds__ProblemPieces_14, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[11]));
    }
#line 373 "add_mutable_aux_preds.m"
    {
#line 373 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_37_37 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_53_53, hlds__make_hlds__add_mutable_aux_preds__V_38_38, hlds__make_hlds__add_mutable_aux_preds__V_41_41);
    }
#line 372 "add_mutable_aux_preds.m"
    {
#line 372 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__Pieces_18 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_53_53, hlds__make_hlds__add_mutable_aux_preds__V_34_34, hlds__make_hlds__add_mutable_aux_preds__V_37_37);
    }
#line 374 "add_mutable_aux_preds.m"
    {
#line 374 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 374 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_46_46, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Pieces_18));
#line 374 "add_mutable_aux_preds.m"
    }
#line 374 "add_mutable_aux_preds.m"
    {
#line 374 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 374 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_45_45, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_46_46));
#line 374 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 374 "add_mutable_aux_preds.m"
    }
#line 374 "add_mutable_aux_preds.m"
    {
#line 374 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__Msg_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 374 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Msg_19, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_10));
#line 374 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Msg_19, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_45_45));
#line 374 "add_mutable_aux_preds.m"
    }
#line 375 "add_mutable_aux_preds.m"
    {
#line 375 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 375 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_50_50, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Msg_19));
#line 375 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 375 "add_mutable_aux_preds.m"
    }
#line 375 "add_mutable_aux_preds.m"
    {
#line 375 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__Spec_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 375 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Spec_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 375 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Spec_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 375 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Spec_20, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_50_50));
#line 375 "add_mutable_aux_preds.m"
    }
#line 376 "add_mutable_aux_preds.m"
    {
#line 376 "add_mutable_aux_preds.m"
      MR_Word base;
#line 376 "add_mutable_aux_preds.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 376 "add_mutable_aux_preds.m"
      *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_22 = base;
#line 376 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Spec_20));
#line 376 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_21));
#line 376 "add_mutable_aux_preds.m"
    }
#line 367 "add_mutable_aux_preds.m"
  }
#line 361 "add_mutable_aux_preds.m"
}

#line 327 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__check_mutable_inst_uniqueness_8_p_0(
#line 327 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_9,
#line 327 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_10,
#line 327 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__InstVarSet_11,
#line 327 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ParentInsts_12,
#line 327 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_13,
#line 327 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Uniq_14,
#line 327 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_19,
#line 327 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_20)
#line 327 "add_mutable_aux_preds.m"
{
#line 334 "add_mutable_aux_preds.m"
  {
#line 334 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 334 "add_mutable_aux_preds.m"
#line 334 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__Uniq_14) {
#line 334 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 334 "add_mutable_aux_preds.m"
      case (MR_Integer) 3:
#line 348 "add_mutable_aux_preds.m"
        {
#line 348 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__UniqPieces_18;
#line 349 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_48_48;
#line 349 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_17_17;

#line 349 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__add_mutable_aux_preds__Inst_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__Inst_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 349 "add_mutable_aux_preds.m"
          if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 349 "add_mutable_aux_preds.m"
            {
#line 349 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__Inst_13, (MR_Integer) 1)));
#line 349 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__Inst_13, (MR_Integer) 2)));
#line 349 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__Uniq_14 == hlds__make_hlds__add_mutable_aux_preds__V_48_48);
#line 349 "add_mutable_aux_preds.m"
            }
#line 349 "add_mutable_aux_preds.m"
          if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 350 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__UniqPieces_18 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[21]);
#line 349 "add_mutable_aux_preds.m"
          else
#line 353 "add_mutable_aux_preds.m"
            {
#line 353 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__UniqPieces_18 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[48]);
#line 353 "add_mutable_aux_preds.m"
            }
#line 357 "add_mutable_aux_preds.m"
          {
#line 357 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__invalid_inst_in_mutable_8_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_9, hlds__make_hlds__add_mutable_aux_preds__Context_10, hlds__make_hlds__add_mutable_aux_preds__InstVarSet_11, hlds__make_hlds__add_mutable_aux_preds__ParentInsts_12, hlds__make_hlds__add_mutable_aux_preds__Inst_13, hlds__make_hlds__add_mutable_aux_preds__UniqPieces_18, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_19, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_20);
          }
#line 348 "add_mutable_aux_preds.m"
        }
#line 334 "add_mutable_aux_preds.m"
        break;
#line 334 "add_mutable_aux_preds.m"
      case (MR_Integer) 4:
#line 348 "add_mutable_aux_preds.m"
        {
#line 348 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__UniqPieces_66;
#line 349 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_51_51;
#line 349 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_49_49;

#line 349 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__add_mutable_aux_preds__Inst_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__Inst_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 349 "add_mutable_aux_preds.m"
          if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 349 "add_mutable_aux_preds.m"
            {
#line 349 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__Inst_13, (MR_Integer) 1)));
#line 349 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__Inst_13, (MR_Integer) 2)));
#line 349 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__Uniq_14 == hlds__make_hlds__add_mutable_aux_preds__V_51_51);
#line 349 "add_mutable_aux_preds.m"
            }
#line 349 "add_mutable_aux_preds.m"
          if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 350 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__UniqPieces_66 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[21]);
#line 349 "add_mutable_aux_preds.m"
          else
#line 353 "add_mutable_aux_preds.m"
            {
#line 353 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__UniqPieces_66 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[51]);
#line 353 "add_mutable_aux_preds.m"
            }
#line 357 "add_mutable_aux_preds.m"
          {
#line 357 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__invalid_inst_in_mutable_8_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_9, hlds__make_hlds__add_mutable_aux_preds__Context_10, hlds__make_hlds__add_mutable_aux_preds__InstVarSet_11, hlds__make_hlds__add_mutable_aux_preds__ParentInsts_12, hlds__make_hlds__add_mutable_aux_preds__Inst_13, hlds__make_hlds__add_mutable_aux_preds__UniqPieces_66, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_19, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_20);
          }
#line 348 "add_mutable_aux_preds.m"
        }
#line 334 "add_mutable_aux_preds.m"
        break;
#line 334 "add_mutable_aux_preds.m"
      case (MR_Integer) 2:
#line 348 "add_mutable_aux_preds.m"
        {
#line 348 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__UniqPieces_90;
#line 349 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_75_75;
#line 349 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_73_73;

#line 349 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__add_mutable_aux_preds__Inst_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__Inst_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 349 "add_mutable_aux_preds.m"
          if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 349 "add_mutable_aux_preds.m"
            {
#line 349 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__Inst_13, (MR_Integer) 1)));
#line 349 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__Inst_13, (MR_Integer) 2)));
#line 349 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__Uniq_14 == hlds__make_hlds__add_mutable_aux_preds__V_75_75);
#line 349 "add_mutable_aux_preds.m"
            }
#line 349 "add_mutable_aux_preds.m"
          if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 350 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__UniqPieces_90 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[21]);
#line 349 "add_mutable_aux_preds.m"
          else
#line 353 "add_mutable_aux_preds.m"
            {
#line 353 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__UniqPieces_90 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[54]);
#line 353 "add_mutable_aux_preds.m"
            }
#line 357 "add_mutable_aux_preds.m"
          {
#line 357 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__invalid_inst_in_mutable_8_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_9, hlds__make_hlds__add_mutable_aux_preds__Context_10, hlds__make_hlds__add_mutable_aux_preds__InstVarSet_11, hlds__make_hlds__add_mutable_aux_preds__ParentInsts_12, hlds__make_hlds__add_mutable_aux_preds__Inst_13, hlds__make_hlds__add_mutable_aux_preds__UniqPieces_90, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_19, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_20);
          }
#line 348 "add_mutable_aux_preds.m"
        }
#line 334 "add_mutable_aux_preds.m"
        break;
#line 334 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 334 "add_mutable_aux_preds.m"
        *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_20 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_19;
#line 334 "add_mutable_aux_preds.m"
        break;
#line 334 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 348 "add_mutable_aux_preds.m"
        {
#line 348 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__UniqPieces_114;
#line 349 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_99_99;
#line 349 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_97_97;

#line 349 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__add_mutable_aux_preds__Inst_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__Inst_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 349 "add_mutable_aux_preds.m"
          if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 349 "add_mutable_aux_preds.m"
            {
#line 349 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__Inst_13, (MR_Integer) 1)));
#line 349 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__Inst_13, (MR_Integer) 2)));
#line 349 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__Uniq_14 == hlds__make_hlds__add_mutable_aux_preds__V_99_99);
#line 349 "add_mutable_aux_preds.m"
            }
#line 349 "add_mutable_aux_preds.m"
          if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 350 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__UniqPieces_114 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[21]);
#line 349 "add_mutable_aux_preds.m"
          else
#line 353 "add_mutable_aux_preds.m"
            {
#line 353 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__UniqPieces_114 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[57]);
#line 353 "add_mutable_aux_preds.m"
            }
#line 357 "add_mutable_aux_preds.m"
          {
#line 357 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__invalid_inst_in_mutable_8_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_9, hlds__make_hlds__add_mutable_aux_preds__Context_10, hlds__make_hlds__add_mutable_aux_preds__InstVarSet_11, hlds__make_hlds__add_mutable_aux_preds__ParentInsts_12, hlds__make_hlds__add_mutable_aux_preds__Inst_13, hlds__make_hlds__add_mutable_aux_preds__UniqPieces_114, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_19, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_20);
          }
#line 348 "add_mutable_aux_preds.m"
        }
#line 334 "add_mutable_aux_preds.m"
        break;
#line 334 "add_mutable_aux_preds.m"
    }
#line 334 "add_mutable_aux_preds.m"
  }
#line 327 "add_mutable_aux_preds.m"
}

#line 312 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__check_mutable_insts_7_p_0(
#line 312 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 312 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 312 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3,
#line 312 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__4_4,
#line 312 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__5_5,
#line 312 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_6,
#line 312 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_7)
#line 312 "add_mutable_aux_preds.m"
{
#line 316 "add_mutable_aux_preds.m"
  while (MR_TRUE)
#line 316 "add_mutable_aux_preds.m"
    {
#line 316 "add_mutable_aux_preds.m"
      /* tailcall optimized into a loop */
#line 316 "add_mutable_aux_preds.m"
      {
#line 316 "add_mutable_aux_preds.m"
        MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 316 "add_mutable_aux_preds.m"
        if ((hlds__make_hlds__add_mutable_aux_preds__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 317 "add_mutable_aux_preds.m"
          *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_7 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_6;
#line 316 "add_mutable_aux_preds.m"
        else
#line 319 "add_mutable_aux_preds.m"
          {
#line 319 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__HeadVar__5_5, (MR_Integer) 0)));
#line 319 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__Insts_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__HeadVar__5_5, (MR_Integer) 1)));
#line 319 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_24_24;

#line 320 "add_mutable_aux_preds.m"
            {
#line 320 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__check_mutable_inst_7_p_0(hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3, hlds__make_hlds__add_mutable_aux_preds__HeadVar__4_4, hlds__make_hlds__add_mutable_aux_preds__Inst_19, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_6, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_24_24);
            }
#line 322 "add_mutable_aux_preds.m"
            /* direct tailcall eliminated */
#line 322 "add_mutable_aux_preds.m"
            {
#line 322 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__5__tmp_copy_5 = hlds__make_hlds__add_mutable_aux_preds__Insts_20;
#line 322 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0__tmp_copy_6 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_24_24;

#line 322 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_6 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0__tmp_copy_6;
#line 322 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__HeadVar__5_5 = hlds__make_hlds__add_mutable_aux_preds__HeadVar__5__tmp_copy_5;
#line 322 "add_mutable_aux_preds.m"
            }
#line 322 "add_mutable_aux_preds.m"
            continue;
#line 319 "add_mutable_aux_preds.m"
          }
#line 316 "add_mutable_aux_preds.m"
      }
#line 316 "add_mutable_aux_preds.m"
      break;
#line 316 "add_mutable_aux_preds.m"
    }
#line 312 "add_mutable_aux_preds.m"
}

#line 298 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__check_mutable_bound_insts_7_p_0(
#line 298 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 298 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 298 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3,
#line 298 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__4_4,
#line 298 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__5_5,
#line 298 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_6,
#line 298 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_7)
#line 298 "add_mutable_aux_preds.m"
{
#line 302 "add_mutable_aux_preds.m"
  while (MR_TRUE)
#line 302 "add_mutable_aux_preds.m"
    {
#line 302 "add_mutable_aux_preds.m"
      /* tailcall optimized into a loop */
#line 302 "add_mutable_aux_preds.m"
      {
#line 302 "add_mutable_aux_preds.m"
        MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 302 "add_mutable_aux_preds.m"
        if ((hlds__make_hlds__add_mutable_aux_preds__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 303 "add_mutable_aux_preds.m"
          *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_7 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_6;
#line 302 "add_mutable_aux_preds.m"
        else
#line 305 "add_mutable_aux_preds.m"
          {
#line 305 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__BoundInst_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__HeadVar__5_5, (MR_Integer) 0)));
#line 305 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__BoundInsts_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__HeadVar__5_5, (MR_Integer) 1)));
#line 305 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__ArgInsts_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__BoundInst_19, (MR_Integer) 1)));
#line 305 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_26_26;
#line 306 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds___ConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__BoundInst_19, (MR_Integer) 0)));

#line 307 "add_mutable_aux_preds.m"
            {
#line 307 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__check_mutable_insts_7_p_0(hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3, hlds__make_hlds__add_mutable_aux_preds__HeadVar__4_4, hlds__make_hlds__add_mutable_aux_preds__ArgInsts_23, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_6, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_26_26);
            }
#line 309 "add_mutable_aux_preds.m"
            /* direct tailcall eliminated */
#line 309 "add_mutable_aux_preds.m"
            {
#line 309 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__5__tmp_copy_5 = hlds__make_hlds__add_mutable_aux_preds__BoundInsts_20;
#line 309 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0__tmp_copy_6 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_26_26;

#line 309 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_6 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0__tmp_copy_6;
#line 309 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__HeadVar__5_5 = hlds__make_hlds__add_mutable_aux_preds__HeadVar__5__tmp_copy_5;
#line 309 "add_mutable_aux_preds.m"
            }
#line 309 "add_mutable_aux_preds.m"
            continue;
#line 305 "add_mutable_aux_preds.m"
          }
#line 302 "add_mutable_aux_preds.m"
      }
#line 302 "add_mutable_aux_preds.m"
      break;
#line 302 "add_mutable_aux_preds.m"
    }
#line 298 "add_mutable_aux_preds.m"
}

#line 186 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__check_mutable_inst_7_p_0(
#line 186 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_8,
#line 186 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_9,
#line 186 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__InstVarSet_10,
#line 186 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ParentInsts_11,
#line 186 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_12,
#line 186 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_69,
#line 186 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_70)
#line 186 "add_mutable_aux_preds.m"
{
#line 195 "add_mutable_aux_preds.m"
  while (MR_TRUE)
#line 195 "add_mutable_aux_preds.m"
    {
#line 195 "add_mutable_aux_preds.m"
      /* tailcall optimized into a loop */
#line 195 "add_mutable_aux_preds.m"
      {
#line 195 "add_mutable_aux_preds.m"
        MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 195 "add_mutable_aux_preds.m"
#line 195 "add_mutable_aux_preds.m"
        switch (MR_tag((MR_Word) hlds__make_hlds__add_mutable_aux_preds__Inst_12)) {
#line 195 "add_mutable_aux_preds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 195 "add_mutable_aux_preds.m"
          case (MR_Integer) 0:
#line 195 "add_mutable_aux_preds.m"
#line 195 "add_mutable_aux_preds.m"
            switch (MR_unmkbody(hlds__make_hlds__add_mutable_aux_preds__Inst_12)) {
#line 195 "add_mutable_aux_preds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 195 "add_mutable_aux_preds.m"
              case (MR_Integer) 0:
#line 268 "add_mutable_aux_preds.m"
                {
#line 271 "add_mutable_aux_preds.m"
                  {
#line 271 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__invalid_inst_in_mutable_8_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_8, hlds__make_hlds__add_mutable_aux_preds__Context_9, hlds__make_hlds__add_mutable_aux_preds__InstVarSet_10, hlds__make_hlds__add_mutable_aux_preds__ParentInsts_11, hlds__make_hlds__add_mutable_aux_preds__Inst_12, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[21]), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_69, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_70);
                  }
#line 268 "add_mutable_aux_preds.m"
                }
#line 195 "add_mutable_aux_preds.m"
                break;
#line 195 "add_mutable_aux_preds.m"
              case (MR_Integer) 1:
#line 294 "add_mutable_aux_preds.m"
                {
#line 295 "add_mutable_aux_preds.m"
                  {
#line 295 "add_mutable_aux_preds.m"
                    mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.check_mutable_inst\'/7", (MR_String) "not_reached");
#line 295 "add_mutable_aux_preds.m"
                    return;
                  }
#line 294 "add_mutable_aux_preds.m"
                }
#line 195 "add_mutable_aux_preds.m"
                break;
#line 195 "add_mutable_aux_preds.m"
            }
#line 195 "add_mutable_aux_preds.m"
            break;
#line 195 "add_mutable_aux_preds.m"
          case (MR_Integer) 1:
#line 268 "add_mutable_aux_preds.m"
            {
#line 271 "add_mutable_aux_preds.m"
              {
#line 271 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__invalid_inst_in_mutable_8_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_8, hlds__make_hlds__add_mutable_aux_preds__Context_9, hlds__make_hlds__add_mutable_aux_preds__InstVarSet_10, hlds__make_hlds__add_mutable_aux_preds__ParentInsts_11, hlds__make_hlds__add_mutable_aux_preds__Inst_12, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[21]), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_69, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_70);
              }
#line 268 "add_mutable_aux_preds.m"
            }
#line 195 "add_mutable_aux_preds.m"
            break;
#line 195 "add_mutable_aux_preds.m"
          case (MR_Integer) 2:
#line 195 "add_mutable_aux_preds.m"
            {
#line 195 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__Uniq_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__Inst_12, (MR_Integer) 0)));
#line 193 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__Inst_12, (MR_Integer) 1)));

#line 196 "add_mutable_aux_preds.m"
              {
#line 196 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__check_mutable_inst_uniqueness_8_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_8, hlds__make_hlds__add_mutable_aux_preds__Context_9, hlds__make_hlds__add_mutable_aux_preds__InstVarSet_10, hlds__make_hlds__add_mutable_aux_preds__ParentInsts_11, hlds__make_hlds__add_mutable_aux_preds__Inst_12, hlds__make_hlds__add_mutable_aux_preds__Uniq_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_69, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_70);
              }
#line 195 "add_mutable_aux_preds.m"
            }
#line 195 "add_mutable_aux_preds.m"
            break;
#line 195 "add_mutable_aux_preds.m"
          case (MR_Integer) 3:
#line 195 "add_mutable_aux_preds.m"
#line 195 "add_mutable_aux_preds.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__Inst_12, (MR_Integer) 0)))) {
#line 195 "add_mutable_aux_preds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 195 "add_mutable_aux_preds.m"
              case (MR_Integer) 0:
#line 199 "add_mutable_aux_preds.m"
                {
#line 199 "add_mutable_aux_preds.m"
                  MR_Word hlds__make_hlds__add_mutable_aux_preds__BoundInsts_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__Inst_12, (MR_Integer) 3)));
#line 199 "add_mutable_aux_preds.m"
                  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_130_130;
#line 199 "add_mutable_aux_preds.m"
                  MR_Word hlds__make_hlds__add_mutable_aux_preds__Uniq_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__Inst_12, (MR_Integer) 1)));
#line 199 "add_mutable_aux_preds.m"
                  MR_Word hlds__make_hlds__add_mutable_aux_preds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__Inst_12, (MR_Integer) 2)));

#line 200 "add_mutable_aux_preds.m"
                  {
#line 200 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__check_mutable_inst_uniqueness_8_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_8, hlds__make_hlds__add_mutable_aux_preds__Context_9, hlds__make_hlds__add_mutable_aux_preds__InstVarSet_10, hlds__make_hlds__add_mutable_aux_preds__ParentInsts_11, hlds__make_hlds__add_mutable_aux_preds__Inst_12, hlds__make_hlds__add_mutable_aux_preds__Uniq_133, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_69, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_130_130);
                  }
#line 202 "add_mutable_aux_preds.m"
                  {
#line 202 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__check_mutable_bound_insts_7_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_8, hlds__make_hlds__add_mutable_aux_preds__Context_9, hlds__make_hlds__add_mutable_aux_preds__InstVarSet_10, hlds__make_hlds__add_mutable_aux_preds__ParentInsts_11, hlds__make_hlds__add_mutable_aux_preds__BoundInsts_18, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_130_130, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_70);
                  }
#line 199 "add_mutable_aux_preds.m"
                }
#line 195 "add_mutable_aux_preds.m"
                break;
#line 195 "add_mutable_aux_preds.m"
              case (MR_Integer) 1:
#line 195 "add_mutable_aux_preds.m"
                {
#line 195 "add_mutable_aux_preds.m"
                  MR_Word hlds__make_hlds__add_mutable_aux_preds__Uniq_140 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__Inst_12, (MR_Integer) 1)));
#line 194 "add_mutable_aux_preds.m"
                  MR_Word hlds__make_hlds__add_mutable_aux_preds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__Inst_12, (MR_Integer) 2)));

#line 196 "add_mutable_aux_preds.m"
                  {
#line 196 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__check_mutable_inst_uniqueness_8_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_8, hlds__make_hlds__add_mutable_aux_preds__Context_9, hlds__make_hlds__add_mutable_aux_preds__InstVarSet_10, hlds__make_hlds__add_mutable_aux_preds__ParentInsts_11, hlds__make_hlds__add_mutable_aux_preds__Inst_12, hlds__make_hlds__add_mutable_aux_preds__Uniq_140, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_69, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_70);
                  }
#line 195 "add_mutable_aux_preds.m"
                }
#line 195 "add_mutable_aux_preds.m"
                break;
#line 195 "add_mutable_aux_preds.m"
              case (MR_Integer) 2:
#line 288 "add_mutable_aux_preds.m"
                *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_70 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_69;
#line 195 "add_mutable_aux_preds.m"
                break;
#line 195 "add_mutable_aux_preds.m"
              case (MR_Integer) 3:
#line 274 "add_mutable_aux_preds.m"
                {
#line 278 "add_mutable_aux_preds.m"
                  {
#line 278 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__invalid_inst_in_mutable_8_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_8, hlds__make_hlds__add_mutable_aux_preds__Context_9, hlds__make_hlds__add_mutable_aux_preds__InstVarSet_10, hlds__make_hlds__add_mutable_aux_preds__ParentInsts_11, hlds__make_hlds__add_mutable_aux_preds__Inst_12, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[25]), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_69, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_70);
                  }
#line 274 "add_mutable_aux_preds.m"
                }
#line 195 "add_mutable_aux_preds.m"
                break;
#line 195 "add_mutable_aux_preds.m"
              case (MR_Integer) 4:
#line 205 "add_mutable_aux_preds.m"
                {
#line 205 "add_mutable_aux_preds.m"
                  MR_Word hlds__make_hlds__add_mutable_aux_preds__InstName_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__Inst_12, (MR_Integer) 1)));

#line 253 "add_mutable_aux_preds.m"
#line 253 "add_mutable_aux_preds.m"
                  switch (MR_tag((MR_Word) hlds__make_hlds__add_mutable_aux_preds__InstName_19)) {
#line 253 "add_mutable_aux_preds.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 253 "add_mutable_aux_preds.m"
                    case (MR_Integer) 0:
#line 207 "add_mutable_aux_preds.m"
                      {
#line 207 "add_mutable_aux_preds.m"
                        MR_Word hlds__make_hlds__add_mutable_aux_preds__UserInstSymName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__InstName_19, (MR_Integer) 0)));
#line 207 "add_mutable_aux_preds.m"
                        MR_Word hlds__make_hlds__add_mutable_aux_preds__UserInstArgs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__InstName_19, (MR_Integer) 1)));
#line 207 "add_mutable_aux_preds.m"
                        MR_Integer hlds__make_hlds__add_mutable_aux_preds__UserInstArity_22;
#line 207 "add_mutable_aux_preds.m"
                        MR_Word hlds__make_hlds__add_mutable_aux_preds__UserInstId_23;

#line 208 "add_mutable_aux_preds.m"
                        {
#line 208 "add_mutable_aux_preds.m"
                          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__make_hlds__add_mutable_aux_preds__UserInstArgs_21, &hlds__make_hlds__add_mutable_aux_preds__UserInstArity_22);
                        }
#line 209 "add_mutable_aux_preds.m"
                        {
#line 209 "add_mutable_aux_preds.m"
                          hlds__make_hlds__add_mutable_aux_preds__UserInstId_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 209 "add_mutable_aux_preds.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UserInstId_23, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UserInstSymName_20));
#line 209 "add_mutable_aux_preds.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UserInstId_23, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UserInstArity_22));
#line 209 "add_mutable_aux_preds.m"
                        }
#line 211 "add_mutable_aux_preds.m"
                        {
#line 211 "add_mutable_aux_preds.m"
                          hlds__make_hlds__add_mutable_aux_preds__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UserInstId_23)), hlds__make_hlds__add_mutable_aux_preds__ParentInsts_11);
                        }
#line 210 "add_mutable_aux_preds.m"
                        if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 210 "add_mutable_aux_preds.m"
                          *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_70 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_69;
#line 210 "add_mutable_aux_preds.m"
                        else
#line 214 "add_mutable_aux_preds.m"
                          {
#line 214 "add_mutable_aux_preds.m"
                            MR_String hlds__make_hlds__add_mutable_aux_preds__UserInstBaseName_25;
#line 216 "add_mutable_aux_preds.m"
                            MR_Word hlds__make_hlds__add_mutable_aux_preds__UserInstModuleName_24;
#line 216 "add_mutable_aux_preds.m"
                            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_139_139;

#line 215 "add_mutable_aux_preds.m"
                            hlds__make_hlds__add_mutable_aux_preds__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_mutable_aux_preds__UserInstSymName_20)) == (MR_mktag((MR_Integer) 1)));
#line 215 "add_mutable_aux_preds.m"
                            if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 215 "add_mutable_aux_preds.m"
                              {
#line 215 "add_mutable_aux_preds.m"
                                hlds__make_hlds__add_mutable_aux_preds__UserInstModuleName_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__UserInstSymName_20, (MR_Integer) 0)));
#line 215 "add_mutable_aux_preds.m"
                                hlds__make_hlds__add_mutable_aux_preds__UserInstBaseName_25 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__UserInstSymName_20, (MR_Integer) 1)));
#line 217 "add_mutable_aux_preds.m"
                                {
#line 217 "add_mutable_aux_preds.m"
                                  hlds__make_hlds__add_mutable_aux_preds__V_139_139 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                                }
#line 217 "add_mutable_aux_preds.m"
                                {
#line 217 "add_mutable_aux_preds.m"
                                  hlds__make_hlds__add_mutable_aux_preds__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_hlds__add_mutable_aux_preds__UserInstModuleName_24, hlds__make_hlds__add_mutable_aux_preds__V_139_139);
                                }
#line 216 "add_mutable_aux_preds.m"
                                if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 216 "add_mutable_aux_preds.m"
                                  {
#line 218 "add_mutable_aux_preds.m"
                                    hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__UserInstArity_22 == (MR_Integer) 0);
#line 216 "add_mutable_aux_preds.m"
                                    if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 220 "add_mutable_aux_preds.m"
                                      {
#line 220 "add_mutable_aux_preds.m"
                                        if ((strcmp(hlds__make_hlds__add_mutable_aux_preds__UserInstBaseName_25, (MR_String) "dead") == 0))
#line 219 "add_mutable_aux_preds.m"
                                          hlds__make_hlds__add_mutable_aux_preds__succeeded = MR_TRUE;
#line 220 "add_mutable_aux_preds.m"
                                        else
#line 220 "add_mutable_aux_preds.m"
                                        if ((strcmp(hlds__make_hlds__add_mutable_aux_preds__UserInstBaseName_25, (MR_String) "mostly_dead") == 0))
#line 220 "add_mutable_aux_preds.m"
                                          hlds__make_hlds__add_mutable_aux_preds__succeeded = MR_TRUE;
#line 220 "add_mutable_aux_preds.m"
                                        else
#line 220 "add_mutable_aux_preds.m"
                                          hlds__make_hlds__add_mutable_aux_preds__succeeded = MR_FALSE;
#line 220 "add_mutable_aux_preds.m"
                                      }
#line 216 "add_mutable_aux_preds.m"
                                  }
#line 215 "add_mutable_aux_preds.m"
                              }
#line 214 "add_mutable_aux_preds.m"
                            if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 224 "add_mutable_aux_preds.m"
                              {
#line 224 "add_mutable_aux_preds.m"
                                MR_Word hlds__make_hlds__add_mutable_aux_preds__UnqualInstName_27;
#line 224 "add_mutable_aux_preds.m"
                                MR_Word hlds__make_hlds__add_mutable_aux_preds__UnqualInst_28;
#line 224 "add_mutable_aux_preds.m"
                                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_122_122;

#line 226 "add_mutable_aux_preds.m"
                                {
#line 226 "add_mutable_aux_preds.m"
                                  hlds__make_hlds__add_mutable_aux_preds__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 226 "add_mutable_aux_preds.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_122_122, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UserInstBaseName_25));
#line 226 "add_mutable_aux_preds.m"
                                }
#line 226 "add_mutable_aux_preds.m"
                                {
#line 226 "add_mutable_aux_preds.m"
                                  hlds__make_hlds__add_mutable_aux_preds__UnqualInstName_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 226 "add_mutable_aux_preds.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnqualInstName_27, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_122_122));
#line 226 "add_mutable_aux_preds.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnqualInstName_27, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UserInstArgs_21));
#line 226 "add_mutable_aux_preds.m"
                                }
#line 227 "add_mutable_aux_preds.m"
                                {
#line 227 "add_mutable_aux_preds.m"
                                  hlds__make_hlds__add_mutable_aux_preds__UnqualInst_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 227 "add_mutable_aux_preds.m"
                                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__UnqualInst_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 227 "add_mutable_aux_preds.m"
                                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__UnqualInst_28, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnqualInstName_27));
#line 227 "add_mutable_aux_preds.m"
                                }
#line 228 "add_mutable_aux_preds.m"
                                {
#line 228 "add_mutable_aux_preds.m"
                                  hlds__make_hlds__add_mutable_aux_preds__invalid_inst_in_mutable_8_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_8, hlds__make_hlds__add_mutable_aux_preds__Context_9, hlds__make_hlds__add_mutable_aux_preds__InstVarSet_10, hlds__make_hlds__add_mutable_aux_preds__ParentInsts_11, hlds__make_hlds__add_mutable_aux_preds__UnqualInst_28, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[21]), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_69, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_70);
                                }
#line 224 "add_mutable_aux_preds.m"
                              }
#line 214 "add_mutable_aux_preds.m"
                            else
#line 232 "add_mutable_aux_preds.m"
                              {
#line 232 "add_mutable_aux_preds.m"
                                MR_Word hlds__make_hlds__add_mutable_aux_preds__InstTable_29;
#line 232 "add_mutable_aux_preds.m"
                                MR_Word hlds__make_hlds__add_mutable_aux_preds__UserInstTable_30;
#line 232 "add_mutable_aux_preds.m"
                                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_124_124;
#line 236 "add_mutable_aux_preds.m"
                                MR_Word hlds__make_hlds__add_mutable_aux_preds__InstDefn_31;
#line 236 "add_mutable_aux_preds.m"
                                MR_Box hlds__make_hlds__add_mutable_aux_preds__conv0_InstDefn_31;

#line 231 "add_mutable_aux_preds.m"
                                {
#line 231 "add_mutable_aux_preds.m"
                                  hlds__make_hlds__add_mutable_aux_preds__check_mutable_insts_7_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_8, hlds__make_hlds__add_mutable_aux_preds__Context_9, hlds__make_hlds__add_mutable_aux_preds__InstVarSet_10, hlds__make_hlds__add_mutable_aux_preds__ParentInsts_11, hlds__make_hlds__add_mutable_aux_preds__UserInstArgs_21, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_69, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_124_124);
                                }
#line 234 "add_mutable_aux_preds.m"
                                {
#line 234 "add_mutable_aux_preds.m"
                                  hlds__hlds_module__module_info_get_inst_table_2_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_8, &hlds__make_hlds__add_mutable_aux_preds__InstTable_29);
                                }
#line 235 "add_mutable_aux_preds.m"
                                {
#line 235 "add_mutable_aux_preds.m"
                                  hlds__hlds_data__inst_table_get_user_insts_2_p_0(hlds__make_hlds__add_mutable_aux_preds__InstTable_29, &hlds__make_hlds__add_mutable_aux_preds__UserInstTable_30);
                                }
#line 236 "add_mutable_aux_preds.m"
                                {
#line 236 "add_mutable_aux_preds.m"
                                  hlds__make_hlds__add_mutable_aux_preds__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_inst_defn_0, hlds__make_hlds__add_mutable_aux_preds__UserInstTable_30, ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UserInstId_23)), &hlds__make_hlds__add_mutable_aux_preds__conv0_InstDefn_31);
                                }
#line 236 "add_mutable_aux_preds.m"
                                if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 236 "add_mutable_aux_preds.m"
                                  {
#line 236 "add_mutable_aux_preds.m"
                                    hlds__make_hlds__add_mutable_aux_preds__InstDefn_31 = ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__conv0_InstDefn_31);
#line 236 "add_mutable_aux_preds.m"
                                    hlds__make_hlds__add_mutable_aux_preds__succeeded = MR_TRUE;
#line 236 "add_mutable_aux_preds.m"
                                  }
#line 236 "add_mutable_aux_preds.m"
                                if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 238 "add_mutable_aux_preds.m"
                                  {
#line 238 "add_mutable_aux_preds.m"
                                    MR_Word hlds__make_hlds__add_mutable_aux_preds__DefnInstVarSet_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__InstDefn_31, (MR_Integer) 0)));
#line 238 "add_mutable_aux_preds.m"
                                    MR_Word hlds__make_hlds__add_mutable_aux_preds__InstBody_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__InstDefn_31, (MR_Integer) 2)));
#line 237 "add_mutable_aux_preds.m"
                                    MR_Word hlds__make_hlds__add_mutable_aux_preds___Params_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__InstDefn_31, (MR_Integer) 1)));
#line 237 "add_mutable_aux_preds.m"
                                    MR_Word hlds__make_hlds__add_mutable_aux_preds___MMTC_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__InstDefn_31, (MR_Integer) 3)));
#line 237 "add_mutable_aux_preds.m"
                                    MR_Word hlds__make_hlds__add_mutable_aux_preds___Context_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__InstDefn_31, (MR_Integer) 4)));
#line 237 "add_mutable_aux_preds.m"
                                    MR_Word hlds__make_hlds__add_mutable_aux_preds___Status_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__InstDefn_31, (MR_Integer) 5)));

#line 244 "add_mutable_aux_preds.m"
                                    if ((hlds__make_hlds__add_mutable_aux_preds__InstBody_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 245 "add_mutable_aux_preds.m"
                                      *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_70 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_124_124;
#line 244 "add_mutable_aux_preds.m"
                                    else
#line 240 "add_mutable_aux_preds.m"
                                      {
#line 240 "add_mutable_aux_preds.m"
                                        MR_Word hlds__make_hlds__add_mutable_aux_preds__EqvInst_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__InstBody_34, (MR_Integer) 0)));
#line 240 "add_mutable_aux_preds.m"
                                        MR_Word hlds__make_hlds__add_mutable_aux_preds__DefnParentInsts_39;

#line 241 "add_mutable_aux_preds.m"
                                        {
#line 241 "add_mutable_aux_preds.m"
                                          hlds__make_hlds__add_mutable_aux_preds__DefnParentInsts_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 241 "add_mutable_aux_preds.m"
                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__DefnParentInsts_39, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UserInstId_23));
#line 241 "add_mutable_aux_preds.m"
                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__DefnParentInsts_39, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ParentInsts_11));
#line 241 "add_mutable_aux_preds.m"
                                        }
#line 242 "add_mutable_aux_preds.m"
                                        /* direct tailcall eliminated */
#line 242 "add_mutable_aux_preds.m"
                                        {
#line 242 "add_mutable_aux_preds.m"
                                          MR_Word hlds__make_hlds__add_mutable_aux_preds__InstVarSet__tmp_copy_10 = hlds__make_hlds__add_mutable_aux_preds__DefnInstVarSet_32;
#line 242 "add_mutable_aux_preds.m"
                                          MR_Word hlds__make_hlds__add_mutable_aux_preds__ParentInsts__tmp_copy_11 = hlds__make_hlds__add_mutable_aux_preds__DefnParentInsts_39;
#line 242 "add_mutable_aux_preds.m"
                                          MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst__tmp_copy_12 = hlds__make_hlds__add_mutable_aux_preds__EqvInst_38;
#line 242 "add_mutable_aux_preds.m"
                                          MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0__tmp_copy_69 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_124_124;

#line 242 "add_mutable_aux_preds.m"
                                          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_69 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0__tmp_copy_69;
#line 242 "add_mutable_aux_preds.m"
                                          hlds__make_hlds__add_mutable_aux_preds__Inst_12 = hlds__make_hlds__add_mutable_aux_preds__Inst__tmp_copy_12;
#line 242 "add_mutable_aux_preds.m"
                                          hlds__make_hlds__add_mutable_aux_preds__ParentInsts_11 = hlds__make_hlds__add_mutable_aux_preds__ParentInsts__tmp_copy_11;
#line 242 "add_mutable_aux_preds.m"
                                          hlds__make_hlds__add_mutable_aux_preds__InstVarSet_10 = hlds__make_hlds__add_mutable_aux_preds__InstVarSet__tmp_copy_10;
#line 242 "add_mutable_aux_preds.m"
                                        }
#line 242 "add_mutable_aux_preds.m"
                                        continue;
#line 240 "add_mutable_aux_preds.m"
                                      }
#line 238 "add_mutable_aux_preds.m"
                                  }
#line 236 "add_mutable_aux_preds.m"
                                else
#line 248 "add_mutable_aux_preds.m"
                                  {
#line 249 "add_mutable_aux_preds.m"
                                    {
#line 249 "add_mutable_aux_preds.m"
                                      hlds__make_hlds__add_mutable_aux_preds__invalid_inst_in_mutable_8_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_8, hlds__make_hlds__add_mutable_aux_preds__Context_9, hlds__make_hlds__add_mutable_aux_preds__InstVarSet_10, hlds__make_hlds__add_mutable_aux_preds__ParentInsts_11, hlds__make_hlds__add_mutable_aux_preds__Inst_12, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[44]), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_124_124, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_70);
                                    }
#line 248 "add_mutable_aux_preds.m"
                                  }
#line 232 "add_mutable_aux_preds.m"
                              }
#line 214 "add_mutable_aux_preds.m"
                          }
#line 207 "add_mutable_aux_preds.m"
                      }
#line 253 "add_mutable_aux_preds.m"
                      break;
#line 253 "add_mutable_aux_preds.m"
                    case (MR_Integer) 1:
#line 253 "add_mutable_aux_preds.m"
                    case (MR_Integer) 2:
#line 262 "add_mutable_aux_preds.m"
                      {
#line 263 "add_mutable_aux_preds.m"
                        {
#line 263 "add_mutable_aux_preds.m"
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.check_mutable_inst\'/7", (MR_String) "non-user inst");
#line 263 "add_mutable_aux_preds.m"
                          return;
                        }
#line 262 "add_mutable_aux_preds.m"
                      }
#line 253 "add_mutable_aux_preds.m"
                      break;
#line 253 "add_mutable_aux_preds.m"
                    case (MR_Integer) 3:
#line 262 "add_mutable_aux_preds.m"
                      {
#line 263 "add_mutable_aux_preds.m"
                        {
#line 263 "add_mutable_aux_preds.m"
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.check_mutable_inst\'/7", (MR_String) "non-user inst");
#line 263 "add_mutable_aux_preds.m"
                          return;
                        }
#line 262 "add_mutable_aux_preds.m"
                      }
#line 253 "add_mutable_aux_preds.m"
                      break;
#line 253 "add_mutable_aux_preds.m"
                  }
#line 205 "add_mutable_aux_preds.m"
                }
#line 195 "add_mutable_aux_preds.m"
                break;
#line 195 "add_mutable_aux_preds.m"
              case (MR_Integer) 5:
#line 281 "add_mutable_aux_preds.m"
                {
#line 285 "add_mutable_aux_preds.m"
                  {
#line 285 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__invalid_inst_in_mutable_8_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_8, hlds__make_hlds__add_mutable_aux_preds__Context_9, hlds__make_hlds__add_mutable_aux_preds__InstVarSet_10, hlds__make_hlds__add_mutable_aux_preds__ParentInsts_11, hlds__make_hlds__add_mutable_aux_preds__Inst_12, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[23]), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_69, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_70);
                  }
#line 281 "add_mutable_aux_preds.m"
                }
#line 195 "add_mutable_aux_preds.m"
                break;
#line 195 "add_mutable_aux_preds.m"
            }
#line 195 "add_mutable_aux_preds.m"
            break;
#line 195 "add_mutable_aux_preds.m"
        }
#line 195 "add_mutable_aux_preds.m"
      }
#line 195 "add_mutable_aux_preds.m"
      break;
#line 195 "add_mutable_aux_preds.m"
    }
#line 186 "add_mutable_aux_preds.m"
}

#line 32 "add_mutable_aux_preds.m"
void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_defns_for_mutable_if_local_7_p_0(
#line 32 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__SectionItem_8,
#line 32 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_19,
#line 32 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_20,
#line 32 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_21,
#line 32 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_22,
#line 32 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_23,
#line 32 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_24)
#line 32 "add_mutable_aux_preds.m"
{
#line 661 "add_mutable_aux_preds.m"
  {
#line 661 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 661 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__SectionInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__SectionItem_8, (MR_Integer) 0)));
#line 661 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__SectionItem_8, (MR_Integer) 1)));
#line 661 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMercuryStatus_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__SectionInfo_12, (MR_Integer) 0)));
#line 663 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___NeedQual_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__SectionInfo_12, (MR_Integer) 1)));

#line 669 "add_mutable_aux_preds.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_mutable_aux_preds__ItemMercuryStatus_14)) == (MR_mktag((MR_Integer) 1))))
#line 670 "add_mutable_aux_preds.m"
      {
#line 670 "add_mutable_aux_preds.m"
        *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_20 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_19;
#line 670 "add_mutable_aux_preds.m"
        *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_22 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_21;
#line 670 "add_mutable_aux_preds.m"
        *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_24 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_23;
#line 670 "add_mutable_aux_preds.m"
      }
#line 669 "add_mutable_aux_preds.m"
    else
#line 665 "add_mutable_aux_preds.m"
      {
#line 665 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_17;

#line 666 "add_mutable_aux_preds.m"
        {
#line 666 "add_mutable_aux_preds.m"
          hlds__status__item_mercury_status_to_pred_status_2_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMercuryStatus_14, &hlds__make_hlds__add_mutable_aux_preds__PredStatus_17);
        }
#line 667 "add_mutable_aux_preds.m"
        {
#line 667 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_defns_for_mutable_8_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, hlds__make_hlds__add_mutable_aux_preds__PredStatus_17, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_19, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_20, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_21, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_22, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_23, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_24);
        }
#line 665 "add_mutable_aux_preds.m"
      }
#line 661 "add_mutable_aux_preds.m"
  }
#line 32 "add_mutable_aux_preds.m"
}

#line 23 "add_mutable_aux_preds.m"
void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_if_local_5_p_0(
#line 23 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__SectionItem_6,
#line 23 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_16,
#line 23 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_17,
#line 23 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_18,
#line 23 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_19)
#line 23 "add_mutable_aux_preds.m"
{
#line 69 "add_mutable_aux_preds.m"
  {
#line 69 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 69 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__SectionInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__SectionItem_6, (MR_Integer) 0)));
#line 69 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__SectionItem_6, (MR_Integer) 1)));
#line 69 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMercuryStatus_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__SectionInfo_9, (MR_Integer) 0)));
#line 69 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__SectionInfo_9, (MR_Integer) 1)));

#line 78 "add_mutable_aux_preds.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_mutable_aux_preds__ItemMercuryStatus_11)) == (MR_mktag((MR_Integer) 1))))
#line 79 "add_mutable_aux_preds.m"
      {
#line 79 "add_mutable_aux_preds.m"
        *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_17 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_16;
#line 79 "add_mutable_aux_preds.m"
        *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_19 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_18;
#line 79 "add_mutable_aux_preds.m"
      }
#line 78 "add_mutable_aux_preds.m"
    else
#line 73 "add_mutable_aux_preds.m"
      {
#line 73 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemExport_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMercuryStatus_11, (MR_Integer) 0)));
#line 73 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_14;
#line 73 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_20_20;
#line 73 "add_mutable_aux_preds.m"
        MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_29 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_10, (MR_Integer) 0)));
#line 73 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__OrigInst_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_10, (MR_Integer) 3)));
#line 73 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_10, (MR_Integer) 4)));
#line 73 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_10, (MR_Integer) 7)));
#line 73 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_10, (MR_Integer) 8)));
#line 73 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__Globals_39;
#line 73 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_40;
#line 73 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_41;
#line 73 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_42;
#line 73 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__TrailMutableUpdates_46;
#line 73 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__UseTrail_47;
#line 73 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__DummyInstVarSet_51;
#line 73 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__ExpandedInstSpecs_52;
#line 73 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_42_59;
#line 73 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_49_66;
#line 73 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_69_86;
#line 90 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds___OrigType_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_10, (MR_Integer) 1)));
#line 90 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds___Type_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_10, (MR_Integer) 2)));
#line 90 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds___InitTerm_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_10, (MR_Integer) 5)));
#line 90 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds___VarSetMutable_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_10, (MR_Integer) 6)));
#line 90 "add_mutable_aux_preds.m"
        MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_10, (MR_Integer) 9)));

#line 97 "add_mutable_aux_preds.m"
#line 97 "add_mutable_aux_preds.m"
        switch (hlds__make_hlds__add_mutable_aux_preds__ItemExport_13) {
#line 97 "add_mutable_aux_preds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 97 "add_mutable_aux_preds.m"
          case (MR_Integer) 2:
#line 98 "add_mutable_aux_preds.m"
            {
#line 99 "add_mutable_aux_preds.m"
              {
#line 99 "add_mutable_aux_preds.m"
                hlds__make_hlds__make_hlds_error__error_is_exported_4_p_0(hlds__make_hlds__add_mutable_aux_preds__Context_37, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[10]), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_18, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_42_59);
              }
#line 98 "add_mutable_aux_preds.m"
            }
#line 97 "add_mutable_aux_preds.m"
            break;
#line 97 "add_mutable_aux_preds.m"
          case (MR_Integer) 0:
#line 94 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_42_59 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_18;
#line 97 "add_mutable_aux_preds.m"
            break;
#line 97 "add_mutable_aux_preds.m"
          case (MR_Integer) 1:
#line 95 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_42_59 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_18;
#line 97 "add_mutable_aux_preds.m"
            break;
#line 97 "add_mutable_aux_preds.m"
        }
#line 105 "add_mutable_aux_preds.m"
        {
#line 105 "add_mutable_aux_preds.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_16, &hlds__make_hlds__add_mutable_aux_preds__Globals_39);
        }
#line 106 "add_mutable_aux_preds.m"
        {
#line 106 "add_mutable_aux_preds.m"
          libs__globals__get_target_2_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_39, &hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_40);
        }
#line 109 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_41 = ((&hlds__make_hlds__add_mutable_aux_preds_vector_common_2[0 + hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_40]))->hlds__make_hlds__add_mutable_aux_preds__vector_common_type_2_0__vct_2_f_0;
#line 113 "add_mutable_aux_preds.m"
        {
#line 113 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_42 = parse_tree__prog_item__mutable_var_maybe_foreign_names_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_36);
        }
#line 116 "add_mutable_aux_preds.m"
        if ((hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 115 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_49_66 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_42_59;
#line 116 "add_mutable_aux_preds.m"
        else
#line 117 "add_mutable_aux_preds.m"
          {
#line 117 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignNames_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_42, (MR_Integer) 0)));
#line 117 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_44;
#line 121 "add_mutable_aux_preds.m"
            MR_String hlds__make_hlds__add_mutable_aux_preds___TargetMutableName_45;

#line 120 "add_mutable_aux_preds.m"
            {
#line 120 "add_mutable_aux_preds.m"
              hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_16, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_44);
            }
#line 121 "add_mutable_aux_preds.m"
            {
#line 121 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__get_global_name_from_foreign_names_9_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_16, hlds__make_hlds__add_mutable_aux_preds__Context_37, hlds__make_hlds__add_mutable_aux_preds__ModuleName_44, hlds__make_hlds__add_mutable_aux_preds__MutableName_29, hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_41, hlds__make_hlds__add_mutable_aux_preds__ForeignNames_43, &hlds__make_hlds__add_mutable_aux_preds___TargetMutableName_45, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_42_59, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_49_66);
            }
#line 117 "add_mutable_aux_preds.m"
          }
#line 128 "add_mutable_aux_preds.m"
        {
#line 128 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__TrailMutableUpdates_46 = parse_tree__prog_item__mutable_var_trailed_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_36);
        }
#line 129 "add_mutable_aux_preds.m"
        {
#line 129 "add_mutable_aux_preds.m"
          libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_39, (MR_Integer) 216, &hlds__make_hlds__add_mutable_aux_preds__UseTrail_47);
        }
#line 131 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__TrailMutableUpdates_46 == (MR_Integer) 1);
#line 131 "add_mutable_aux_preds.m"
        if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 132 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__UseTrail_47 == (MR_Integer) 0);
#line 130 "add_mutable_aux_preds.m"
        if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 135 "add_mutable_aux_preds.m"
          {
#line 135 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__TrailMsg_49;
#line 135 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__TrailSpec_50;
#line 135 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_84_84;

#line 136 "add_mutable_aux_preds.m"
            {
#line 136 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__TrailMsg_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 136 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TrailMsg_49, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_37));
#line 136 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TrailMsg_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[42])));
#line 136 "add_mutable_aux_preds.m"
            }
#line 138 "add_mutable_aux_preds.m"
            {
#line 138 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 138 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_84_84, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TrailMsg_49));
#line 138 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 138 "add_mutable_aux_preds.m"
            }
#line 137 "add_mutable_aux_preds.m"
            {
#line 137 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__TrailSpec_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 137 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TrailSpec_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 137 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TrailSpec_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 137 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TrailSpec_50, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_84_84));
#line 137 "add_mutable_aux_preds.m"
            }
#line 139 "add_mutable_aux_preds.m"
            {
#line 139 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_69_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 139 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_69_86, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TrailSpec_50));
#line 139 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_69_86, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_49_66));
#line 139 "add_mutable_aux_preds.m"
            }
#line 135 "add_mutable_aux_preds.m"
          }
#line 130 "add_mutable_aux_preds.m"
        else
#line 130 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_69_86 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_49_66;
#line 149 "add_mutable_aux_preds.m"
        {
#line 149 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__DummyInstVarSet_51 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
        }
#line 150 "add_mutable_aux_preds.m"
        {
#line 150 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__check_mutable_inst_7_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_16, hlds__make_hlds__add_mutable_aux_preds__Context_37, hlds__make_hlds__add_mutable_aux_preds__DummyInstVarSet_51, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__Inst_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__add_mutable_aux_preds__ExpandedInstSpecs_52);
        }
#line 154 "add_mutable_aux_preds.m"
        if ((hlds__make_hlds__add_mutable_aux_preds__ExpandedInstSpecs_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 153 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_20_20 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_69_86;
#line 154 "add_mutable_aux_preds.m"
        else
#line 155 "add_mutable_aux_preds.m"
          {
#line 155 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__UnexpandedInstSpecs_55;

#line 167 "add_mutable_aux_preds.m"
            {
#line 167 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__check_mutable_inst_7_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_16, hlds__make_hlds__add_mutable_aux_preds__Context_37, hlds__make_hlds__add_mutable_aux_preds__DummyInstVarSet_51, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__OrigInst_32, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__add_mutable_aux_preds__UnexpandedInstSpecs_55);
            }
#line 175 "add_mutable_aux_preds.m"
            if ((hlds__make_hlds__add_mutable_aux_preds__UnexpandedInstSpecs_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 170 "add_mutable_aux_preds.m"
              {
#line 174 "add_mutable_aux_preds.m"
                {
#line 174 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_20_20 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__add_mutable_aux_preds__ExpandedInstSpecs_52, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_69_86);
                }
#line 170 "add_mutable_aux_preds.m"
              }
#line 175 "add_mutable_aux_preds.m"
            else
#line 176 "add_mutable_aux_preds.m"
              {
#line 177 "add_mutable_aux_preds.m"
                {
#line 177 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_20_20 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__add_mutable_aux_preds__UnexpandedInstSpecs_55, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_69_86);
                }
#line 176 "add_mutable_aux_preds.m"
              }
#line 155 "add_mutable_aux_preds.m"
          }
#line 75 "add_mutable_aux_preds.m"
        {
#line 75 "add_mutable_aux_preds.m"
          hlds__status__item_mercury_status_to_pred_status_2_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMercuryStatus_11, &hlds__make_hlds__add_mutable_aux_preds__PredStatus_14);
        }
#line 76 "add_mutable_aux_preds.m"
        {
#line 76 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMutable_10, hlds__make_hlds__add_mutable_aux_preds__PredStatus_14, hlds__make_hlds__add_mutable_aux_preds__NeedQual_12, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_16, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_17, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_20_20, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_19);
        }
#line 73 "add_mutable_aux_preds.m"
      }
#line 69 "add_mutable_aux_preds.m"
  }
#line 23 "add_mutable_aux_preds.m"
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
