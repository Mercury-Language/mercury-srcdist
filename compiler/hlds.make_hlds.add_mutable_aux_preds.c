/*
** Automatically generated from `add_mutable_aux_preds.m'
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

#line 1293 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_109_117_116_97_98_108_101_95_116_97_114_103_101_116_95_118_97_114_95_110_97_109_101_95_95_91_54_93_95_48_7_p_0(
#line 1293 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_8,
#line 1293 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_9,
#line 1293 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_10,
#line 1293 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_11,
#line 1293 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_12,
#line 1293 "add_mutable_aux_preds.m"
  MR_String * hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_14);

#line 1086 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_main_get_set_preds__1086__1_2_p_0(
#line 1086 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__AttachToIO_37,
#line 1086 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_252);

#line 888 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_unsafe_get_set_preds__888__1_2_p_0(
#line 888 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_31,
#line 888 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_66);

#line 801 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_lock_unlock_preds__801__1_2_p_0(
#line 801 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_31,
#line 801 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_59);

#line 740 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_pre_init_pred__740__1_2_p_0(
#line 740 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_31,
#line 740 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_52);

#line 420 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__420__1_2_p_0(
#line 420 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Constraints_31,
#line 420 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_80);

#line 418 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__418__1_2_p_0(
#line 418 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeDetism_25,
#line 418 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_74);

#line 417 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__417__1_2_p_0(
#line 417 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__WithInst_24,
#line 417 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_69);

#line 416 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__416__1_2_p_0(
#line 416 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__WithType_23,
#line 416 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_64);

#line 414 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__414__1_2_p_0(
#line 414 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredOrFunc_21,
#line 414 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_59);

#line 413 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__413__1_2_p_0(
#line 413 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ExistQVars_29,
#line 413 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_54);

#line 411 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__411__1_2_p_0(
#line 411 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__InstVarSet_28,
#line 411 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_49);

#line 409 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__409__1_2_p_0(
#line 409 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_27,
#line 409 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_44);

#line 237 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_aux_pred_decls_for_mutable__237__1_2_p_0(
#line 237 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__AttachToIO_31,
#line 237 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_85);

#line 235 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_aux_pred_decls_for_mutable__235__1_2_p_0(
#line 235 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_28,
#line 235 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_80);

#line 233 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_aux_pred_decls_for_mutable__233__1_2_p_0(
#line 233 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__LockUnlock_27,
#line 233 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_75);

#line 231 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_aux_pred_decls_for_mutable__231__1_2_p_0(
#line 231 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInit_26,
#line 231 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_70);

#line 1396 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_unsafe_get_set_preds_0_0(
#line 1396 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1396 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1396 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3);

#line 1396 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_unsafe_get_set_preds_0_0(
#line 1396 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1,
#line 1396 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);

#line 1388 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_pre_init_pred_0_0(
#line 1388 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1388 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1388 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3);

#line 1388 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_pre_init_pred_0_0(
#line 1388 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1,
#line 1388 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);

#line 1392 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_lock_unlock_preds_0_0(
#line 1392 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1392 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1392 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3);

#line 1392 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_lock_unlock_preds_0_0(
#line 1392 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1,
#line 1392 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);

#line 1400 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_target_params_0_0(
#line 1400 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1400 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1400 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3);

#line 1400 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_target_params_0_0(
#line 1400 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1400 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);

#line 1382 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_impl_lang_0_0(
#line 1382 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1382 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1382 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3);

#line 1382 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_impl_lang_0_0(
#line 1382 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1,
#line 1382 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);

#line 1414 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__get_mutable_target_params_3_p_0(
#line 1414 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_4,
#line 1414 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_5,
#line 1414 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_6);

#line 1373 "add_mutable_aux_preds.m"
static MR_String MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__global_foreign_type_name_4_f_0(
#line 1373 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1373 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_2,
#line 1373 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_3,
#line 1373 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_4);

#line 1351 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__get_matching_foreign_names_3_p_0(
#line 1351 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1351 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1351 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3);

#line 1317 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__get_global_name_from_foreign_names_9_p_0(
#line 1317 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_10,
#line 1317 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_11,
#line 1317 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_12,
#line 1317 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_13,
#line 1317 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_14,
#line 1317 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignNames_15,
#line 1317 "add_mutable_aux_preds.m"
  MR_String * hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_16,
#line 1317 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_28,
#line 1317 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_29);

#line 1232 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_init_pred_11_p_0(
#line 1232 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12,
#line 1232 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_13,
#line 1232 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_14,
#line 1232 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_15,
#line 1232 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_16,
#line 1232 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39,
#line 1232 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_40,
#line 1232 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_41,
#line 1232 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_42,
#line 1232 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_43,
#line 1232 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_44);

#line 1086 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_main_get_set_preds_14_p_0_1(
#line 1086 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 1008 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_main_get_set_preds_14_p_0(
#line 1008 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15,
#line 1008 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_16,
#line 1008 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17,
#line 1008 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_18,
#line 1008 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_19,
#line 1008 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_20,
#line 1008 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21,
#line 1008 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_22,
#line 1008 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_85,
#line 1008 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_86,
#line 1008 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_87,
#line 1008 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_88,
#line 1008 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_89,
#line 1008 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_90);

#line 888 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_unsafe_get_set_preds_12_p_0_1(
#line 888 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 872 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_unsafe_get_set_preds_12_p_0(
#line 872 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13,
#line 872 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_14,
#line 872 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15,
#line 872 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_16,
#line 872 "add_mutable_aux_preds.m"
  MR_Tuple * hlds__make_hlds__add_mutable_aux_preds__UnsafeGetSetExprs_17,
#line 872 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_18,
#line 872 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_56,
#line 872 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_57,
#line 872 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_58,
#line 872 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_59,
#line 872 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_60,
#line 872 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_61);

#line 801 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_lock_unlock_preds_12_p_0_1(
#line 801 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 786 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_lock_unlock_preds_12_p_0(
#line 786 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13,
#line 786 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_14,
#line 786 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15,
#line 786 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_16,
#line 786 "add_mutable_aux_preds.m"
  MR_Tuple * hlds__make_hlds__add_mutable_aux_preds__LockUnlockExprs_17,
#line 786 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_18,
#line 786 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_49,
#line 786 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_50,
#line 786 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_51,
#line 786 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_52,
#line 786 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_53,
#line 786 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_54);

#line 740 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_pre_init_pred_12_p_0_1(
#line 740 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 724 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_pre_init_pred_12_p_0(
#line 724 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13,
#line 724 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_14,
#line 724 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15,
#line 724 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_16,
#line 724 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_17,
#line 724 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_18,
#line 724 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_42,
#line 724 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_43,
#line 724 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_44,
#line 724 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_45,
#line 724 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_46,
#line 724 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_47);

#line 640 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_aux_preds_10_p_0(
#line 640 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11,
#line 640 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_12,
#line 640 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_13,
#line 640 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_14,
#line 640 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34,
#line 640 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_35,
#line 640 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_36,
#line 640 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_37,
#line 640 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38,
#line 640 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39);

#line 604 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_global_var_java_6_p_0(
#line 604 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_7,
#line 604 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_8,
#line 604 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_9,
#line 604 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_10,
#line 604 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_15,
#line 604 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_16);

#line 503 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_global_var_c_7_p_0(
#line 503 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_8,
#line 503 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_9,
#line 503 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_10,
#line 503 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_11,
#line 503 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_12,
#line 503 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_26,
#line 503 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_27);

#line 443 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_defns_for_mutable_8_p_0(
#line 443 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9,
#line 443 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_10,
#line 443 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34,
#line 443 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_35,
#line 443 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_36,
#line 443 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_37,
#line 443 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38,
#line 443 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39);

#line 420 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_8(
#line 420 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 418 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_7(
#line 418 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 417 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_6(
#line 417 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 416 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_5(
#line 416 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 414 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_4(
#line 414 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 413 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_3(
#line 413 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 411 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_2(
#line 411 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 409 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_1(
#line 409 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 398 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0(
#line 398 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_11,
#line 398 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_12,
#line 398 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_13,
#line 398 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Kind_14,
#line 398 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_15,
#line 398 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_16,
#line 398 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_36,
#line 398 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_37,
#line 398 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38,
#line 398 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39);

#line 377 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_13_p_0(
#line 377 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_14,
#line 377 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_15,
#line 377 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Kind_16,
#line 377 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_17,
#line 377 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_18,
#line 377 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Purity_19,
#line 377 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_20,
#line 377 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_21,
#line 377 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_22,
#line 377 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_32,
#line 377 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_33,
#line 377 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_34,
#line 377 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_35);

#line 362 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_pre_init_pred_decl_9_p_0(
#line 362 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_10,
#line 362 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_11,
#line 362 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_12,
#line 362 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_13,
#line 362 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_14,
#line 362 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_19,
#line 362 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_20,
#line 362 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_21,
#line 362 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_22);

#line 344 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_init_pred_decl_9_p_0(
#line 344 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_10,
#line 344 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_11,
#line 344 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_12,
#line 344 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_13,
#line 344 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_14,
#line 344 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_19,
#line 344 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_20,
#line 344 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_21,
#line 344 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_22);

#line 305 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_unlock_pred_decl_9_p_0(
#line 305 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_10,
#line 305 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_11,
#line 305 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_12,
#line 305 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_13,
#line 305 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_14,
#line 305 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_19,
#line 305 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_20,
#line 305 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_21,
#line 305 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_22);

#line 301 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_lock_pred_decl_9_p_0(
#line 301 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_10,
#line 301 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_11,
#line 301 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_12,
#line 301 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_13,
#line 301 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_14,
#line 301 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_19,
#line 301 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_20,
#line 301 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_21,
#line 301 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_22);

#line 297 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_unsafe_set_pred_decl_11_p_0(
#line 297 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_12,
#line 297 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_13,
#line 297 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_14,
#line 297 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_15,
#line 297 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_16,
#line 297 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_17,
#line 297 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_18,
#line 297 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_23,
#line 297 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_24,
#line 297 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_25,
#line 297 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_26);

#line 293 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_unsafe_get_pred_decl_11_p_0(
#line 293 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_12,
#line 293 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_13,
#line 293 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_14,
#line 293 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_15,
#line 293 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_16,
#line 293 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_17,
#line 293 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_18,
#line 293 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_23,
#line 293 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_24,
#line 293 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_25,
#line 293 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_26);

#line 237 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0_4(
#line 237 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 235 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0_3(
#line 235 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 233 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0_2(
#line 233 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 231 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0_1(
#line 231 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 172 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0(
#line 172 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_8,
#line 172 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_9,
#line 172 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_10,
#line 172 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_38,
#line 172 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_39,
#line 172 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_40,
#line 172 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_41);

#line 99 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__check_mutable_4_p_0(
#line 99 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_5,
#line 99 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_6,
#line 99 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_33,
#line 99 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_34);


static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[40][2];

static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[3][1];

static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_4[13][5];


#line 113 "add_mutable_aux_preds.m"
/* sealed */ struct hlds__make_hlds__add_mutable_aux_preds__vector_common_type_2_0_s {
#line 113 "add_mutable_aux_preds.m"
  const MR_Word hlds__make_hlds__add_mutable_aux_preds__vector_common_type_2_0__vct_2_f_0;
#line 113 "add_mutable_aux_preds.m"
};

static /* final */ const struct hlds__make_hlds__add_mutable_aux_preds__vector_common_type_2_0_s hlds__make_hlds__add_mutable_aux_preds_vector_common_2[4];



static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[40][2] = {
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
    ((MR_Box) ((MR_String) "declaration."))
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
    ((MR_Box) ((MR_String) "is not a valid inst for a"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[19])))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) "#endif\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) ";\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[22])))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) ", MR_MUTEX_ATTR);\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[22])))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_String) "end\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_String) "       X = Value\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[25])))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_String) "   {get_mutable_ack, Value} ->\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[26])))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_String) "receive\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[27])))
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_String) ", self()},\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[28])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "backend."))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[11])))
  },
  /* row 32 */
  {
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[0])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the inst"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 35 */
  {
    ((MR_Box) ((MR_Integer) 22)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 36 */
  {
    ((MR_Box) ((MR_String) ">();\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 37 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: multiple foreign_name attributes"))
  },
  /* row 39 */
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



#line 1545 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1553 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1561 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1569 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__add_mutable_aux_preds__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1577 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1585 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1593 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_determinism_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0
  }
};

#line 1601 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_0 = {
  (MR_String) "mutable_lang_c",
  (MR_Integer) 0
};

#line 1607 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_1 = {
  (MR_String) "mutable_lang_csharp",
  (MR_Integer) 1
};

#line 1613 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_2 = {
  (MR_String) "mutable_lang_java",
  (MR_Integer) 2
};

#line 1619 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_3 = {
  (MR_String) "mutable_lang_erlang",
  (MR_Integer) 3
};

#line 1625 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_value_ordered_mutable_impl_lang_0[4] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_1,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_2,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_3
};

#line 1633 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_name_ordered_mutable_impl_lang_0[4] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_1,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_3,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_2
};

#line 1641 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_mutable_impl_lang_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2
};

#line 1649 "hlds.make_hlds.add_mutable_aux_preds.c"
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

#line 1666 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_PseudoTypeInfo hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__field_types_mutable_target_params_0_0[6] = {
  (MR_PseudoTypeInfo) &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_mutable_impl_lang_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_box_policy_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_need_pre_init_pred_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_need_lock_unlock_preds_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_need_unsafe_get_set_preds_0
};

#line 1676 "hlds.make_hlds.add_mutable_aux_preds.c"
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

#line 1710 "hlds.make_hlds.add_mutable_aux_preds.c"
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

#line 1725 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_stag_ordered_mutable_target_params_0_0[1] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_functor_desc_mutable_target_params_0_0
};

#line 1730 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_DuPtagLayout hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_ptag_ordered_mutable_target_params_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_stag_ordered_mutable_target_params_0_0
  }
};

#line 1739 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_name_ordered_mutable_target_params_0[1] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_functor_desc_mutable_target_params_0_0
};

#line 1744 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_mutable_target_params_0[1] = {
  (MR_Integer) 0
};

#line 1749 "hlds.make_hlds.add_mutable_aux_preds.c"
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

#line 1766 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_lock_unlock_preds_0_0 = {
  (MR_String) "dont_need_lock_unlock_preds",
  (MR_Integer) 0
};

#line 1772 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_lock_unlock_preds_0_1 = {
  (MR_String) "need_lock_unlock_preds",
  (MR_Integer) 1
};

#line 1778 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_value_ordered_need_lock_unlock_preds_0[2] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_lock_unlock_preds_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_lock_unlock_preds_0_1
};

#line 1784 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_name_ordered_need_lock_unlock_preds_0[2] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_lock_unlock_preds_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_lock_unlock_preds_0_1
};

#line 1790 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_need_lock_unlock_preds_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1796 "hlds.make_hlds.add_mutable_aux_preds.c"
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

#line 1813 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_pre_init_pred_0_0 = {
  (MR_String) "dont_need_pre_init_pred",
  (MR_Integer) 0
};

#line 1819 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_pre_init_pred_0_1 = {
  (MR_String) "need_pre_init_pred",
  (MR_Integer) 1
};

#line 1825 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_value_ordered_need_pre_init_pred_0[2] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_pre_init_pred_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_pre_init_pred_0_1
};

#line 1831 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_name_ordered_need_pre_init_pred_0[2] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_pre_init_pred_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_pre_init_pred_0_1
};

#line 1837 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_need_pre_init_pred_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1843 "hlds.make_hlds.add_mutable_aux_preds.c"
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

#line 1860 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_unsafe_get_set_preds_0_0 = {
  (MR_String) "dont_need_unsafe_get_set_preds",
  (MR_Integer) 0
};

#line 1866 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_unsafe_get_set_preds_0_1 = {
  (MR_String) "need_unsafe_get_set_preds",
  (MR_Integer) 1
};

#line 1872 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_value_ordered_need_unsafe_get_set_preds_0[2] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_unsafe_get_set_preds_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_unsafe_get_set_preds_0_1
};

#line 1878 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_name_ordered_need_unsafe_get_set_preds_0[2] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_unsafe_get_set_preds_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_unsafe_get_set_preds_0_1
};

#line 1884 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_need_unsafe_get_set_preds_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1890 "hlds.make_hlds.add_mutable_aux_preds.c"
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

#line 1907 "hlds.make_hlds.add_mutable_aux_preds.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_impl_lang_0_0_10001(
#line 1910 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 1912 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2)
#line 1914 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 1916 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 1918 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 1921 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 1923 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_impl_lang_0_0(((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2));
    }
#line 1926 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1928 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 1930 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 1933 "hlds.make_hlds.add_mutable_aux_preds.c"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_impl_lang_0_0_10001(
#line 1936 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box * hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 1938 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2,
#line 1940 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3)
#line 1942 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 1944 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 1946 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1;

#line 1949 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 1951 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_impl_lang_0_0(&hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3));
    }
#line 1954 "hlds.make_hlds.add_mutable_aux_preds.c"
    *hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1));
#line 1956 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 1958 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 1961 "hlds.make_hlds.add_mutable_aux_preds.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_target_params_0_0_10001(
#line 1964 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 1966 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2)
#line 1968 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 1970 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 1972 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 1975 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 1977 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_target_params_0_0(((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2));
    }
#line 1980 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1982 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 1984 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 1987 "hlds.make_hlds.add_mutable_aux_preds.c"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_target_params_0_0_10001(
#line 1990 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box * hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 1992 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2,
#line 1994 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3)
#line 1996 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 1998 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 2000 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1;

#line 2003 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 2005 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_target_params_0_0(&hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3));
    }
#line 2008 "hlds.make_hlds.add_mutable_aux_preds.c"
    *hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1));
#line 2010 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 2012 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 2015 "hlds.make_hlds.add_mutable_aux_preds.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_lock_unlock_preds_0_0_10001(
#line 2018 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 2020 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2)
#line 2022 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 2024 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 2026 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 2029 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 2031 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds____Unify____need_lock_unlock_preds_0_0(((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2));
    }
#line 2034 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 2036 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 2038 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 2041 "hlds.make_hlds.add_mutable_aux_preds.c"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_lock_unlock_preds_0_0_10001(
#line 2044 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box * hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 2046 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2,
#line 2048 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3)
#line 2050 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 2052 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 2054 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1;

#line 2057 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 2059 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds____Compare____need_lock_unlock_preds_0_0(&hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3));
    }
#line 2062 "hlds.make_hlds.add_mutable_aux_preds.c"
    *hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1));
#line 2064 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 2066 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 2069 "hlds.make_hlds.add_mutable_aux_preds.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_pre_init_pred_0_0_10001(
#line 2072 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 2074 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2)
#line 2076 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 2078 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 2080 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 2083 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 2085 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds____Unify____need_pre_init_pred_0_0(((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2));
    }
#line 2088 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 2090 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 2092 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 2095 "hlds.make_hlds.add_mutable_aux_preds.c"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_pre_init_pred_0_0_10001(
#line 2098 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box * hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 2100 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2,
#line 2102 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3)
#line 2104 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 2106 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 2108 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1;

#line 2111 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 2113 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds____Compare____need_pre_init_pred_0_0(&hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3));
    }
#line 2116 "hlds.make_hlds.add_mutable_aux_preds.c"
    *hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1));
#line 2118 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 2120 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 2123 "hlds.make_hlds.add_mutable_aux_preds.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_unsafe_get_set_preds_0_0_10001(
#line 2126 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 2128 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2)
#line 2130 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 2132 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 2134 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 2137 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 2139 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds____Unify____need_unsafe_get_set_preds_0_0(((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2));
    }
#line 2142 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 2144 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 2146 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 2149 "hlds.make_hlds.add_mutable_aux_preds.c"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_unsafe_get_set_preds_0_0_10001(
#line 2152 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box * hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 2154 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2,
#line 2156 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3)
#line 2158 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 2160 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 2162 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1;

#line 2165 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 2167 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds____Compare____need_unsafe_get_set_preds_0_0(&hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3));
    }
#line 2170 "hlds.make_hlds.add_mutable_aux_preds.c"
    *hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1));
#line 2172 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 2174 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 1293 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_109_117_116_97_98_108_101_95_116_97_114_103_101_116_95_118_97_114_95_110_97_109_101_95_95_91_54_93_95_48_7_p_0(
#line 1293 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_8,
#line 1293 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_9,
#line 1293 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_10,
#line 1293 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_11,
#line 1293 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_12,
#line 1293 "add_mutable_aux_preds.m"
  MR_String * hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_14)
#line 1293 "add_mutable_aux_preds.m"
{
#line 1298 "add_mutable_aux_preds.m"
  {
#line 1298 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1298 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_15;

#line 1299 "add_mutable_aux_preds.m"
    {
#line 1299 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_15 = parse_tree__prog_item__mutable_var_maybe_foreign_names_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_9);
    }
#line 1304 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1303 "add_mutable_aux_preds.m"
      {
#line 1303 "add_mutable_aux_preds.m"
        *hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_14 = parse_tree__prog_mutable__mutable_c_var_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_10, hlds__make_hlds__add_mutable_aux_preds__Name_11);
      }
#line 1304 "add_mutable_aux_preds.m"
    else
#line 1305 "add_mutable_aux_preds.m"
      {
#line 1305 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_15, (MR_Integer) 0)));
#line 1305 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetMutableNames_29;

#line 1325 "add_mutable_aux_preds.m"
        {
#line 1325 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__get_matching_foreign_names_3_p_0(hlds__make_hlds__add_mutable_aux_preds__ForeignNames_16, hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_12, &hlds__make_hlds__add_mutable_aux_preds__TargetMutableNames_29);
        }
#line 1331 "add_mutable_aux_preds.m"
        if ((hlds__make_hlds__add_mutable_aux_preds__TargetMutableNames_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1330 "add_mutable_aux_preds.m"
          {
#line 1330 "add_mutable_aux_preds.m"
            *hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_14 = parse_tree__prog_mutable__mutable_c_var_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_10, hlds__make_hlds__add_mutable_aux_preds__Name_11);
          }
#line 1331 "add_mutable_aux_preds.m"
        else
#line 1331 "add_mutable_aux_preds.m"
          {
#line 1331 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__TargetMutableNames_29, (MR_Integer) 1)));
#line 1331 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__TargetMutableNames_29, (MR_Integer) 0)));

#line 1331 "add_mutable_aux_preds.m"
            if ((hlds__make_hlds__add_mutable_aux_preds__V_64_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1332 "add_mutable_aux_preds.m"
              {
#line 1332 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_65_65, (MR_Integer) 0)));

#line 1332 "add_mutable_aux_preds.m"
                *hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_14 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_65_65, (MR_Integer) 1)));
#line 1332 "add_mutable_aux_preds.m"
              }
#line 1331 "add_mutable_aux_preds.m"
            else
#line 1336 "add_mutable_aux_preds.m"
              {
#line 1336 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__Globals_34;
#line 1336 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_35;
#line 1341 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_47_47;

#line 1337 "add_mutable_aux_preds.m"
                {
#line 1337 "add_mutable_aux_preds.m"
                  hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_8, &hlds__make_hlds__add_mutable_aux_preds__Globals_34);
                }
#line 1338 "add_mutable_aux_preds.m"
                {
#line 1338 "add_mutable_aux_preds.m"
                  libs__globals__get_target_2_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_34, &hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_35);
                }
#line 1341 "add_mutable_aux_preds.m"
                {
#line 1341 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_47_47 = libs__globals__compilation_target_string_1_f_0(hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_35);
                }
#line 1348 "add_mutable_aux_preds.m"
                {
#line 1348 "add_mutable_aux_preds.m"
                  *hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_14 = parse_tree__prog_mutable__mutable_c_var_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_10, hlds__make_hlds__add_mutable_aux_preds__Name_11);
                }
#line 1336 "add_mutable_aux_preds.m"
              }
#line 1331 "add_mutable_aux_preds.m"
          }
#line 1305 "add_mutable_aux_preds.m"
      }
#line 1298 "add_mutable_aux_preds.m"
  }
#line 1293 "add_mutable_aux_preds.m"
}

#line 1086 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_main_get_set_preds__1086__1_2_p_0(
#line 1086 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__AttachToIO_37,
#line 1086 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_252)
#line 1086 "add_mutable_aux_preds.m"
{
#line 1086 "add_mutable_aux_preds.m"
  {
#line 1086 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__AttachToIO_37 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_252);

#line 1086 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1086 "add_mutable_aux_preds.m"
  }
#line 1086 "add_mutable_aux_preds.m"
}

#line 888 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_unsafe_get_set_preds__888__1_2_p_0(
#line 888 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_31,
#line 888 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_66)
#line 888 "add_mutable_aux_preds.m"
{
#line 888 "add_mutable_aux_preds.m"
  {
#line 888 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__IsConstant_31 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_66);

#line 888 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 888 "add_mutable_aux_preds.m"
  }
#line 888 "add_mutable_aux_preds.m"
}

#line 801 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_lock_unlock_preds__801__1_2_p_0(
#line 801 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_31,
#line 801 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_59)
#line 801 "add_mutable_aux_preds.m"
{
#line 801 "add_mutable_aux_preds.m"
  {
#line 801 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__IsConstant_31 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_59);

#line 801 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 801 "add_mutable_aux_preds.m"
  }
#line 801 "add_mutable_aux_preds.m"
}

#line 740 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_pre_init_pred__740__1_2_p_0(
#line 740 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_31,
#line 740 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_52)
#line 740 "add_mutable_aux_preds.m"
{
#line 740 "add_mutable_aux_preds.m"
  {
#line 740 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__IsConstant_31 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_52);

#line 740 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 740 "add_mutable_aux_preds.m"
  }
#line 740 "add_mutable_aux_preds.m"
}

#line 420 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__420__1_2_p_0(
#line 420 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Constraints_31,
#line 420 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_80)
#line 420 "add_mutable_aux_preds.m"
{
#line 420 "add_mutable_aux_preds.m"
  {
#line 420 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 420 "add_mutable_aux_preds.m"
    {
#line 420 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = parse_tree__prog_data____Unify____prog_constraints_0_0(hlds__make_hlds__add_mutable_aux_preds__Constraints_31, hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_80);
    }
#line 420 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 420 "add_mutable_aux_preds.m"
  }
#line 420 "add_mutable_aux_preds.m"
}

#line 418 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__418__1_2_p_0(
#line 418 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeDetism_25,
#line 418 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_74)
#line 418 "add_mutable_aux_preds.m"
{
#line 418 "add_mutable_aux_preds.m"
  {
#line 418 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 418 "add_mutable_aux_preds.m"
    {
#line 418 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[6], ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__MaybeDetism_25)), ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_74)));
    }
#line 418 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 418 "add_mutable_aux_preds.m"
  }
#line 418 "add_mutable_aux_preds.m"
}

#line 417 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__417__1_2_p_0(
#line 417 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__WithInst_24,
#line 417 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_69)
#line 417 "add_mutable_aux_preds.m"
{
#line 417 "add_mutable_aux_preds.m"
  {
#line 417 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 417 "add_mutable_aux_preds.m"
    {
#line 417 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[5], ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__WithInst_24)), ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_69)));
    }
#line 417 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 417 "add_mutable_aux_preds.m"
  }
#line 417 "add_mutable_aux_preds.m"
}

#line 416 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__416__1_2_p_0(
#line 416 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__WithType_23,
#line 416 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_64)
#line 416 "add_mutable_aux_preds.m"
{
#line 416 "add_mutable_aux_preds.m"
  {
#line 416 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 416 "add_mutable_aux_preds.m"
    {
#line 416 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[4], ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__WithType_23)), ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_64)));
    }
#line 416 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 416 "add_mutable_aux_preds.m"
  }
#line 416 "add_mutable_aux_preds.m"
}

#line 414 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__414__1_2_p_0(
#line 414 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredOrFunc_21,
#line 414 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_59)
#line 414 "add_mutable_aux_preds.m"
{
#line 414 "add_mutable_aux_preds.m"
  {
#line 414 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__PredOrFunc_21 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_59);

#line 414 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 414 "add_mutable_aux_preds.m"
  }
#line 414 "add_mutable_aux_preds.m"
}

#line 413 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__413__1_2_p_0(
#line 413 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ExistQVars_29,
#line 413 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_54)
#line 413 "add_mutable_aux_preds.m"
{
#line 413 "add_mutable_aux_preds.m"
  {
#line 413 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 413 "add_mutable_aux_preds.m"
    {
#line 413 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[3], ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ExistQVars_29)), ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_54)));
    }
#line 413 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 413 "add_mutable_aux_preds.m"
  }
#line 413 "add_mutable_aux_preds.m"
}

#line 411 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__411__1_2_p_0(
#line 411 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__InstVarSet_28,
#line 411 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_49)
#line 411 "add_mutable_aux_preds.m"
{
#line 411 "add_mutable_aux_preds.m"
  {
#line 411 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 411 "add_mutable_aux_preds.m"
    {
#line 411 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[1], ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InstVarSet_28)), ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_49)));
    }
#line 411 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 411 "add_mutable_aux_preds.m"
  }
#line 411 "add_mutable_aux_preds.m"
}

#line 409 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__409__1_2_p_0(
#line 409 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_27,
#line 409 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_44)
#line 409 "add_mutable_aux_preds.m"
{
#line 409 "add_mutable_aux_preds.m"
  {
#line 409 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 409 "add_mutable_aux_preds.m"
    {
#line 409 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[0], ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_27)), ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_44)));
    }
#line 409 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 409 "add_mutable_aux_preds.m"
  }
#line 409 "add_mutable_aux_preds.m"
}

#line 237 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_aux_pred_decls_for_mutable__237__1_2_p_0(
#line 237 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__AttachToIO_31,
#line 237 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_85)
#line 237 "add_mutable_aux_preds.m"
{
#line 237 "add_mutable_aux_preds.m"
  {
#line 237 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__AttachToIO_31 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_85);

#line 237 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 237 "add_mutable_aux_preds.m"
  }
#line 237 "add_mutable_aux_preds.m"
}

#line 235 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_aux_pred_decls_for_mutable__235__1_2_p_0(
#line 235 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_28,
#line 235 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_80)
#line 235 "add_mutable_aux_preds.m"
{
#line 235 "add_mutable_aux_preds.m"
  {
#line 235 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_28 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_80);

#line 235 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 235 "add_mutable_aux_preds.m"
  }
#line 235 "add_mutable_aux_preds.m"
}

#line 233 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_aux_pred_decls_for_mutable__233__1_2_p_0(
#line 233 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__LockUnlock_27,
#line 233 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_75)
#line 233 "add_mutable_aux_preds.m"
{
#line 233 "add_mutable_aux_preds.m"
  {
#line 233 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__LockUnlock_27 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_75);

#line 233 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 233 "add_mutable_aux_preds.m"
  }
#line 233 "add_mutable_aux_preds.m"
}

#line 231 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_aux_pred_decls_for_mutable__231__1_2_p_0(
#line 231 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInit_26,
#line 231 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_70)
#line 231 "add_mutable_aux_preds.m"
{
#line 231 "add_mutable_aux_preds.m"
  {
#line 231 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__PreInit_26 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_70);

#line 231 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 231 "add_mutable_aux_preds.m"
  }
#line 231 "add_mutable_aux_preds.m"
}

#line 1396 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_unsafe_get_set_preds_0_0(
#line 1396 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1396 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1396 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3)
#line 1396 "add_mutable_aux_preds.m"
{
#line 1396 "add_mutable_aux_preds.m"
  {
#line 1396 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1396 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar1_4 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2;
#line 1396 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar2_5 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3;

#line 1396 "add_mutable_aux_preds.m"
    {
#line 1396 "add_mutable_aux_preds.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar1_4, hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar2_5);
    }
#line 1396 "add_mutable_aux_preds.m"
  }
#line 1396 "add_mutable_aux_preds.m"
}

#line 1396 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_unsafe_get_set_preds_0_0(
#line 1396 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1,
#line 1396 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2)
#line 1396 "add_mutable_aux_preds.m"
{
#line 2706 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 2708 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);

#line 2711 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 2713 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 1396 "add_mutable_aux_preds.m"
}

#line 1388 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_pre_init_pred_0_0(
#line 1388 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1388 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1388 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3)
#line 1388 "add_mutable_aux_preds.m"
{
#line 1388 "add_mutable_aux_preds.m"
  {
#line 1388 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1388 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar1_4 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2;
#line 1388 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar2_5 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3;

#line 1388 "add_mutable_aux_preds.m"
    {
#line 1388 "add_mutable_aux_preds.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar1_4, hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar2_5);
    }
#line 1388 "add_mutable_aux_preds.m"
  }
#line 1388 "add_mutable_aux_preds.m"
}

#line 1388 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_pre_init_pred_0_0(
#line 1388 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1,
#line 1388 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2)
#line 1388 "add_mutable_aux_preds.m"
{
#line 2757 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 2759 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);

#line 2762 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 2764 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 1388 "add_mutable_aux_preds.m"
}

#line 1392 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_lock_unlock_preds_0_0(
#line 1392 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1392 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1392 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3)
#line 1392 "add_mutable_aux_preds.m"
{
#line 1392 "add_mutable_aux_preds.m"
  {
#line 1392 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1392 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar1_4 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2;
#line 1392 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar2_5 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3;

#line 1392 "add_mutable_aux_preds.m"
    {
#line 1392 "add_mutable_aux_preds.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar1_4, hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar2_5);
    }
#line 1392 "add_mutable_aux_preds.m"
  }
#line 1392 "add_mutable_aux_preds.m"
}

#line 1392 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_lock_unlock_preds_0_0(
#line 1392 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1,
#line 1392 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2)
#line 1392 "add_mutable_aux_preds.m"
{
#line 2808 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 2810 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);

#line 2813 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 2815 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 1392 "add_mutable_aux_preds.m"
}

#line 1400 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_target_params_0_0(
#line 1400 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1400 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1400 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3)
#line 1400 "add_mutable_aux_preds.m"
{
#line 1400 "add_mutable_aux_preds.m"
  {
#line 1400 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1400 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__CastX_21 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2;
#line 1400 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__CastY_22 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3;

#line 1400 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__CastX_21 == hlds__make_hlds__add_mutable_aux_preds__CastY_22);
#line 1400 "add_mutable_aux_preds.m"
    if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 2844 "hlds.make_hlds.add_mutable_aux_preds.c"
      *hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1 = (MR_Integer) 0;
#line 1400 "add_mutable_aux_preds.m"
    else
#line 1400 "add_mutable_aux_preds.m"
      {
#line 1400 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1400 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
#line 1400 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1400 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1400 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1400 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1400 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1400 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
#line 1400 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1400 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1400 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1400 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1400 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_16_16;
#line 1400 "add_mutable_aux_preds.m"
        MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_29_29 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_4_4;
#line 1400 "add_mutable_aux_preds.m"
        MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_30_30 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_10_10;

#line 1400 "add_mutable_aux_preds.m"
        {
#line 1400 "add_mutable_aux_preds.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__make_hlds__add_mutable_aux_preds__V_16_16, hlds__make_hlds__add_mutable_aux_preds__V_29_29, hlds__make_hlds__add_mutable_aux_preds__V_30_30);
        }
#line 2886 "hlds.make_hlds.add_mutable_aux_preds.c"
        hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_16_16 == (MR_Integer) 0);
#line 1400 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__succeeded = !(hlds__make_hlds__add_mutable_aux_preds__succeeded);
#line 1400 "add_mutable_aux_preds.m"
        if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1400 "add_mutable_aux_preds.m"
          *hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1 = hlds__make_hlds__add_mutable_aux_preds__V_16_16;
#line 1400 "add_mutable_aux_preds.m"
        else
#line 1400 "add_mutable_aux_preds.m"
          {
#line 1400 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_17_17;
#line 1400 "add_mutable_aux_preds.m"
            MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_31_31 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_5_5;
#line 1400 "add_mutable_aux_preds.m"
            MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_32_32 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_11_11;

#line 1400 "add_mutable_aux_preds.m"
            {
#line 1400 "add_mutable_aux_preds.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__make_hlds__add_mutable_aux_preds__V_17_17, hlds__make_hlds__add_mutable_aux_preds__V_31_31, hlds__make_hlds__add_mutable_aux_preds__V_32_32);
            }
#line 2910 "hlds.make_hlds.add_mutable_aux_preds.c"
            hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_17_17 == (MR_Integer) 0);
#line 1400 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__succeeded = !(hlds__make_hlds__add_mutable_aux_preds__succeeded);
#line 1400 "add_mutable_aux_preds.m"
            if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1400 "add_mutable_aux_preds.m"
              *hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1 = hlds__make_hlds__add_mutable_aux_preds__V_17_17;
#line 1400 "add_mutable_aux_preds.m"
            else
#line 1400 "add_mutable_aux_preds.m"
              {
#line 1400 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_18_18;
#line 1400 "add_mutable_aux_preds.m"
                MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_33_33 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_6_6;
#line 1400 "add_mutable_aux_preds.m"
                MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_34_34 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_12_12;

#line 1400 "add_mutable_aux_preds.m"
                {
#line 1400 "add_mutable_aux_preds.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__make_hlds__add_mutable_aux_preds__V_18_18, hlds__make_hlds__add_mutable_aux_preds__V_33_33, hlds__make_hlds__add_mutable_aux_preds__V_34_34);
                }
#line 2934 "hlds.make_hlds.add_mutable_aux_preds.c"
                hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_18_18 == (MR_Integer) 0);
#line 1400 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__succeeded = !(hlds__make_hlds__add_mutable_aux_preds__succeeded);
#line 1400 "add_mutable_aux_preds.m"
                if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1400 "add_mutable_aux_preds.m"
                  *hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1 = hlds__make_hlds__add_mutable_aux_preds__V_18_18;
#line 1400 "add_mutable_aux_preds.m"
                else
#line 1400 "add_mutable_aux_preds.m"
                  {
#line 1400 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_19_19;
#line 1400 "add_mutable_aux_preds.m"
                    MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_35_35 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_7_7;
#line 1400 "add_mutable_aux_preds.m"
                    MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_36_36 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_13_13;

#line 1400 "add_mutable_aux_preds.m"
                    {
#line 1400 "add_mutable_aux_preds.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__make_hlds__add_mutable_aux_preds__V_19_19, hlds__make_hlds__add_mutable_aux_preds__V_35_35, hlds__make_hlds__add_mutable_aux_preds__V_36_36);
                    }
#line 2958 "hlds.make_hlds.add_mutable_aux_preds.c"
                    hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_19_19 == (MR_Integer) 0);
#line 1400 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__succeeded = !(hlds__make_hlds__add_mutable_aux_preds__succeeded);
#line 1400 "add_mutable_aux_preds.m"
                    if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1400 "add_mutable_aux_preds.m"
                      *hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1 = hlds__make_hlds__add_mutable_aux_preds__V_19_19;
#line 1400 "add_mutable_aux_preds.m"
                    else
#line 1400 "add_mutable_aux_preds.m"
                      {
#line 1400 "add_mutable_aux_preds.m"
                        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_20_20;
#line 1400 "add_mutable_aux_preds.m"
                        MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_37_37 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_8_8;
#line 1400 "add_mutable_aux_preds.m"
                        MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_38_38 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_14_14;

#line 1400 "add_mutable_aux_preds.m"
                        {
#line 1400 "add_mutable_aux_preds.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__make_hlds__add_mutable_aux_preds__V_20_20, hlds__make_hlds__add_mutable_aux_preds__V_37_37, hlds__make_hlds__add_mutable_aux_preds__V_38_38);
                        }
#line 2982 "hlds.make_hlds.add_mutable_aux_preds.c"
                        hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_20_20 == (MR_Integer) 0);
#line 1400 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__succeeded = !(hlds__make_hlds__add_mutable_aux_preds__succeeded);
#line 1400 "add_mutable_aux_preds.m"
                        if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1400 "add_mutable_aux_preds.m"
                          *hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1 = hlds__make_hlds__add_mutable_aux_preds__V_20_20;
#line 1400 "add_mutable_aux_preds.m"
                        else
#line 1400 "add_mutable_aux_preds.m"
                          {
#line 1400 "add_mutable_aux_preds.m"
                            MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_39_39 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_9_9;
#line 1400 "add_mutable_aux_preds.m"
                            MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_40_40 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_15_15;

#line 1400 "add_mutable_aux_preds.m"
                            {
#line 1400 "add_mutable_aux_preds.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, hlds__make_hlds__add_mutable_aux_preds__V_39_39, hlds__make_hlds__add_mutable_aux_preds__V_40_40);
                            }
#line 1400 "add_mutable_aux_preds.m"
                          }
#line 1400 "add_mutable_aux_preds.m"
                      }
#line 1400 "add_mutable_aux_preds.m"
                  }
#line 1400 "add_mutable_aux_preds.m"
              }
#line 1400 "add_mutable_aux_preds.m"
          }
#line 1400 "add_mutable_aux_preds.m"
      }
#line 1400 "add_mutable_aux_preds.m"
  }
#line 1400 "add_mutable_aux_preds.m"
}

#line 1400 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_target_params_0_0(
#line 1400 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1400 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2)
#line 1400 "add_mutable_aux_preds.m"
{
#line 1400 "add_mutable_aux_preds.m"
  {
#line 1400 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1400 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__CastX_15 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1;
#line 1400 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__CastY_16 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2;

#line 1400 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__CastX_15 == hlds__make_hlds__add_mutable_aux_preds__CastY_16);
#line 1400 "add_mutable_aux_preds.m"
    if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1400 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = MR_TRUE;
#line 1400 "add_mutable_aux_preds.m"
    else
#line 1400 "add_mutable_aux_preds.m"
      {
#line 1400 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_3_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1400 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
#line 1400 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1400 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1400 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1400 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1400 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1400 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
#line 1400 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1400 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1400 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1400 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);

#line 3074 "hlds.make_hlds.add_mutable_aux_preds.c"
        hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_3_3 == hlds__make_hlds__add_mutable_aux_preds__V_9_9);
#line 1400 "add_mutable_aux_preds.m"
        if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1400 "add_mutable_aux_preds.m"
          {
#line 3080 "hlds.make_hlds.add_mutable_aux_preds.c"
            hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_4_4 == hlds__make_hlds__add_mutable_aux_preds__V_10_10);
#line 1400 "add_mutable_aux_preds.m"
            if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1400 "add_mutable_aux_preds.m"
              {
#line 3086 "hlds.make_hlds.add_mutable_aux_preds.c"
                hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_5_5 == hlds__make_hlds__add_mutable_aux_preds__V_11_11);
#line 1400 "add_mutable_aux_preds.m"
                if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1400 "add_mutable_aux_preds.m"
                  {
#line 3092 "hlds.make_hlds.add_mutable_aux_preds.c"
                    hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_6_6 == hlds__make_hlds__add_mutable_aux_preds__V_12_12);
#line 1400 "add_mutable_aux_preds.m"
                    if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1400 "add_mutable_aux_preds.m"
                      {
#line 3098 "hlds.make_hlds.add_mutable_aux_preds.c"
                        hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_7_7 == hlds__make_hlds__add_mutable_aux_preds__V_13_13);
#line 1400 "add_mutable_aux_preds.m"
                        if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 3102 "hlds.make_hlds.add_mutable_aux_preds.c"
                          hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_8_8 == hlds__make_hlds__add_mutable_aux_preds__V_14_14);
#line 1400 "add_mutable_aux_preds.m"
                      }
#line 1400 "add_mutable_aux_preds.m"
                  }
#line 1400 "add_mutable_aux_preds.m"
              }
#line 1400 "add_mutable_aux_preds.m"
          }
#line 1400 "add_mutable_aux_preds.m"
      }
#line 1400 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1400 "add_mutable_aux_preds.m"
  }
#line 1400 "add_mutable_aux_preds.m"
}

#line 1382 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_impl_lang_0_0(
#line 1382 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1382 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1382 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3)
#line 1382 "add_mutable_aux_preds.m"
{
#line 1382 "add_mutable_aux_preds.m"
  {
#line 1382 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1382 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar1_4 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2;
#line 1382 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar2_5 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3;

#line 1382 "add_mutable_aux_preds.m"
    {
#line 1382 "add_mutable_aux_preds.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar1_4, hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar2_5);
    }
#line 1382 "add_mutable_aux_preds.m"
  }
#line 1382 "add_mutable_aux_preds.m"
}

#line 1382 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_impl_lang_0_0(
#line 1382 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1,
#line 1382 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2)
#line 1382 "add_mutable_aux_preds.m"
{
#line 3160 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 3162 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);

#line 3165 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 3167 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 1382 "add_mutable_aux_preds.m"
}

#line 1414 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__get_mutable_target_params_3_p_0(
#line 1414 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_4,
#line 1414 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_5,
#line 1414 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_6)
#line 1414 "add_mutable_aux_preds.m"
{
#line 1417 "add_mutable_aux_preds.m"
  {
#line 1417 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1417 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Globals_7;
#line 1417 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_8;
#line 1417 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ImplLang_9;
#line 1417 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_10;
#line 1417 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInit0_11;
#line 1417 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__LockUnlock0_12;
#line 1417 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess0_13;
#line 1417 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_15;
#line 1417 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_17;
#line 1417 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInit_18;
#line 1417 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__LockUnlock_19;
#line 1417 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_20;
#line 1417 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_21;

#line 1421 "add_mutable_aux_preds.m"
    {
#line 1421 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_4, &hlds__make_hlds__add_mutable_aux_preds__Globals_7);
    }
#line 1422 "add_mutable_aux_preds.m"
    {
#line 1422 "add_mutable_aux_preds.m"
      libs__globals__get_target_2_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_7, &hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_8);
    }
#line 1439 "add_mutable_aux_preds.m"
#line 1439 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_8) {
#line 1439 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1439 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 1425 "add_mutable_aux_preds.m"
        {
#line 1425 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__HighLevelCode_14;

#line 1426 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__ImplLang_9 = (MR_Integer) 0;
#line 1427 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__Lang_10 = (MR_Integer) 0;
#line 1428 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__PreInit0_11 = (MR_Integer) 1;
#line 1429 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LockUnlock0_12 = (MR_Integer) 1;
#line 1430 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess0_13 = (MR_Integer) 1;
#line 1431 "add_mutable_aux_preds.m"
          {
#line 1431 "add_mutable_aux_preds.m"
            libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_7, (MR_Integer) 251, &hlds__make_hlds__add_mutable_aux_preds__HighLevelCode_14);
          }
#line 1435 "add_mutable_aux_preds.m"
#line 1435 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__HighLevelCode_14) {
#line 1435 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1435 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 1434 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_15 = (MR_Integer) 1;
#line 1435 "add_mutable_aux_preds.m"
              break;
#line 1435 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 1437 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_15 = (MR_Integer) 0;
#line 1435 "add_mutable_aux_preds.m"
              break;
#line 1435 "add_mutable_aux_preds.m"
          }
#line 1425 "add_mutable_aux_preds.m"
        }
#line 1439 "add_mutable_aux_preds.m"
        break;
#line 1439 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 1440 "add_mutable_aux_preds.m"
        {
#line 1440 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_16;

#line 1441 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__ImplLang_9 = (MR_Integer) 1;
#line 1442 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__Lang_10 = (MR_Integer) 1;
#line 1443 "add_mutable_aux_preds.m"
          {
#line 1443 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_16 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_5);
          }
#line 1447 "add_mutable_aux_preds.m"
#line 1447 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_16) {
#line 1447 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1447 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 1449 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__PreInit0_11 = (MR_Integer) 0;
#line 1447 "add_mutable_aux_preds.m"
              break;
#line 1447 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 1446 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__PreInit0_11 = (MR_Integer) 1;
#line 1447 "add_mutable_aux_preds.m"
              break;
#line 1447 "add_mutable_aux_preds.m"
          }
#line 1451 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LockUnlock0_12 = (MR_Integer) 0;
#line 1452 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess0_13 = (MR_Integer) 1;
#line 1453 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_15 = (MR_Integer) 0;
#line 1440 "add_mutable_aux_preds.m"
        }
#line 1439 "add_mutable_aux_preds.m"
        break;
#line 1439 "add_mutable_aux_preds.m"
      case (MR_Integer) 3:
#line 1463 "add_mutable_aux_preds.m"
        {
#line 1464 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__ImplLang_9 = (MR_Integer) 3;
#line 1465 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__Lang_10 = (MR_Integer) 3;
#line 1466 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__PreInit0_11 = (MR_Integer) 0;
#line 1467 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LockUnlock0_12 = (MR_Integer) 0;
#line 1468 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess0_13 = (MR_Integer) 0;
#line 1469 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_15 = (MR_Integer) 0;
#line 1463 "add_mutable_aux_preds.m"
        }
#line 1439 "add_mutable_aux_preds.m"
        break;
#line 1439 "add_mutable_aux_preds.m"
      case (MR_Integer) 2:
#line 1455 "add_mutable_aux_preds.m"
        {
#line 1456 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__ImplLang_9 = (MR_Integer) 2;
#line 1457 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__Lang_10 = (MR_Integer) 2;
#line 1458 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__PreInit0_11 = (MR_Integer) 0;
#line 1459 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LockUnlock0_12 = (MR_Integer) 0;
#line 1460 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess0_13 = (MR_Integer) 1;
#line 1461 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_15 = (MR_Integer) 0;
#line 1455 "add_mutable_aux_preds.m"
        }
#line 1439 "add_mutable_aux_preds.m"
        break;
#line 1439 "add_mutable_aux_preds.m"
    }
#line 1471 "add_mutable_aux_preds.m"
    {
#line 1471 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsConstant_17 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_5);
    }
#line 1477 "add_mutable_aux_preds.m"
#line 1477 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__IsConstant_17) {
#line 1477 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1477 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 1478 "add_mutable_aux_preds.m"
        {
#line 1479 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__PreInit_18 = (MR_Integer) 0;
#line 1480 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LockUnlock_19 = (MR_Integer) 0;
#line 1481 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_20 = (MR_Integer) 0;
#line 1478 "add_mutable_aux_preds.m"
        }
#line 1477 "add_mutable_aux_preds.m"
        break;
#line 1477 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 1473 "add_mutable_aux_preds.m"
        {
#line 1474 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__PreInit_18 = hlds__make_hlds__add_mutable_aux_preds__PreInit0_11;
#line 1475 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LockUnlock_19 = hlds__make_hlds__add_mutable_aux_preds__LockUnlock0_12;
#line 1476 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_20 = hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess0_13;
#line 1473 "add_mutable_aux_preds.m"
        }
#line 1477 "add_mutable_aux_preds.m"
        break;
#line 1477 "add_mutable_aux_preds.m"
    }
#line 1483 "add_mutable_aux_preds.m"
    {
#line 1483 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__TargetParams_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1483 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_21, 0) = ((MR_Box) ((hlds__make_hlds__add_mutable_aux_preds__ImplLang_9 | ((((hlds__make_hlds__add_mutable_aux_preds__Lang_10 << (MR_Integer) 2)) | ((((hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_15 << (MR_Integer) 4)) | ((((hlds__make_hlds__add_mutable_aux_preds__PreInit_18 << (MR_Integer) 5)) | ((((hlds__make_hlds__add_mutable_aux_preds__LockUnlock_19 << (MR_Integer) 6)) | ((hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_20 << (MR_Integer) 7)))))))))))));
#line 1483 "add_mutable_aux_preds.m"
    }
#line 1485 "add_mutable_aux_preds.m"
    {
#line 1485 "add_mutable_aux_preds.m"
      MR_Word base;
#line 1485 "add_mutable_aux_preds.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1485 "add_mutable_aux_preds.m"
      *hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_6 = base;
#line 1485 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetParams_21));
#line 1485 "add_mutable_aux_preds.m"
    }
#line 1417 "add_mutable_aux_preds.m"
  }
#line 1414 "add_mutable_aux_preds.m"
}

#line 1373 "add_mutable_aux_preds.m"
static MR_String MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__global_foreign_type_name_4_f_0(
#line 1373 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1373 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_2,
#line 1373 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_3,
#line 1373 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_4)
#line 1373 "add_mutable_aux_preds.m"
{
#line 1376 "add_mutable_aux_preds.m"
  {
#line 1376 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1376 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__HeadVar__5_5;

#line 1376 "add_mutable_aux_preds.m"
#line 1376 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1) {
#line 1376 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1376 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 1376 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__HeadVar__5_5 = (MR_String) "MR_Word";
#line 1376 "add_mutable_aux_preds.m"
        break;
#line 1376 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 1378 "add_mutable_aux_preds.m"
        {
#line 1378 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__HeadVar__5_5 = backend_libs__foreign__mercury_exported_type_to_string_3_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_3, hlds__make_hlds__add_mutable_aux_preds__Lang_2, hlds__make_hlds__add_mutable_aux_preds__Type_4);
        }
#line 1376 "add_mutable_aux_preds.m"
        break;
#line 1376 "add_mutable_aux_preds.m"
    }
#line 1376 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__HeadVar__5_5;
#line 1376 "add_mutable_aux_preds.m"
  }
#line 1373 "add_mutable_aux_preds.m"
}

#line 1351 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__get_matching_foreign_names_3_p_0(
#line 1351 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1351 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1351 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3)
#line 1351 "add_mutable_aux_preds.m"
{
#line 1354 "add_mutable_aux_preds.m"
  {
#line 1354 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 1354 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1354 "add_mutable_aux_preds.m"
      *hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1354 "add_mutable_aux_preds.m"
    else
#line 1356 "add_mutable_aux_preds.m"
      {
#line 1356 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignName_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, (MR_Integer) 0)));
#line 1356 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignNames_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, (MR_Integer) 1)));
#line 1356 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__TailMatchingForeignNames_9;
#line 1356 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_10;
#line 1359 "add_mutable_aux_preds.m"
        MR_String hlds__make_hlds__add_mutable_aux_preds__V_11_11;

#line 1357 "add_mutable_aux_preds.m"
        {
#line 1357 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__get_matching_foreign_names_3_p_0(hlds__make_hlds__add_mutable_aux_preds__ForeignNames_6, hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, &hlds__make_hlds__add_mutable_aux_preds__TailMatchingForeignNames_9);
        }
#line 1359 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignName_5, (MR_Integer) 0)));
#line 1359 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignName_5, (MR_Integer) 1)));
#line 1360 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_10 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);
#line 1362 "add_mutable_aux_preds.m"
        if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1361 "add_mutable_aux_preds.m"
          {
#line 1361 "add_mutable_aux_preds.m"
            MR_Word base;
#line 1361 "add_mutable_aux_preds.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1361 "add_mutable_aux_preds.m"
            *hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3 = base;
#line 1361 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ForeignName_5));
#line 1361 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TailMatchingForeignNames_9));
#line 1361 "add_mutable_aux_preds.m"
          }
#line 1362 "add_mutable_aux_preds.m"
        else
#line 1363 "add_mutable_aux_preds.m"
          *hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3 = hlds__make_hlds__add_mutable_aux_preds__TailMatchingForeignNames_9;
#line 1356 "add_mutable_aux_preds.m"
      }
#line 1354 "add_mutable_aux_preds.m"
  }
#line 1351 "add_mutable_aux_preds.m"
}

#line 1317 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__get_global_name_from_foreign_names_9_p_0(
#line 1317 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_10,
#line 1317 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_11,
#line 1317 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_12,
#line 1317 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_13,
#line 1317 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_14,
#line 1317 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignNames_15,
#line 1317 "add_mutable_aux_preds.m"
  MR_String * hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_16,
#line 1317 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_28,
#line 1317 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_29)
#line 1317 "add_mutable_aux_preds.m"
{
#line 1324 "add_mutable_aux_preds.m"
  {
#line 1324 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1324 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetMutableNames_18;

#line 1325 "add_mutable_aux_preds.m"
    {
#line 1325 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__get_matching_foreign_names_3_p_0(hlds__make_hlds__add_mutable_aux_preds__ForeignNames_15, hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_14, &hlds__make_hlds__add_mutable_aux_preds__TargetMutableNames_18);
    }
#line 1331 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__TargetMutableNames_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1328 "add_mutable_aux_preds.m"
      {
#line 1330 "add_mutable_aux_preds.m"
        {
#line 1330 "add_mutable_aux_preds.m"
          *hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_16 = parse_tree__prog_mutable__mutable_c_var_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_12, hlds__make_hlds__add_mutable_aux_preds__MutableName_13);
        }
#line 1328 "add_mutable_aux_preds.m"
        *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_29 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_28;
#line 1328 "add_mutable_aux_preds.m"
      }
#line 1331 "add_mutable_aux_preds.m"
    else
#line 1331 "add_mutable_aux_preds.m"
      {
#line 1331 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__TargetMutableNames_18, (MR_Integer) 1)));
#line 1331 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__TargetMutableNames_18, (MR_Integer) 0)));

#line 1331 "add_mutable_aux_preds.m"
        if ((hlds__make_hlds__add_mutable_aux_preds__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1332 "add_mutable_aux_preds.m"
          {
#line 1332 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_56_56, (MR_Integer) 0)));

#line 1332 "add_mutable_aux_preds.m"
            *hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_16 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_56_56, (MR_Integer) 1)));
#line 1332 "add_mutable_aux_preds.m"
            *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_29 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_28;
#line 1332 "add_mutable_aux_preds.m"
          }
#line 1331 "add_mutable_aux_preds.m"
        else
#line 1336 "add_mutable_aux_preds.m"
          {
#line 1336 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__Globals_23;
#line 1336 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_24;
#line 1336 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__Pieces_25;
#line 1336 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__Msg_26;
#line 1336 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__Spec_27;
#line 1336 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_33_33;
#line 1336 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_36_36;
#line 1336 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_37_37;
#line 1336 "add_mutable_aux_preds.m"
            MR_String hlds__make_hlds__add_mutable_aux_preds__V_38_38;
#line 1336 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_45_45;
#line 1336 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_46_46;
#line 1336 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_50_50;

#line 1337 "add_mutable_aux_preds.m"
            {
#line 1337 "add_mutable_aux_preds.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_10, &hlds__make_hlds__add_mutable_aux_preds__Globals_23);
            }
#line 1338 "add_mutable_aux_preds.m"
            {
#line 1338 "add_mutable_aux_preds.m"
              libs__globals__get_target_2_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_23, &hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_24);
            }
#line 1341 "add_mutable_aux_preds.m"
            {
#line 1341 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_38_38 = libs__globals__compilation_target_string_1_f_0(hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_24);
            }
#line 1341 "add_mutable_aux_preds.m"
            {
#line 1341 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_37_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1341 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__V_37_37, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_38_38));
#line 1341 "add_mutable_aux_preds.m"
            }
#line 1341 "add_mutable_aux_preds.m"
            {
#line 1341 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1341 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_36_36, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_37_37));
#line 1341 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[31])));
#line 1341 "add_mutable_aux_preds.m"
            }
#line 1340 "add_mutable_aux_preds.m"
            {
#line 1340 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1340 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_33_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[39])));
#line 1340 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_33_33, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_36_36));
#line 1340 "add_mutable_aux_preds.m"
            }
#line 1339 "add_mutable_aux_preds.m"
            {
#line 1339 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__Pieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1339 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__Pieces_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[38])));
#line 1339 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__Pieces_25, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_33_33));
#line 1339 "add_mutable_aux_preds.m"
            }
#line 1343 "add_mutable_aux_preds.m"
            {
#line 1343 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1343 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_46_46, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Pieces_25));
#line 1343 "add_mutable_aux_preds.m"
            }
#line 1343 "add_mutable_aux_preds.m"
            {
#line 1343 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1343 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_45_45, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_46_46));
#line 1343 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1343 "add_mutable_aux_preds.m"
            }
#line 1343 "add_mutable_aux_preds.m"
            {
#line 1343 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__Msg_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1343 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Msg_26, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_11));
#line 1343 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Msg_26, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_45_45));
#line 1343 "add_mutable_aux_preds.m"
            }
#line 1344 "add_mutable_aux_preds.m"
            {
#line 1344 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1344 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_50_50, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Msg_26));
#line 1344 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1344 "add_mutable_aux_preds.m"
            }
#line 1344 "add_mutable_aux_preds.m"
            {
#line 1344 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__Spec_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1344 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Spec_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1344 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Spec_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 1344 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Spec_27, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_50_50));
#line 1344 "add_mutable_aux_preds.m"
            }
#line 1345 "add_mutable_aux_preds.m"
            {
#line 1345 "add_mutable_aux_preds.m"
              MR_Word base;
#line 1345 "add_mutable_aux_preds.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1345 "add_mutable_aux_preds.m"
              *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_29 = base;
#line 1345 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Spec_27));
#line 1345 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_28));
#line 1345 "add_mutable_aux_preds.m"
            }
#line 1348 "add_mutable_aux_preds.m"
            {
#line 1348 "add_mutable_aux_preds.m"
              *hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_16 = parse_tree__prog_mutable__mutable_c_var_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_12, hlds__make_hlds__add_mutable_aux_preds__MutableName_13);
            }
#line 1336 "add_mutable_aux_preds.m"
          }
#line 1331 "add_mutable_aux_preds.m"
      }
#line 1324 "add_mutable_aux_preds.m"
  }
#line 1317 "add_mutable_aux_preds.m"
}

#line 1232 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_init_pred_11_p_0(
#line 1232 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12,
#line 1232 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_13,
#line 1232 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_14,
#line 1232 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_15,
#line 1232 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_16,
#line 1232 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39,
#line 1232 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_40,
#line 1232 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_41,
#line 1232 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_42,
#line 1232 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_43,
#line 1232 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_44)
#line 1232 "add_mutable_aux_preds.m"
{
#line 1238 "add_mutable_aux_preds.m"
  {
#line 1238 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1238 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_20;
#line 1238 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_21;
#line 1238 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InitTerm_23;
#line 1238 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__VarSetMutable_26;
#line 1238 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_27;
#line 1238 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__X_29;
#line 1238 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__VarSetMutableX_30;
#line 1238 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__VarX_31;
#line 1238 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_32;
#line 1238 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__CallSetExpr_33;
#line 1238 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnifyCallSetExpr_34;
#line 1238 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_35;
#line 1238 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InitPredName_37;
#line 1238 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_47_47;
#line 1238 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_54_54;
#line 1238 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_56_56;
#line 1238 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__CName_70;
#line 1238 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_71;
#line 1238 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__FPEInfo_72;
#line 1238 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_24_75;
#line 1240 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Type_22;
#line 1240 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Inst_24;
#line 1240 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___MutAttrs_25;
#line 1240 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_28;

#line 1239 "add_mutable_aux_preds.m"
    {
#line 1239 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_20);
    }
#line 1240 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutableName_21 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12, (MR_Integer) 0)));
#line 1240 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Type_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12, (MR_Integer) 1)));
#line 1240 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__InitTerm_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12, (MR_Integer) 2)));
#line 1240 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Inst_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12, (MR_Integer) 3)));
#line 1240 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___MutAttrs_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12, (MR_Integer) 4)));
#line 1240 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__VarSetMutable_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12, (MR_Integer) 5)));
#line 1240 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Context_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12, (MR_Integer) 6)));
#line 1240 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___SeqNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12, (MR_Integer) 7)));
#line 1242 "add_mutable_aux_preds.m"
    {
#line 1242 "add_mutable_aux_preds.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "X", &hlds__make_hlds__add_mutable_aux_preds__X_29, hlds__make_hlds__add_mutable_aux_preds__VarSetMutable_26, &hlds__make_hlds__add_mutable_aux_preds__VarSetMutableX_30);
    }
#line 1243 "add_mutable_aux_preds.m"
    {
#line 1243 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__VarX_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1243 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__VarX_31, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_29));
#line 1243 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__VarX_31, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_27));
#line 1243 "add_mutable_aux_preds.m"
    }
#line 1245 "add_mutable_aux_preds.m"
    {
#line 1245 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1245 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_32, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_27));
#line 1245 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_32, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarX_31));
#line 1245 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_32, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InitTerm_23));
#line 1245 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_32, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1245 "add_mutable_aux_preds.m"
    }
#line 1246 "add_mutable_aux_preds.m"
    {
#line 1246 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1246 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_47_47, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarX_31));
#line 1246 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1246 "add_mutable_aux_preds.m"
    }
#line 1246 "add_mutable_aux_preds.m"
    {
#line 1246 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__CallSetExpr_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1246 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallSetExpr_33, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_27));
#line 1246 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallSetExpr_33, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_14));
#line 1246 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallSetExpr_33, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_47_47));
#line 1246 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallSetExpr_33, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1246 "add_mutable_aux_preds.m"
    }
#line 1247 "add_mutable_aux_preds.m"
    {
#line 1247 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__UnifyCallSetExpr_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1247 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__UnifyCallSetExpr_34, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_27));
#line 1247 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__UnifyCallSetExpr_34, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_32));
#line 1247 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__UnifyCallSetExpr_34, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallSetExpr_33));
#line 1247 "add_mutable_aux_preds.m"
    }
#line 1251 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1250 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_35 = hlds__make_hlds__add_mutable_aux_preds__UnifyCallSetExpr_34;
#line 1251 "add_mutable_aux_preds.m"
    else
#line 1252 "add_mutable_aux_preds.m"
      {
#line 1252 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_13, (MR_Integer) 0)));

#line 1253 "add_mutable_aux_preds.m"
        {
#line 1253 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1253 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_35, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_27));
#line 1253 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_35, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_36));
#line 1253 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_35, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnifyCallSetExpr_34));
#line 1253 "add_mutable_aux_preds.m"
        }
#line 1252 "add_mutable_aux_preds.m"
      }
#line 1255 "add_mutable_aux_preds.m"
    {
#line 1255 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__InitPredName_37 = parse_tree__prog_mutable__mutable_init_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_20, hlds__make_hlds__add_mutable_aux_preds__MutableName_21);
    }
#line 1258 "add_mutable_aux_preds.m"
    {
#line 1258 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__add_mutable_aux_preds__VarSetMutableX_30, (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__InitPredName_37, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_35, hlds__make_hlds__add_mutable_aux_preds__PredStatus_16, hlds__make_hlds__add_mutable_aux_preds__Context_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_54_54, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_41, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_42, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_43, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_56_56);
    }
#line 1279 "add_mutable_aux_preds.m"
    {
#line 1279 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_new_user_init_pred_5_p_0(hlds__make_hlds__add_mutable_aux_preds__InitPredName_37, (MR_Integer) 0, &hlds__make_hlds__add_mutable_aux_preds__CName_70, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_54_54, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_24_75);
    }
#line 1280 "add_mutable_aux_preds.m"
    {
#line 1280 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1280 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_71, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InitPredName_37));
#line 1280 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1280 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_71, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1280 "add_mutable_aux_preds.m"
    }
#line 1281 "add_mutable_aux_preds.m"
    {
#line 1281 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__FPEInfo_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1281 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_72, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Lang_15));
#line 1281 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_72, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_71));
#line 1281 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_72, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CName_70));
#line 1281 "add_mutable_aux_preds.m"
    }
#line 1284 "add_mutable_aux_preds.m"
    {
#line 1284 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0((MR_Word) MR_mkword(MR_mktag(1), ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[37]))), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_72, hlds__make_hlds__add_mutable_aux_preds__Context_27, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_24_75, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_40, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_56_56, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_44);
    }
#line 1238 "add_mutable_aux_preds.m"
  }
#line 1232 "add_mutable_aux_preds.m"
}

#line 1086 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_main_get_set_preds_14_p_0_1(
#line 1086 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 1086 "add_mutable_aux_preds.m"
{
#line 1086 "add_mutable_aux_preds.m"
  {
#line 1086 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1086 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 1086 "add_mutable_aux_preds.m"
    {
#line 1086 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_main_get_set_preds__1086__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 1086 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1086 "add_mutable_aux_preds.m"
  }
#line 1086 "add_mutable_aux_preds.m"
}

#line 1008 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_main_get_set_preds_14_p_0(
#line 1008 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15,
#line 1008 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_16,
#line 1008 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17,
#line 1008 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_18,
#line 1008 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_19,
#line 1008 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_20,
#line 1008 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21,
#line 1008 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_22,
#line 1008 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_85,
#line 1008 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_86,
#line 1008 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_87,
#line 1008 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_88,
#line 1008 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_89,
#line 1008 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_90)
#line 1008 "add_mutable_aux_preds.m"
{
#line 1017 "add_mutable_aux_preds.m"
  {
#line 1017 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1017 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_253_253;
#line 1017 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_26;
#line 1017 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_27;
#line 1017 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_30;
#line 1017 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_31;
#line 1017 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_33;
#line 1017 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_35;
#line 1017 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_36;
#line 1017 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__AttachToIO_37;
#line 1017 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ImplLang_38;
#line 1017 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_40;
#line 1017 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__X_44;
#line 1017 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_45;
#line 1017 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_92_92;
#line 1019 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Type_28;
#line 1019 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___InitTerm_29;
#line 1019 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___VarSetMutable_32;
#line 1019 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_34;
#line 1024 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Lang_39;
#line 1024 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___PreInit_41;
#line 1024 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___LockUnlock_42;
#line 1024 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_43;

#line 1018 "add_mutable_aux_preds.m"
    {
#line 1018 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_85, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_26);
    }
#line 1019 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutableName_27 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15, (MR_Integer) 0)));
#line 1019 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Type_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15, (MR_Integer) 1)));
#line 1019 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___InitTerm_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15, (MR_Integer) 2)));
#line 1019 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Inst_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15, (MR_Integer) 3)));
#line 1019 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutAttrs_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15, (MR_Integer) 4)));
#line 1019 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___VarSetMutable_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15, (MR_Integer) 5)));
#line 1019 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Context_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15, (MR_Integer) 6)));
#line 1019 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___SeqNum_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15, (MR_Integer) 7)));
#line 1021 "add_mutable_aux_preds.m"
    {
#line 1021 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsConstant_35 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_31);
    }
#line 1022 "add_mutable_aux_preds.m"
    {
#line 1022 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_36 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_31);
    }
#line 1023 "add_mutable_aux_preds.m"
    {
#line 1023 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__AttachToIO_37 = parse_tree__prog_item__mutable_var_attach_to_io_state_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_31);
    }
#line 1024 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__ImplLang_38 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_16, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1024 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Lang_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_16, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
#line 1024 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_16, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1024 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___PreInit_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_16, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1024 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___LockUnlock_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_16, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1024 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_16, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 4174 "hlds.make_hlds.add_mutable_aux_preds.c"
    hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_253_253 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1026 "add_mutable_aux_preds.m"
    {
#line 1026 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_92_92 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_253_253);
    }
#line 1026 "add_mutable_aux_preds.m"
    {
#line 1026 "add_mutable_aux_preds.m"
      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_253_253, (MR_String) "X", &hlds__make_hlds__add_mutable_aux_preds__X_44, hlds__make_hlds__add_mutable_aux_preds__V_92_92, &hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_45);
    }
#line 1088 "add_mutable_aux_preds.m"
#line 1088 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__IsConstant_35) {
#line 1088 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1088 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 1029 "add_mutable_aux_preds.m"
        {
#line 1029 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_254_254;
#line 1029 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__ConstantGetPredName_46;
#line 1029 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__ConstantGetAttrs0_48;
#line 1029 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__ConstantGetAttrs_49;
#line 1029 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__ConstantGetCode_51;
#line 1029 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__ConstantSetCode_52;
#line 1029 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_53;
#line 1029 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_54;
#line 1029 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_225_225;
#line 1029 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_226_226;
#line 1029 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_228_228;
#line 1029 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_230_230;
#line 1029 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_231_231;
#line 1029 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_232_232;
#line 1029 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_234_234;
#line 1029 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_235_235;
#line 1029 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_237_237;
#line 1029 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_239_239;
#line 1029 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_240_240;
#line 1029 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_243_243;
#line 1029 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_244_244;
#line 1029 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_248_248;

#line 1030 "add_mutable_aux_preds.m"
          {
#line 1030 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__ConstantGetPredName_46 = parse_tree__prog_mutable__mutable_get_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_26, hlds__make_hlds__add_mutable_aux_preds__MutableName_27);
          }
#line 1032 "add_mutable_aux_preds.m"
          {
#line 1032 "add_mutable_aux_preds.m"
            *hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21 = parse_tree__prog_mutable__mutable_secret_set_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_26, hlds__make_hlds__add_mutable_aux_preds__MutableName_27);
          }
#line 1036 "add_mutable_aux_preds.m"
          {
#line 1036 "add_mutable_aux_preds.m"
            parse_tree__prog_data__set_purity_3_p_0((MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__Attrs_18, &hlds__make_hlds__add_mutable_aux_preds__ConstantGetAttrs0_48);
          }
#line 1037 "add_mutable_aux_preds.m"
          {
#line 1037 "add_mutable_aux_preds.m"
            parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__ConstantGetAttrs0_48, &hlds__make_hlds__add_mutable_aux_preds__ConstantGetAttrs_49);
          }
#line 1046 "add_mutable_aux_preds.m"
#line 1046 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__ImplLang_38) {
#line 1046 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1046 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 1046 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 1046 "add_mutable_aux_preds.m"
            case (MR_Integer) 2:
#line 1043 "add_mutable_aux_preds.m"
              {
#line 1043 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_221_221;

#line 1044 "add_mutable_aux_preds.m"
                {
#line 1044 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_221_221 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17, (MR_String) ";\n");
                }
#line 1044 "add_mutable_aux_preds.m"
                {
#line 1044 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__ConstantGetCode_51 = mercury__string__f_43_43_2_f_0((MR_String) "X = ", hlds__make_hlds__add_mutable_aux_preds__V_221_221);
                }
#line 1045 "add_mutable_aux_preds.m"
                {
#line 1045 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__ConstantSetCode_52 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17, (MR_String) " = X;\n");
                }
#line 1043 "add_mutable_aux_preds.m"
              }
#line 1046 "add_mutable_aux_preds.m"
              break;
#line 1046 "add_mutable_aux_preds.m"
            case (MR_Integer) 3:
#line 1047 "add_mutable_aux_preds.m"
              {
#line 1047 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_203_203;
#line 1047 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_205_205;
#line 1047 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_218_218;

#line 1053 "add_mutable_aux_preds.m"
                {
#line 1053 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_205_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1053 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_205_205, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17));
#line 1053 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_205_205, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[29])));
#line 1053 "add_mutable_aux_preds.m"
                }
#line 1052 "add_mutable_aux_preds.m"
                {
#line 1052 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_203_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1052 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_203_203, 0) = ((MR_Box) ((MR_String) "\'ML_erlang_global_server\' ! {get_mutable, "));
#line 1052 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_203_203, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_205_205));
#line 1052 "add_mutable_aux_preds.m"
                }
#line 1051 "add_mutable_aux_preds.m"
                {
#line 1051 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__ConstantGetCode_51 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_203_203);
                }
#line 1061 "add_mutable_aux_preds.m"
                {
#line 1061 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_218_218 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17, (MR_String) ", X}");
                }
#line 1060 "add_mutable_aux_preds.m"
                {
#line 1060 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__ConstantSetCode_52 = mercury__string__f_43_43_2_f_0((MR_String) "\'ML_erlang_global_server\' ! {set_mutable, ", hlds__make_hlds__add_mutable_aux_preds__V_218_218);
                }
#line 1047 "add_mutable_aux_preds.m"
              }
#line 1046 "add_mutable_aux_preds.m"
              break;
#line 1046 "add_mutable_aux_preds.m"
          }
#line 1066 "add_mutable_aux_preds.m"
          {
#line 1066 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_228_228 = parse_tree__prog_mode__out_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_30);
          }
#line 1066 "add_mutable_aux_preds.m"
          {
#line 1066 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_226_226 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1066 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_226_226, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_44));
#line 1066 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_226_226, 1) = ((MR_Box) ((MR_String) "X"));
#line 1066 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_226_226, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_228_228));
#line 1066 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_226_226, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_40));
#line 1066 "add_mutable_aux_preds.m"
          }
#line 1066 "add_mutable_aux_preds.m"
          {
#line 1066 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_225_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1066 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_225_225, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_226_226));
#line 1066 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_225_225, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1066 "add_mutable_aux_preds.m"
          }
#line 4376 "hlds.make_hlds.add_mutable_aux_preds.c"
          hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_254_254 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
#line 1068 "add_mutable_aux_preds.m"
          {
#line 1068 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_230_230 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_254_254);
          }
#line 1069 "add_mutable_aux_preds.m"
          {
#line 1069 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_232_232 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1069 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_232_232, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1069 "add_mutable_aux_preds.m"
          }
#line 1069 "add_mutable_aux_preds.m"
          {
#line 1069 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_231_231 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1069 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_231_231, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ConstantGetCode_51));
#line 1069 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_231_231, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_232_232));
#line 1069 "add_mutable_aux_preds.m"
          }
#line 1063 "add_mutable_aux_preds.m"
          {
#line 1063 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1063 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_53, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ConstantGetAttrs_49));
#line 1063 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_53, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ConstantGetPredName_46));
#line 1063 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_53, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1063 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_53, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_225_225));
#line 1063 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_53, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_45));
#line 1063 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_53, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_230_230));
#line 1063 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_53, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_231_231));
#line 1063 "add_mutable_aux_preds.m"
          }
#line 1076 "add_mutable_aux_preds.m"
          {
#line 1076 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_237_237 = parse_tree__prog_mode__in_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_30);
          }
#line 1076 "add_mutable_aux_preds.m"
          {
#line 1076 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_235_235 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1076 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_235_235, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_44));
#line 1076 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_235_235, 1) = ((MR_Box) ((MR_String) "X"));
#line 1076 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_235_235, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_237_237));
#line 1076 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_235_235, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_40));
#line 1076 "add_mutable_aux_preds.m"
          }
#line 1076 "add_mutable_aux_preds.m"
          {
#line 1076 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_234_234 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1076 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_234_234, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_235_235));
#line 1076 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_234_234, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1076 "add_mutable_aux_preds.m"
          }
#line 1078 "add_mutable_aux_preds.m"
          {
#line 1078 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_239_239 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_254_254);
          }
#line 1079 "add_mutable_aux_preds.m"
          {
#line 1079 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_240_240 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1079 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_240_240, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ConstantSetCode_52));
#line 1079 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_240_240, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_232_232));
#line 1079 "add_mutable_aux_preds.m"
          }
#line 1073 "add_mutable_aux_preds.m"
          {
#line 1073 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1073 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_54, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Attrs_18));
#line 1073 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_54, 1) = ((MR_Box) (*hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21));
#line 1073 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_54, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1073 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_54, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_234_234));
#line 1073 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_54, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_45));
#line 1073 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_54, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_239_239));
#line 1073 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_54, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_240_240));
#line 1073 "add_mutable_aux_preds.m"
          }
#line 1081 "add_mutable_aux_preds.m"
          {
#line 1081 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_53, hlds__make_hlds__add_mutable_aux_preds__PredStatus_22, hlds__make_hlds__add_mutable_aux_preds__Context_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_85, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_243_243, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_89, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_244_244);
          }
#line 1083 "add_mutable_aux_preds.m"
          {
#line 1083 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_54, hlds__make_hlds__add_mutable_aux_preds__PredStatus_22, hlds__make_hlds__add_mutable_aux_preds__Context_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_243_243, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_86, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_244_244, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_90);
          }
#line 1086 "add_mutable_aux_preds.m"
          {
#line 1086 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_248_248 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1086 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_248_248, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_4[3]));
#line 1086 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_248_248, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__define_main_get_set_preds_14_p_0_1));
#line 1086 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_248_248, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1086 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_248_248, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__AttachToIO_37));
#line 1086 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_248_248, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1086 "add_mutable_aux_preds.m"
          }
#line 1086 "add_mutable_aux_preds.m"
          {
#line 1086 "add_mutable_aux_preds.m"
            mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_248_248, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_main_get_set_preds\'/14", (MR_String) "AttachToIO = mutable_attach_to_io_state");
          }
#line 1029 "add_mutable_aux_preds.m"
          *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_88 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_87;
#line 1029 "add_mutable_aux_preds.m"
        }
#line 1088 "add_mutable_aux_preds.m"
        break;
#line 1088 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 1089 "add_mutable_aux_preds.m"
        {
#line 1089 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__StdGetPredName_55;
#line 1089 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59;
#line 1089 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60;
#line 1089 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_170_170;
#line 1089 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_171_171;
#line 1089 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_172_172;

#line 1090 "add_mutable_aux_preds.m"
          {
#line 1090 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__StdGetPredName_55 = parse_tree__prog_mutable__mutable_get_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_26, hlds__make_hlds__add_mutable_aux_preds__MutableName_27);
          }
#line 1091 "add_mutable_aux_preds.m"
          {
#line 1091 "add_mutable_aux_preds.m"
            *hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21 = parse_tree__prog_mutable__mutable_set_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_26, hlds__make_hlds__add_mutable_aux_preds__MutableName_27);
          }
#line 1128 "add_mutable_aux_preds.m"
#line 1128 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__ImplLang_38) {
#line 1128 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1128 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 1128 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 1128 "add_mutable_aux_preds.m"
            case (MR_Integer) 2:
#line 1097 "add_mutable_aux_preds.m"
              {
#line 1097 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr_57;
#line 1097 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr_58;
#line 1097 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__StdPredArgs_63;
#line 1097 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__StdGetPredExpr_64;
#line 1097 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_158_158;
#line 1097 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_164_164;
#line 1097 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_165_165;
#line 1097 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_166_166;

#line 1101 "add_mutable_aux_preds.m"
                if ((hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1102 "add_mutable_aux_preds.m"
                  {
#line 1103 "add_mutable_aux_preds.m"
                    {
#line 1103 "add_mutable_aux_preds.m"
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_main_get_set_preds\'/14", (MR_String) "mutable_not_constant but MaybeUnsafeGetSetExprs = no");
#line 1103 "add_mutable_aux_preds.m"
                      return;
                    }
#line 1102 "add_mutable_aux_preds.m"
                  }
#line 1101 "add_mutable_aux_preds.m"
                else
#line 1099 "add_mutable_aux_preds.m"
                  {
#line 1099 "add_mutable_aux_preds.m"
                    MR_Tuple hlds__make_hlds__add_mutable_aux_preds__V_154_154 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_20, (MR_Integer) 0)));

#line 1100 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_154_154, (MR_Integer) 0)));
#line 1100 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_154_154, (MR_Integer) 1)));
#line 1099 "add_mutable_aux_preds.m"
                  }
#line 1110 "add_mutable_aux_preds.m"
                if ((hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1107 "add_mutable_aux_preds.m"
                  {
#line 1108 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59 = hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr_57;
#line 1109 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60 = hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr_58;
#line 1107 "add_mutable_aux_preds.m"
                  }
#line 1110 "add_mutable_aux_preds.m"
                else
#line 1111 "add_mutable_aux_preds.m"
                  {
#line 1111 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__CallLockExpr_61;
#line 1111 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr_62;
#line 1111 "add_mutable_aux_preds.m"
                    MR_Tuple hlds__make_hlds__add_mutable_aux_preds__V_155_155 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_19, (MR_Integer) 0)));
#line 1111 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_156_156;
#line 1111 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_157_157;

#line 1111 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__CallLockExpr_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_155_155, (MR_Integer) 0)));
#line 1111 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_155_155, (MR_Integer) 1)));
#line 1113 "add_mutable_aux_preds.m"
                    {
#line 1113 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__V_156_156 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1113 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__V_156_156, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1113 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__V_156_156, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr_57));
#line 1113 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__V_156_156, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr_62));
#line 1113 "add_mutable_aux_preds.m"
                    }
#line 1112 "add_mutable_aux_preds.m"
                    {
#line 1112 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1112 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1112 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallLockExpr_61));
#line 1112 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_156_156));
#line 1112 "add_mutable_aux_preds.m"
                    }
#line 1115 "add_mutable_aux_preds.m"
                    {
#line 1115 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__V_157_157 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1115 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__V_157_157, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1115 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__V_157_157, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr_58));
#line 1115 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__V_157_157, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr_62));
#line 1115 "add_mutable_aux_preds.m"
                    }
#line 1114 "add_mutable_aux_preds.m"
                    {
#line 1114 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1114 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1114 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallLockExpr_61));
#line 1114 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_157_157));
#line 1114 "add_mutable_aux_preds.m"
                    }
#line 1111 "add_mutable_aux_preds.m"
                  }
#line 1118 "add_mutable_aux_preds.m"
                {
#line 1118 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1118 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_158_158, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_44));
#line 1118 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_158_158, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1118 "add_mutable_aux_preds.m"
                }
#line 1118 "add_mutable_aux_preds.m"
                {
#line 1118 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__StdPredArgs_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1118 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__StdPredArgs_63, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_158_158));
#line 1118 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__StdPredArgs_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1118 "add_mutable_aux_preds.m"
                }
#line 1119 "add_mutable_aux_preds.m"
                {
#line 1119 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__StdGetPredExpr_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1119 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__StdGetPredExpr_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 1119 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__StdGetPredExpr_64, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1119 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__StdGetPredExpr_64, 2) = ((MR_Box) ((MR_Integer) 1));
#line 1119 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__StdGetPredExpr_64, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59));
#line 1119 "add_mutable_aux_preds.m"
                }
#line 1122 "add_mutable_aux_preds.m"
                {
#line 1122 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_45, (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__StdGetPredName_55, hlds__make_hlds__add_mutable_aux_preds__StdPredArgs_63, hlds__make_hlds__add_mutable_aux_preds__StdGetPredExpr_64, hlds__make_hlds__add_mutable_aux_preds__PredStatus_22, hlds__make_hlds__add_mutable_aux_preds__Context_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_85, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_164_164, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_87, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_165_165, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_89, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_166_166);
                }
#line 1125 "add_mutable_aux_preds.m"
                {
#line 1125 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_45, (MR_Integer) 0, *hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21, hlds__make_hlds__add_mutable_aux_preds__StdPredArgs_63, hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60, hlds__make_hlds__add_mutable_aux_preds__PredStatus_22, hlds__make_hlds__add_mutable_aux_preds__Context_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_164_164, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_170_170, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_165_165, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_171_171, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_166_166, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_172_172);
                }
#line 1097 "add_mutable_aux_preds.m"
              }
#line 1128 "add_mutable_aux_preds.m"
              break;
#line 1128 "add_mutable_aux_preds.m"
            case (MR_Integer) 3:
#line 1129 "add_mutable_aux_preds.m"
              {
#line 1129 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_256_256;
#line 1129 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__ThreadSafeAttrs_66;
#line 1129 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__ErlangGetAttrs_67;
#line 1129 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__ErlangSetAttrs_68;
#line 1129 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__StdGetCode_69;
#line 1129 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__StdSetCode_70;
#line 1129 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_71;
#line 1129 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_72;
#line 1129 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_120_120;
#line 1129 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_121_121;
#line 1129 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_123_123;
#line 1129 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_125_125;
#line 1129 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_126_126;
#line 1129 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_127_127;
#line 1129 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_129_129;
#line 1129 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_130_130;
#line 1129 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_132_132;
#line 1129 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_134_134;
#line 1129 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_135_135;
#line 1129 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_138_138;
#line 1129 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_139_139;
#line 1129 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_143_143;
#line 1129 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_144_144;

#line 1137 "add_mutable_aux_preds.m"
                {
#line 1137 "add_mutable_aux_preds.m"
                  parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__Attrs_18, &hlds__make_hlds__add_mutable_aux_preds__ThreadSafeAttrs_66);
                }
#line 1138 "add_mutable_aux_preds.m"
                {
#line 1138 "add_mutable_aux_preds.m"
                  parse_tree__prog_data__set_purity_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__ThreadSafeAttrs_66, &hlds__make_hlds__add_mutable_aux_preds__ErlangGetAttrs_67);
                }
#line 1139 "add_mutable_aux_preds.m"
                {
#line 1139 "add_mutable_aux_preds.m"
                  parse_tree__prog_data__set_purity_3_p_0((MR_Integer) 2, hlds__make_hlds__add_mutable_aux_preds__ThreadSafeAttrs_66, &hlds__make_hlds__add_mutable_aux_preds__ErlangSetAttrs_68);
                }
#line 1146 "add_mutable_aux_preds.m"
#line 1146 "add_mutable_aux_preds.m"
                switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_36) {
#line 1146 "add_mutable_aux_preds.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1146 "add_mutable_aux_preds.m"
                  case (MR_Integer) 0:
#line 1147 "add_mutable_aux_preds.m"
                    {
#line 1147 "add_mutable_aux_preds.m"
                      MR_Word hlds__make_hlds__add_mutable_aux_preds__V_96_96;
#line 1147 "add_mutable_aux_preds.m"
                      MR_Word hlds__make_hlds__add_mutable_aux_preds__V_98_98;
#line 1147 "add_mutable_aux_preds.m"
                      MR_String hlds__make_hlds__add_mutable_aux_preds__V_111_111;

#line 1153 "add_mutable_aux_preds.m"
                      {
#line 1153 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1153 "add_mutable_aux_preds.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_98_98, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17));
#line 1153 "add_mutable_aux_preds.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[29])));
#line 1153 "add_mutable_aux_preds.m"
                      }
#line 1152 "add_mutable_aux_preds.m"
                      {
#line 1152 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1152 "add_mutable_aux_preds.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_96_96, 0) = ((MR_Box) ((MR_String) "\'ML_erlang_global_server\' ! {get_mutable, "));
#line 1152 "add_mutable_aux_preds.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_96_96, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_98_98));
#line 1152 "add_mutable_aux_preds.m"
                      }
#line 1151 "add_mutable_aux_preds.m"
                      {
#line 1151 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__StdGetCode_69 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_96_96);
                      }
#line 1161 "add_mutable_aux_preds.m"
                      {
#line 1161 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__V_111_111 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17, (MR_String) ", X}");
                      }
#line 1160 "add_mutable_aux_preds.m"
                      {
#line 1160 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__StdSetCode_70 = mercury__string__f_43_43_2_f_0((MR_String) "\'ML_erlang_global_server\' ! {set_mutable, ", hlds__make_hlds__add_mutable_aux_preds__V_111_111);
                      }
#line 1147 "add_mutable_aux_preds.m"
                    }
#line 1146 "add_mutable_aux_preds.m"
                    break;
#line 1146 "add_mutable_aux_preds.m"
                  case (MR_Integer) 1:
#line 1141 "add_mutable_aux_preds.m"
                    {
#line 1141 "add_mutable_aux_preds.m"
                      MR_String hlds__make_hlds__add_mutable_aux_preds__V_114_114;
#line 1141 "add_mutable_aux_preds.m"
                      MR_String hlds__make_hlds__add_mutable_aux_preds__V_117_117;

#line 1143 "add_mutable_aux_preds.m"
                      {
#line 1143 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__V_114_114 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17, (MR_String) "})");
                      }
#line 1142 "add_mutable_aux_preds.m"
                      {
#line 1142 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__StdGetCode_69 = mercury__string__f_43_43_2_f_0((MR_String) "X = get({\'MR_thread_local_mutable\', ", hlds__make_hlds__add_mutable_aux_preds__V_114_114);
                      }
#line 1145 "add_mutable_aux_preds.m"
                      {
#line 1145 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__V_117_117 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17, (MR_String) "}, X)");
                      }
#line 1144 "add_mutable_aux_preds.m"
                      {
#line 1144 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__StdSetCode_70 = mercury__string__f_43_43_2_f_0((MR_String) "put({\'MR_thread_local_mutable\', ", hlds__make_hlds__add_mutable_aux_preds__V_117_117);
                      }
#line 1141 "add_mutable_aux_preds.m"
                    }
#line 1146 "add_mutable_aux_preds.m"
                    break;
#line 1146 "add_mutable_aux_preds.m"
                }
#line 1166 "add_mutable_aux_preds.m"
                {
#line 1166 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_123_123 = parse_tree__prog_mode__out_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_30);
                }
#line 1166 "add_mutable_aux_preds.m"
                {
#line 1166 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1166 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_121_121, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_44));
#line 1166 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_121_121, 1) = ((MR_Box) ((MR_String) "X"));
#line 1166 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_121_121, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_123_123));
#line 1166 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_121_121, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_40));
#line 1166 "add_mutable_aux_preds.m"
                }
#line 1166 "add_mutable_aux_preds.m"
                {
#line 1166 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1166 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_120_120, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_121_121));
#line 1166 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_120_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1166 "add_mutable_aux_preds.m"
                }
#line 4917 "hlds.make_hlds.add_mutable_aux_preds.c"
                hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_256_256 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
#line 1168 "add_mutable_aux_preds.m"
                {
#line 1168 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_125_125 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_256_256);
                }
#line 1169 "add_mutable_aux_preds.m"
                {
#line 1169 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1169 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_127_127, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1169 "add_mutable_aux_preds.m"
                }
#line 1169 "add_mutable_aux_preds.m"
                {
#line 1169 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_126_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1169 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_126_126, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__StdGetCode_69));
#line 1169 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_126_126, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_127_127));
#line 1169 "add_mutable_aux_preds.m"
                }
#line 1163 "add_mutable_aux_preds.m"
                {
#line 1163 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1163 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_71, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ErlangGetAttrs_67));
#line 1163 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_71, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__StdGetPredName_55));
#line 1163 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_71, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1163 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_71, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_120_120));
#line 1163 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_71, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_45));
#line 1163 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_71, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_125_125));
#line 1163 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_71, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_126_126));
#line 1163 "add_mutable_aux_preds.m"
                }
#line 1174 "add_mutable_aux_preds.m"
                {
#line 1174 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_132_132 = parse_tree__prog_mode__in_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_30);
                }
#line 1174 "add_mutable_aux_preds.m"
                {
#line 1174 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_130_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1174 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_130_130, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_44));
#line 1174 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_130_130, 1) = ((MR_Box) ((MR_String) "X"));
#line 1174 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_130_130, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_132_132));
#line 1174 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_130_130, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_40));
#line 1174 "add_mutable_aux_preds.m"
                }
#line 1174 "add_mutable_aux_preds.m"
                {
#line 1174 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1174 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_129_129, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_130_130));
#line 1174 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_129_129, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1174 "add_mutable_aux_preds.m"
                }
#line 1176 "add_mutable_aux_preds.m"
                {
#line 1176 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_134_134 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_256_256);
                }
#line 1177 "add_mutable_aux_preds.m"
                {
#line 1177 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_135_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1177 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_135_135, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__StdSetCode_70));
#line 1177 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_135_135, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_127_127));
#line 1177 "add_mutable_aux_preds.m"
                }
#line 1171 "add_mutable_aux_preds.m"
                {
#line 1171 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1171 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_72, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ErlangSetAttrs_68));
#line 1171 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_72, 1) = ((MR_Box) (*hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21));
#line 1171 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_72, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1171 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_72, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_129_129));
#line 1171 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_72, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_45));
#line 1171 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_72, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_134_134));
#line 1171 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_72, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_135_135));
#line 1171 "add_mutable_aux_preds.m"
                }
#line 1179 "add_mutable_aux_preds.m"
                {
#line 1179 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_71, hlds__make_hlds__add_mutable_aux_preds__PredStatus_22, hlds__make_hlds__add_mutable_aux_preds__Context_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_85, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_138_138, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_89, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_139_139);
                }
#line 1181 "add_mutable_aux_preds.m"
                {
#line 1181 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_72, hlds__make_hlds__add_mutable_aux_preds__PredStatus_22, hlds__make_hlds__add_mutable_aux_preds__Context_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_138_138, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_170_170, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_139_139, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_172_172);
                }
#line 1185 "add_mutable_aux_preds.m"
                {
#line 1185 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_144_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1185 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_144_144, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_44));
#line 1185 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_144_144, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1185 "add_mutable_aux_preds.m"
                }
#line 1185 "add_mutable_aux_preds.m"
                {
#line 1185 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1185 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_143_143, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_144_144));
#line 1185 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_143_143, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1185 "add_mutable_aux_preds.m"
                }
#line 1184 "add_mutable_aux_preds.m"
                {
#line 1184 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1184 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1184 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__StdGetPredName_55));
#line 1184 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_143_143));
#line 1184 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59, 3) = ((MR_Box) ((MR_Integer) 1));
#line 1184 "add_mutable_aux_preds.m"
                }
#line 1186 "add_mutable_aux_preds.m"
                {
#line 1186 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1186 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1186 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60, 1) = ((MR_Box) (*hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21));
#line 1186 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_143_143));
#line 1186 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1186 "add_mutable_aux_preds.m"
                }
#line 1129 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_171_171 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_87;
#line 1129 "add_mutable_aux_preds.m"
              }
#line 1128 "add_mutable_aux_preds.m"
              break;
#line 1128 "add_mutable_aux_preds.m"
          }
#line 1191 "add_mutable_aux_preds.m"
#line 1191 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__AttachToIO_37) {
#line 1191 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1191 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 1192 "add_mutable_aux_preds.m"
              {
#line 1192 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__IO0_74;
#line 1192 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__IO_75;
#line 1192 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__VarSetXandIOs_76;
#line 1192 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__IOPredArgs_79;
#line 1192 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_80;
#line 1192 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__IOGetPredExpr_81;
#line 1192 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__IOSetPredExpr_82;
#line 1192 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__PureIOGetPredExpr_83;
#line 1192 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__PureIOSetPredExpr_84;
#line 1192 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_VarSet_175_175;
#line 1192 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_178_178;
#line 1192 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_179_179;
#line 1192 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_180_180;
#line 1192 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_181_181;
#line 1192 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_182_182;
#line 1192 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_192_192;
#line 1192 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_193_193;
#line 1192 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_194_194;

#line 1195 "add_mutable_aux_preds.m"
                {
#line 1195 "add_mutable_aux_preds.m"
                  mercury__varset__new_named_var_4_p_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_253_253, (MR_String) "IO0", &hlds__make_hlds__add_mutable_aux_preds__IO0_74, hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_45, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_VarSet_175_175);
                }
#line 1196 "add_mutable_aux_preds.m"
                {
#line 1196 "add_mutable_aux_preds.m"
                  mercury__varset__new_named_var_4_p_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_253_253, (MR_String) "IO", &hlds__make_hlds__add_mutable_aux_preds__IO_75, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_VarSet_175_175, &hlds__make_hlds__add_mutable_aux_preds__VarSetXandIOs_76);
                }
#line 1201 "add_mutable_aux_preds.m"
                {
#line 1201 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_178_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1201 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_178_178, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_44));
#line 1201 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_178_178, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1201 "add_mutable_aux_preds.m"
                }
#line 1202 "add_mutable_aux_preds.m"
                {
#line 1202 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_180_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1202 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_180_180, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__IO0_74));
#line 1202 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_180_180, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1202 "add_mutable_aux_preds.m"
                }
#line 1202 "add_mutable_aux_preds.m"
                {
#line 1202 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_182_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1202 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_182_182, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__IO_75));
#line 1202 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_182_182, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1202 "add_mutable_aux_preds.m"
                }
#line 1202 "add_mutable_aux_preds.m"
                {
#line 1202 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_181_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1202 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_181_181, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_182_182));
#line 1202 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_181_181, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1202 "add_mutable_aux_preds.m"
                }
#line 1202 "add_mutable_aux_preds.m"
                {
#line 1202 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_179_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1202 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_179_179, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_180_180));
#line 1202 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_179_179, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_181_181));
#line 1202 "add_mutable_aux_preds.m"
                }
#line 1201 "add_mutable_aux_preds.m"
                {
#line 1201 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__IOPredArgs_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1201 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__IOPredArgs_79, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_178_178));
#line 1201 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__IOPredArgs_79, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_179_179));
#line 1201 "add_mutable_aux_preds.m"
                }
#line 1210 "add_mutable_aux_preds.m"
                {
#line 1210 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1210 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_80, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1210 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_80, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_180_180));
#line 1210 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_80, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_182_182));
#line 1210 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_80, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1210 "add_mutable_aux_preds.m"
                }
#line 1213 "add_mutable_aux_preds.m"
                {
#line 1213 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__IOGetPredExpr_81 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1213 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__IOGetPredExpr_81, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1213 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__IOGetPredExpr_81, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59));
#line 1213 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__IOGetPredExpr_81, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_80));
#line 1213 "add_mutable_aux_preds.m"
                }
#line 1214 "add_mutable_aux_preds.m"
                {
#line 1214 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__IOSetPredExpr_82 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1214 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__IOSetPredExpr_82, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1214 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__IOSetPredExpr_82, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60));
#line 1214 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__IOSetPredExpr_82, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_80));
#line 1214 "add_mutable_aux_preds.m"
                }
#line 1216 "add_mutable_aux_preds.m"
                {
#line 1216 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__PureIOGetPredExpr_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1216 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOGetPredExpr_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 1216 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOGetPredExpr_83, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1216 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOGetPredExpr_83, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1216 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOGetPredExpr_83, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__IOGetPredExpr_81));
#line 1216 "add_mutable_aux_preds.m"
                }
#line 1218 "add_mutable_aux_preds.m"
                {
#line 1218 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__PureIOSetPredExpr_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1218 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOSetPredExpr_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 1218 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOSetPredExpr_84, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1218 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOSetPredExpr_84, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1218 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOSetPredExpr_84, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__IOSetPredExpr_82));
#line 1218 "add_mutable_aux_preds.m"
                }
#line 1220 "add_mutable_aux_preds.m"
                {
#line 1220 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__add_mutable_aux_preds__VarSetXandIOs_76, (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__StdGetPredName_55, hlds__make_hlds__add_mutable_aux_preds__IOPredArgs_79, hlds__make_hlds__add_mutable_aux_preds__PureIOGetPredExpr_83, hlds__make_hlds__add_mutable_aux_preds__PredStatus_22, hlds__make_hlds__add_mutable_aux_preds__Context_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_170_170, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_192_192, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_171_171, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_193_193, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_172_172, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_194_194);
                }
#line 1223 "add_mutable_aux_preds.m"
                {
#line 1223 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__add_mutable_aux_preds__VarSetXandIOs_76, (MR_Integer) 0, *hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21, hlds__make_hlds__add_mutable_aux_preds__IOPredArgs_79, hlds__make_hlds__add_mutable_aux_preds__PureIOSetPredExpr_84, hlds__make_hlds__add_mutable_aux_preds__PredStatus_22, hlds__make_hlds__add_mutable_aux_preds__Context_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_192_192, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_86, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_193_193, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_88, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_194_194, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_90);
                }
#line 1192 "add_mutable_aux_preds.m"
              }
#line 1191 "add_mutable_aux_preds.m"
              break;
#line 1191 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 1190 "add_mutable_aux_preds.m"
              {
#line 1190 "add_mutable_aux_preds.m"
                *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_86 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_170_170;
#line 1190 "add_mutable_aux_preds.m"
                *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_88 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_171_171;
#line 1190 "add_mutable_aux_preds.m"
                *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_90 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_172_172;
#line 1190 "add_mutable_aux_preds.m"
              }
#line 1191 "add_mutable_aux_preds.m"
              break;
#line 1191 "add_mutable_aux_preds.m"
          }
#line 1089 "add_mutable_aux_preds.m"
        }
#line 1088 "add_mutable_aux_preds.m"
        break;
#line 1088 "add_mutable_aux_preds.m"
    }
#line 1017 "add_mutable_aux_preds.m"
  }
#line 1008 "add_mutable_aux_preds.m"
}

#line 888 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_unsafe_get_set_preds_12_p_0_1(
#line 888 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 888 "add_mutable_aux_preds.m"
{
#line 888 "add_mutable_aux_preds.m"
  {
#line 888 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 888 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 888 "add_mutable_aux_preds.m"
    {
#line 888 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_unsafe_get_set_preds__888__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 888 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 888 "add_mutable_aux_preds.m"
  }
#line 888 "add_mutable_aux_preds.m"
}

#line 872 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_unsafe_get_set_preds_12_p_0(
#line 872 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13,
#line 872 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_14,
#line 872 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15,
#line 872 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_16,
#line 872 "add_mutable_aux_preds.m"
  MR_Tuple * hlds__make_hlds__add_mutable_aux_preds__UnsafeGetSetExprs_17,
#line 872 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_18,
#line 872 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_56,
#line 872 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_57,
#line 872 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_58,
#line 872 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_59,
#line 872 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_60,
#line 872 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_61)
#line 872 "add_mutable_aux_preds.m"
{
#line 880 "add_mutable_aux_preds.m"
  {
#line 880 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 880 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_154_154;
#line 880 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_155_155;
#line 880 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_22;
#line 880 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_23;
#line 880 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_24;
#line 880 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_26;
#line 880 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27;
#line 880 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_29;
#line 880 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_31;
#line 880 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32;
#line 880 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ImplLang_33;
#line 880 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_34;
#line 880 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_35;
#line 880 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__X_39;
#line 880 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_40;
#line 880 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeGetAttrs_42;
#line 880 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeSetAttrs_43;
#line 880 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TrailedMutable_44;
#line 880 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__TrailCode_45;
#line 880 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_46;
#line 880 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__UnsafeSetCode_47;
#line 880 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeGetPredName_50;
#line 880 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeSetPredName_51;
#line 880 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_52;
#line 880 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_53;
#line 880 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr0_54;
#line 880 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr0_55;
#line 880 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_62_62;
#line 880 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_68_68;
#line 880 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_121_121;
#line 880 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_122_122;
#line 880 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_124_124;
#line 880 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_126_126;
#line 880 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_127_127;
#line 880 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_128_128;
#line 880 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_130_130;
#line 880 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_131_131;
#line 880 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_133_133;
#line 880 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_135_135;
#line 880 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_136_136;
#line 880 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__V_137_137;
#line 880 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_140_140;
#line 880 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_141_141;
#line 880 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_145_145;
#line 880 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_146_146;
#line 882 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___InitTerm_25;
#line 882 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___VarSetMutable_28;
#line 882 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_30;
#line 886 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___PreInit_36;
#line 886 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___LockUnlock_37;
#line 886 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_38;

#line 881 "add_mutable_aux_preds.m"
    {
#line 881 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_56, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_22);
    }
#line 882 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutableName_23 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 0)));
#line 882 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Type_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 1)));
#line 882 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___InitTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 2)));
#line 882 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Inst_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 3)));
#line 882 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 4)));
#line 882 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___VarSetMutable_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 5)));
#line 882 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Context_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 6)));
#line 882 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___SeqNum_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 7)));
#line 884 "add_mutable_aux_preds.m"
    {
#line 884 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsConstant_31 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27);
    }
#line 885 "add_mutable_aux_preds.m"
    {
#line 885 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27);
    }
#line 886 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__ImplLang_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 886 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Lang_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
#line 886 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 886 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___PreInit_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 886 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___LockUnlock_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 886 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 888 "add_mutable_aux_preds.m"
    {
#line 888 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 888 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_62_62, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_4[12]));
#line 888 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_62_62, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__define_unsafe_get_set_preds_12_p_0_1));
#line 888 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_62_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 888 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_62_62, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__IsConstant_31));
#line 888 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_62_62, 4) = ((MR_Box) ((MR_Integer) 0));
#line 888 "add_mutable_aux_preds.m"
    }
#line 888 "add_mutable_aux_preds.m"
    {
#line 888 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_62_62, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_unsafe_get_set_preds\'/12", (MR_String) "need_unsafe_get_set_preds, but IsConstant = mutable_constant");
    }
#line 5541 "hlds.make_hlds.add_mutable_aux_preds.c"
    hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_154_154 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 890 "add_mutable_aux_preds.m"
    {
#line 890 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_68_68 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_154_154);
    }
#line 890 "add_mutable_aux_preds.m"
    {
#line 890 "add_mutable_aux_preds.m"
      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_154_154, (MR_String) "X", &hlds__make_hlds__add_mutable_aux_preds__X_39, hlds__make_hlds__add_mutable_aux_preds__V_68_68, &hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_40);
    }
#line 892 "add_mutable_aux_preds.m"
    {
#line 892 "add_mutable_aux_preds.m"
      parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__Attrs_16, &hlds__make_hlds__add_mutable_aux_preds__UnsafeSetAttrs_43);
    }
#line 893 "add_mutable_aux_preds.m"
    {
#line 893 "add_mutable_aux_preds.m"
      parse_tree__prog_data__set_purity_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__UnsafeSetAttrs_43, &hlds__make_hlds__add_mutable_aux_preds__UnsafeGetAttrs_42);
    }
#line 896 "add_mutable_aux_preds.m"
    {
#line 896 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__TrailedMutable_44 = parse_tree__prog_item__mutable_var_trailed_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27);
    }
#line 922 "add_mutable_aux_preds.m"
#line 922 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__ImplLang_33) {
#line 922 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 922 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 898 "add_mutable_aux_preds.m"
        {
#line 902 "add_mutable_aux_preds.m"
#line 902 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__TrailedMutable_44) {
#line 902 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 902 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 903 "add_mutable_aux_preds.m"
              {
#line 903 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_102_102;

#line 907 "add_mutable_aux_preds.m"
                {
#line 907 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_102_102 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ");\n");
                }
#line 906 "add_mutable_aux_preds.m"
                {
#line 906 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__TrailCode_45 = mercury__string__f_43_43_2_f_0((MR_String) "MR_trail_current_value(&", hlds__make_hlds__add_mutable_aux_preds__V_102_102);
                }
#line 903 "add_mutable_aux_preds.m"
              }
#line 902 "add_mutable_aux_preds.m"
              break;
#line 902 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 901 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__TrailCode_45 = (MR_String) "";
#line 902 "add_mutable_aux_preds.m"
              break;
#line 902 "add_mutable_aux_preds.m"
          }
#line 913 "add_mutable_aux_preds.m"
#line 913 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32) {
#line 913 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 913 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 910 "add_mutable_aux_preds.m"
              {
#line 910 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_117_117;

#line 911 "add_mutable_aux_preds.m"
                {
#line 911 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_117_117 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ";\n");
                }
#line 911 "add_mutable_aux_preds.m"
                {
#line 911 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_46 = mercury__string__f_43_43_2_f_0((MR_String) "X = ", hlds__make_hlds__add_mutable_aux_preds__V_117_117);
                }
#line 912 "add_mutable_aux_preds.m"
                {
#line 912 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeSetCode_47 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) " = X;\n");
                }
#line 910 "add_mutable_aux_preds.m"
              }
#line 913 "add_mutable_aux_preds.m"
              break;
#line 913 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 914 "add_mutable_aux_preds.m"
              {
#line 914 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__TypeName_48;
#line 914 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_105_105;
#line 914 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_106_106;
#line 914 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_108_108;
#line 914 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_111_111;
#line 914 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_112_112;
#line 914 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_114_114;

#line 915 "add_mutable_aux_preds.m"
                {
#line 915 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__TypeName_48 = hlds__make_hlds__add_mutable_aux_preds__global_foreign_type_name_4_f_0(hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_35, hlds__make_hlds__add_mutable_aux_preds__Lang_34, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_56, hlds__make_hlds__add_mutable_aux_preds__Type_24);
                }
#line 918 "add_mutable_aux_preds.m"
                {
#line 918 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_108_108 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ");\n");
                }
#line 918 "add_mutable_aux_preds.m"
                {
#line 918 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_106_106 = mercury__string__f_43_43_2_f_0((MR_String) ", X, ", hlds__make_hlds__add_mutable_aux_preds__V_108_108);
                }
#line 918 "add_mutable_aux_preds.m"
                {
#line 918 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_105_105 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeName_48, hlds__make_hlds__add_mutable_aux_preds__V_106_106);
                }
#line 917 "add_mutable_aux_preds.m"
                {
#line 917 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_46 = mercury__string__f_43_43_2_f_0((MR_String) "MR_get_thread_local_mutable(", hlds__make_hlds__add_mutable_aux_preds__V_105_105);
                }
#line 920 "add_mutable_aux_preds.m"
                {
#line 920 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_114_114 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ");\n");
                }
#line 920 "add_mutable_aux_preds.m"
                {
#line 920 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_112_112 = mercury__string__f_43_43_2_f_0((MR_String) ", X, ", hlds__make_hlds__add_mutable_aux_preds__V_114_114);
                }
#line 920 "add_mutable_aux_preds.m"
                {
#line 920 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_111_111 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeName_48, hlds__make_hlds__add_mutable_aux_preds__V_112_112);
                }
#line 919 "add_mutable_aux_preds.m"
                {
#line 919 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeSetCode_47 = mercury__string__f_43_43_2_f_0((MR_String) "MR_set_thread_local_mutable(", hlds__make_hlds__add_mutable_aux_preds__V_111_111);
                }
#line 914 "add_mutable_aux_preds.m"
              }
#line 913 "add_mutable_aux_preds.m"
              break;
#line 913 "add_mutable_aux_preds.m"
          }
#line 898 "add_mutable_aux_preds.m"
        }
#line 922 "add_mutable_aux_preds.m"
        break;
#line 922 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 923 "add_mutable_aux_preds.m"
        {
#line 926 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__TrailCode_45 = (MR_String) "";
#line 931 "add_mutable_aux_preds.m"
#line 931 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32) {
#line 931 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 931 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 928 "add_mutable_aux_preds.m"
              {
#line 928 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_96_96;
#line 928 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_99_99;

#line 929 "add_mutable_aux_preds.m"
                {
#line 929 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_96_96 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ";\n");
                }
#line 929 "add_mutable_aux_preds.m"
                {
#line 929 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_46 = mercury__string__f_43_43_2_f_0((MR_String) "\tX = ", hlds__make_hlds__add_mutable_aux_preds__V_96_96);
                }
#line 930 "add_mutable_aux_preds.m"
                {
#line 930 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_99_99 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) " = X;\n");
                }
#line 930 "add_mutable_aux_preds.m"
                {
#line 930 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeSetCode_47 = mercury__string__f_43_43_2_f_0((MR_String) "\t", hlds__make_hlds__add_mutable_aux_preds__V_99_99);
                }
#line 928 "add_mutable_aux_preds.m"
              }
#line 931 "add_mutable_aux_preds.m"
              break;
#line 931 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 932 "add_mutable_aux_preds.m"
              {
#line 932 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__Cast_49;
#line 932 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_87_87;
#line 932 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_88_88;
#line 932 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_90_90;
#line 932 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_93_93;
#line 933 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_156_156;

#line 933 "add_mutable_aux_preds.m"
                {
#line 933 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_156_156 = parse_tree__builtin_lib_types__int_type_0_f_0();
                }
#line 933 "add_mutable_aux_preds.m"
                {
#line 933 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__make_hlds__add_mutable_aux_preds__Type_24, hlds__make_hlds__add_mutable_aux_preds__V_156_156);
                }
#line 935 "add_mutable_aux_preds.m"
                if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 934 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__Cast_49 = (MR_String) "(int) ";
#line 935 "add_mutable_aux_preds.m"
                else
#line 936 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__Cast_49 = (MR_String) "";
#line 940 "add_mutable_aux_preds.m"
                {
#line 940 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_90_90 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ");\n");
                }
#line 939 "add_mutable_aux_preds.m"
                {
#line 939 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_88_88 = mercury__string__f_43_43_2_f_0((MR_String) "runtime.ThreadLocalMutables.get(", hlds__make_hlds__add_mutable_aux_preds__V_90_90);
                }
#line 938 "add_mutable_aux_preds.m"
                {
#line 938 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_87_87 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__Cast_49, hlds__make_hlds__add_mutable_aux_preds__V_88_88);
                }
#line 938 "add_mutable_aux_preds.m"
                {
#line 938 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_46 = mercury__string__f_43_43_2_f_0((MR_String) "\tX = ", hlds__make_hlds__add_mutable_aux_preds__V_87_87);
                }
#line 942 "add_mutable_aux_preds.m"
                {
#line 942 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_93_93 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ", X);\n");
                }
#line 941 "add_mutable_aux_preds.m"
                {
#line 941 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeSetCode_47 = mercury__string__f_43_43_2_f_0((MR_String) "\truntime.ThreadLocalMutables.set(", hlds__make_hlds__add_mutable_aux_preds__V_93_93);
                }
#line 932 "add_mutable_aux_preds.m"
              }
#line 931 "add_mutable_aux_preds.m"
              break;
#line 931 "add_mutable_aux_preds.m"
          }
#line 923 "add_mutable_aux_preds.m"
        }
#line 922 "add_mutable_aux_preds.m"
        break;
#line 922 "add_mutable_aux_preds.m"
      case (MR_Integer) 3:
#line 959 "add_mutable_aux_preds.m"
        {
#line 960 "add_mutable_aux_preds.m"
          {
#line 960 "add_mutable_aux_preds.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_unsafe_get_set_preds\'/12", (MR_String) "unsafe_get_set for erlang");
#line 960 "add_mutable_aux_preds.m"
            return;
          }
#line 959 "add_mutable_aux_preds.m"
        }
#line 922 "add_mutable_aux_preds.m"
        break;
#line 922 "add_mutable_aux_preds.m"
      case (MR_Integer) 2:
#line 945 "add_mutable_aux_preds.m"
        {
#line 948 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__TrailCode_45 = (MR_String) "";
#line 953 "add_mutable_aux_preds.m"
#line 953 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32) {
#line 953 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 953 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 950 "add_mutable_aux_preds.m"
              {
#line 950 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_81_81;
#line 950 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_84_84;

#line 951 "add_mutable_aux_preds.m"
                {
#line 951 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_81_81 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ";\n");
                }
#line 951 "add_mutable_aux_preds.m"
                {
#line 951 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_46 = mercury__string__f_43_43_2_f_0((MR_String) "\tX = ", hlds__make_hlds__add_mutable_aux_preds__V_81_81);
                }
#line 952 "add_mutable_aux_preds.m"
                {
#line 952 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_84_84 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) " = X;\n");
                }
#line 952 "add_mutable_aux_preds.m"
                {
#line 952 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeSetCode_47 = mercury__string__f_43_43_2_f_0((MR_String) "\t", hlds__make_hlds__add_mutable_aux_preds__V_84_84);
                }
#line 950 "add_mutable_aux_preds.m"
              }
#line 953 "add_mutable_aux_preds.m"
              break;
#line 953 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 954 "add_mutable_aux_preds.m"
              {
#line 954 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_75_75;
#line 954 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_78_78;

#line 955 "add_mutable_aux_preds.m"
                {
#line 955 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_75_75 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ".get();\n");
                }
#line 955 "add_mutable_aux_preds.m"
                {
#line 955 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_46 = mercury__string__f_43_43_2_f_0((MR_String) "\tX = ", hlds__make_hlds__add_mutable_aux_preds__V_75_75);
                }
#line 956 "add_mutable_aux_preds.m"
                {
#line 956 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_78_78 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ".set(X);\n");
                }
#line 956 "add_mutable_aux_preds.m"
                {
#line 956 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeSetCode_47 = mercury__string__f_43_43_2_f_0((MR_String) "\t", hlds__make_hlds__add_mutable_aux_preds__V_78_78);
                }
#line 954 "add_mutable_aux_preds.m"
              }
#line 953 "add_mutable_aux_preds.m"
              break;
#line 953 "add_mutable_aux_preds.m"
          }
#line 945 "add_mutable_aux_preds.m"
        }
#line 922 "add_mutable_aux_preds.m"
        break;
#line 922 "add_mutable_aux_preds.m"
    }
#line 963 "add_mutable_aux_preds.m"
    {
#line 963 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__UnsafeGetPredName_50 = parse_tree__prog_mutable__mutable_unsafe_get_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_22, hlds__make_hlds__add_mutable_aux_preds__MutableName_23);
    }
#line 965 "add_mutable_aux_preds.m"
    {
#line 965 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__UnsafeSetPredName_51 = parse_tree__prog_mutable__mutable_unsafe_set_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_22, hlds__make_hlds__add_mutable_aux_preds__MutableName_23);
    }
#line 970 "add_mutable_aux_preds.m"
    {
#line 970 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_124_124 = parse_tree__prog_mode__out_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_26);
    }
#line 970 "add_mutable_aux_preds.m"
    {
#line 970 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 970 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_122_122, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_39));
#line 970 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_122_122, 1) = ((MR_Box) ((MR_String) "X"));
#line 970 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_122_122, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_124_124));
#line 970 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_122_122, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_35));
#line 970 "add_mutable_aux_preds.m"
    }
#line 970 "add_mutable_aux_preds.m"
    {
#line 970 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 970 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_121_121, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_122_122));
#line 970 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_121_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 970 "add_mutable_aux_preds.m"
    }
#line 5974 "hlds.make_hlds.add_mutable_aux_preds.c"
    hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_155_155 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
#line 972 "add_mutable_aux_preds.m"
    {
#line 972 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_126_126 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_155_155);
    }
#line 973 "add_mutable_aux_preds.m"
    {
#line 973 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 973 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_128_128, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_29));
#line 973 "add_mutable_aux_preds.m"
    }
#line 973 "add_mutable_aux_preds.m"
    {
#line 973 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_127_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 973 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_127_127, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_46));
#line 973 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_127_127, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_128_128));
#line 973 "add_mutable_aux_preds.m"
    }
#line 967 "add_mutable_aux_preds.m"
    {
#line 967 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 967 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_52, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeGetAttrs_42));
#line 967 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_52, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeGetPredName_50));
#line 967 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_52, 2) = ((MR_Box) ((MR_Integer) 0));
#line 967 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_52, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_121_121));
#line 967 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_52, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_40));
#line 967 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_52, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_126_126));
#line 967 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_52, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_127_127));
#line 967 "add_mutable_aux_preds.m"
    }
#line 978 "add_mutable_aux_preds.m"
    {
#line 978 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_133_133 = parse_tree__prog_mode__in_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_26);
    }
#line 978 "add_mutable_aux_preds.m"
    {
#line 978 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_131_131 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 978 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_131_131, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_39));
#line 978 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_131_131, 1) = ((MR_Box) ((MR_String) "X"));
#line 978 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_131_131, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_133_133));
#line 978 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_131_131, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_35));
#line 978 "add_mutable_aux_preds.m"
    }
#line 978 "add_mutable_aux_preds.m"
    {
#line 978 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 978 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_130_130, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_131_131));
#line 978 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_130_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 978 "add_mutable_aux_preds.m"
    }
#line 980 "add_mutable_aux_preds.m"
    {
#line 980 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_135_135 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_155_155);
    }
#line 981 "add_mutable_aux_preds.m"
    {
#line 981 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_137_137 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TrailCode_45, hlds__make_hlds__add_mutable_aux_preds__UnsafeSetCode_47);
    }
#line 981 "add_mutable_aux_preds.m"
    {
#line 981 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_136_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 981 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_136_136, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_137_137));
#line 981 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_136_136, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_128_128));
#line 981 "add_mutable_aux_preds.m"
    }
#line 975 "add_mutable_aux_preds.m"
    {
#line 975 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 975 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_53, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeSetAttrs_43));
#line 975 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_53, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeSetPredName_51));
#line 975 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_53, 2) = ((MR_Box) ((MR_Integer) 0));
#line 975 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_53, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_130_130));
#line 975 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_53, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_40));
#line 975 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_53, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_135_135));
#line 975 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_53, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_136_136));
#line 975 "add_mutable_aux_preds.m"
    }
#line 983 "add_mutable_aux_preds.m"
    {
#line 983 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_52, hlds__make_hlds__add_mutable_aux_preds__PredStatus_18, hlds__make_hlds__add_mutable_aux_preds__Context_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_56, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_140_140, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_60, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_141_141);
    }
#line 985 "add_mutable_aux_preds.m"
    {
#line 985 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_53, hlds__make_hlds__add_mutable_aux_preds__PredStatus_18, hlds__make_hlds__add_mutable_aux_preds__Context_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_140_140, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_57, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_141_141, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_61);
    }
#line 989 "add_mutable_aux_preds.m"
    {
#line 989 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 989 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_146_146, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_39));
#line 989 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_146_146, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_29));
#line 989 "add_mutable_aux_preds.m"
    }
#line 989 "add_mutable_aux_preds.m"
    {
#line 989 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_145_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 989 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_145_145, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_146_146));
#line 989 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_145_145, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 989 "add_mutable_aux_preds.m"
    }
#line 988 "add_mutable_aux_preds.m"
    {
#line 988 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr0_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 988 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr0_54, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_29));
#line 988 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr0_54, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeGetPredName_50));
#line 988 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr0_54, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_145_145));
#line 988 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr0_54, 3) = ((MR_Box) ((MR_Integer) 1));
#line 988 "add_mutable_aux_preds.m"
    }
#line 990 "add_mutable_aux_preds.m"
    {
#line 990 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr0_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 990 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr0_55, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_29));
#line 990 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr0_55, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeSetPredName_51));
#line 990 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr0_55, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_145_145));
#line 990 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr0_55, 3) = ((MR_Box) ((MR_Integer) 2));
#line 990 "add_mutable_aux_preds.m"
    }
#line 992 "add_mutable_aux_preds.m"
    {
#line 992 "add_mutable_aux_preds.m"
      MR_Tuple base;
#line 992 "add_mutable_aux_preds.m"
      base = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 992 "add_mutable_aux_preds.m"
      *hlds__make_hlds__add_mutable_aux_preds__UnsafeGetSetExprs_17 = base;
#line 992 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr0_54));
#line 992 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr0_55));
#line 992 "add_mutable_aux_preds.m"
    }
#line 880 "add_mutable_aux_preds.m"
    *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_59 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_58;
#line 880 "add_mutable_aux_preds.m"
  }
#line 872 "add_mutable_aux_preds.m"
}

#line 801 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_lock_unlock_preds_12_p_0_1(
#line 801 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 801 "add_mutable_aux_preds.m"
{
#line 801 "add_mutable_aux_preds.m"
  {
#line 801 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 801 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 801 "add_mutable_aux_preds.m"
    {
#line 801 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_lock_unlock_preds__801__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 801 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 801 "add_mutable_aux_preds.m"
  }
#line 801 "add_mutable_aux_preds.m"
}

#line 786 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_lock_unlock_preds_12_p_0(
#line 786 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13,
#line 786 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_14,
#line 786 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15,
#line 786 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_16,
#line 786 "add_mutable_aux_preds.m"
  MR_Tuple * hlds__make_hlds__add_mutable_aux_preds__LockUnlockExprs_17,
#line 786 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_18,
#line 786 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_49,
#line 786 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_50,
#line 786 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_51,
#line 786 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_52,
#line 786 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_53,
#line 786 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_54)
#line 786 "add_mutable_aux_preds.m"
{
#line 793 "add_mutable_aux_preds.m"
  {
#line 793 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 793 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_22;
#line 793 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_23;
#line 793 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27;
#line 793 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_29;
#line 793 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_31;
#line 793 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32;
#line 793 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ImplLang_33;
#line 793 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_55_55;
#line 795 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Type_24;
#line 795 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___InitTerm_25;
#line 795 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Inst_26;
#line 795 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___VarSetMutable_28;
#line 795 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_30;
#line 799 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Lang_34;
#line 799 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_35;
#line 799 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___PreInit_36;
#line 799 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___LockUnlock_37;
#line 799 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_38;

#line 794 "add_mutable_aux_preds.m"
    {
#line 794 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_49, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_22);
    }
#line 795 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutableName_23 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 0)));
#line 795 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Type_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 1)));
#line 795 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___InitTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 2)));
#line 795 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Inst_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 3)));
#line 795 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 4)));
#line 795 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___VarSetMutable_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 5)));
#line 795 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Context_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 6)));
#line 795 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___SeqNum_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 7)));
#line 797 "add_mutable_aux_preds.m"
    {
#line 797 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsConstant_31 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27);
    }
#line 798 "add_mutable_aux_preds.m"
    {
#line 798 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27);
    }
#line 799 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__ImplLang_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 799 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Lang_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
#line 799 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 799 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___PreInit_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 799 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___LockUnlock_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 799 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 801 "add_mutable_aux_preds.m"
    {
#line 801 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 801 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_4[12]));
#line 801 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__define_lock_unlock_preds_12_p_0_1));
#line 801 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 801 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__IsConstant_31));
#line 801 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 4) = ((MR_Box) ((MR_Integer) 0));
#line 801 "add_mutable_aux_preds.m"
    }
#line 801 "add_mutable_aux_preds.m"
    {
#line 801 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_55_55, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_lock_unlock_preds\'/12", (MR_String) "need_lock_unlock_preds, but IsConstant = mutable_constant");
    }
#line 859 "add_mutable_aux_preds.m"
#line 859 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__ImplLang_33) {
#line 859 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 859 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 805 "add_mutable_aux_preds.m"
        {
#line 805 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_119_119;
#line 805 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_120_120;
#line 805 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__LockAndUnlockAttrs_39;
#line 805 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__MutableMutexVarName_40;
#line 805 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__LockForeignProcBody_41;
#line 805 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__UnlockForeignProcBody_42;
#line 805 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__LockPredName_43;
#line 805 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__UnlockPredName_44;
#line 805 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_45;
#line 805 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_46;
#line 805 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__CallLockExpr0_47;
#line 805 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr0_48;
#line 805 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_98_98;
#line 805 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_99_99;
#line 805 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_100_100;
#line 805 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_101_101;
#line 805 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_104_104;
#line 805 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_105_105;
#line 805 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_106_106;
#line 805 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_109_109;
#line 805 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_110_110;

#line 806 "add_mutable_aux_preds.m"
          {
#line 806 "add_mutable_aux_preds.m"
            parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__Attrs_16, &hlds__make_hlds__add_mutable_aux_preds__LockAndUnlockAttrs_39);
          }
#line 807 "add_mutable_aux_preds.m"
          {
#line 807 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__MutableMutexVarName_40 = parse_tree__prog_mutable__mutable_mutex_var_name_1_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15);
          }
#line 825 "add_mutable_aux_preds.m"
#line 825 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32) {
#line 825 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 825 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 810 "add_mutable_aux_preds.m"
              {
#line 810 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_70_70;
#line 810 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_72_72;
#line 810 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_73_73;
#line 810 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_75_75;
#line 810 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_76_76;
#line 810 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_78_78;
#line 810 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_83_83;
#line 810 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_85_85;
#line 810 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_86_86;
#line 810 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_88_88;
#line 810 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_89_89;
#line 810 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_91_91;

#line 816 "add_mutable_aux_preds.m"
                {
#line 816 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_78_78 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__MutableMutexVarName_40, (MR_String) "\");\n#endif\n");
                }
#line 816 "add_mutable_aux_preds.m"
                {
#line 816 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_76_76 = mercury__string__f_43_43_2_f_0((MR_String) ",\n                    \"", hlds__make_hlds__add_mutable_aux_preds__V_78_78);
                }
#line 815 "add_mutable_aux_preds.m"
                {
#line 815 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_75_75 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__MutableMutexVarName_40, hlds__make_hlds__add_mutable_aux_preds__V_76_76);
                }
#line 815 "add_mutable_aux_preds.m"
                {
#line 815 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_73_73 = mercury__string__f_43_43_2_f_0((MR_String) "  MR_LOCK(&", hlds__make_hlds__add_mutable_aux_preds__V_75_75);
                }
#line 818 "add_mutable_aux_preds.m"
                {
#line 818 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 818 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_72_72, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_73_73));
#line 818 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 818 "add_mutable_aux_preds.m"
                }
#line 814 "add_mutable_aux_preds.m"
                {
#line 814 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 814 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_70_70, 0) = ((MR_Box) ((MR_String) "#ifdef MR_THREAD_SAFE\n"));
#line 814 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_70_70, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_72_72));
#line 814 "add_mutable_aux_preds.m"
                }
#line 813 "add_mutable_aux_preds.m"
                {
#line 813 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__LockForeignProcBody_41 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_70_70);
                }
#line 822 "add_mutable_aux_preds.m"
                {
#line 822 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_91_91 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__MutableMutexVarName_40, (MR_String) "\");\n#endif\n");
                }
#line 822 "add_mutable_aux_preds.m"
                {
#line 822 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_89_89 = mercury__string__f_43_43_2_f_0((MR_String) ",\n                    \"", hlds__make_hlds__add_mutable_aux_preds__V_91_91);
                }
#line 821 "add_mutable_aux_preds.m"
                {
#line 821 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_88_88 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__MutableMutexVarName_40, hlds__make_hlds__add_mutable_aux_preds__V_89_89);
                }
#line 821 "add_mutable_aux_preds.m"
                {
#line 821 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_86_86 = mercury__string__f_43_43_2_f_0((MR_String) "  MR_UNLOCK(&", hlds__make_hlds__add_mutable_aux_preds__V_88_88);
                }
#line 824 "add_mutable_aux_preds.m"
                {
#line 824 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 824 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_85_85, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_86_86));
#line 824 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 824 "add_mutable_aux_preds.m"
                }
#line 820 "add_mutable_aux_preds.m"
                {
#line 820 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 820 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_83_83, 0) = ((MR_Box) ((MR_String) "#ifdef MR_THREAD_SAFE\n"));
#line 820 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_83_83, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_85_85));
#line 820 "add_mutable_aux_preds.m"
                }
#line 819 "add_mutable_aux_preds.m"
                {
#line 819 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnlockForeignProcBody_42 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_83_83);
                }
#line 810 "add_mutable_aux_preds.m"
              }
#line 825 "add_mutable_aux_preds.m"
              break;
#line 825 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 826 "add_mutable_aux_preds.m"
              {
#line 827 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__LockForeignProcBody_41 = (MR_String) "";
#line 828 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__UnlockForeignProcBody_42 = (MR_String) "";
#line 826 "add_mutable_aux_preds.m"
              }
#line 825 "add_mutable_aux_preds.m"
              break;
#line 825 "add_mutable_aux_preds.m"
          }
#line 830 "add_mutable_aux_preds.m"
          {
#line 830 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__LockPredName_43 = parse_tree__prog_mutable__mutable_lock_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_22, hlds__make_hlds__add_mutable_aux_preds__MutableName_23);
          }
#line 832 "add_mutable_aux_preds.m"
          {
#line 832 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__UnlockPredName_44 = parse_tree__prog_mutable__mutable_unlock_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_22, hlds__make_hlds__add_mutable_aux_preds__MutableName_23);
          }
#line 6541 "hlds.make_hlds.add_mutable_aux_preds.c"
          hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_119_119 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 838 "add_mutable_aux_preds.m"
          {
#line 838 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_98_98 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_119_119);
          }
#line 6548 "hlds.make_hlds.add_mutable_aux_preds.c"
          hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_120_120 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
#line 839 "add_mutable_aux_preds.m"
          {
#line 839 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_99_99 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_120_120);
          }
#line 840 "add_mutable_aux_preds.m"
          {
#line 840 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 840 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_101_101, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_29));
#line 840 "add_mutable_aux_preds.m"
          }
#line 840 "add_mutable_aux_preds.m"
          {
#line 840 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 840 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_100_100, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockForeignProcBody_41));
#line 840 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_100_100, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_101_101));
#line 840 "add_mutable_aux_preds.m"
          }
#line 834 "add_mutable_aux_preds.m"
          {
#line 834 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 834 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_45, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockAndUnlockAttrs_39));
#line 834 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_45, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockPredName_43));
#line 834 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_45, 2) = ((MR_Box) ((MR_Integer) 0));
#line 834 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_45, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 834 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_45, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_98_98));
#line 834 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_45, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_99_99));
#line 834 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_45, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_100_100));
#line 834 "add_mutable_aux_preds.m"
          }
#line 846 "add_mutable_aux_preds.m"
          {
#line 846 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_104_104 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_119_119);
          }
#line 847 "add_mutable_aux_preds.m"
          {
#line 847 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_105_105 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_120_120);
          }
#line 848 "add_mutable_aux_preds.m"
          {
#line 848 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 848 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_106_106, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnlockForeignProcBody_42));
#line 848 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_106_106, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_101_101));
#line 848 "add_mutable_aux_preds.m"
          }
#line 842 "add_mutable_aux_preds.m"
          {
#line 842 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 842 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_46, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockAndUnlockAttrs_39));
#line 842 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_46, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnlockPredName_44));
#line 842 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_46, 2) = ((MR_Box) ((MR_Integer) 0));
#line 842 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_46, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 842 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_46, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_104_104));
#line 842 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_46, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_105_105));
#line 842 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_46, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_106_106));
#line 842 "add_mutable_aux_preds.m"
          }
#line 850 "add_mutable_aux_preds.m"
          {
#line 850 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_45, hlds__make_hlds__add_mutable_aux_preds__PredStatus_18, hlds__make_hlds__add_mutable_aux_preds__Context_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_49, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_109_109, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_53, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_110_110);
          }
#line 852 "add_mutable_aux_preds.m"
          {
#line 852 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_46, hlds__make_hlds__add_mutable_aux_preds__PredStatus_18, hlds__make_hlds__add_mutable_aux_preds__Context_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_109_109, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_50, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_110_110, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_54);
          }
#line 855 "add_mutable_aux_preds.m"
          {
#line 855 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__CallLockExpr0_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 855 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallLockExpr0_47, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_29));
#line 855 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallLockExpr0_47, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockPredName_43));
#line 855 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallLockExpr0_47, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 855 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallLockExpr0_47, 3) = ((MR_Box) ((MR_Integer) 2));
#line 855 "add_mutable_aux_preds.m"
          }
#line 857 "add_mutable_aux_preds.m"
          {
#line 857 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr0_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 857 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr0_48, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_29));
#line 857 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr0_48, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnlockPredName_44));
#line 857 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr0_48, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 857 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr0_48, 3) = ((MR_Box) ((MR_Integer) 2));
#line 857 "add_mutable_aux_preds.m"
          }
#line 858 "add_mutable_aux_preds.m"
          {
#line 858 "add_mutable_aux_preds.m"
            MR_Tuple base;
#line 858 "add_mutable_aux_preds.m"
            base = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 858 "add_mutable_aux_preds.m"
            *hlds__make_hlds__add_mutable_aux_preds__LockUnlockExprs_17 = base;
#line 858 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallLockExpr0_47));
#line 858 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr0_48));
#line 858 "add_mutable_aux_preds.m"
          }
#line 805 "add_mutable_aux_preds.m"
        }
#line 859 "add_mutable_aux_preds.m"
        break;
#line 859 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 860 "add_mutable_aux_preds.m"
        {
#line 861 "add_mutable_aux_preds.m"
          {
#line 861 "add_mutable_aux_preds.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_lock_unlock_preds\'/12", (MR_String) "lock_unlock for csharp");
#line 861 "add_mutable_aux_preds.m"
            return;
          }
#line 860 "add_mutable_aux_preds.m"
        }
#line 859 "add_mutable_aux_preds.m"
        break;
#line 859 "add_mutable_aux_preds.m"
      case (MR_Integer) 3:
#line 866 "add_mutable_aux_preds.m"
        {
#line 867 "add_mutable_aux_preds.m"
          {
#line 867 "add_mutable_aux_preds.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_lock_unlock_preds\'/12", (MR_String) "lock_unlock for erlang");
#line 867 "add_mutable_aux_preds.m"
            return;
          }
#line 866 "add_mutable_aux_preds.m"
        }
#line 859 "add_mutable_aux_preds.m"
        break;
#line 859 "add_mutable_aux_preds.m"
      case (MR_Integer) 2:
#line 863 "add_mutable_aux_preds.m"
        {
#line 864 "add_mutable_aux_preds.m"
          {
#line 864 "add_mutable_aux_preds.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_lock_unlock_preds\'/12", (MR_String) "lock_unlock for java");
#line 864 "add_mutable_aux_preds.m"
            return;
          }
#line 863 "add_mutable_aux_preds.m"
        }
#line 859 "add_mutable_aux_preds.m"
        break;
#line 859 "add_mutable_aux_preds.m"
    }
#line 793 "add_mutable_aux_preds.m"
    *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_52 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_51;
#line 793 "add_mutable_aux_preds.m"
  }
#line 786 "add_mutable_aux_preds.m"
}

#line 740 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_pre_init_pred_12_p_0_1(
#line 740 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 740 "add_mutable_aux_preds.m"
{
#line 740 "add_mutable_aux_preds.m"
  {
#line 740 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 740 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 740 "add_mutable_aux_preds.m"
    {
#line 740 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_pre_init_pred__740__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 740 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 740 "add_mutable_aux_preds.m"
  }
#line 740 "add_mutable_aux_preds.m"
}

#line 724 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_pre_init_pred_12_p_0(
#line 724 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13,
#line 724 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_14,
#line 724 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15,
#line 724 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_16,
#line 724 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_17,
#line 724 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_18,
#line 724 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_42,
#line 724 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_43,
#line 724 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_44,
#line 724 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_45,
#line 724 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_46,
#line 724 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_47)
#line 724 "add_mutable_aux_preds.m"
{
#line 731 "add_mutable_aux_preds.m"
  {
#line 731 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 731 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_22;
#line 731 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_23;
#line 731 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27;
#line 731 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_29;
#line 731 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_31;
#line 731 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32;
#line 731 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ImplLang_33;
#line 731 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInitPredName_39;
#line 731 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__PreInitCode_40;
#line 731 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41;
#line 731 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_48_48;
#line 731 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_74_74;
#line 731 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_75_75;
#line 731 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_76_76;
#line 731 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_77_77;
#line 733 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Type_24;
#line 733 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___InitTerm_25;
#line 733 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Inst_26;
#line 733 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___VarSetMutable_28;
#line 733 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_30;
#line 737 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Lang_34;
#line 737 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_35;
#line 737 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___PreInit_36;
#line 737 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___LockUnlock_37;
#line 737 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_38;

#line 732 "add_mutable_aux_preds.m"
    {
#line 732 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_42, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_22);
    }
#line 733 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutableName_23 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 0)));
#line 733 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Type_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 1)));
#line 733 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___InitTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 2)));
#line 733 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Inst_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 3)));
#line 733 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 4)));
#line 733 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___VarSetMutable_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 5)));
#line 733 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Context_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 6)));
#line 733 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___SeqNum_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 7)));
#line 735 "add_mutable_aux_preds.m"
    {
#line 735 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsConstant_31 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27);
    }
#line 736 "add_mutable_aux_preds.m"
    {
#line 736 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27);
    }
#line 737 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__ImplLang_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 737 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Lang_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
#line 737 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 737 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___PreInit_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 737 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___LockUnlock_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 737 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 740 "add_mutable_aux_preds.m"
    {
#line 740 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 740 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_48_48, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_4[12]));
#line 740 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_48_48, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__define_pre_init_pred_12_p_0_1));
#line 740 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 740 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_48_48, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__IsConstant_31));
#line 740 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_48_48, 4) = ((MR_Box) ((MR_Integer) 0));
#line 740 "add_mutable_aux_preds.m"
    }
#line 740 "add_mutable_aux_preds.m"
    {
#line 740 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_48_48, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_pre_init_pred\'/12", (MR_String) "need_pre_init_pred, but IsConstant = mutable_constant");
    }
#line 742 "add_mutable_aux_preds.m"
    {
#line 742 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PreInitPredName_39 = parse_tree__prog_mutable__mutable_pre_init_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_22, hlds__make_hlds__add_mutable_aux_preds__MutableName_23);
    }
#line 760 "add_mutable_aux_preds.m"
#line 760 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__ImplLang_33) {
#line 760 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 760 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 755 "add_mutable_aux_preds.m"
#line 755 "add_mutable_aux_preds.m"
        switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32) {
#line 755 "add_mutable_aux_preds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 755 "add_mutable_aux_preds.m"
          case (MR_Integer) 0:
#line 747 "add_mutable_aux_preds.m"
            {
#line 747 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__V_61_61;
#line 747 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__V_63_63;
#line 747 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__V_65_65;
#line 747 "add_mutable_aux_preds.m"
              MR_String hlds__make_hlds__add_mutable_aux_preds__V_66_66;

#line 751 "add_mutable_aux_preds.m"
              {
#line 751 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_66_66 = parse_tree__prog_mutable__mutable_mutex_var_name_1_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15);
              }
#line 751 "add_mutable_aux_preds.m"
              {
#line 751 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 751 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_65_65, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_66_66));
#line 751 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[24])));
#line 751 "add_mutable_aux_preds.m"
              }
#line 750 "add_mutable_aux_preds.m"
              {
#line 750 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 750 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_63_63, 0) = ((MR_Box) ((MR_String) "   pthread_mutex_init(&"));
#line 750 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_63_63, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_65_65));
#line 750 "add_mutable_aux_preds.m"
              }
#line 749 "add_mutable_aux_preds.m"
              {
#line 749 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 749 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_61_61, 0) = ((MR_Box) ((MR_String) "#ifdef MR_THREAD_SAFE\n"));
#line 749 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_61_61, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_63_63));
#line 749 "add_mutable_aux_preds.m"
              }
#line 748 "add_mutable_aux_preds.m"
              {
#line 748 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__PreInitCode_40 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_61_61);
              }
#line 747 "add_mutable_aux_preds.m"
            }
#line 755 "add_mutable_aux_preds.m"
            break;
#line 755 "add_mutable_aux_preds.m"
          case (MR_Integer) 1:
#line 756 "add_mutable_aux_preds.m"
            {
#line 757 "add_mutable_aux_preds.m"
              {
#line 757 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__PreInitCode_40 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) " = MR_new_thread_local_mutable_index();\n");
              }
#line 756 "add_mutable_aux_preds.m"
            }
#line 755 "add_mutable_aux_preds.m"
            break;
#line 755 "add_mutable_aux_preds.m"
        }
#line 760 "add_mutable_aux_preds.m"
        break;
#line 760 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 761 "add_mutable_aux_preds.m"
        {
#line 762 "add_mutable_aux_preds.m"
          {
#line 762 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__PreInitCode_40 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) " = runtime.ThreadLocalMutables.new_index();\n");
          }
#line 761 "add_mutable_aux_preds.m"
        }
#line 760 "add_mutable_aux_preds.m"
        break;
#line 760 "add_mutable_aux_preds.m"
      case (MR_Integer) 3:
#line 768 "add_mutable_aux_preds.m"
        {
#line 769 "add_mutable_aux_preds.m"
          {
#line 769 "add_mutable_aux_preds.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_pre_init_pred\'/12", (MR_String) "preinit for erlang");
#line 769 "add_mutable_aux_preds.m"
            return;
          }
#line 768 "add_mutable_aux_preds.m"
        }
#line 760 "add_mutable_aux_preds.m"
        break;
#line 760 "add_mutable_aux_preds.m"
      case (MR_Integer) 2:
#line 765 "add_mutable_aux_preds.m"
        {
#line 766 "add_mutable_aux_preds.m"
          {
#line 766 "add_mutable_aux_preds.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_pre_init_pred\'/12", (MR_String) "preinit for java");
#line 766 "add_mutable_aux_preds.m"
            return;
          }
#line 765 "add_mutable_aux_preds.m"
        }
#line 760 "add_mutable_aux_preds.m"
        break;
#line 760 "add_mutable_aux_preds.m"
    }
#line 775 "add_mutable_aux_preds.m"
    {
#line 775 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_74_74 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 776 "add_mutable_aux_preds.m"
    {
#line 776 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_75_75 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
#line 777 "add_mutable_aux_preds.m"
    {
#line 777 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 777 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_77_77, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_29));
#line 777 "add_mutable_aux_preds.m"
    }
#line 777 "add_mutable_aux_preds.m"
    {
#line 777 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 777 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_76_76, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PreInitCode_40));
#line 777 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_76_76, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_77_77));
#line 777 "add_mutable_aux_preds.m"
    }
#line 771 "add_mutable_aux_preds.m"
    {
#line 771 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 771 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Attrs_16));
#line 771 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PreInitPredName_39));
#line 771 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41, 2) = ((MR_Box) ((MR_Integer) 0));
#line 771 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 771 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_74_74));
#line 771 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_75_75));
#line 771 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_76_76));
#line 771 "add_mutable_aux_preds.m"
    }
#line 779 "add_mutable_aux_preds.m"
    {
#line 779 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41, hlds__make_hlds__add_mutable_aux_preds__PredStatus_18, hlds__make_hlds__add_mutable_aux_preds__Context_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_42, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_43, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_46, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_47);
    }
#line 782 "add_mutable_aux_preds.m"
    {
#line 782 "add_mutable_aux_preds.m"
      MR_Word base;
#line 782 "add_mutable_aux_preds.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 782 "add_mutable_aux_preds.m"
      *hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_17 = base;
#line 782 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_29));
#line 782 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PreInitPredName_39));
#line 782 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 782 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) ((MR_Integer) 2));
#line 782 "add_mutable_aux_preds.m"
    }
#line 731 "add_mutable_aux_preds.m"
    *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_45 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_44;
#line 731 "add_mutable_aux_preds.m"
  }
#line 724 "add_mutable_aux_preds.m"
}

#line 640 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_aux_preds_10_p_0(
#line 640 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11,
#line 640 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_12,
#line 640 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_13,
#line 640 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_14,
#line 640 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34,
#line 640 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_35,
#line 640 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_36,
#line 640 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_37,
#line 640 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38,
#line 640 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39)
#line 640 "add_mutable_aux_preds.m"
{
#line 646 "add_mutable_aux_preds.m"
  {
#line 646 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 646 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ImplLang_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 646 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
#line 646 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 646 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInit_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 646 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__LockUnlock_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 646 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 646 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs0_24;
#line 646 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_26;
#line 646 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_27;
#line 646 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_29;
#line 646 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_31;
#line 646 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_33;
#line 646 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_43_43;
#line 646 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_44_44;
#line 646 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_45_45;
#line 646 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46;
#line 646 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_47_47;
#line 646 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_48_48;
#line 646 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_49_49;
#line 646 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_50_50;
#line 646 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51;
#line 646 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_52_52;
#line 646 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_53_53;
#line 646 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_54_54;

#line 652 "add_mutable_aux_preds.m"
    {
#line 652 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__Attrs0_24 = parse_tree__prog_data__default_attributes_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Lang_19);
    }
#line 657 "add_mutable_aux_preds.m"
#line 657 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__ImplLang_18) {
#line 657 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 657 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 654 "add_mutable_aux_preds.m"
        {
#line 654 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs1_25;

#line 655 "add_mutable_aux_preds.m"
          {
#line 655 "add_mutable_aux_preds.m"
            parse_tree__prog_data__set_box_policy_3_p_0(hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_20, hlds__make_hlds__add_mutable_aux_preds__Attrs0_24, &hlds__make_hlds__add_mutable_aux_preds__Attrs1_25);
          }
#line 656 "add_mutable_aux_preds.m"
          {
#line 656 "add_mutable_aux_preds.m"
            parse_tree__prog_data__set_may_call_mercury_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__Attrs1_25, &hlds__make_hlds__add_mutable_aux_preds__Attrs_26);
          }
#line 654 "add_mutable_aux_preds.m"
        }
#line 657 "add_mutable_aux_preds.m"
        break;
#line 657 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 657 "add_mutable_aux_preds.m"
      case (MR_Integer) 2:
#line 660 "add_mutable_aux_preds.m"
        {
#line 665 "add_mutable_aux_preds.m"
          {
#line 665 "add_mutable_aux_preds.m"
            parse_tree__prog_data__set_may_duplicate_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[2]), hlds__make_hlds__add_mutable_aux_preds__Attrs0_24, &hlds__make_hlds__add_mutable_aux_preds__Attrs_26);
          }
#line 660 "add_mutable_aux_preds.m"
        }
#line 657 "add_mutable_aux_preds.m"
        break;
#line 657 "add_mutable_aux_preds.m"
      case (MR_Integer) 3:
#line 668 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__Attrs_26 = hlds__make_hlds__add_mutable_aux_preds__Attrs0_24;
#line 657 "add_mutable_aux_preds.m"
        break;
#line 657 "add_mutable_aux_preds.m"
    }
#line 681 "add_mutable_aux_preds.m"
#line 681 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__PreInit_21) {
#line 681 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 681 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 679 "add_mutable_aux_preds.m"
        {
#line 680 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 679 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_43_43 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34;
#line 679 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_44_44 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_36;
#line 679 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_45_45 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38;
#line 679 "add_mutable_aux_preds.m"
        }
#line 681 "add_mutable_aux_preds.m"
        break;
#line 681 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 682 "add_mutable_aux_preds.m"
        {
#line 682 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_28;

#line 683 "add_mutable_aux_preds.m"
          {
#line 683 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__define_pre_init_pred_12_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11, hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_13, hlds__make_hlds__add_mutable_aux_preds__Attrs_26, &hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_28, hlds__make_hlds__add_mutable_aux_preds__PredStatus_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_43_43, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_36, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_44_44, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_45_45);
          }
#line 686 "add_mutable_aux_preds.m"
          {
#line 686 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 686 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_27, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_28));
#line 686 "add_mutable_aux_preds.m"
          }
#line 682 "add_mutable_aux_preds.m"
        }
#line 681 "add_mutable_aux_preds.m"
        break;
#line 681 "add_mutable_aux_preds.m"
    }
#line 691 "add_mutable_aux_preds.m"
#line 691 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__LockUnlock_22) {
#line 691 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 691 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 689 "add_mutable_aux_preds.m"
        {
#line 690 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 689 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_43_43;
#line 689 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_47_47 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_44_44;
#line 689 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_48_48 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_45_45;
#line 689 "add_mutable_aux_preds.m"
        }
#line 691 "add_mutable_aux_preds.m"
        break;
#line 691 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 692 "add_mutable_aux_preds.m"
        {
#line 692 "add_mutable_aux_preds.m"
          MR_Tuple hlds__make_hlds__add_mutable_aux_preds__LockUnlockExprs_30;

#line 693 "add_mutable_aux_preds.m"
          {
#line 693 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__define_lock_unlock_preds_12_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11, hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_13, hlds__make_hlds__add_mutable_aux_preds__Attrs_26, &hlds__make_hlds__add_mutable_aux_preds__LockUnlockExprs_30, hlds__make_hlds__add_mutable_aux_preds__PredStatus_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_43_43, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_44_44, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_47_47, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_45_45, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_48_48);
          }
#line 696 "add_mutable_aux_preds.m"
          {
#line 696 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 696 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_29, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockUnlockExprs_30));
#line 696 "add_mutable_aux_preds.m"
          }
#line 692 "add_mutable_aux_preds.m"
        }
#line 691 "add_mutable_aux_preds.m"
        break;
#line 691 "add_mutable_aux_preds.m"
    }
#line 701 "add_mutable_aux_preds.m"
#line 701 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_23) {
#line 701 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 701 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 699 "add_mutable_aux_preds.m"
        {
#line 700 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 699 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_49_49 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46;
#line 699 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_50_50 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_47_47;
#line 699 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_48_48;
#line 699 "add_mutable_aux_preds.m"
        }
#line 701 "add_mutable_aux_preds.m"
        break;
#line 701 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 702 "add_mutable_aux_preds.m"
        {
#line 702 "add_mutable_aux_preds.m"
          MR_Tuple hlds__make_hlds__add_mutable_aux_preds__UnsafeGetSetExprs_32;

#line 703 "add_mutable_aux_preds.m"
          {
#line 703 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__define_unsafe_get_set_preds_12_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11, hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_13, hlds__make_hlds__add_mutable_aux_preds__Attrs_26, &hlds__make_hlds__add_mutable_aux_preds__UnsafeGetSetExprs_32, hlds__make_hlds__add_mutable_aux_preds__PredStatus_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_49_49, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_47_47, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_50_50, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_48_48, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51);
          }
#line 706 "add_mutable_aux_preds.m"
          {
#line 706 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 706 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_31, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeGetSetExprs_32));
#line 706 "add_mutable_aux_preds.m"
          }
#line 702 "add_mutable_aux_preds.m"
        }
#line 701 "add_mutable_aux_preds.m"
        break;
#line 701 "add_mutable_aux_preds.m"
    }
#line 712 "add_mutable_aux_preds.m"
    {
#line 712 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__define_main_get_set_preds_14_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11, hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_13, hlds__make_hlds__add_mutable_aux_preds__Attrs_26, hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_29, hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_31, &hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_33, hlds__make_hlds__add_mutable_aux_preds__PredStatus_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_49_49, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_52_52, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_50_50, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_53_53, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_54_54);
    }
#line 719 "add_mutable_aux_preds.m"
    {
#line 719 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__define_init_pred_11_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11, hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_27, hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_33, hlds__make_hlds__add_mutable_aux_preds__Lang_19, hlds__make_hlds__add_mutable_aux_preds__PredStatus_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_52_52, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_35, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_53_53, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_37, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_54_54, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39);
    }
#line 646 "add_mutable_aux_preds.m"
  }
#line 640 "add_mutable_aux_preds.m"
}

#line 604 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_global_var_java_6_p_0(
#line 604 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_7,
#line 604 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_8,
#line 604 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_9,
#line 604 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_10,
#line 604 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_15,
#line 604 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_16)
#line 604 "add_mutable_aux_preds.m"
{
#line 609 "add_mutable_aux_preds.m"
  {
#line 609 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 609 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__DefnBody_13;
#line 609 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_14;
#line 609 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_36_36;

#line 621 "add_mutable_aux_preds.m"
#line 621 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_9) {
#line 621 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 621 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 611 "add_mutable_aux_preds.m"
        {
#line 611 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__TypeStr_12;
#line 611 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__V_30_30;
#line 611 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__V_31_31;
#line 611 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__V_33_33;
#line 615 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_39_39;

#line 615 "add_mutable_aux_preds.m"
          {
#line 615 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_39_39 = parse_tree__builtin_lib_types__int_type_0_f_0();
          }
#line 615 "add_mutable_aux_preds.m"
          {
#line 615 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__make_hlds__add_mutable_aux_preds__Type_8, hlds__make_hlds__add_mutable_aux_preds__V_39_39);
          }
#line 617 "add_mutable_aux_preds.m"
          if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 616 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__TypeStr_12 = (MR_String) "int";
#line 617 "add_mutable_aux_preds.m"
          else
#line 618 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__TypeStr_12 = (MR_String) "java.lang.Object";
#line 620 "add_mutable_aux_preds.m"
          {
#line 620 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_33_33 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_7, (MR_String) ";\n");
          }
#line 620 "add_mutable_aux_preds.m"
          {
#line 620 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_31_31 = mercury__string__f_43_43_2_f_0((MR_String) " ", hlds__make_hlds__add_mutable_aux_preds__V_33_33);
          }
#line 620 "add_mutable_aux_preds.m"
          {
#line 620 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_30_30 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeStr_12, hlds__make_hlds__add_mutable_aux_preds__V_31_31);
          }
#line 620 "add_mutable_aux_preds.m"
          {
#line 620 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__DefnBody_13 = mercury__string__f_43_43_2_f_0((MR_String) "static ", hlds__make_hlds__add_mutable_aux_preds__V_30_30);
          }
#line 611 "add_mutable_aux_preds.m"
        }
#line 621 "add_mutable_aux_preds.m"
        break;
#line 621 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 622 "add_mutable_aux_preds.m"
        {
#line 622 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_17_17;
#line 622 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_19_19;
#line 622 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_20_20;
#line 622 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_22_22;
#line 622 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_23_23;
#line 622 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_25_25;
#line 622 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__TypeStr_38;
#line 623 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_40_40;

#line 623 "add_mutable_aux_preds.m"
          {
#line 623 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_40_40 = parse_tree__builtin_lib_types__int_type_0_f_0();
          }
#line 623 "add_mutable_aux_preds.m"
          {
#line 623 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__make_hlds__add_mutable_aux_preds__Type_8, hlds__make_hlds__add_mutable_aux_preds__V_40_40);
          }
#line 625 "add_mutable_aux_preds.m"
          if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 624 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__TypeStr_38 = (MR_String) "java.lang.Integer";
#line 625 "add_mutable_aux_preds.m"
          else
#line 626 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__TypeStr_38 = (MR_String) "java.lang.Object";
#line 631 "add_mutable_aux_preds.m"
          {
#line 631 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 631 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_25_25, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TypeStr_38));
#line 631 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[36])));
#line 631 "add_mutable_aux_preds.m"
          }
#line 631 "add_mutable_aux_preds.m"
          {
#line 631 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 631 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_23_23, 0) = ((MR_Box) ((MR_String) " = new java.lang.InheritableThreadLocal<"));
#line 631 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_23_23, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_25_25));
#line 631 "add_mutable_aux_preds.m"
          }
#line 630 "add_mutable_aux_preds.m"
          {
#line 630 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 630 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_22_22, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_7));
#line 630 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_22_22, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_23_23));
#line 630 "add_mutable_aux_preds.m"
          }
#line 629 "add_mutable_aux_preds.m"
          {
#line 629 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 629 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_20_20, 0) = ((MR_Box) ((MR_String) "> "));
#line 629 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_20_20, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_22_22));
#line 629 "add_mutable_aux_preds.m"
          }
#line 629 "add_mutable_aux_preds.m"
          {
#line 629 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 629 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_19_19, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TypeStr_38));
#line 629 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_19_19, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_20_20));
#line 629 "add_mutable_aux_preds.m"
          }
#line 629 "add_mutable_aux_preds.m"
          {
#line 629 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 629 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_17_17, 0) = ((MR_Box) ((MR_String) "static java.lang.ThreadLocal<"));
#line 629 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_17_17, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_19_19));
#line 629 "add_mutable_aux_preds.m"
          }
#line 628 "add_mutable_aux_preds.m"
          {
#line 628 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__DefnBody_13 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_17_17);
          }
#line 622 "add_mutable_aux_preds.m"
        }
#line 621 "add_mutable_aux_preds.m"
        break;
#line 621 "add_mutable_aux_preds.m"
    }
#line 635 "add_mutable_aux_preds.m"
    {
#line 635 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 635 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_36_36, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__DefnBody_13));
#line 635 "add_mutable_aux_preds.m"
    }
#line 635 "add_mutable_aux_preds.m"
    {
#line 635 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 635 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_14, 0) = ((MR_Box) ((MR_Integer) 2));
#line 635 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_14, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_36_36));
#line 635 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_14, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_10));
#line 635 "add_mutable_aux_preds.m"
    }
#line 636 "add_mutable_aux_preds.m"
    {
#line 636 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_add_foreign_body_code_3_p_0(hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_15, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_16);
    }
#line 609 "add_mutable_aux_preds.m"
  }
#line 604 "add_mutable_aux_preds.m"
}

#line 503 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_global_var_c_7_p_0(
#line 503 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_8,
#line 503 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_9,
#line 503 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_10,
#line 503 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_11,
#line 503 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_12,
#line 503 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_26,
#line 503 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_27)
#line 503 "add_mutable_aux_preds.m"
{
#line 508 "add_mutable_aux_preds.m"
  {
#line 508 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 508 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__HighLevelTypeName_14;
#line 508 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__LowLevelTypeName_15;
#line 508 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__TypeName_18;
#line 508 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__LockDeclStrs_19;
#line 508 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__LockDefnStrs_20;
#line 508 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__DeclBody_22;
#line 508 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignDeclCode_23;
#line 508 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__DefnBody_24;
#line 508 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignBodyCode_25;
#line 508 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_51_51;
#line 508 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_53_53;
#line 508 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_55_55;
#line 508 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_56_56;
#line 508 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_58_58;
#line 508 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_59_59;
#line 508 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_61_61;
#line 508 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_63_63;
#line 508 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_65_65;
#line 508 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_66_66;
#line 508 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_68_68;
#line 508 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_69_69;
#line 508 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_71_71;
#line 508 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_75_75;
#line 508 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_76_76;
#line 508 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_77_77;
#line 508 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_78_78;
#line 508 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_80_80;
#line 508 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_81_81;
#line 508 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_84_84;

#line 531 "add_mutable_aux_preds.m"
#line 531 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_11) {
#line 531 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 531 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 514 "add_mutable_aux_preds.m"
        {
#line 514 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__Globals_16;
#line 514 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__HighLevelCode_17;

#line 1378 "add_mutable_aux_preds.m"
          {
#line 1378 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__HighLevelTypeName_14 = backend_libs__foreign__mercury_exported_type_to_string_3_f_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_26, (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__Type_9);
          }
#line 1376 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LowLevelTypeName_15 = (MR_String) "MR_Word";
#line 522 "add_mutable_aux_preds.m"
          {
#line 522 "add_mutable_aux_preds.m"
            hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_26, &hlds__make_hlds__add_mutable_aux_preds__Globals_16);
          }
#line 523 "add_mutable_aux_preds.m"
          {
#line 523 "add_mutable_aux_preds.m"
            libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_16, (MR_Integer) 251, &hlds__make_hlds__add_mutable_aux_preds__HighLevelCode_17);
          }
#line 527 "add_mutable_aux_preds.m"
#line 527 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__HighLevelCode_17) {
#line 527 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 527 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 526 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__TypeName_18 = hlds__make_hlds__add_mutable_aux_preds__LowLevelTypeName_15;
#line 527 "add_mutable_aux_preds.m"
              break;
#line 527 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 529 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__TypeName_18 = hlds__make_hlds__add_mutable_aux_preds__HighLevelTypeName_14;
#line 527 "add_mutable_aux_preds.m"
              break;
#line 527 "add_mutable_aux_preds.m"
          }
#line 514 "add_mutable_aux_preds.m"
        }
#line 531 "add_mutable_aux_preds.m"
        break;
#line 531 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 532 "add_mutable_aux_preds.m"
        {
#line 535 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__TypeName_18 = (MR_String) "MR_Unsigned";
#line 536 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__HighLevelTypeName_14 = hlds__make_hlds__add_mutable_aux_preds__TypeName_18;
#line 537 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LowLevelTypeName_15 = hlds__make_hlds__add_mutable_aux_preds__TypeName_18;
#line 532 "add_mutable_aux_preds.m"
        }
#line 531 "add_mutable_aux_preds.m"
        break;
#line 531 "add_mutable_aux_preds.m"
    }
#line 543 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__IsConstant_10 == (MR_Integer) 1);
#line 544 "add_mutable_aux_preds.m"
    if (!(hlds__make_hlds__add_mutable_aux_preds__succeeded))
#line 544 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_11 == (MR_Integer) 1);
#line 549 "add_mutable_aux_preds.m"
    if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 547 "add_mutable_aux_preds.m"
      {
#line 547 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__LockDeclStrs_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 548 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__LockDefnStrs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 547 "add_mutable_aux_preds.m"
      }
#line 549 "add_mutable_aux_preds.m"
    else
#line 550 "add_mutable_aux_preds.m"
      {
#line 550 "add_mutable_aux_preds.m"
        MR_String hlds__make_hlds__add_mutable_aux_preds__MutexVarName_21;
#line 550 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_34_34;
#line 550 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_36_36;
#line 550 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_43_43;

#line 550 "add_mutable_aux_preds.m"
        {
#line 550 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__MutexVarName_21 = parse_tree__prog_mutable__mutable_mutex_var_name_1_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_8);
        }
#line 553 "add_mutable_aux_preds.m"
        {
#line 553 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 553 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_36_36, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__MutexVarName_21));
#line 553 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[23])));
#line 553 "add_mutable_aux_preds.m"
        }
#line 553 "add_mutable_aux_preds.m"
        {
#line 553 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 553 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_34_34, 0) = ((MR_Box) ((MR_String) "    extern MercuryLock "));
#line 553 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_34_34, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_36_36));
#line 553 "add_mutable_aux_preds.m"
        }
#line 552 "add_mutable_aux_preds.m"
        {
#line 552 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LockDeclStrs_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 552 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__LockDeclStrs_19, 0) = ((MR_Box) ((MR_String) "#ifdef MR_THREAD_SAFE\n"));
#line 552 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__LockDeclStrs_19, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_34_34));
#line 552 "add_mutable_aux_preds.m"
        }
#line 558 "add_mutable_aux_preds.m"
        {
#line 558 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 558 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_43_43, 0) = ((MR_Box) ((MR_String) "    MercuryLock "));
#line 558 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_43_43, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_36_36));
#line 558 "add_mutable_aux_preds.m"
        }
#line 557 "add_mutable_aux_preds.m"
        {
#line 557 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LockDefnStrs_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 557 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__LockDefnStrs_20, 0) = ((MR_Box) ((MR_String) "#ifdef MR_THREAD_SAFE\n"));
#line 557 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__LockDefnStrs_20, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_43_43));
#line 557 "add_mutable_aux_preds.m"
        }
#line 550 "add_mutable_aux_preds.m"
      }
#line 568 "add_mutable_aux_preds.m"
    {
#line 568 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 568 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_71_71, 0) = ((MR_Box) ((MR_String) "#endif\n"));
#line 568 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_71_71, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockDeclStrs_19));
#line 568 "add_mutable_aux_preds.m"
    }
#line 567 "add_mutable_aux_preds.m"
    {
#line 567 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 567 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_69_69, 0) = ((MR_Box) ((MR_String) ";\n"));
#line 567 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_69_69, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_71_71));
#line 567 "add_mutable_aux_preds.m"
    }
#line 567 "add_mutable_aux_preds.m"
    {
#line 567 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 567 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_68_68, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_8));
#line 567 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_68_68, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_69_69));
#line 567 "add_mutable_aux_preds.m"
    }
#line 567 "add_mutable_aux_preds.m"
    {
#line 567 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 567 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_66_66, 0) = ((MR_Box) ((MR_String) " "));
#line 567 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_66_66, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_68_68));
#line 567 "add_mutable_aux_preds.m"
    }
#line 567 "add_mutable_aux_preds.m"
    {
#line 567 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 567 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_65_65, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LowLevelTypeName_15));
#line 567 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_65_65, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_66_66));
#line 567 "add_mutable_aux_preds.m"
    }
#line 567 "add_mutable_aux_preds.m"
    {
#line 567 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 567 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_63_63, 0) = ((MR_Box) ((MR_String) "    extern "));
#line 567 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_63_63, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_65_65));
#line 567 "add_mutable_aux_preds.m"
    }
#line 566 "add_mutable_aux_preds.m"
    {
#line 566 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 566 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_61_61, 0) = ((MR_Box) ((MR_String) "#else\n"));
#line 566 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_61_61, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_63_63));
#line 566 "add_mutable_aux_preds.m"
    }
#line 565 "add_mutable_aux_preds.m"
    {
#line 565 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 565 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_59_59, 0) = ((MR_Box) ((MR_String) ";\n"));
#line 565 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_59_59, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_61_61));
#line 565 "add_mutable_aux_preds.m"
    }
#line 565 "add_mutable_aux_preds.m"
    {
#line 565 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 565 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_58_58, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_8));
#line 565 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_58_58, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_59_59));
#line 565 "add_mutable_aux_preds.m"
    }
#line 565 "add_mutable_aux_preds.m"
    {
#line 565 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 565 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_56_56, 0) = ((MR_Box) ((MR_String) " "));
#line 565 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_56_56, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_58_58));
#line 565 "add_mutable_aux_preds.m"
    }
#line 565 "add_mutable_aux_preds.m"
    {
#line 565 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 565 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__HighLevelTypeName_14));
#line 565 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_56_56));
#line 565 "add_mutable_aux_preds.m"
    }
#line 565 "add_mutable_aux_preds.m"
    {
#line 565 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 565 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_53_53, 0) = ((MR_Box) ((MR_String) "    extern "));
#line 565 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_53_53, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_55_55));
#line 565 "add_mutable_aux_preds.m"
    }
#line 564 "add_mutable_aux_preds.m"
    {
#line 564 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 564 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_51_51, 0) = ((MR_Box) ((MR_String) "#ifdef MR_HIGHLEVEL_CODE\n"));
#line 564 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_51_51, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_53_53));
#line 564 "add_mutable_aux_preds.m"
    }
#line 563 "add_mutable_aux_preds.m"
    {
#line 563 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__DeclBody_22 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_51_51);
    }
#line 570 "add_mutable_aux_preds.m"
    {
#line 570 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 570 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_75_75, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__DeclBody_22));
#line 570 "add_mutable_aux_preds.m"
    }
#line 569 "add_mutable_aux_preds.m"
    {
#line 569 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__ForeignDeclCode_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 569 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignDeclCode_23, 0) = ((MR_Box) ((MR_Integer) 0));
#line 569 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignDeclCode_23, 1) = ((MR_Box) ((MR_Integer) 1));
#line 569 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignDeclCode_23, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_75_75));
#line 569 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignDeclCode_23, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_12));
#line 569 "add_mutable_aux_preds.m"
    }
#line 571 "add_mutable_aux_preds.m"
    {
#line 571 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_add_foreign_decl_code_3_p_0(hlds__make_hlds__add_mutable_aux_preds__ForeignDeclCode_23, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_26, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_76_76);
    }
#line 574 "add_mutable_aux_preds.m"
    {
#line 574 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 574 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_81_81, 0) = ((MR_Box) ((MR_String) ";\n"));
#line 574 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_81_81, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockDefnStrs_20));
#line 574 "add_mutable_aux_preds.m"
    }
#line 574 "add_mutable_aux_preds.m"
    {
#line 574 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 574 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_80_80, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_8));
#line 574 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_80_80, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_81_81));
#line 574 "add_mutable_aux_preds.m"
    }
#line 574 "add_mutable_aux_preds.m"
    {
#line 574 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 574 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_78_78, 0) = ((MR_Box) ((MR_String) " "));
#line 574 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_78_78, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_80_80));
#line 574 "add_mutable_aux_preds.m"
    }
#line 574 "add_mutable_aux_preds.m"
    {
#line 574 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 574 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_77_77, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TypeName_18));
#line 574 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_77_77, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_78_78));
#line 574 "add_mutable_aux_preds.m"
    }
#line 573 "add_mutable_aux_preds.m"
    {
#line 573 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__DefnBody_24 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_77_77);
    }
#line 575 "add_mutable_aux_preds.m"
    {
#line 575 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 575 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_84_84, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__DefnBody_24));
#line 575 "add_mutable_aux_preds.m"
    }
#line 575 "add_mutable_aux_preds.m"
    {
#line 575 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__ForeignBodyCode_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 575 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignBodyCode_25, 0) = ((MR_Box) ((MR_Integer) 0));
#line 575 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignBodyCode_25, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_84_84));
#line 575 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignBodyCode_25, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_12));
#line 575 "add_mutable_aux_preds.m"
    }
#line 576 "add_mutable_aux_preds.m"
    {
#line 576 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_add_foreign_body_code_3_p_0(hlds__make_hlds__add_mutable_aux_preds__ForeignBodyCode_25, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_76_76, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_27);
    }
#line 508 "add_mutable_aux_preds.m"
  }
#line 503 "add_mutable_aux_preds.m"
}

#line 443 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_defns_for_mutable_8_p_0(
#line 443 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9,
#line 443 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_10,
#line 443 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34,
#line 443 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_35,
#line 443 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_36,
#line 443 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_37,
#line 443 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38,
#line 443 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39)
#line 443 "add_mutable_aux_preds.m"
{
#line 448 "add_mutable_aux_preds.m"
  {
#line 448 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 448 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_14 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 0)));
#line 448 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 1)));
#line 448 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 4)));
#line 448 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 6)));
#line 448 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_23;
#line 448 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ImplLang_24;
#line 448 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_25;
#line 448 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_26;
#line 448 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___PreInit_27;
#line 448 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___LockUnlock_28;
#line 448 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_29;
#line 448 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_30;
#line 448 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_31;
#line 448 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_32;
#line 448 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_33;
#line 448 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_42_42;
#line 448 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Globals_49;
#line 448 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_50;
#line 448 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInit0_53;
#line 448 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__LockUnlock0_54;
#line 448 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess0_55;
#line 448 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_59;
#line 451 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___InitTerm_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 2)));
#line 451 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Inst_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 3)));
#line 451 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___VarSet_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 5)));
#line 451 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 7)));

#line 1421 "add_mutable_aux_preds.m"
    {
#line 1421 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34, &hlds__make_hlds__add_mutable_aux_preds__Globals_49);
    }
#line 1422 "add_mutable_aux_preds.m"
    {
#line 1422 "add_mutable_aux_preds.m"
      libs__globals__get_target_2_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_49, &hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_50);
    }
#line 1439 "add_mutable_aux_preds.m"
#line 1439 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_50) {
#line 1439 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1439 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 1425 "add_mutable_aux_preds.m"
        {
#line 1425 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__HighLevelCode_56;

#line 1426 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__ImplLang_24 = (MR_Integer) 0;
#line 1427 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__Lang_25 = (MR_Integer) 0;
#line 1428 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__PreInit0_53 = (MR_Integer) 1;
#line 1429 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LockUnlock0_54 = (MR_Integer) 1;
#line 1430 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess0_55 = (MR_Integer) 1;
#line 1431 "add_mutable_aux_preds.m"
          {
#line 1431 "add_mutable_aux_preds.m"
            libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_49, (MR_Integer) 251, &hlds__make_hlds__add_mutable_aux_preds__HighLevelCode_56);
          }
#line 1435 "add_mutable_aux_preds.m"
#line 1435 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__HighLevelCode_56) {
#line 1435 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1435 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 1434 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_26 = (MR_Integer) 1;
#line 1435 "add_mutable_aux_preds.m"
              break;
#line 1435 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 1437 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_26 = (MR_Integer) 0;
#line 1435 "add_mutable_aux_preds.m"
              break;
#line 1435 "add_mutable_aux_preds.m"
          }
#line 1425 "add_mutable_aux_preds.m"
        }
#line 1439 "add_mutable_aux_preds.m"
        break;
#line 1439 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 1440 "add_mutable_aux_preds.m"
        {
#line 1440 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_58;

#line 1441 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__ImplLang_24 = (MR_Integer) 1;
#line 1442 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__Lang_25 = (MR_Integer) 1;
#line 1443 "add_mutable_aux_preds.m"
          {
#line 1443 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_58 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_18);
          }
#line 1447 "add_mutable_aux_preds.m"
#line 1447 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_58) {
#line 1447 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1447 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 1449 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__PreInit0_53 = (MR_Integer) 0;
#line 1447 "add_mutable_aux_preds.m"
              break;
#line 1447 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 1446 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__PreInit0_53 = (MR_Integer) 1;
#line 1447 "add_mutable_aux_preds.m"
              break;
#line 1447 "add_mutable_aux_preds.m"
          }
#line 1451 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LockUnlock0_54 = (MR_Integer) 0;
#line 1452 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess0_55 = (MR_Integer) 1;
#line 1453 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_26 = (MR_Integer) 0;
#line 1440 "add_mutable_aux_preds.m"
        }
#line 1439 "add_mutable_aux_preds.m"
        break;
#line 1439 "add_mutable_aux_preds.m"
      case (MR_Integer) 3:
#line 1463 "add_mutable_aux_preds.m"
        {
#line 1464 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__ImplLang_24 = (MR_Integer) 3;
#line 1465 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__Lang_25 = (MR_Integer) 3;
#line 1466 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__PreInit0_53 = (MR_Integer) 0;
#line 1467 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LockUnlock0_54 = (MR_Integer) 0;
#line 1468 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess0_55 = (MR_Integer) 0;
#line 1469 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_26 = (MR_Integer) 0;
#line 1463 "add_mutable_aux_preds.m"
        }
#line 1439 "add_mutable_aux_preds.m"
        break;
#line 1439 "add_mutable_aux_preds.m"
      case (MR_Integer) 2:
#line 1455 "add_mutable_aux_preds.m"
        {
#line 1456 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__ImplLang_24 = (MR_Integer) 2;
#line 1457 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__Lang_25 = (MR_Integer) 2;
#line 1458 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__PreInit0_53 = (MR_Integer) 0;
#line 1459 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LockUnlock0_54 = (MR_Integer) 0;
#line 1460 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess0_55 = (MR_Integer) 1;
#line 1461 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_26 = (MR_Integer) 0;
#line 1455 "add_mutable_aux_preds.m"
        }
#line 1439 "add_mutable_aux_preds.m"
        break;
#line 1439 "add_mutable_aux_preds.m"
    }
#line 1471 "add_mutable_aux_preds.m"
    {
#line 1471 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsConstant_59 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_18);
    }
#line 1477 "add_mutable_aux_preds.m"
#line 1477 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__IsConstant_59) {
#line 1477 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1477 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 1478 "add_mutable_aux_preds.m"
        {
#line 1479 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds___PreInit_27 = (MR_Integer) 0;
#line 1480 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds___LockUnlock_28 = (MR_Integer) 0;
#line 1481 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_29 = (MR_Integer) 0;
#line 1478 "add_mutable_aux_preds.m"
        }
#line 1477 "add_mutable_aux_preds.m"
        break;
#line 1477 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 1473 "add_mutable_aux_preds.m"
        {
#line 1474 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds___PreInit_27 = hlds__make_hlds__add_mutable_aux_preds__PreInit0_53;
#line 1475 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds___LockUnlock_28 = hlds__make_hlds__add_mutable_aux_preds__LockUnlock0_54;
#line 1476 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_29 = hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess0_55;
#line 1473 "add_mutable_aux_preds.m"
        }
#line 1477 "add_mutable_aux_preds.m"
        break;
#line 1477 "add_mutable_aux_preds.m"
    }
#line 1483 "add_mutable_aux_preds.m"
    {
#line 1483 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__TargetParams_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1483 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_23, 0) = ((MR_Box) ((hlds__make_hlds__add_mutable_aux_preds__ImplLang_24 | ((((hlds__make_hlds__add_mutable_aux_preds__Lang_25 << (MR_Integer) 2)) | ((((hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_26 << (MR_Integer) 4)) | ((((hlds__make_hlds__add_mutable_aux_preds___PreInit_27 << (MR_Integer) 5)) | ((((hlds__make_hlds__add_mutable_aux_preds___LockUnlock_28 << (MR_Integer) 6)) | ((hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_29 << (MR_Integer) 7)))))))))))));
#line 1483 "add_mutable_aux_preds.m"
    }
#line 460 "add_mutable_aux_preds.m"
    {
#line 460 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsConstant_30 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_18);
    }
#line 461 "add_mutable_aux_preds.m"
    {
#line 461 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_31 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_18);
    }
#line 464 "add_mutable_aux_preds.m"
    {
#line 464 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_32);
    }
#line 465 "add_mutable_aux_preds.m"
    {
#line 465 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_109_117_116_97_98_108_101_95_116_97_114_103_101_116_95_118_97_114_95_110_97_109_101_95_95_91_54_93_95_48_7_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34, hlds__make_hlds__add_mutable_aux_preds__MutAttrs_18, hlds__make_hlds__add_mutable_aux_preds__ModuleName_32, hlds__make_hlds__add_mutable_aux_preds__MutableName_14, hlds__make_hlds__add_mutable_aux_preds__Lang_25, &hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_33);
    }
#line 475 "add_mutable_aux_preds.m"
#line 475 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__ImplLang_24) {
#line 475 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 475 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 473 "add_mutable_aux_preds.m"
        {
#line 473 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__define_global_var_c_7_p_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_33, hlds__make_hlds__add_mutable_aux_preds__Type_15, hlds__make_hlds__add_mutable_aux_preds__IsConstant_30, hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_31, hlds__make_hlds__add_mutable_aux_preds__Context_20, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_42_42);
        }
#line 475 "add_mutable_aux_preds.m"
        break;
#line 475 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 585 "add_mutable_aux_preds.m"
        {
#line 585 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__TypeStr_72;
#line 585 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__DefnBody_73;
#line 585 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_74;
#line 585 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__V_76_76;
#line 585 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__V_77_77;
#line 585 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__V_79_79;
#line 585 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_82_82;

#line 593 "add_mutable_aux_preds.m"
#line 593 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_31) {
#line 593 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 593 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 590 "add_mutable_aux_preds.m"
              {
#line 588 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_84_84;

#line 588 "add_mutable_aux_preds.m"
                {
#line 588 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_84_84 = parse_tree__builtin_lib_types__int_type_0_f_0();
                }
#line 588 "add_mutable_aux_preds.m"
                {
#line 588 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__make_hlds__add_mutable_aux_preds__Type_15, hlds__make_hlds__add_mutable_aux_preds__V_84_84);
                }
#line 590 "add_mutable_aux_preds.m"
                if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 589 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__TypeStr_72 = (MR_String) "int";
#line 590 "add_mutable_aux_preds.m"
                else
#line 591 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__TypeStr_72 = (MR_String) "object";
#line 590 "add_mutable_aux_preds.m"
              }
#line 593 "add_mutable_aux_preds.m"
              break;
#line 593 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 595 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__TypeStr_72 = (MR_String) "int";
#line 593 "add_mutable_aux_preds.m"
              break;
#line 593 "add_mutable_aux_preds.m"
          }
#line 597 "add_mutable_aux_preds.m"
          {
#line 597 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_79_79 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_33, (MR_String) ";\n");
          }
#line 597 "add_mutable_aux_preds.m"
          {
#line 597 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_77_77 = mercury__string__f_43_43_2_f_0((MR_String) " ", hlds__make_hlds__add_mutable_aux_preds__V_79_79);
          }
#line 597 "add_mutable_aux_preds.m"
          {
#line 597 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_76_76 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeStr_72, hlds__make_hlds__add_mutable_aux_preds__V_77_77);
          }
#line 597 "add_mutable_aux_preds.m"
          {
#line 597 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__DefnBody_73 = mercury__string__f_43_43_2_f_0((MR_String) "static ", hlds__make_hlds__add_mutable_aux_preds__V_76_76);
          }
#line 599 "add_mutable_aux_preds.m"
          {
#line 599 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 599 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_82_82, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__DefnBody_73));
#line 599 "add_mutable_aux_preds.m"
          }
#line 599 "add_mutable_aux_preds.m"
          {
#line 599 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 599 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_74, 0) = ((MR_Box) ((MR_Integer) 1));
#line 599 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_74, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_82_82));
#line 599 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_74, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_20));
#line 599 "add_mutable_aux_preds.m"
          }
#line 600 "add_mutable_aux_preds.m"
          {
#line 600 "add_mutable_aux_preds.m"
            hlds__hlds_module__module_add_foreign_body_code_3_p_0(hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_74, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_42_42);
          }
#line 585 "add_mutable_aux_preds.m"
        }
#line 475 "add_mutable_aux_preds.m"
        break;
#line 475 "add_mutable_aux_preds.m"
      case (MR_Integer) 3:
#line 484 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_42_42 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34;
#line 475 "add_mutable_aux_preds.m"
        break;
#line 475 "add_mutable_aux_preds.m"
      case (MR_Integer) 2:
#line 481 "add_mutable_aux_preds.m"
        {
#line 481 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__define_global_var_java_6_p_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_33, hlds__make_hlds__add_mutable_aux_preds__Type_15, hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_31, hlds__make_hlds__add_mutable_aux_preds__Context_20, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_42_42);
        }
#line 475 "add_mutable_aux_preds.m"
        break;
#line 475 "add_mutable_aux_preds.m"
    }
#line 491 "add_mutable_aux_preds.m"
    {
#line 491 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__define_aux_preds_10_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, hlds__make_hlds__add_mutable_aux_preds__TargetParams_23, hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_33, hlds__make_hlds__add_mutable_aux_preds__PredStatus_10, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_42_42, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_35, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_36, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_37, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39);
    }
#line 448 "add_mutable_aux_preds.m"
  }
#line 443 "add_mutable_aux_preds.m"
}

#line 420 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_8(
#line 420 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 420 "add_mutable_aux_preds.m"
{
#line 420 "add_mutable_aux_preds.m"
  {
#line 420 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 420 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 420 "add_mutable_aux_preds.m"
    {
#line 420 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__420__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 420 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 420 "add_mutable_aux_preds.m"
  }
#line 420 "add_mutable_aux_preds.m"
}

#line 418 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_7(
#line 418 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 418 "add_mutable_aux_preds.m"
{
#line 418 "add_mutable_aux_preds.m"
  {
#line 418 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 418 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 418 "add_mutable_aux_preds.m"
    {
#line 418 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__418__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 418 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 418 "add_mutable_aux_preds.m"
  }
#line 418 "add_mutable_aux_preds.m"
}

#line 417 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_6(
#line 417 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 417 "add_mutable_aux_preds.m"
{
#line 417 "add_mutable_aux_preds.m"
  {
#line 417 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 417 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 417 "add_mutable_aux_preds.m"
    {
#line 417 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__417__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 417 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 417 "add_mutable_aux_preds.m"
  }
#line 417 "add_mutable_aux_preds.m"
}

#line 416 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_5(
#line 416 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 416 "add_mutable_aux_preds.m"
{
#line 416 "add_mutable_aux_preds.m"
  {
#line 416 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 416 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 416 "add_mutable_aux_preds.m"
    {
#line 416 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__416__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 416 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 416 "add_mutable_aux_preds.m"
  }
#line 416 "add_mutable_aux_preds.m"
}

#line 414 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_4(
#line 414 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 414 "add_mutable_aux_preds.m"
{
#line 414 "add_mutable_aux_preds.m"
  {
#line 414 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 414 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 414 "add_mutable_aux_preds.m"
    {
#line 414 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__414__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 414 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 414 "add_mutable_aux_preds.m"
  }
#line 414 "add_mutable_aux_preds.m"
}

#line 413 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_3(
#line 413 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 413 "add_mutable_aux_preds.m"
{
#line 413 "add_mutable_aux_preds.m"
  {
#line 413 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 413 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 413 "add_mutable_aux_preds.m"
    {
#line 413 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__413__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 413 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 413 "add_mutable_aux_preds.m"
  }
#line 413 "add_mutable_aux_preds.m"
}

#line 411 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_2(
#line 411 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 411 "add_mutable_aux_preds.m"
{
#line 411 "add_mutable_aux_preds.m"
  {
#line 411 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 411 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 411 "add_mutable_aux_preds.m"
    {
#line 411 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__411__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 411 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 411 "add_mutable_aux_preds.m"
  }
#line 411 "add_mutable_aux_preds.m"
}

#line 409 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_1(
#line 409 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 409 "add_mutable_aux_preds.m"
{
#line 409 "add_mutable_aux_preds.m"
  {
#line 409 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 409 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 409 "add_mutable_aux_preds.m"
    {
#line 409 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__409__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 409 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 409 "add_mutable_aux_preds.m"
  }
#line 409 "add_mutable_aux_preds.m"
}

#line 398 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0(
#line 398 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_11,
#line 398 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_12,
#line 398 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_13,
#line 398 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Kind_14,
#line 398 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_15,
#line 398 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_16,
#line 398 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_36,
#line 398 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_37,
#line 398 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38,
#line 398 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39)
#line 398 "add_mutable_aux_preds.m"
{
#line 404 "add_mutable_aux_preds.m"
  {
#line 404 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 404 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredOrigin_19;
#line 404 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_20;
#line 404 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredOrFunc_21;
#line 404 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TypesAndModes_22;
#line 404 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__WithType_23;
#line 404 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__WithInst_24;
#line 404 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeDetism_25;
#line 404 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_27;
#line 404 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InstVarSet_28;
#line 404 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ExistQVars_29;
#line 404 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Purity_30;
#line 404 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Constraints_31;
#line 404 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_32;
#line 404 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Markers_34;
#line 404 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_40_40;
#line 404 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_44_44;
#line 404 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_45_45;
#line 404 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_49_49;
#line 404 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_50_50;
#line 404 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_55_55;
#line 404 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_60_60;
#line 404 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_65_65;
#line 404 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_70_70;
#line 404 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_76_76;
#line 406 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Origin_26;
#line 406 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_33;
#line 423 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_35_35;

#line 405 "add_mutable_aux_preds.m"
    {
#line 405 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredOrigin_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 405 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PredOrigin_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 405 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PredOrigin_19, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ModuleName_12));
#line 405 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PredOrigin_19, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Name_13));
#line 405 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PredOrigin_19, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Kind_14));
#line 405 "add_mutable_aux_preds.m"
    }
#line 406 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__PredName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_11, (MR_Integer) 0)));
#line 406 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__PredOrFunc_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_11, (MR_Integer) 1)));
#line 406 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__TypesAndModes_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_11, (MR_Integer) 2)));
#line 406 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__WithType_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_11, (MR_Integer) 3)));
#line 406 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__WithInst_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_11, (MR_Integer) 4)));
#line 406 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MaybeDetism_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_11, (MR_Integer) 5)));
#line 406 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Origin_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_11, (MR_Integer) 6)));
#line 406 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_11, (MR_Integer) 7)));
#line 406 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__InstVarSet_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_11, (MR_Integer) 8)));
#line 406 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__ExistQVars_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_11, (MR_Integer) 9)));
#line 406 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Purity_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_11, (MR_Integer) 10)));
#line 406 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Constraints_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_11, (MR_Integer) 11)));
#line 406 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Context_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_11, (MR_Integer) 12)));
#line 406 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___SeqNum_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_11, (MR_Integer) 13)));
#line 409 "add_mutable_aux_preds.m"
    {
#line 409 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_44_44 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
    }
#line 409 "add_mutable_aux_preds.m"
    {
#line 409 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 409 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_40_40, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_4[4]));
#line 409 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_40_40, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_1));
#line 409 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 409 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_40_40, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_27));
#line 409 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_40_40, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_44_44));
#line 409 "add_mutable_aux_preds.m"
    }
#line 409 "add_mutable_aux_preds.m"
    {
#line 409 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_40_40, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/10", (MR_String) "TypeVarSet != varset.init");
    }
#line 411 "add_mutable_aux_preds.m"
    {
#line 411 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_49_49 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
#line 411 "add_mutable_aux_preds.m"
    {
#line 411 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 411 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_45_45, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_4[5]));
#line 411 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_45_45, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_2));
#line 411 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 411 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_45_45, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InstVarSet_28));
#line 411 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_45_45, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_49_49));
#line 411 "add_mutable_aux_preds.m"
    }
#line 411 "add_mutable_aux_preds.m"
    {
#line 411 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_45_45, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/10", (MR_String) "InstVarSet != varset.init");
    }
#line 413 "add_mutable_aux_preds.m"
    {
#line 413 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 413 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_50_50, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_4[6]));
#line 413 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_50_50, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_3));
#line 413 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 413 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_50_50, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ExistQVars_29));
#line 413 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_50_50, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 413 "add_mutable_aux_preds.m"
    }
#line 413 "add_mutable_aux_preds.m"
    {
#line 413 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_50_50, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/10", (MR_String) "ExistQVars != []");
    }
#line 414 "add_mutable_aux_preds.m"
    {
#line 414 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 414 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_4[7]));
#line 414 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_4));
#line 414 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 414 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PredOrFunc_21));
#line 414 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 4) = ((MR_Box) ((MR_Integer) 0));
#line 414 "add_mutable_aux_preds.m"
    }
#line 414 "add_mutable_aux_preds.m"
    {
#line 414 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_55_55, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/10", (MR_String) "PredOrFunc != pf_predicate");
    }
#line 416 "add_mutable_aux_preds.m"
    {
#line 416 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 416 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_60_60, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_4[8]));
#line 416 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_60_60, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_5));
#line 416 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 416 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_60_60, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__WithType_23));
#line 416 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_60_60, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 416 "add_mutable_aux_preds.m"
    }
#line 416 "add_mutable_aux_preds.m"
    {
#line 416 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_60_60, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/10", (MR_String) "WithType != no");
    }
#line 417 "add_mutable_aux_preds.m"
    {
#line 417 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 417 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_65_65, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_4[9]));
#line 417 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_65_65, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_6));
#line 417 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_65_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 417 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_65_65, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__WithInst_24));
#line 417 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_65_65, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 417 "add_mutable_aux_preds.m"
    }
#line 417 "add_mutable_aux_preds.m"
    {
#line 417 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_65_65, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/10", (MR_String) "WithInst != no");
    }
#line 418 "add_mutable_aux_preds.m"
    {
#line 418 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 418 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_70_70, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_4[10]));
#line 418 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_70_70, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_7));
#line 418 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_70_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 418 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_70_70, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__MaybeDetism_25));
#line 418 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_70_70, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[1])));
#line 418 "add_mutable_aux_preds.m"
    }
#line 418 "add_mutable_aux_preds.m"
    {
#line 418 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_70_70, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/10", (MR_String) "MaybeDet != yes(detism_det)");
    }
#line 420 "add_mutable_aux_preds.m"
    {
#line 420 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 420 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_76_76, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_4[11]));
#line 420 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_76_76, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_8));
#line 420 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_76_76, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 420 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_76_76, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Constraints_31));
#line 420 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_76_76, 4) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[34]));
#line 420 "add_mutable_aux_preds.m"
    }
#line 420 "add_mutable_aux_preds.m"
    {
#line 420 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_76_76, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/10", (MR_String) "Constraints != constraints([], [])");
    }
#line 422 "add_mutable_aux_preds.m"
    {
#line 422 "add_mutable_aux_preds.m"
      hlds__hlds_pred__marker_list_to_markers_2_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[35]), &hlds__make_hlds__add_mutable_aux_preds__Markers_34);
    }
#line 423 "add_mutable_aux_preds.m"
    {
#line 423 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_pred__module_add_pred_or_func_19_p_0(hlds__make_hlds__add_mutable_aux_preds__PredOrigin_19, hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_27, hlds__make_hlds__add_mutable_aux_preds__InstVarSet_28, hlds__make_hlds__add_mutable_aux_preds__ExistQVars_29, hlds__make_hlds__add_mutable_aux_preds__PredOrFunc_21, hlds__make_hlds__add_mutable_aux_preds__PredName_20, hlds__make_hlds__add_mutable_aux_preds__TypesAndModes_22, hlds__make_hlds__add_mutable_aux_preds__MaybeDetism_25, hlds__make_hlds__add_mutable_aux_preds__Purity_30, hlds__make_hlds__add_mutable_aux_preds__Constraints_31, hlds__make_hlds__add_mutable_aux_preds__Markers_34, hlds__make_hlds__add_mutable_aux_preds__Context_32, hlds__make_hlds__add_mutable_aux_preds__PredStatus_15, hlds__make_hlds__add_mutable_aux_preds__NeedQual_16, &hlds__make_hlds__add_mutable_aux_preds__V_35_35, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_36, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_37, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39);
    }
#line 404 "add_mutable_aux_preds.m"
  }
#line 398 "add_mutable_aux_preds.m"
}

#line 377 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_13_p_0(
#line 377 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_14,
#line 377 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_15,
#line 377 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Kind_16,
#line 377 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_17,
#line 377 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_18,
#line 377 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Purity_19,
#line 377 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_20,
#line 377 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_21,
#line 377 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_22,
#line 377 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_32,
#line 377 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_33,
#line 377 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_34,
#line 377 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_35)
#line 377 "add_mutable_aux_preds.m"
{
#line 384 "add_mutable_aux_preds.m"
  {
#line 384 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 384 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredOrigin_25;
#line 384 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_26;
#line 384 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InstVarSet_27;
#line 384 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Markers_30;
#line 391 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_31_31;

#line 385 "add_mutable_aux_preds.m"
    {
#line 385 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredOrigin_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 385 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PredOrigin_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 385 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PredOrigin_25, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ModuleName_14));
#line 385 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PredOrigin_25, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Name_15));
#line 385 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PredOrigin_25, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Kind_16));
#line 385 "add_mutable_aux_preds.m"
    }
#line 386 "add_mutable_aux_preds.m"
    {
#line 386 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_26 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
    }
#line 387 "add_mutable_aux_preds.m"
    {
#line 387 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__InstVarSet_27 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
#line 390 "add_mutable_aux_preds.m"
    {
#line 390 "add_mutable_aux_preds.m"
      hlds__hlds_pred__marker_list_to_markers_2_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[35]), &hlds__make_hlds__add_mutable_aux_preds__Markers_30);
    }
#line 391 "add_mutable_aux_preds.m"
    {
#line 391 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_pred__module_add_pred_or_func_19_p_0(hlds__make_hlds__add_mutable_aux_preds__PredOrigin_25, hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_26, hlds__make_hlds__add_mutable_aux_preds__InstVarSet_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__PredName_17, hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_18, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[1]), hlds__make_hlds__add_mutable_aux_preds__Purity_19, (MR_Word) &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[34], hlds__make_hlds__add_mutable_aux_preds__Markers_30, hlds__make_hlds__add_mutable_aux_preds__Context_22, hlds__make_hlds__add_mutable_aux_preds__PredStatus_20, hlds__make_hlds__add_mutable_aux_preds__NeedQual_21, &hlds__make_hlds__add_mutable_aux_preds__V_31_31, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_32, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_33, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_34, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_35);
    }
#line 384 "add_mutable_aux_preds.m"
  }
#line 377 "add_mutable_aux_preds.m"
}

#line 362 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_pre_init_pred_decl_9_p_0(
#line 362 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_10,
#line 362 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_11,
#line 362 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_12,
#line 362 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_13,
#line 362 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_14,
#line 362 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_19,
#line 362 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_20,
#line 362 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_21,
#line 362 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_22)
#line 362 "add_mutable_aux_preds.m"
{
#line 368 "add_mutable_aux_preds.m"
  {
#line 368 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 368 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_17;

#line 369 "add_mutable_aux_preds.m"
    {
#line 369 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredName_17 = parse_tree__prog_mutable__mutable_pre_init_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_10, hlds__make_hlds__add_mutable_aux_preds__Name_11);
    }
#line 371 "add_mutable_aux_preds.m"
    {
#line 371 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_13_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_10, hlds__make_hlds__add_mutable_aux_preds__Name_11, (MR_Integer) 10, hlds__make_hlds__add_mutable_aux_preds__PredName_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 2, hlds__make_hlds__add_mutable_aux_preds__PredStatus_12, hlds__make_hlds__add_mutable_aux_preds__NeedQual_13, hlds__make_hlds__add_mutable_aux_preds__Context_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_19, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_20, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_21, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_22);
    }
#line 368 "add_mutable_aux_preds.m"
  }
#line 362 "add_mutable_aux_preds.m"
}

#line 344 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_init_pred_decl_9_p_0(
#line 344 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_10,
#line 344 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_11,
#line 344 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_12,
#line 344 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_13,
#line 344 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_14,
#line 344 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_19,
#line 344 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_20,
#line 344 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_21,
#line 344 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_22)
#line 344 "add_mutable_aux_preds.m"
{
#line 350 "add_mutable_aux_preds.m"
  {
#line 350 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 350 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_17;

#line 351 "add_mutable_aux_preds.m"
    {
#line 351 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredName_17 = parse_tree__prog_mutable__mutable_init_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_10, hlds__make_hlds__add_mutable_aux_preds__Name_11);
    }
#line 353 "add_mutable_aux_preds.m"
    {
#line 353 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_13_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_10, hlds__make_hlds__add_mutable_aux_preds__Name_11, (MR_Integer) 10, hlds__make_hlds__add_mutable_aux_preds__PredName_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 2, hlds__make_hlds__add_mutable_aux_preds__PredStatus_12, hlds__make_hlds__add_mutable_aux_preds__NeedQual_13, hlds__make_hlds__add_mutable_aux_preds__Context_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_19, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_20, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_21, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_22);
    }
#line 350 "add_mutable_aux_preds.m"
  }
#line 344 "add_mutable_aux_preds.m"
}

#line 305 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_unlock_pred_decl_9_p_0(
#line 305 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_10,
#line 305 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_11,
#line 305 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_12,
#line 305 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_13,
#line 305 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_14,
#line 305 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_19,
#line 305 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_20,
#line 305 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_21,
#line 305 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_22)
#line 305 "add_mutable_aux_preds.m"
{
#line 335 "add_mutable_aux_preds.m"
  {
#line 335 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 335 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_17;

#line 336 "add_mutable_aux_preds.m"
    {
#line 336 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredName_17 = parse_tree__prog_mutable__mutable_unlock_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_10, hlds__make_hlds__add_mutable_aux_preds__Name_11);
    }
#line 338 "add_mutable_aux_preds.m"
    {
#line 338 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_13_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_10, hlds__make_hlds__add_mutable_aux_preds__Name_11, (MR_Integer) 9, hlds__make_hlds__add_mutable_aux_preds__PredName_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 2, hlds__make_hlds__add_mutable_aux_preds__PredStatus_12, hlds__make_hlds__add_mutable_aux_preds__NeedQual_13, hlds__make_hlds__add_mutable_aux_preds__Context_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_19, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_20, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_21, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_22);
    }
#line 335 "add_mutable_aux_preds.m"
  }
#line 305 "add_mutable_aux_preds.m"
}

#line 301 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_lock_pred_decl_9_p_0(
#line 301 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_10,
#line 301 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_11,
#line 301 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_12,
#line 301 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_13,
#line 301 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_14,
#line 301 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_19,
#line 301 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_20,
#line 301 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_21,
#line 301 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_22)
#line 301 "add_mutable_aux_preds.m"
{
#line 327 "add_mutable_aux_preds.m"
  {
#line 327 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 327 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_17;

#line 328 "add_mutable_aux_preds.m"
    {
#line 328 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredName_17 = parse_tree__prog_mutable__mutable_lock_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_10, hlds__make_hlds__add_mutable_aux_preds__Name_11);
    }
#line 330 "add_mutable_aux_preds.m"
    {
#line 330 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_13_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_10, hlds__make_hlds__add_mutable_aux_preds__Name_11, (MR_Integer) 8, hlds__make_hlds__add_mutable_aux_preds__PredName_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 2, hlds__make_hlds__add_mutable_aux_preds__PredStatus_12, hlds__make_hlds__add_mutable_aux_preds__NeedQual_13, hlds__make_hlds__add_mutable_aux_preds__Context_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_19, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_20, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_21, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_22);
    }
#line 327 "add_mutable_aux_preds.m"
  }
#line 301 "add_mutable_aux_preds.m"
}

#line 297 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_unsafe_set_pred_decl_11_p_0(
#line 297 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_12,
#line 297 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_13,
#line 297 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_14,
#line 297 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_15,
#line 297 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_16,
#line 297 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_17,
#line 297 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_18,
#line 297 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_23,
#line 297 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_24,
#line 297 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_25,
#line 297 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_26)
#line 297 "add_mutable_aux_preds.m"
{
#line 319 "add_mutable_aux_preds.m"
  {
#line 319 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 319 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_21;
#line 319 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_22;
#line 319 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_27_27;
#line 319 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_28_28;

#line 320 "add_mutable_aux_preds.m"
    {
#line 320 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredName_21 = parse_tree__prog_mutable__mutable_unsafe_set_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_12, hlds__make_hlds__add_mutable_aux_preds__Name_13);
    }
#line 321 "add_mutable_aux_preds.m"
    {
#line 321 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_28_28 = parse_tree__prog_mode__in_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_15);
    }
#line 321 "add_mutable_aux_preds.m"
    {
#line 321 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 321 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_27_27, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Type_14));
#line 321 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_27_27, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_28_28));
#line 321 "add_mutable_aux_preds.m"
    }
#line 321 "add_mutable_aux_preds.m"
    {
#line 321 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 321 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_22, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_27_27));
#line 321 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 321 "add_mutable_aux_preds.m"
    }
#line 322 "add_mutable_aux_preds.m"
    {
#line 322 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_13_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_12, hlds__make_hlds__add_mutable_aux_preds__Name_13, (MR_Integer) 5, hlds__make_hlds__add_mutable_aux_preds__PredName_21, hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_22, (MR_Integer) 2, hlds__make_hlds__add_mutable_aux_preds__PredStatus_16, hlds__make_hlds__add_mutable_aux_preds__NeedQual_17, hlds__make_hlds__add_mutable_aux_preds__Context_18, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_23, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_24, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_25, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_26);
    }
#line 319 "add_mutable_aux_preds.m"
  }
#line 297 "add_mutable_aux_preds.m"
}

#line 293 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_unsafe_get_pred_decl_11_p_0(
#line 293 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_12,
#line 293 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_13,
#line 293 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_14,
#line 293 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_15,
#line 293 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_16,
#line 293 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_17,
#line 293 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_18,
#line 293 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_23,
#line 293 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_24,
#line 293 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_25,
#line 293 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_26)
#line 293 "add_mutable_aux_preds.m"
{
#line 311 "add_mutable_aux_preds.m"
  {
#line 311 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 311 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_21;
#line 311 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_22;
#line 311 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_27_27;
#line 311 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_28_28;

#line 312 "add_mutable_aux_preds.m"
    {
#line 312 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredName_21 = parse_tree__prog_mutable__mutable_unsafe_get_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_12, hlds__make_hlds__add_mutable_aux_preds__Name_13);
    }
#line 313 "add_mutable_aux_preds.m"
    {
#line 313 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_28_28 = parse_tree__prog_mode__out_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_15);
    }
#line 313 "add_mutable_aux_preds.m"
    {
#line 313 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_27_27, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Type_14));
#line 313 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_27_27, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_28_28));
#line 313 "add_mutable_aux_preds.m"
    }
#line 313 "add_mutable_aux_preds.m"
    {
#line 313 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_22, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_27_27));
#line 313 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 313 "add_mutable_aux_preds.m"
    }
#line 314 "add_mutable_aux_preds.m"
    {
#line 314 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_13_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_12, hlds__make_hlds__add_mutable_aux_preds__Name_13, (MR_Integer) 4, hlds__make_hlds__add_mutable_aux_preds__PredName_21, hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_22, (MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__PredStatus_16, hlds__make_hlds__add_mutable_aux_preds__NeedQual_17, hlds__make_hlds__add_mutable_aux_preds__Context_18, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_23, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_24, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_25, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_26);
    }
#line 311 "add_mutable_aux_preds.m"
  }
#line 293 "add_mutable_aux_preds.m"
}

#line 237 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0_4(
#line 237 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 237 "add_mutable_aux_preds.m"
{
#line 237 "add_mutable_aux_preds.m"
  {
#line 237 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 237 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 237 "add_mutable_aux_preds.m"
    {
#line 237 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_aux_pred_decls_for_mutable__237__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 237 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 237 "add_mutable_aux_preds.m"
  }
#line 237 "add_mutable_aux_preds.m"
}

#line 235 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0_3(
#line 235 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 235 "add_mutable_aux_preds.m"
{
#line 235 "add_mutable_aux_preds.m"
  {
#line 235 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 235 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 235 "add_mutable_aux_preds.m"
    {
#line 235 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_aux_pred_decls_for_mutable__235__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 235 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 235 "add_mutable_aux_preds.m"
  }
#line 235 "add_mutable_aux_preds.m"
}

#line 233 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0_2(
#line 233 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 233 "add_mutable_aux_preds.m"
{
#line 233 "add_mutable_aux_preds.m"
  {
#line 233 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 233 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 233 "add_mutable_aux_preds.m"
    {
#line 233 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_aux_pred_decls_for_mutable__233__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 233 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 233 "add_mutable_aux_preds.m"
  }
#line 233 "add_mutable_aux_preds.m"
}

#line 231 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0_1(
#line 231 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 231 "add_mutable_aux_preds.m"
{
#line 231 "add_mutable_aux_preds.m"
  {
#line 231 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 231 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 231 "add_mutable_aux_preds.m"
    {
#line 231 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_aux_pred_decls_for_mutable__231__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 231 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 231 "add_mutable_aux_preds.m"
  }
#line 231 "add_mutable_aux_preds.m"
}

#line 172 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0(
#line 172 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_8,
#line 172 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_9,
#line 172 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_10,
#line 172 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_38,
#line 172 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_39,
#line 172 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_40,
#line 172 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_41)
#line 172 "add_mutable_aux_preds.m"
{
#line 177 "add_mutable_aux_preds.m"
  {
#line 177 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 177 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_8, (MR_Integer) 0)));
#line 177 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_8, (MR_Integer) 1)));
#line 177 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_8, (MR_Integer) 3)));
#line 177 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_8, (MR_Integer) 4)));
#line 177 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_8, (MR_Integer) 6)));
#line 177 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_21;
#line 178 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___InitValue_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_8, (MR_Integer) 2)));
#line 178 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___VarSet_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_8, (MR_Integer) 5)));
#line 178 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_8, (MR_Integer) 7)));

#line 180 "add_mutable_aux_preds.m"
    {
#line 180 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__get_mutable_target_params_3_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_38, hlds__make_hlds__add_mutable_aux_preds__MutAttrs_17, &hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_21);
    }
#line 183 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 182 "add_mutable_aux_preds.m"
      {
#line 182 "add_mutable_aux_preds.m"
        *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_39 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_38;
#line 182 "add_mutable_aux_preds.m"
        *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_41 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_40;
#line 182 "add_mutable_aux_preds.m"
      }
#line 183 "add_mutable_aux_preds.m"
    else
#line 184 "add_mutable_aux_preds.m"
      {
#line 184 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_21, (MR_Integer) 0)));
#line 184 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInit_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_22, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 184 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__LockUnlock_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_22, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 184 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_22, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 184 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_29;
#line 184 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_30;
#line 184 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__AttachToIO_31;
#line 184 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_42_42;
#line 184 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_43_43;
#line 184 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_44_44;
#line 184 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_45_45;
#line 184 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_48_48;
#line 184 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_49_49;
#line 184 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_52_52;
#line 184 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_53_53;
#line 185 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds___ImplLang_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_22, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 185 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds___Lang_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_22, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
#line 185 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_22, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 187 "add_mutable_aux_preds.m"
        {
#line 187 "add_mutable_aux_preds.m"
          hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_38, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_29);
        }
#line 197 "add_mutable_aux_preds.m"
#line 197 "add_mutable_aux_preds.m"
        switch (hlds__make_hlds__add_mutable_aux_preds__PreInit_26) {
#line 197 "add_mutable_aux_preds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 197 "add_mutable_aux_preds.m"
          case (MR_Integer) 0:
#line 196 "add_mutable_aux_preds.m"
            {
#line 196 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_42_42 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_38;
#line 196 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_43_43 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_40;
#line 196 "add_mutable_aux_preds.m"
            }
#line 197 "add_mutable_aux_preds.m"
            break;
#line 197 "add_mutable_aux_preds.m"
          case (MR_Integer) 1:
#line 199 "add_mutable_aux_preds.m"
            {
#line 199 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__add_mutable_pre_init_pred_decl_9_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_29, hlds__make_hlds__add_mutable_aux_preds__Name_13, hlds__make_hlds__add_mutable_aux_preds__PredStatus_9, hlds__make_hlds__add_mutable_aux_preds__NeedQual_10, hlds__make_hlds__add_mutable_aux_preds__Context_19, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_38, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_42_42, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_40, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_43_43);
            }
#line 197 "add_mutable_aux_preds.m"
            break;
#line 197 "add_mutable_aux_preds.m"
        }
#line 204 "add_mutable_aux_preds.m"
        {
#line 204 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__add_mutable_init_pred_decl_9_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_29, hlds__make_hlds__add_mutable_aux_preds__Name_13, hlds__make_hlds__add_mutable_aux_preds__PredStatus_9, hlds__make_hlds__add_mutable_aux_preds__NeedQual_10, hlds__make_hlds__add_mutable_aux_preds__Context_19, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_42_42, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_44_44, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_43_43, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_45_45);
        }
#line 210 "add_mutable_aux_preds.m"
#line 210 "add_mutable_aux_preds.m"
        switch (hlds__make_hlds__add_mutable_aux_preds__LockUnlock_27) {
#line 210 "add_mutable_aux_preds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 210 "add_mutable_aux_preds.m"
          case (MR_Integer) 0:
#line 209 "add_mutable_aux_preds.m"
            {
#line 209 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_48_48 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_44_44;
#line 209 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_49_49 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_45_45;
#line 209 "add_mutable_aux_preds.m"
            }
#line 210 "add_mutable_aux_preds.m"
            break;
#line 210 "add_mutable_aux_preds.m"
          case (MR_Integer) 1:
#line 211 "add_mutable_aux_preds.m"
            {
#line 211 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46;
#line 211 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_47_47;

#line 212 "add_mutable_aux_preds.m"
              {
#line 212 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__add_mutable_lock_pred_decl_9_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_29, hlds__make_hlds__add_mutable_aux_preds__Name_13, hlds__make_hlds__add_mutable_aux_preds__PredStatus_9, hlds__make_hlds__add_mutable_aux_preds__NeedQual_10, hlds__make_hlds__add_mutable_aux_preds__Context_19, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_44_44, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_45_45, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_47_47);
              }
#line 214 "add_mutable_aux_preds.m"
              {
#line 214 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__add_mutable_unlock_pred_decl_9_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_29, hlds__make_hlds__add_mutable_aux_preds__Name_13, hlds__make_hlds__add_mutable_aux_preds__PredStatus_9, hlds__make_hlds__add_mutable_aux_preds__NeedQual_10, hlds__make_hlds__add_mutable_aux_preds__Context_19, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_48_48, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_47_47, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_49_49);
              }
#line 211 "add_mutable_aux_preds.m"
            }
#line 210 "add_mutable_aux_preds.m"
            break;
#line 210 "add_mutable_aux_preds.m"
        }
#line 219 "add_mutable_aux_preds.m"
#line 219 "add_mutable_aux_preds.m"
        switch (hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_28) {
#line 219 "add_mutable_aux_preds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 219 "add_mutable_aux_preds.m"
          case (MR_Integer) 0:
#line 218 "add_mutable_aux_preds.m"
            {
#line 218 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_52_52 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_48_48;
#line 218 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_53_53 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_49_49;
#line 218 "add_mutable_aux_preds.m"
            }
#line 219 "add_mutable_aux_preds.m"
            break;
#line 219 "add_mutable_aux_preds.m"
          case (MR_Integer) 1:
#line 220 "add_mutable_aux_preds.m"
            {
#line 220 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_50_50;
#line 220 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51;

#line 221 "add_mutable_aux_preds.m"
              {
#line 221 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__add_mutable_unsafe_get_pred_decl_11_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_29, hlds__make_hlds__add_mutable_aux_preds__Name_13, hlds__make_hlds__add_mutable_aux_preds__Type_14, hlds__make_hlds__add_mutable_aux_preds__Inst_16, hlds__make_hlds__add_mutable_aux_preds__PredStatus_9, hlds__make_hlds__add_mutable_aux_preds__NeedQual_10, hlds__make_hlds__add_mutable_aux_preds__Context_19, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_48_48, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_50_50, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_49_49, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51);
              }
#line 223 "add_mutable_aux_preds.m"
              {
#line 223 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__add_mutable_unsafe_set_pred_decl_11_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_29, hlds__make_hlds__add_mutable_aux_preds__Name_13, hlds__make_hlds__add_mutable_aux_preds__Type_14, hlds__make_hlds__add_mutable_aux_preds__Inst_16, hlds__make_hlds__add_mutable_aux_preds__PredStatus_9, hlds__make_hlds__add_mutable_aux_preds__NeedQual_10, hlds__make_hlds__add_mutable_aux_preds__Context_19, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_50_50, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_52_52, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_53_53);
              }
#line 220 "add_mutable_aux_preds.m"
            }
#line 219 "add_mutable_aux_preds.m"
            break;
#line 219 "add_mutable_aux_preds.m"
        }
#line 227 "add_mutable_aux_preds.m"
        {
#line 227 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__IsConstant_30 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_17);
        }
#line 228 "add_mutable_aux_preds.m"
        {
#line 228 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__AttachToIO_31 = parse_tree__prog_item__mutable_var_attach_to_io_state_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_17);
        }
#line 253 "add_mutable_aux_preds.m"
#line 253 "add_mutable_aux_preds.m"
        switch (hlds__make_hlds__add_mutable_aux_preds__IsConstant_30) {
#line 253 "add_mutable_aux_preds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 253 "add_mutable_aux_preds.m"
          case (MR_Integer) 1:
#line 230 "add_mutable_aux_preds.m"
            {
#line 230 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__ConstantGetPredDecl_32;
#line 230 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__ConstantSetPredDecl_33;
#line 230 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__V_66_66;
#line 230 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__V_71_71;
#line 230 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__V_76_76;
#line 230 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__V_81_81;
#line 230 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_87_87;
#line 230 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_88_88;

#line 231 "add_mutable_aux_preds.m"
              {
#line 231 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 231 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_66_66, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_4[0]));
#line 231 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_66_66, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0_1));
#line 231 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_66_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 231 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_66_66, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PreInit_26));
#line 231 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_66_66, 4) = ((MR_Box) ((MR_Integer) 0));
#line 231 "add_mutable_aux_preds.m"
              }
#line 231 "add_mutable_aux_preds.m"
              {
#line 231 "add_mutable_aux_preds.m"
                mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_66_66, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_aux_pred_decls_for_mutable\'/7", (MR_String) "PreInit = need_pre_init_pred");
              }
#line 233 "add_mutable_aux_preds.m"
              {
#line 233 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 233 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_71_71, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_4[1]));
#line 233 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_71_71, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0_2));
#line 233 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_71_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 233 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_71_71, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockUnlock_27));
#line 233 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_71_71, 4) = ((MR_Box) ((MR_Integer) 0));
#line 233 "add_mutable_aux_preds.m"
              }
#line 233 "add_mutable_aux_preds.m"
              {
#line 233 "add_mutable_aux_preds.m"
                mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_71_71, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_aux_pred_decls_for_mutable\'/7", (MR_String) "LockUnlock = need_lock_unlock_preds");
              }
#line 235 "add_mutable_aux_preds.m"
              {
#line 235 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 235 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_76_76, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_4[2]));
#line 235 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_76_76, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0_3));
#line 235 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_76_76, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 235 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_76_76, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_28));
#line 235 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_76_76, 4) = ((MR_Box) ((MR_Integer) 0));
#line 235 "add_mutable_aux_preds.m"
              }
#line 235 "add_mutable_aux_preds.m"
              {
#line 235 "add_mutable_aux_preds.m"
                mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_76_76, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_aux_pred_decls_for_mutable\'/7", (MR_String) "UnsafeAccess = need_unsafe_get_set_preds");
              }
#line 237 "add_mutable_aux_preds.m"
              {
#line 237 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 237 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_81_81, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_4[3]));
#line 237 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_81_81, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0_4));
#line 237 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_81_81, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 237 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_81_81, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__AttachToIO_31));
#line 237 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_81_81, 4) = ((MR_Box) ((MR_Integer) 0));
#line 237 "add_mutable_aux_preds.m"
              }
#line 237 "add_mutable_aux_preds.m"
              {
#line 237 "add_mutable_aux_preds.m"
                mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_81_81, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_aux_pred_decls_for_mutable\'/7", (MR_String) "AttachToIO = mutable_attach_to_io_state");
              }
#line 243 "add_mutable_aux_preds.m"
              {
#line 243 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__ConstantGetPredDecl_32 = parse_tree__prog_mutable__constant_get_pred_decl_5_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_29, hlds__make_hlds__add_mutable_aux_preds__Name_13, hlds__make_hlds__add_mutable_aux_preds__Type_14, hlds__make_hlds__add_mutable_aux_preds__Inst_16, hlds__make_hlds__add_mutable_aux_preds__Context_19);
              }
#line 245 "add_mutable_aux_preds.m"
              {
#line 245 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__ConstantSetPredDecl_33 = parse_tree__prog_mutable__constant_set_pred_decl_5_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_29, hlds__make_hlds__add_mutable_aux_preds__Name_13, hlds__make_hlds__add_mutable_aux_preds__Type_14, hlds__make_hlds__add_mutable_aux_preds__Inst_16, hlds__make_hlds__add_mutable_aux_preds__Context_19);
              }
#line 247 "add_mutable_aux_preds.m"
              {
#line 247 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0(hlds__make_hlds__add_mutable_aux_preds__ConstantGetPredDecl_32, hlds__make_hlds__add_mutable_aux_preds__ModuleName_29, hlds__make_hlds__add_mutable_aux_preds__Name_13, (MR_Integer) 6, hlds__make_hlds__add_mutable_aux_preds__PredStatus_9, hlds__make_hlds__add_mutable_aux_preds__NeedQual_10, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_52_52, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_87_87, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_53_53, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_88_88);
              }
#line 250 "add_mutable_aux_preds.m"
              {
#line 250 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0(hlds__make_hlds__add_mutable_aux_preds__ConstantSetPredDecl_33, hlds__make_hlds__add_mutable_aux_preds__ModuleName_29, hlds__make_hlds__add_mutable_aux_preds__Name_13, (MR_Integer) 7, hlds__make_hlds__add_mutable_aux_preds__PredStatus_9, hlds__make_hlds__add_mutable_aux_preds__NeedQual_10, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_87_87, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_39, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_88_88, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_41);
              }
#line 230 "add_mutable_aux_preds.m"
            }
#line 253 "add_mutable_aux_preds.m"
            break;
#line 253 "add_mutable_aux_preds.m"
          case (MR_Integer) 0:
#line 254 "add_mutable_aux_preds.m"
            {
#line 254 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__StdGetPredDecl_34;
#line 254 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__StdSetPredDecl_35;
#line 254 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_55_55;
#line 254 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_56_56;
#line 254 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_58_58;
#line 254 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_59_59;

#line 258 "add_mutable_aux_preds.m"
              {
#line 258 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__StdGetPredDecl_34 = parse_tree__prog_mutable__std_get_pred_decl_5_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_29, hlds__make_hlds__add_mutable_aux_preds__Name_13, hlds__make_hlds__add_mutable_aux_preds__Type_14, hlds__make_hlds__add_mutable_aux_preds__Inst_16, hlds__make_hlds__add_mutable_aux_preds__Context_19);
              }
#line 260 "add_mutable_aux_preds.m"
              {
#line 260 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__StdSetPredDecl_35 = parse_tree__prog_mutable__std_set_pred_decl_5_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_29, hlds__make_hlds__add_mutable_aux_preds__Name_13, hlds__make_hlds__add_mutable_aux_preds__Type_14, hlds__make_hlds__add_mutable_aux_preds__Inst_16, hlds__make_hlds__add_mutable_aux_preds__Context_19);
              }
#line 262 "add_mutable_aux_preds.m"
              {
#line 262 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0(hlds__make_hlds__add_mutable_aux_preds__StdGetPredDecl_34, hlds__make_hlds__add_mutable_aux_preds__ModuleName_29, hlds__make_hlds__add_mutable_aux_preds__Name_13, (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__PredStatus_9, hlds__make_hlds__add_mutable_aux_preds__NeedQual_10, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_52_52, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_55_55, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_53_53, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_56_56);
              }
#line 265 "add_mutable_aux_preds.m"
              {
#line 265 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0(hlds__make_hlds__add_mutable_aux_preds__StdSetPredDecl_35, hlds__make_hlds__add_mutable_aux_preds__ModuleName_29, hlds__make_hlds__add_mutable_aux_preds__Name_13, (MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__PredStatus_9, hlds__make_hlds__add_mutable_aux_preds__NeedQual_10, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_55_55, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_58_58, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_56_56, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_59_59);
              }
#line 273 "add_mutable_aux_preds.m"
#line 273 "add_mutable_aux_preds.m"
              switch (hlds__make_hlds__add_mutable_aux_preds__AttachToIO_31) {
#line 273 "add_mutable_aux_preds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 273 "add_mutable_aux_preds.m"
                case (MR_Integer) 1:
#line 274 "add_mutable_aux_preds.m"
                  {
#line 274 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__IOGetPredDecl_36;
#line 274 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__IOSetPredDecl_37;
#line 274 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_61_61;
#line 274 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_62_62;

#line 275 "add_mutable_aux_preds.m"
                    {
#line 275 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__IOGetPredDecl_36 = parse_tree__prog_mutable__io_get_pred_decl_5_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_29, hlds__make_hlds__add_mutable_aux_preds__Name_13, hlds__make_hlds__add_mutable_aux_preds__Type_14, hlds__make_hlds__add_mutable_aux_preds__Inst_16, hlds__make_hlds__add_mutable_aux_preds__Context_19);
                    }
#line 277 "add_mutable_aux_preds.m"
                    {
#line 277 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__IOSetPredDecl_37 = parse_tree__prog_mutable__io_set_pred_decl_5_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_29, hlds__make_hlds__add_mutable_aux_preds__Name_13, hlds__make_hlds__add_mutable_aux_preds__Type_14, hlds__make_hlds__add_mutable_aux_preds__Inst_16, hlds__make_hlds__add_mutable_aux_preds__Context_19);
                    }
#line 279 "add_mutable_aux_preds.m"
                    {
#line 279 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0(hlds__make_hlds__add_mutable_aux_preds__IOGetPredDecl_36, hlds__make_hlds__add_mutable_aux_preds__ModuleName_29, hlds__make_hlds__add_mutable_aux_preds__Name_13, (MR_Integer) 2, hlds__make_hlds__add_mutable_aux_preds__PredStatus_9, hlds__make_hlds__add_mutable_aux_preds__NeedQual_10, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_58_58, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_61_61, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_59_59, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_62_62);
                    }
#line 282 "add_mutable_aux_preds.m"
                    {
#line 282 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0(hlds__make_hlds__add_mutable_aux_preds__IOSetPredDecl_37, hlds__make_hlds__add_mutable_aux_preds__ModuleName_29, hlds__make_hlds__add_mutable_aux_preds__Name_13, (MR_Integer) 3, hlds__make_hlds__add_mutable_aux_preds__PredStatus_9, hlds__make_hlds__add_mutable_aux_preds__NeedQual_10, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_61_61, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_39, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_62_62, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_41);
                    }
#line 274 "add_mutable_aux_preds.m"
                  }
#line 273 "add_mutable_aux_preds.m"
                  break;
#line 273 "add_mutable_aux_preds.m"
                case (MR_Integer) 0:
#line 272 "add_mutable_aux_preds.m"
                  {
#line 272 "add_mutable_aux_preds.m"
                    *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_39 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_58_58;
#line 272 "add_mutable_aux_preds.m"
                    *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_41 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_59_59;
#line 272 "add_mutable_aux_preds.m"
                  }
#line 273 "add_mutable_aux_preds.m"
                  break;
#line 273 "add_mutable_aux_preds.m"
              }
#line 254 "add_mutable_aux_preds.m"
            }
#line 253 "add_mutable_aux_preds.m"
            break;
#line 253 "add_mutable_aux_preds.m"
        }
#line 184 "add_mutable_aux_preds.m"
      }
#line 177 "add_mutable_aux_preds.m"
  }
#line 172 "add_mutable_aux_preds.m"
}

#line 99 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__check_mutable_4_p_0(
#line 99 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_5,
#line 99 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_6,
#line 99 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_33,
#line 99 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_34)
#line 99 "add_mutable_aux_preds.m"
{
#line 102 "add_mutable_aux_preds.m"
  {
#line 102 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 102 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_8;
#line 102 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__Name_9;
#line 102 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_12;
#line 102 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_13;
#line 102 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_15;
#line 102 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Globals_17;
#line 102 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_18;
#line 102 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_19;
#line 102 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_20;
#line 102 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TrailMutableUpdates_23;
#line 102 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UseTrail_24;
#line 102 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_35_35;
#line 102 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_55_55;
#line 104 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Type_10;
#line 104 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___InitTerm_11;
#line 104 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___VarSet_14;
#line 104 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_16;

#line 103 "add_mutable_aux_preds.m"
    {
#line 103 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_6, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_8);
    }
#line 104 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_5, (MR_Integer) 0)));
#line 104 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Type_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_5, (MR_Integer) 1)));
#line 104 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___InitTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_5, (MR_Integer) 2)));
#line 104 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Inst_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_5, (MR_Integer) 3)));
#line 104 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutAttrs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_5, (MR_Integer) 4)));
#line 104 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___VarSet_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_5, (MR_Integer) 5)));
#line 104 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_5, (MR_Integer) 6)));
#line 104 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___SeqNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_5, (MR_Integer) 7)));
#line 106 "add_mutable_aux_preds.m"
    {
#line 106 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_6, &hlds__make_hlds__add_mutable_aux_preds__Globals_17);
    }
#line 107 "add_mutable_aux_preds.m"
    {
#line 107 "add_mutable_aux_preds.m"
      libs__globals__get_target_2_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_17, &hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_18);
    }
#line 113 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_19 = ((&hlds__make_hlds__add_mutable_aux_preds_vector_common_2[0 + hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_18]))->hlds__make_hlds__add_mutable_aux_preds__vector_common_type_2_0__vct_2_f_0;
#line 117 "add_mutable_aux_preds.m"
    {
#line 117 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_20 = parse_tree__prog_item__mutable_var_maybe_foreign_names_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_13);
    }
#line 120 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 119 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_35_35 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_33;
#line 120 "add_mutable_aux_preds.m"
    else
#line 121 "add_mutable_aux_preds.m"
      {
#line 121 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignNames_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_20, (MR_Integer) 0)));
#line 124 "add_mutable_aux_preds.m"
        MR_String hlds__make_hlds__add_mutable_aux_preds___TargetMutableName_22;

#line 124 "add_mutable_aux_preds.m"
        {
#line 124 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__get_global_name_from_foreign_names_9_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_6, hlds__make_hlds__add_mutable_aux_preds__Context_15, hlds__make_hlds__add_mutable_aux_preds__ModuleName_8, hlds__make_hlds__add_mutable_aux_preds__Name_9, hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_19, hlds__make_hlds__add_mutable_aux_preds__ForeignNames_21, &hlds__make_hlds__add_mutable_aux_preds___TargetMutableName_22, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_33, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_35_35);
        }
#line 121 "add_mutable_aux_preds.m"
      }
#line 131 "add_mutable_aux_preds.m"
    {
#line 131 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__TrailMutableUpdates_23 = parse_tree__prog_item__mutable_var_trailed_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_13);
    }
#line 132 "add_mutable_aux_preds.m"
    {
#line 132 "add_mutable_aux_preds.m"
      libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_17, (MR_Integer) 215, &hlds__make_hlds__add_mutable_aux_preds__UseTrail_24);
    }
#line 134 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__TrailMutableUpdates_23 == (MR_Integer) 1);
#line 134 "add_mutable_aux_preds.m"
    if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 135 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__UseTrail_24 == (MR_Integer) 0);
#line 143 "add_mutable_aux_preds.m"
    if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 138 "add_mutable_aux_preds.m"
      {
#line 138 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__TrailMsg_26;
#line 138 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__TrailSpec_27;
#line 138 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_53_53;

#line 139 "add_mutable_aux_preds.m"
        {
#line 139 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__TrailMsg_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 139 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TrailMsg_26, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_15));
#line 139 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TrailMsg_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[32])));
#line 139 "add_mutable_aux_preds.m"
        }
#line 141 "add_mutable_aux_preds.m"
        {
#line 141 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 141 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_53_53, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TrailMsg_26));
#line 141 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 141 "add_mutable_aux_preds.m"
        }
#line 140 "add_mutable_aux_preds.m"
        {
#line 140 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__TrailSpec_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 140 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TrailSpec_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 140 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TrailSpec_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 140 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TrailSpec_27, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_53_53));
#line 140 "add_mutable_aux_preds.m"
        }
#line 142 "add_mutable_aux_preds.m"
        {
#line 142 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 142 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_55_55, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TrailSpec_27));
#line 142 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_55_55, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_35_35));
#line 142 "add_mutable_aux_preds.m"
        }
#line 138 "add_mutable_aux_preds.m"
      }
#line 143 "add_mutable_aux_preds.m"
    else
#line 143 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_55_55 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_35_35;
#line 149 "add_mutable_aux_preds.m"
    {
#line 149 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__hlds_code_util__is_valid_mutable_inst_2_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_6, hlds__make_hlds__add_mutable_aux_preds__Inst_12);
    }
#line 151 "add_mutable_aux_preds.m"
    if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 151 "add_mutable_aux_preds.m"
      *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_34 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_55_55;
#line 151 "add_mutable_aux_preds.m"
    else
#line 155 "add_mutable_aux_preds.m"
      {
#line 155 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__DummyInstVarset_28;
#line 155 "add_mutable_aux_preds.m"
        MR_String hlds__make_hlds__add_mutable_aux_preds__InstStr_29;
#line 155 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__InvalidInstPieces_30;
#line 155 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__InvalidInstMsg_31;
#line 155 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__InvalidInstSpec_32;
#line 155 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_59_59;
#line 155 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_60_60;
#line 155 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_71_71;
#line 155 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_72_72;
#line 155 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_76_76;

#line 155 "add_mutable_aux_preds.m"
        {
#line 155 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__DummyInstVarset_28 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
        }
#line 156 "add_mutable_aux_preds.m"
        {
#line 156 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__InstStr_29 = hlds__hlds_out__hlds_out_mode__mercury_expanded_inst_to_string_4_f_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_6, hlds__make_hlds__add_mutable_aux_preds__DummyInstVarset_28, hlds__make_hlds__add_mutable_aux_preds__Inst_12);
        }
#line 158 "add_mutable_aux_preds.m"
        {
#line 158 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_60_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 158 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__V_60_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 158 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__V_60_60, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InstStr_29));
#line 158 "add_mutable_aux_preds.m"
        }
#line 158 "add_mutable_aux_preds.m"
        {
#line 158 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 158 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_59_59, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_60_60));
#line 158 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[21])));
#line 158 "add_mutable_aux_preds.m"
        }
#line 158 "add_mutable_aux_preds.m"
        {
#line 158 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__InvalidInstPieces_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 158 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__InvalidInstPieces_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[33])));
#line 158 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__InvalidInstPieces_30, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_59_59));
#line 158 "add_mutable_aux_preds.m"
        }
#line 163 "add_mutable_aux_preds.m"
        {
#line 163 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 163 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_72_72, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InvalidInstPieces_30));
#line 163 "add_mutable_aux_preds.m"
        }
#line 163 "add_mutable_aux_preds.m"
        {
#line 163 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 163 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_71_71, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_72_72));
#line 163 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 163 "add_mutable_aux_preds.m"
        }
#line 163 "add_mutable_aux_preds.m"
        {
#line 163 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__InvalidInstMsg_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 163 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__InvalidInstMsg_31, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_15));
#line 163 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__InvalidInstMsg_31, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_71_71));
#line 163 "add_mutable_aux_preds.m"
        }
#line 165 "add_mutable_aux_preds.m"
        {
#line 165 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 165 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_76_76, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InvalidInstMsg_31));
#line 165 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 165 "add_mutable_aux_preds.m"
        }
#line 164 "add_mutable_aux_preds.m"
        {
#line 164 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__InvalidInstSpec_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 164 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__InvalidInstSpec_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 164 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__InvalidInstSpec_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 164 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__InvalidInstSpec_32, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_76_76));
#line 164 "add_mutable_aux_preds.m"
        }
#line 166 "add_mutable_aux_preds.m"
        {
#line 166 "add_mutable_aux_preds.m"
          MR_Word base;
#line 166 "add_mutable_aux_preds.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 166 "add_mutable_aux_preds.m"
          *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_34 = base;
#line 166 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InvalidInstSpec_32));
#line 166 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_55_55));
#line 166 "add_mutable_aux_preds.m"
        }
#line 155 "add_mutable_aux_preds.m"
      }
#line 102 "add_mutable_aux_preds.m"
  }
#line 99 "add_mutable_aux_preds.m"
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
#line 431 "add_mutable_aux_preds.m"
  {
#line 431 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 431 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__SectionInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__SectionItem_8, (MR_Integer) 0)));
#line 431 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__SectionItem_8, (MR_Integer) 1)));
#line 431 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMercuryStatus_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__SectionInfo_12, (MR_Integer) 0)));
#line 433 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___NeedQual_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__SectionInfo_12, (MR_Integer) 1)));

#line 439 "add_mutable_aux_preds.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_mutable_aux_preds__ItemMercuryStatus_14)) == (MR_mktag((MR_Integer) 1))))
#line 440 "add_mutable_aux_preds.m"
      {
#line 440 "add_mutable_aux_preds.m"
        *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_20 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_19;
#line 440 "add_mutable_aux_preds.m"
        *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_22 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_21;
#line 440 "add_mutable_aux_preds.m"
        *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_24 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_23;
#line 440 "add_mutable_aux_preds.m"
      }
#line 439 "add_mutable_aux_preds.m"
    else
#line 435 "add_mutable_aux_preds.m"
      {
#line 435 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_17;

#line 436 "add_mutable_aux_preds.m"
        {
#line 436 "add_mutable_aux_preds.m"
          hlds__status__item_mercury_status_to_pred_status_2_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMercuryStatus_14, &hlds__make_hlds__add_mutable_aux_preds__PredStatus_17);
        }
#line 437 "add_mutable_aux_preds.m"
        {
#line 437 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_defns_for_mutable_8_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, hlds__make_hlds__add_mutable_aux_preds__PredStatus_17, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_19, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_20, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_21, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_22, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_23, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_24);
        }
#line 435 "add_mutable_aux_preds.m"
      }
#line 431 "add_mutable_aux_preds.m"
  }
#line 32 "add_mutable_aux_preds.m"
}

#line 23 "add_mutable_aux_preds.m"
void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_if_local_5_p_0(
#line 23 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__SectionItem_6,
#line 23 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_24,
#line 23 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_25,
#line 23 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_26,
#line 23 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_27)
#line 23 "add_mutable_aux_preds.m"
{
#line 68 "add_mutable_aux_preds.m"
  {
#line 68 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 68 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__SectionInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__SectionItem_6, (MR_Integer) 0)));
#line 68 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__SectionItem_6, (MR_Integer) 1)));
#line 68 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMercuryStatus_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__SectionInfo_9, (MR_Integer) 0)));
#line 68 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedQual_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__SectionInfo_9, (MR_Integer) 1)));

#line 91 "add_mutable_aux_preds.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_mutable_aux_preds__ItemMercuryStatus_11)) == (MR_mktag((MR_Integer) 1))))
#line 92 "add_mutable_aux_preds.m"
      {
#line 92 "add_mutable_aux_preds.m"
        *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_25 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_24;
#line 92 "add_mutable_aux_preds.m"
        *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_27 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_26;
#line 92 "add_mutable_aux_preds.m"
      }
#line 91 "add_mutable_aux_preds.m"
    else
#line 72 "add_mutable_aux_preds.m"
      {
#line 72 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemExport_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMercuryStatus_11, (MR_Integer) 0)));
#line 72 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_22;
#line 72 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_29_29;
#line 72 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_36_36;

#line 79 "add_mutable_aux_preds.m"
#line 79 "add_mutable_aux_preds.m"
        switch (hlds__make_hlds__add_mutable_aux_preds__ItemExport_13) {
#line 79 "add_mutable_aux_preds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 79 "add_mutable_aux_preds.m"
          case (MR_Integer) 2:
#line 80 "add_mutable_aux_preds.m"
            {
#line 80 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_10, (MR_Integer) 6)));
#line 81 "add_mutable_aux_preds.m"
              MR_String hlds__make_hlds__add_mutable_aux_preds___Name_14 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_10, (MR_Integer) 0)));
#line 81 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds___Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_10, (MR_Integer) 1)));
#line 81 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds___InitTerm_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_10, (MR_Integer) 2)));
#line 81 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds___Inst_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_10, (MR_Integer) 3)));
#line 81 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds___MutAttrs_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_10, (MR_Integer) 4)));
#line 81 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds___VarSet_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_10, (MR_Integer) 5)));
#line 81 "add_mutable_aux_preds.m"
              MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_10, (MR_Integer) 7)));

#line 83 "add_mutable_aux_preds.m"
              {
#line 83 "add_mutable_aux_preds.m"
                hlds__make_hlds__make_hlds_error__error_is_exported_4_p_0(hlds__make_hlds__add_mutable_aux_preds__Context_20, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[10]), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_26, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_29_29);
              }
#line 80 "add_mutable_aux_preds.m"
            }
#line 79 "add_mutable_aux_preds.m"
            break;
#line 79 "add_mutable_aux_preds.m"
          case (MR_Integer) 0:
#line 74 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_29_29 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_26;
#line 79 "add_mutable_aux_preds.m"
            break;
#line 79 "add_mutable_aux_preds.m"
          case (MR_Integer) 1:
#line 75 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_29_29 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_26;
#line 79 "add_mutable_aux_preds.m"
            break;
#line 79 "add_mutable_aux_preds.m"
        }
#line 86 "add_mutable_aux_preds.m"
        {
#line 86 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__check_mutable_4_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMutable_10, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_24, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_29_29, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_36_36);
        }
#line 88 "add_mutable_aux_preds.m"
        {
#line 88 "add_mutable_aux_preds.m"
          hlds__status__item_mercury_status_to_pred_status_2_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMercuryStatus_11, &hlds__make_hlds__add_mutable_aux_preds__PredStatus_22);
        }
#line 89 "add_mutable_aux_preds.m"
        {
#line 89 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMutable_10, hlds__make_hlds__add_mutable_aux_preds__PredStatus_22, hlds__make_hlds__add_mutable_aux_preds__NeedQual_12, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_24, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_25, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_36_36, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_27);
        }
#line 72 "add_mutable_aux_preds.m"
      }
#line 68 "add_mutable_aux_preds.m"
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
