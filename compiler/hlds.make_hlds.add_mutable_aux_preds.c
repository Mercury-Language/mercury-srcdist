/*
** Automatically generated from `add_mutable_aux_preds.m'
** by the Mercury compiler,
** version rotd-2015-09-15
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

#line 1041 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_main_get_set_preds__1041__1_2_p_0(
#line 1041 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__AttachToIO_37,
#line 1041 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_252);

#line 843 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_unsafe_get_set_preds__843__1_2_p_0(
#line 843 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_31,
#line 843 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_66);

#line 756 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_lock_unlock_preds__756__1_2_p_0(
#line 756 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_31,
#line 756 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_59);

#line 695 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_pre_init_pred__695__1_2_p_0(
#line 695 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_31,
#line 695 "add_mutable_aux_preds.m"
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

#line 1351 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_unsafe_get_set_preds_0_0(
#line 1351 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1351 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1351 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3);

#line 1351 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_unsafe_get_set_preds_0_0(
#line 1351 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1,
#line 1351 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);

#line 1343 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_pre_init_pred_0_0(
#line 1343 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1343 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1343 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3);

#line 1343 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_pre_init_pred_0_0(
#line 1343 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1,
#line 1343 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);

#line 1347 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_lock_unlock_preds_0_0(
#line 1347 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1347 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1347 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3);

#line 1347 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_lock_unlock_preds_0_0(
#line 1347 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1,
#line 1347 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);

#line 1355 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_target_params_0_0(
#line 1355 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1355 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1355 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3);

#line 1355 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_target_params_0_0(
#line 1355 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1355 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);

#line 1337 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_impl_lang_0_0(
#line 1337 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1337 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1337 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3);

#line 1337 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_impl_lang_0_0(
#line 1337 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1,
#line 1337 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);

#line 1369 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__get_mutable_target_params_3_p_0(
#line 1369 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_4,
#line 1369 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_5,
#line 1369 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_6);

#line 1328 "add_mutable_aux_preds.m"
static MR_String MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__global_foreign_type_name_4_f_0(
#line 1328 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1328 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_2,
#line 1328 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_3,
#line 1328 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_4);

#line 1306 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__get_matching_foreign_names_3_p_0(
#line 1306 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1306 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1306 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3);

#line 1272 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__get_global_name_from_foreign_names_9_p_0(
#line 1272 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_10,
#line 1272 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_11,
#line 1272 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_12,
#line 1272 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_13,
#line 1272 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_14,
#line 1272 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignNames_15,
#line 1272 "add_mutable_aux_preds.m"
  MR_String * hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_16,
#line 1272 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_28,
#line 1272 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_29);

#line 1187 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_init_pred_11_p_0(
#line 1187 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12,
#line 1187 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_13,
#line 1187 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_14,
#line 1187 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_15,
#line 1187 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_16,
#line 1187 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39,
#line 1187 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_40,
#line 1187 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_41,
#line 1187 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_42,
#line 1187 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_43,
#line 1187 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_44);

#line 1041 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_main_get_set_preds_14_p_0_1(
#line 1041 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 963 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_main_get_set_preds_14_p_0(
#line 963 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15,
#line 963 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_16,
#line 963 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17,
#line 963 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_18,
#line 963 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_19,
#line 963 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_20,
#line 963 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21,
#line 963 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_22,
#line 963 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_85,
#line 963 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_86,
#line 963 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_87,
#line 963 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_88,
#line 963 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_89,
#line 963 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_90);

#line 843 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_unsafe_get_set_preds_12_p_0_1(
#line 843 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 827 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_unsafe_get_set_preds_12_p_0(
#line 827 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13,
#line 827 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_14,
#line 827 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15,
#line 827 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_16,
#line 827 "add_mutable_aux_preds.m"
  MR_Tuple * hlds__make_hlds__add_mutable_aux_preds__UnsafeGetSetExprs_17,
#line 827 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_18,
#line 827 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_56,
#line 827 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_57,
#line 827 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_58,
#line 827 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_59,
#line 827 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_60,
#line 827 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_61);

#line 756 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_lock_unlock_preds_12_p_0_1(
#line 756 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 741 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_lock_unlock_preds_12_p_0(
#line 741 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13,
#line 741 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_14,
#line 741 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15,
#line 741 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_16,
#line 741 "add_mutable_aux_preds.m"
  MR_Tuple * hlds__make_hlds__add_mutable_aux_preds__LockUnlockExprs_17,
#line 741 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_18,
#line 741 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_49,
#line 741 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_50,
#line 741 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_51,
#line 741 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_52,
#line 741 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_53,
#line 741 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_54);

#line 695 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_pre_init_pred_12_p_0_1(
#line 695 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 679 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_pre_init_pred_12_p_0(
#line 679 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13,
#line 679 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_14,
#line 679 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15,
#line 679 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_16,
#line 679 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_17,
#line 679 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_18,
#line 679 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_42,
#line 679 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_43,
#line 679 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_44,
#line 679 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_45,
#line 679 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_46,
#line 679 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_47);

#line 595 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_aux_preds_10_p_0(
#line 595 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11,
#line 595 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_12,
#line 595 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_13,
#line 595 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_14,
#line 595 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34,
#line 595 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_35,
#line 595 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_36,
#line 595 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_37,
#line 595 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38,
#line 595 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39);

#line 559 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_global_var_java_6_p_0(
#line 559 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_7,
#line 559 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_8,
#line 559 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_9,
#line 559 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_10,
#line 559 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_15,
#line 559 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_16);

#line 458 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_global_var_c_7_p_0(
#line 458 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_8,
#line 458 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_9,
#line 458 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_10,
#line 458 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_11,
#line 458 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_12,
#line 458 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_26,
#line 458 "add_mutable_aux_preds.m"
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


static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[39][2];

static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[13][5];

static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[3][1];




static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[39][2] = {
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
    ((MR_Box) ((MR_String) "backend."))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration in non-trailing grade."))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[7])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "mutable"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: trailed"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[13])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[17])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not a valid inst for a"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) "#endif\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) ";\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[21])))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) ", MR_MUTEX_ATTR);\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[21])))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) "end\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_String) "       X = Value\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[24])))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_String) "   {get_mutable_ack, Value} ->\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[25])))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_String) "receive\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[26])))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_String) ", self()},\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[27])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: foreign_name mutable attribute"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not yet implemented for the"))
  },
  /* row 31 */
  {
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[0])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the inst"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 34 */
  {
    ((MR_Box) ((MR_Integer) 22)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 35 */
  {
    ((MR_Box) ((MR_String) ">();\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 36 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: multiple foreign_name attributes"))
  },
  /* row 38 */
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

static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[3][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[15])))
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



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1456 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1464 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1472 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1480 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__add_mutable_aux_preds__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1488 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1496 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1504 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_determinism_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0
  }
};

#line 1512 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_0 = {
  (MR_String) "mutable_lang_c",
  (MR_Integer) 0
};

#line 1518 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_1 = {
  (MR_String) "mutable_lang_csharp",
  (MR_Integer) 1
};

#line 1524 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_2 = {
  (MR_String) "mutable_lang_java",
  (MR_Integer) 2
};

#line 1530 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_3 = {
  (MR_String) "mutable_lang_erlang",
  (MR_Integer) 3
};

#line 1536 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_value_ordered_mutable_impl_lang_0[4] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_1,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_2,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_3
};

#line 1544 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_name_ordered_mutable_impl_lang_0[4] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_1,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_3,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_2
};

#line 1552 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_mutable_impl_lang_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2
};

#line 1560 "hlds.make_hlds.add_mutable_aux_preds.c"
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

#line 1577 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_PseudoTypeInfo hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__field_types_mutable_target_params_0_0[6] = {
  (MR_PseudoTypeInfo) &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_mutable_impl_lang_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_box_policy_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_need_pre_init_pred_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_need_lock_unlock_preds_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_need_unsafe_get_set_preds_0
};

#line 1587 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_DuArgLocn hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__field_locns_mutable_target_params_0_0[6] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 3
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
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 8,
    (MR_Integer) 1
  }
};

#line 1621 "hlds.make_hlds.add_mutable_aux_preds.c"
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

#line 1636 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_stag_ordered_mutable_target_params_0_0[1] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_functor_desc_mutable_target_params_0_0
};

#line 1641 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_DuPtagLayout hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_ptag_ordered_mutable_target_params_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_stag_ordered_mutable_target_params_0_0
  }
};

#line 1650 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_name_ordered_mutable_target_params_0[1] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_functor_desc_mutable_target_params_0_0
};

#line 1655 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_mutable_target_params_0[1] = {
  (MR_Integer) 0
};

#line 1660 "hlds.make_hlds.add_mutable_aux_preds.c"
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

#line 1677 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_lock_unlock_preds_0_0 = {
  (MR_String) "dont_need_lock_unlock_preds",
  (MR_Integer) 0
};

#line 1683 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_lock_unlock_preds_0_1 = {
  (MR_String) "need_lock_unlock_preds",
  (MR_Integer) 1
};

#line 1689 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_value_ordered_need_lock_unlock_preds_0[2] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_lock_unlock_preds_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_lock_unlock_preds_0_1
};

#line 1695 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_name_ordered_need_lock_unlock_preds_0[2] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_lock_unlock_preds_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_lock_unlock_preds_0_1
};

#line 1701 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_need_lock_unlock_preds_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1707 "hlds.make_hlds.add_mutable_aux_preds.c"
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

#line 1724 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_pre_init_pred_0_0 = {
  (MR_String) "dont_need_pre_init_pred",
  (MR_Integer) 0
};

#line 1730 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_pre_init_pred_0_1 = {
  (MR_String) "need_pre_init_pred",
  (MR_Integer) 1
};

#line 1736 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_value_ordered_need_pre_init_pred_0[2] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_pre_init_pred_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_pre_init_pred_0_1
};

#line 1742 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_name_ordered_need_pre_init_pred_0[2] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_pre_init_pred_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_pre_init_pred_0_1
};

#line 1748 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_need_pre_init_pred_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1754 "hlds.make_hlds.add_mutable_aux_preds.c"
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

#line 1771 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_unsafe_get_set_preds_0_0 = {
  (MR_String) "dont_need_unsafe_get_set_preds",
  (MR_Integer) 0
};

#line 1777 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_unsafe_get_set_preds_0_1 = {
  (MR_String) "need_unsafe_get_set_preds",
  (MR_Integer) 1
};

#line 1783 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_value_ordered_need_unsafe_get_set_preds_0[2] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_unsafe_get_set_preds_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_unsafe_get_set_preds_0_1
};

#line 1789 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_name_ordered_need_unsafe_get_set_preds_0[2] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_unsafe_get_set_preds_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_unsafe_get_set_preds_0_1
};

#line 1795 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_need_unsafe_get_set_preds_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1801 "hlds.make_hlds.add_mutable_aux_preds.c"
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

#line 1818 "hlds.make_hlds.add_mutable_aux_preds.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_impl_lang_0_0_10001(
#line 1821 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 1823 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2)
#line 1825 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 1827 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 1829 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 1832 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 1834 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_impl_lang_0_0(((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2));
    }
#line 1837 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1839 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 1841 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 1844 "hlds.make_hlds.add_mutable_aux_preds.c"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_impl_lang_0_0_10001(
#line 1847 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box * hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 1849 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2,
#line 1851 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3)
#line 1853 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 1855 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 1857 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1;

#line 1860 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 1862 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_impl_lang_0_0(&hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3));
    }
#line 1865 "hlds.make_hlds.add_mutable_aux_preds.c"
    *hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1));
#line 1867 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 1869 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 1872 "hlds.make_hlds.add_mutable_aux_preds.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_target_params_0_0_10001(
#line 1875 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 1877 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2)
#line 1879 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 1881 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 1883 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 1886 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 1888 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_target_params_0_0(((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2));
    }
#line 1891 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1893 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 1895 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 1898 "hlds.make_hlds.add_mutable_aux_preds.c"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_target_params_0_0_10001(
#line 1901 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box * hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 1903 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2,
#line 1905 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3)
#line 1907 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 1909 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 1911 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1;

#line 1914 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 1916 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_target_params_0_0(&hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3));
    }
#line 1919 "hlds.make_hlds.add_mutable_aux_preds.c"
    *hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1));
#line 1921 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 1923 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 1926 "hlds.make_hlds.add_mutable_aux_preds.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_lock_unlock_preds_0_0_10001(
#line 1929 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 1931 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2)
#line 1933 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 1935 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 1937 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 1940 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 1942 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds____Unify____need_lock_unlock_preds_0_0(((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2));
    }
#line 1945 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1947 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 1949 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 1952 "hlds.make_hlds.add_mutable_aux_preds.c"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_lock_unlock_preds_0_0_10001(
#line 1955 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box * hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 1957 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2,
#line 1959 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3)
#line 1961 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 1963 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 1965 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1;

#line 1968 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 1970 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds____Compare____need_lock_unlock_preds_0_0(&hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3));
    }
#line 1973 "hlds.make_hlds.add_mutable_aux_preds.c"
    *hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1));
#line 1975 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 1977 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 1980 "hlds.make_hlds.add_mutable_aux_preds.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_pre_init_pred_0_0_10001(
#line 1983 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 1985 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2)
#line 1987 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 1989 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 1991 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 1994 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 1996 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds____Unify____need_pre_init_pred_0_0(((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2));
    }
#line 1999 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 2001 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 2003 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 2006 "hlds.make_hlds.add_mutable_aux_preds.c"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_pre_init_pred_0_0_10001(
#line 2009 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box * hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 2011 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2,
#line 2013 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3)
#line 2015 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 2017 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 2019 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1;

#line 2022 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 2024 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds____Compare____need_pre_init_pred_0_0(&hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3));
    }
#line 2027 "hlds.make_hlds.add_mutable_aux_preds.c"
    *hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1));
#line 2029 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 2031 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 2034 "hlds.make_hlds.add_mutable_aux_preds.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_unsafe_get_set_preds_0_0_10001(
#line 2037 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 2039 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2)
#line 2041 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 2043 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 2045 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 2048 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 2050 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds____Unify____need_unsafe_get_set_preds_0_0(((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2));
    }
#line 2053 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 2055 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 2057 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 2060 "hlds.make_hlds.add_mutable_aux_preds.c"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_unsafe_get_set_preds_0_0_10001(
#line 2063 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box * hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 2065 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2,
#line 2067 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3)
#line 2069 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 2071 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 2073 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1;

#line 2076 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 2078 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds____Compare____need_unsafe_get_set_preds_0_0(&hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3));
    }
#line 2081 "hlds.make_hlds.add_mutable_aux_preds.c"
    *hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1));
#line 2083 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 2085 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 1041 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_main_get_set_preds__1041__1_2_p_0(
#line 1041 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__AttachToIO_37,
#line 1041 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_252)
#line 1041 "add_mutable_aux_preds.m"
{
#line 1041 "add_mutable_aux_preds.m"
  {
#line 1041 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__AttachToIO_37 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_252);

#line 1041 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1041 "add_mutable_aux_preds.m"
  }
#line 1041 "add_mutable_aux_preds.m"
}

#line 843 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_unsafe_get_set_preds__843__1_2_p_0(
#line 843 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_31,
#line 843 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_66)
#line 843 "add_mutable_aux_preds.m"
{
#line 843 "add_mutable_aux_preds.m"
  {
#line 843 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__IsConstant_31 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_66);

#line 843 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 843 "add_mutable_aux_preds.m"
  }
#line 843 "add_mutable_aux_preds.m"
}

#line 756 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_lock_unlock_preds__756__1_2_p_0(
#line 756 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_31,
#line 756 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_59)
#line 756 "add_mutable_aux_preds.m"
{
#line 756 "add_mutable_aux_preds.m"
  {
#line 756 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__IsConstant_31 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_59);

#line 756 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 756 "add_mutable_aux_preds.m"
  }
#line 756 "add_mutable_aux_preds.m"
}

#line 695 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_pre_init_pred__695__1_2_p_0(
#line 695 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_31,
#line 695 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_52)
#line 695 "add_mutable_aux_preds.m"
{
#line 695 "add_mutable_aux_preds.m"
  {
#line 695 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__IsConstant_31 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_52);

#line 695 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 695 "add_mutable_aux_preds.m"
  }
#line 695 "add_mutable_aux_preds.m"
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

#line 1351 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_unsafe_get_set_preds_0_0(
#line 1351 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1351 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1351 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3)
#line 1351 "add_mutable_aux_preds.m"
{
#line 1351 "add_mutable_aux_preds.m"
  {
#line 1351 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1351 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar1_4 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2;
#line 1351 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar2_5 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3;

#line 1351 "add_mutable_aux_preds.m"
    {
#line 1351 "add_mutable_aux_preds.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar1_4, hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar2_5);
#line 1351 "add_mutable_aux_preds.m"
      return;
    }
#line 1351 "add_mutable_aux_preds.m"
  }
#line 1351 "add_mutable_aux_preds.m"
}

#line 1351 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_unsafe_get_set_preds_0_0(
#line 1351 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1,
#line 1351 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2)
#line 1351 "add_mutable_aux_preds.m"
{
#line 2500 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 2502 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);

#line 2505 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 2507 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 1351 "add_mutable_aux_preds.m"
}

#line 1343 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_pre_init_pred_0_0(
#line 1343 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1343 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1343 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3)
#line 1343 "add_mutable_aux_preds.m"
{
#line 1343 "add_mutable_aux_preds.m"
  {
#line 1343 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1343 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar1_4 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2;
#line 1343 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar2_5 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3;

#line 1343 "add_mutable_aux_preds.m"
    {
#line 1343 "add_mutable_aux_preds.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar1_4, hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar2_5);
#line 1343 "add_mutable_aux_preds.m"
      return;
    }
#line 1343 "add_mutable_aux_preds.m"
  }
#line 1343 "add_mutable_aux_preds.m"
}

#line 1343 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_pre_init_pred_0_0(
#line 1343 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1,
#line 1343 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2)
#line 1343 "add_mutable_aux_preds.m"
{
#line 2553 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 2555 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);

#line 2558 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 2560 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 1343 "add_mutable_aux_preds.m"
}

#line 1347 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_lock_unlock_preds_0_0(
#line 1347 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1347 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1347 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3)
#line 1347 "add_mutable_aux_preds.m"
{
#line 1347 "add_mutable_aux_preds.m"
  {
#line 1347 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1347 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar1_4 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2;
#line 1347 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar2_5 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3;

#line 1347 "add_mutable_aux_preds.m"
    {
#line 1347 "add_mutable_aux_preds.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar1_4, hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar2_5);
#line 1347 "add_mutable_aux_preds.m"
      return;
    }
#line 1347 "add_mutable_aux_preds.m"
  }
#line 1347 "add_mutable_aux_preds.m"
}

#line 1347 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_lock_unlock_preds_0_0(
#line 1347 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1,
#line 1347 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2)
#line 1347 "add_mutable_aux_preds.m"
{
#line 2606 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 2608 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);

#line 2611 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 2613 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 1347 "add_mutable_aux_preds.m"
}

#line 1355 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_target_params_0_0(
#line 1355 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1355 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1355 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3)
#line 1355 "add_mutable_aux_preds.m"
{
#line 1355 "add_mutable_aux_preds.m"
  {
#line 1355 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1355 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__CastX_21 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2;
#line 1355 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__CastY_22 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3;

#line 1355 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__CastX_21 == hlds__make_hlds__add_mutable_aux_preds__CastY_22);
#line 1355 "add_mutable_aux_preds.m"
    if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 2642 "hlds.make_hlds.add_mutable_aux_preds.c"
      *hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1 = (MR_Integer) 0;
#line 1355 "add_mutable_aux_preds.m"
    else
#line 1355 "add_mutable_aux_preds.m"
      {
#line 1355 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1355 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 1355 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1355 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1355 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1355 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 1355 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1355 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 1355 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1355 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1355 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1355 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 1355 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_16_16;
#line 1355 "add_mutable_aux_preds.m"
        MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_29_29 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_4_4;
#line 1355 "add_mutable_aux_preds.m"
        MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_30_30 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_10_10;

#line 1355 "add_mutable_aux_preds.m"
        {
#line 1355 "add_mutable_aux_preds.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__make_hlds__add_mutable_aux_preds__V_16_16, hlds__make_hlds__add_mutable_aux_preds__V_29_29, hlds__make_hlds__add_mutable_aux_preds__V_30_30);
        }
#line 2684 "hlds.make_hlds.add_mutable_aux_preds.c"
        hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_16_16 == (MR_Integer) 0);
#line 1355 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__succeeded = !(hlds__make_hlds__add_mutable_aux_preds__succeeded);
#line 1355 "add_mutable_aux_preds.m"
        if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1355 "add_mutable_aux_preds.m"
          *hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1 = hlds__make_hlds__add_mutable_aux_preds__V_16_16;
#line 1355 "add_mutable_aux_preds.m"
        else
#line 1355 "add_mutable_aux_preds.m"
          {
#line 1355 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_17_17;
#line 1355 "add_mutable_aux_preds.m"
            MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_31_31 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_5_5;
#line 1355 "add_mutable_aux_preds.m"
            MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_32_32 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_11_11;

#line 1355 "add_mutable_aux_preds.m"
            {
#line 1355 "add_mutable_aux_preds.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__make_hlds__add_mutable_aux_preds__V_17_17, hlds__make_hlds__add_mutable_aux_preds__V_31_31, hlds__make_hlds__add_mutable_aux_preds__V_32_32);
            }
#line 2708 "hlds.make_hlds.add_mutable_aux_preds.c"
            hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_17_17 == (MR_Integer) 0);
#line 1355 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__succeeded = !(hlds__make_hlds__add_mutable_aux_preds__succeeded);
#line 1355 "add_mutable_aux_preds.m"
            if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1355 "add_mutable_aux_preds.m"
              *hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1 = hlds__make_hlds__add_mutable_aux_preds__V_17_17;
#line 1355 "add_mutable_aux_preds.m"
            else
#line 1355 "add_mutable_aux_preds.m"
              {
#line 1355 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_18_18;
#line 1355 "add_mutable_aux_preds.m"
                MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_33_33 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_6_6;
#line 1355 "add_mutable_aux_preds.m"
                MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_34_34 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_12_12;

#line 1355 "add_mutable_aux_preds.m"
                {
#line 1355 "add_mutable_aux_preds.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__make_hlds__add_mutable_aux_preds__V_18_18, hlds__make_hlds__add_mutable_aux_preds__V_33_33, hlds__make_hlds__add_mutable_aux_preds__V_34_34);
                }
#line 2732 "hlds.make_hlds.add_mutable_aux_preds.c"
                hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_18_18 == (MR_Integer) 0);
#line 1355 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__succeeded = !(hlds__make_hlds__add_mutable_aux_preds__succeeded);
#line 1355 "add_mutable_aux_preds.m"
                if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1355 "add_mutable_aux_preds.m"
                  *hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1 = hlds__make_hlds__add_mutable_aux_preds__V_18_18;
#line 1355 "add_mutable_aux_preds.m"
                else
#line 1355 "add_mutable_aux_preds.m"
                  {
#line 1355 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_19_19;
#line 1355 "add_mutable_aux_preds.m"
                    MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_35_35 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_7_7;
#line 1355 "add_mutable_aux_preds.m"
                    MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_36_36 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_13_13;

#line 1355 "add_mutable_aux_preds.m"
                    {
#line 1355 "add_mutable_aux_preds.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__make_hlds__add_mutable_aux_preds__V_19_19, hlds__make_hlds__add_mutable_aux_preds__V_35_35, hlds__make_hlds__add_mutable_aux_preds__V_36_36);
                    }
#line 2756 "hlds.make_hlds.add_mutable_aux_preds.c"
                    hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_19_19 == (MR_Integer) 0);
#line 1355 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__succeeded = !(hlds__make_hlds__add_mutable_aux_preds__succeeded);
#line 1355 "add_mutable_aux_preds.m"
                    if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1355 "add_mutable_aux_preds.m"
                      *hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1 = hlds__make_hlds__add_mutable_aux_preds__V_19_19;
#line 1355 "add_mutable_aux_preds.m"
                    else
#line 1355 "add_mutable_aux_preds.m"
                      {
#line 1355 "add_mutable_aux_preds.m"
                        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_20_20;
#line 1355 "add_mutable_aux_preds.m"
                        MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_37_37 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_8_8;
#line 1355 "add_mutable_aux_preds.m"
                        MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_38_38 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_14_14;

#line 1355 "add_mutable_aux_preds.m"
                        {
#line 1355 "add_mutable_aux_preds.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__make_hlds__add_mutable_aux_preds__V_20_20, hlds__make_hlds__add_mutable_aux_preds__V_37_37, hlds__make_hlds__add_mutable_aux_preds__V_38_38);
                        }
#line 2780 "hlds.make_hlds.add_mutable_aux_preds.c"
                        hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_20_20 == (MR_Integer) 0);
#line 1355 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__succeeded = !(hlds__make_hlds__add_mutable_aux_preds__succeeded);
#line 1355 "add_mutable_aux_preds.m"
                        if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1355 "add_mutable_aux_preds.m"
                          *hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1 = hlds__make_hlds__add_mutable_aux_preds__V_20_20;
#line 1355 "add_mutable_aux_preds.m"
                        else
#line 1355 "add_mutable_aux_preds.m"
                          {
#line 1355 "add_mutable_aux_preds.m"
                            MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_39_39 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_9_9;
#line 1355 "add_mutable_aux_preds.m"
                            MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_40_40 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_15_15;

#line 1355 "add_mutable_aux_preds.m"
                            {
#line 1355 "add_mutable_aux_preds.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, hlds__make_hlds__add_mutable_aux_preds__V_39_39, hlds__make_hlds__add_mutable_aux_preds__V_40_40);
#line 1355 "add_mutable_aux_preds.m"
                              return;
                            }
#line 1355 "add_mutable_aux_preds.m"
                          }
#line 1355 "add_mutable_aux_preds.m"
                      }
#line 1355 "add_mutable_aux_preds.m"
                  }
#line 1355 "add_mutable_aux_preds.m"
              }
#line 1355 "add_mutable_aux_preds.m"
          }
#line 1355 "add_mutable_aux_preds.m"
      }
#line 1355 "add_mutable_aux_preds.m"
  }
#line 1355 "add_mutable_aux_preds.m"
}

#line 1355 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_target_params_0_0(
#line 1355 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1355 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2)
#line 1355 "add_mutable_aux_preds.m"
{
#line 1355 "add_mutable_aux_preds.m"
  {
#line 1355 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1355 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__CastX_15 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1;
#line 1355 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__CastY_16 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2;

#line 1355 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__CastX_15 == hlds__make_hlds__add_mutable_aux_preds__CastY_16);
#line 1355 "add_mutable_aux_preds.m"
    if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1355 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = MR_TRUE;
#line 1355 "add_mutable_aux_preds.m"
    else
#line 1355 "add_mutable_aux_preds.m"
      {
#line 1355 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_3_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1355 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 1355 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1355 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1355 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1355 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 1355 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1355 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 1355 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1355 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1355 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1355 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);

#line 2874 "hlds.make_hlds.add_mutable_aux_preds.c"
        hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_3_3 == hlds__make_hlds__add_mutable_aux_preds__V_9_9);
#line 1355 "add_mutable_aux_preds.m"
        if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1355 "add_mutable_aux_preds.m"
          {
#line 2880 "hlds.make_hlds.add_mutable_aux_preds.c"
            hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_4_4 == hlds__make_hlds__add_mutable_aux_preds__V_10_10);
#line 1355 "add_mutable_aux_preds.m"
            if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1355 "add_mutable_aux_preds.m"
              {
#line 2886 "hlds.make_hlds.add_mutable_aux_preds.c"
                hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_5_5 == hlds__make_hlds__add_mutable_aux_preds__V_11_11);
#line 1355 "add_mutable_aux_preds.m"
                if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1355 "add_mutable_aux_preds.m"
                  {
#line 2892 "hlds.make_hlds.add_mutable_aux_preds.c"
                    hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_6_6 == hlds__make_hlds__add_mutable_aux_preds__V_12_12);
#line 1355 "add_mutable_aux_preds.m"
                    if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1355 "add_mutable_aux_preds.m"
                      {
#line 2898 "hlds.make_hlds.add_mutable_aux_preds.c"
                        hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_7_7 == hlds__make_hlds__add_mutable_aux_preds__V_13_13);
#line 1355 "add_mutable_aux_preds.m"
                        if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 2902 "hlds.make_hlds.add_mutable_aux_preds.c"
                          hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_8_8 == hlds__make_hlds__add_mutable_aux_preds__V_14_14);
#line 1355 "add_mutable_aux_preds.m"
                      }
#line 1355 "add_mutable_aux_preds.m"
                  }
#line 1355 "add_mutable_aux_preds.m"
              }
#line 1355 "add_mutable_aux_preds.m"
          }
#line 1355 "add_mutable_aux_preds.m"
      }
#line 1355 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1355 "add_mutable_aux_preds.m"
  }
#line 1355 "add_mutable_aux_preds.m"
}

#line 1337 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_impl_lang_0_0(
#line 1337 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1337 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1337 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3)
#line 1337 "add_mutable_aux_preds.m"
{
#line 1337 "add_mutable_aux_preds.m"
  {
#line 1337 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1337 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar1_4 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2;
#line 1337 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar2_5 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3;

#line 1337 "add_mutable_aux_preds.m"
    {
#line 1337 "add_mutable_aux_preds.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar1_4, hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar2_5);
#line 1337 "add_mutable_aux_preds.m"
      return;
    }
#line 1337 "add_mutable_aux_preds.m"
  }
#line 1337 "add_mutable_aux_preds.m"
}

#line 1337 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_impl_lang_0_0(
#line 1337 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1,
#line 1337 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2)
#line 1337 "add_mutable_aux_preds.m"
{
#line 2962 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 2964 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);

#line 2967 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 2969 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 1337 "add_mutable_aux_preds.m"
}

#line 1369 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__get_mutable_target_params_3_p_0(
#line 1369 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_4,
#line 1369 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_5,
#line 1369 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_6)
#line 1369 "add_mutable_aux_preds.m"
{
#line 1372 "add_mutable_aux_preds.m"
  {
#line 1372 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1372 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Globals_7;
#line 1372 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_8;

#line 1376 "add_mutable_aux_preds.m"
    {
#line 1376 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_4, &hlds__make_hlds__add_mutable_aux_preds__Globals_7);
    }
#line 1377 "add_mutable_aux_preds.m"
    {
#line 1377 "add_mutable_aux_preds.m"
      libs__globals__get_target_2_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_7, &hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_8);
    }
#line 1441 "add_mutable_aux_preds.m"
#line 1441 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_8) {
#line 1441 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1441 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 1425 "add_mutable_aux_preds.m"
        {
#line 1425 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__HighLevelCode_14;
#line 1425 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_15;
#line 1425 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_17;
#line 1425 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInit_18;
#line 1425 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__LockUnlock_19;
#line 1425 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_20;
#line 1425 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_21;

#line 1386 "add_mutable_aux_preds.m"
          {
#line 1386 "add_mutable_aux_preds.m"
            libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_7, (MR_Integer) 256, &hlds__make_hlds__add_mutable_aux_preds__HighLevelCode_14);
          }
#line 1390 "add_mutable_aux_preds.m"
#line 1390 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__HighLevelCode_14) {
#line 1390 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1390 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 1389 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_15 = (MR_Integer) 1;
#line 1390 "add_mutable_aux_preds.m"
              break;
#line 1390 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 1392 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_15 = (MR_Integer) 0;
#line 1390 "add_mutable_aux_preds.m"
              break;
#line 1390 "add_mutable_aux_preds.m"
          }
#line 1426 "add_mutable_aux_preds.m"
          {
#line 1426 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__IsConstant_17 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_5);
          }
#line 1432 "add_mutable_aux_preds.m"
#line 1432 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__IsConstant_17) {
#line 1432 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1432 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 1433 "add_mutable_aux_preds.m"
              {
#line 1434 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__PreInit_18 = (MR_Integer) 0;
#line 1435 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__LockUnlock_19 = (MR_Integer) 0;
#line 1436 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_20 = (MR_Integer) 0;
#line 1433 "add_mutable_aux_preds.m"
              }
#line 1432 "add_mutable_aux_preds.m"
              break;
#line 1432 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 1428 "add_mutable_aux_preds.m"
              {
#line 1429 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__PreInit_18 = (MR_Integer) 1;
#line 1430 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__LockUnlock_19 = (MR_Integer) 1;
#line 1431 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_20 = (MR_Integer) 1;
#line 1428 "add_mutable_aux_preds.m"
              }
#line 1432 "add_mutable_aux_preds.m"
              break;
#line 1432 "add_mutable_aux_preds.m"
          }
#line 1438 "add_mutable_aux_preds.m"
          {
#line 1438 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__TargetParams_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1438 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_21, 0) = ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 2)) | ((((hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_15 << (MR_Integer) 5)) | ((((hlds__make_hlds__add_mutable_aux_preds__PreInit_18 << (MR_Integer) 6)) | ((((hlds__make_hlds__add_mutable_aux_preds__LockUnlock_19 << (MR_Integer) 7)) | ((hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_20 << (MR_Integer) 8)))))))))))));
#line 1438 "add_mutable_aux_preds.m"
          }
#line 1440 "add_mutable_aux_preds.m"
          {
#line 1440 "add_mutable_aux_preds.m"
            MR_Word base;
#line 1440 "add_mutable_aux_preds.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1440 "add_mutable_aux_preds.m"
            *hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_6 = base;
#line 1440 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetParams_21));
#line 1440 "add_mutable_aux_preds.m"
          }
#line 1425 "add_mutable_aux_preds.m"
        }
#line 1441 "add_mutable_aux_preds.m"
        break;
#line 1441 "add_mutable_aux_preds.m"
      case (MR_Integer) 2:
#line 1425 "add_mutable_aux_preds.m"
        {
#line 1425 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_16;
#line 1425 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInit0_25;
#line 1425 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_29;
#line 1425 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInit_30;
#line 1425 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__LockUnlock_31;
#line 1425 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_32;
#line 1425 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_33;

#line 1398 "add_mutable_aux_preds.m"
          {
#line 1398 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_16 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_5);
          }
#line 1402 "add_mutable_aux_preds.m"
#line 1402 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_16) {
#line 1402 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1402 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 1404 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__PreInit0_25 = (MR_Integer) 0;
#line 1402 "add_mutable_aux_preds.m"
              break;
#line 1402 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 1401 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__PreInit0_25 = (MR_Integer) 1;
#line 1402 "add_mutable_aux_preds.m"
              break;
#line 1402 "add_mutable_aux_preds.m"
          }
#line 1426 "add_mutable_aux_preds.m"
          {
#line 1426 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__IsConstant_29 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_5);
          }
#line 1432 "add_mutable_aux_preds.m"
#line 1432 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__IsConstant_29) {
#line 1432 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1432 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 1433 "add_mutable_aux_preds.m"
              {
#line 1434 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__PreInit_30 = (MR_Integer) 0;
#line 1435 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__LockUnlock_31 = (MR_Integer) 0;
#line 1436 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_32 = (MR_Integer) 0;
#line 1433 "add_mutable_aux_preds.m"
              }
#line 1432 "add_mutable_aux_preds.m"
              break;
#line 1432 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 1428 "add_mutable_aux_preds.m"
              {
#line 1429 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__PreInit_30 = hlds__make_hlds__add_mutable_aux_preds__PreInit0_25;
#line 1430 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__LockUnlock_31 = (MR_Integer) 0;
#line 1431 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_32 = (MR_Integer) 1;
#line 1428 "add_mutable_aux_preds.m"
              }
#line 1432 "add_mutable_aux_preds.m"
              break;
#line 1432 "add_mutable_aux_preds.m"
          }
#line 1438 "add_mutable_aux_preds.m"
          {
#line 1438 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__TargetParams_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1438 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_33, 0) = ((MR_Box) (((MR_Integer) 1 | (((((MR_Integer) 1 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 5)) | ((((hlds__make_hlds__add_mutable_aux_preds__PreInit_30 << (MR_Integer) 6)) | ((((hlds__make_hlds__add_mutable_aux_preds__LockUnlock_31 << (MR_Integer) 7)) | ((hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_32 << (MR_Integer) 8)))))))))))));
#line 1438 "add_mutable_aux_preds.m"
          }
#line 1440 "add_mutable_aux_preds.m"
          {
#line 1440 "add_mutable_aux_preds.m"
            MR_Word base;
#line 1440 "add_mutable_aux_preds.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1440 "add_mutable_aux_preds.m"
            *hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_6 = base;
#line 1440 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetParams_33));
#line 1440 "add_mutable_aux_preds.m"
          }
#line 1425 "add_mutable_aux_preds.m"
        }
#line 1441 "add_mutable_aux_preds.m"
        break;
#line 1441 "add_mutable_aux_preds.m"
      case (MR_Integer) 4:
#line 1425 "add_mutable_aux_preds.m"
        {
#line 1425 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_40;
#line 1425 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInit_41;
#line 1425 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__LockUnlock_42;
#line 1425 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_43;
#line 1425 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_44;

#line 1426 "add_mutable_aux_preds.m"
          {
#line 1426 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__IsConstant_40 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_5);
          }
#line 1432 "add_mutable_aux_preds.m"
#line 1432 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__IsConstant_40) {
#line 1432 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1432 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 1433 "add_mutable_aux_preds.m"
              {
#line 1434 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__PreInit_41 = (MR_Integer) 0;
#line 1435 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__LockUnlock_42 = (MR_Integer) 0;
#line 1436 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_43 = (MR_Integer) 0;
#line 1433 "add_mutable_aux_preds.m"
              }
#line 1432 "add_mutable_aux_preds.m"
              break;
#line 1432 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 1428 "add_mutable_aux_preds.m"
              {
#line 1429 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__PreInit_41 = (MR_Integer) 0;
#line 1430 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__LockUnlock_42 = (MR_Integer) 0;
#line 1431 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_43 = (MR_Integer) 0;
#line 1428 "add_mutable_aux_preds.m"
              }
#line 1432 "add_mutable_aux_preds.m"
              break;
#line 1432 "add_mutable_aux_preds.m"
          }
#line 1438 "add_mutable_aux_preds.m"
          {
#line 1438 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__TargetParams_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1438 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_44, 0) = ((MR_Box) (((MR_Integer) 3 | (((((MR_Integer) 4 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 5)) | ((((hlds__make_hlds__add_mutable_aux_preds__PreInit_41 << (MR_Integer) 6)) | ((((hlds__make_hlds__add_mutable_aux_preds__LockUnlock_42 << (MR_Integer) 7)) | ((hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_43 << (MR_Integer) 8)))))))))))));
#line 1438 "add_mutable_aux_preds.m"
          }
#line 1440 "add_mutable_aux_preds.m"
          {
#line 1440 "add_mutable_aux_preds.m"
            MR_Word base;
#line 1440 "add_mutable_aux_preds.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1440 "add_mutable_aux_preds.m"
            *hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_6 = base;
#line 1440 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetParams_44));
#line 1440 "add_mutable_aux_preds.m"
          }
#line 1425 "add_mutable_aux_preds.m"
        }
#line 1441 "add_mutable_aux_preds.m"
        break;
#line 1441 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 1444 "add_mutable_aux_preds.m"
        *hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1441 "add_mutable_aux_preds.m"
        break;
#line 1441 "add_mutable_aux_preds.m"
      case (MR_Integer) 3:
#line 1425 "add_mutable_aux_preds.m"
        {
#line 1425 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_51;
#line 1425 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInit_52;
#line 1425 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__LockUnlock_53;
#line 1425 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_54;
#line 1425 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_55;

#line 1426 "add_mutable_aux_preds.m"
          {
#line 1426 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__IsConstant_51 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_5);
          }
#line 1432 "add_mutable_aux_preds.m"
#line 1432 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__IsConstant_51) {
#line 1432 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1432 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 1433 "add_mutable_aux_preds.m"
              {
#line 1434 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__PreInit_52 = (MR_Integer) 0;
#line 1435 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__LockUnlock_53 = (MR_Integer) 0;
#line 1436 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_54 = (MR_Integer) 0;
#line 1433 "add_mutable_aux_preds.m"
              }
#line 1432 "add_mutable_aux_preds.m"
              break;
#line 1432 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 1428 "add_mutable_aux_preds.m"
              {
#line 1429 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__PreInit_52 = (MR_Integer) 0;
#line 1430 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__LockUnlock_53 = (MR_Integer) 0;
#line 1431 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_54 = (MR_Integer) 1;
#line 1428 "add_mutable_aux_preds.m"
              }
#line 1432 "add_mutable_aux_preds.m"
              break;
#line 1432 "add_mutable_aux_preds.m"
          }
#line 1438 "add_mutable_aux_preds.m"
          {
#line 1438 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__TargetParams_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1438 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_55, 0) = ((MR_Box) (((MR_Integer) 2 | (((((MR_Integer) 2 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 5)) | ((((hlds__make_hlds__add_mutable_aux_preds__PreInit_52 << (MR_Integer) 6)) | ((((hlds__make_hlds__add_mutable_aux_preds__LockUnlock_53 << (MR_Integer) 7)) | ((hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_54 << (MR_Integer) 8)))))))))))));
#line 1438 "add_mutable_aux_preds.m"
          }
#line 1440 "add_mutable_aux_preds.m"
          {
#line 1440 "add_mutable_aux_preds.m"
            MR_Word base;
#line 1440 "add_mutable_aux_preds.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1440 "add_mutable_aux_preds.m"
            *hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_6 = base;
#line 1440 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetParams_55));
#line 1440 "add_mutable_aux_preds.m"
          }
#line 1425 "add_mutable_aux_preds.m"
        }
#line 1441 "add_mutable_aux_preds.m"
        break;
#line 1441 "add_mutable_aux_preds.m"
    }
#line 1372 "add_mutable_aux_preds.m"
  }
#line 1369 "add_mutable_aux_preds.m"
}

#line 1328 "add_mutable_aux_preds.m"
static MR_String MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__global_foreign_type_name_4_f_0(
#line 1328 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1328 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_2,
#line 1328 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_3,
#line 1328 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_4)
#line 1328 "add_mutable_aux_preds.m"
{
#line 1331 "add_mutable_aux_preds.m"
  {
#line 1331 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1331 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__HeadVar__5_5;

#line 1331 "add_mutable_aux_preds.m"
#line 1331 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1) {
#line 1331 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1331 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 1331 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__HeadVar__5_5 = (MR_String) "MR_Word";
#line 1331 "add_mutable_aux_preds.m"
        break;
#line 1331 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 1333 "add_mutable_aux_preds.m"
        {
#line 1333 "add_mutable_aux_preds.m"
          return hlds__make_hlds__add_mutable_aux_preds__HeadVar__5_5 = backend_libs__foreign__mercury_exported_type_to_string_3_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_3, hlds__make_hlds__add_mutable_aux_preds__Lang_2, hlds__make_hlds__add_mutable_aux_preds__Type_4);
        }
#line 1331 "add_mutable_aux_preds.m"
        break;
#line 1331 "add_mutable_aux_preds.m"
    }
#line 1331 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__HeadVar__5_5;
#line 1331 "add_mutable_aux_preds.m"
  }
#line 1328 "add_mutable_aux_preds.m"
}

#line 1306 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__get_matching_foreign_names_3_p_0(
#line 1306 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1306 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1306 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3)
#line 1306 "add_mutable_aux_preds.m"
{
#line 1309 "add_mutable_aux_preds.m"
  {
#line 1309 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 1309 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1309 "add_mutable_aux_preds.m"
      *hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1309 "add_mutable_aux_preds.m"
    else
#line 1311 "add_mutable_aux_preds.m"
      {
#line 1311 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignName_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, (MR_Integer) 0)));
#line 1311 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignNames_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, (MR_Integer) 1)));
#line 1311 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__TailMatchingForeignNames_9;
#line 1311 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_10;
#line 1314 "add_mutable_aux_preds.m"
        MR_String hlds__make_hlds__add_mutable_aux_preds__V_11_11;

#line 1312 "add_mutable_aux_preds.m"
        {
#line 1312 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__get_matching_foreign_names_3_p_0(hlds__make_hlds__add_mutable_aux_preds__ForeignNames_6, hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, &hlds__make_hlds__add_mutable_aux_preds__TailMatchingForeignNames_9);
        }
#line 1314 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignName_5, (MR_Integer) 0)));
#line 1314 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignName_5, (MR_Integer) 1)));
#line 1315 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_10 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);
#line 1317 "add_mutable_aux_preds.m"
        if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1316 "add_mutable_aux_preds.m"
          {
#line 1316 "add_mutable_aux_preds.m"
            MR_Word base;
#line 1316 "add_mutable_aux_preds.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1316 "add_mutable_aux_preds.m"
            *hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3 = base;
#line 1316 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ForeignName_5));
#line 1316 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TailMatchingForeignNames_9));
#line 1316 "add_mutable_aux_preds.m"
          }
#line 1317 "add_mutable_aux_preds.m"
        else
#line 1318 "add_mutable_aux_preds.m"
          *hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3 = hlds__make_hlds__add_mutable_aux_preds__TailMatchingForeignNames_9;
#line 1311 "add_mutable_aux_preds.m"
      }
#line 1309 "add_mutable_aux_preds.m"
  }
#line 1306 "add_mutable_aux_preds.m"
}

#line 1272 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__get_global_name_from_foreign_names_9_p_0(
#line 1272 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_10,
#line 1272 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_11,
#line 1272 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_12,
#line 1272 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_13,
#line 1272 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_14,
#line 1272 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignNames_15,
#line 1272 "add_mutable_aux_preds.m"
  MR_String * hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_16,
#line 1272 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_28,
#line 1272 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_29)
#line 1272 "add_mutable_aux_preds.m"
{
#line 1279 "add_mutable_aux_preds.m"
  {
#line 1279 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1279 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetMutableNames_18;

#line 1280 "add_mutable_aux_preds.m"
    {
#line 1280 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__get_matching_foreign_names_3_p_0(hlds__make_hlds__add_mutable_aux_preds__ForeignNames_15, hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_14, &hlds__make_hlds__add_mutable_aux_preds__TargetMutableNames_18);
    }
#line 1286 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__TargetMutableNames_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1283 "add_mutable_aux_preds.m"
      {
#line 1285 "add_mutable_aux_preds.m"
        {
#line 1285 "add_mutable_aux_preds.m"
          *hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_16 = parse_tree__prog_mutable__mutable_c_var_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_12, hlds__make_hlds__add_mutable_aux_preds__MutableName_13);
        }
#line 1283 "add_mutable_aux_preds.m"
        *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_29 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_28;
#line 1283 "add_mutable_aux_preds.m"
      }
#line 1286 "add_mutable_aux_preds.m"
    else
#line 1286 "add_mutable_aux_preds.m"
      {
#line 1286 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__TargetMutableNames_18, (MR_Integer) 1)));
#line 1286 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__TargetMutableNames_18, (MR_Integer) 0)));

#line 1286 "add_mutable_aux_preds.m"
        if ((hlds__make_hlds__add_mutable_aux_preds__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1287 "add_mutable_aux_preds.m"
          {
#line 1287 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_56_56, (MR_Integer) 0)));

#line 1287 "add_mutable_aux_preds.m"
            *hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_16 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_56_56, (MR_Integer) 1)));
#line 1287 "add_mutable_aux_preds.m"
            *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_29 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_28;
#line 1287 "add_mutable_aux_preds.m"
          }
#line 1286 "add_mutable_aux_preds.m"
        else
#line 1291 "add_mutable_aux_preds.m"
          {
#line 1291 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__Globals_23;
#line 1291 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_24;
#line 1291 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__Pieces_25;
#line 1291 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__Msg_26;
#line 1291 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__Spec_27;
#line 1291 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_33_33;
#line 1291 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_36_36;
#line 1291 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_37_37;
#line 1291 "add_mutable_aux_preds.m"
            MR_String hlds__make_hlds__add_mutable_aux_preds__V_38_38;
#line 1291 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_45_45;
#line 1291 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_46_46;
#line 1291 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_50_50;

#line 1292 "add_mutable_aux_preds.m"
            {
#line 1292 "add_mutable_aux_preds.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_10, &hlds__make_hlds__add_mutable_aux_preds__Globals_23);
            }
#line 1293 "add_mutable_aux_preds.m"
            {
#line 1293 "add_mutable_aux_preds.m"
              libs__globals__get_target_2_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_23, &hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_24);
            }
#line 1296 "add_mutable_aux_preds.m"
            {
#line 1296 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_38_38 = libs__globals__compilation_target_string_1_f_0(hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_24);
            }
#line 1296 "add_mutable_aux_preds.m"
            {
#line 1296 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_37_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1296 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__V_37_37, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_38_38));
#line 1296 "add_mutable_aux_preds.m"
            }
#line 1296 "add_mutable_aux_preds.m"
            {
#line 1296 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1296 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_36_36, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_37_37));
#line 1296 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[9])));
#line 1296 "add_mutable_aux_preds.m"
            }
#line 1295 "add_mutable_aux_preds.m"
            {
#line 1295 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1295 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_33_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[38])));
#line 1295 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_33_33, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_36_36));
#line 1295 "add_mutable_aux_preds.m"
            }
#line 1294 "add_mutable_aux_preds.m"
            {
#line 1294 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__Pieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1294 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__Pieces_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[37])));
#line 1294 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__Pieces_25, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_33_33));
#line 1294 "add_mutable_aux_preds.m"
            }
#line 1298 "add_mutable_aux_preds.m"
            {
#line 1298 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1298 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_46_46, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Pieces_25));
#line 1298 "add_mutable_aux_preds.m"
            }
#line 1298 "add_mutable_aux_preds.m"
            {
#line 1298 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1298 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_45_45, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_46_46));
#line 1298 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1298 "add_mutable_aux_preds.m"
            }
#line 1298 "add_mutable_aux_preds.m"
            {
#line 1298 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__Msg_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1298 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Msg_26, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_11));
#line 1298 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Msg_26, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_45_45));
#line 1298 "add_mutable_aux_preds.m"
            }
#line 1299 "add_mutable_aux_preds.m"
            {
#line 1299 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1299 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_50_50, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Msg_26));
#line 1299 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1299 "add_mutable_aux_preds.m"
            }
#line 1299 "add_mutable_aux_preds.m"
            {
#line 1299 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__Spec_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1299 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Spec_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1299 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Spec_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1299 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Spec_27, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_50_50));
#line 1299 "add_mutable_aux_preds.m"
            }
#line 1300 "add_mutable_aux_preds.m"
            {
#line 1300 "add_mutable_aux_preds.m"
              MR_Word base;
#line 1300 "add_mutable_aux_preds.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1300 "add_mutable_aux_preds.m"
              *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_29 = base;
#line 1300 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Spec_27));
#line 1300 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_28));
#line 1300 "add_mutable_aux_preds.m"
            }
#line 1303 "add_mutable_aux_preds.m"
            {
#line 1303 "add_mutable_aux_preds.m"
              *hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_16 = parse_tree__prog_mutable__mutable_c_var_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_12, hlds__make_hlds__add_mutable_aux_preds__MutableName_13);
            }
#line 1291 "add_mutable_aux_preds.m"
          }
#line 1286 "add_mutable_aux_preds.m"
      }
#line 1279 "add_mutable_aux_preds.m"
  }
#line 1272 "add_mutable_aux_preds.m"
}

#line 1187 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_init_pred_11_p_0(
#line 1187 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12,
#line 1187 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_13,
#line 1187 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_14,
#line 1187 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_15,
#line 1187 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_16,
#line 1187 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39,
#line 1187 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_40,
#line 1187 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_41,
#line 1187 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_42,
#line 1187 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_43,
#line 1187 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_44)
#line 1187 "add_mutable_aux_preds.m"
{
#line 1193 "add_mutable_aux_preds.m"
  {
#line 1193 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1193 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_20;
#line 1193 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_21;
#line 1193 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InitTerm_23;
#line 1193 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__VarSetMutable_26;
#line 1193 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_27;
#line 1193 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__X_29;
#line 1193 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__VarSetMutableX_30;
#line 1193 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__VarX_31;
#line 1193 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_32;
#line 1193 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__CallSetExpr_33;
#line 1193 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnifyCallSetExpr_34;
#line 1193 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_35;
#line 1193 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InitPredName_37;
#line 1193 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_47_47;
#line 1193 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_54_54;
#line 1193 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_56_56;
#line 1193 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__CName_70;
#line 1193 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_71;
#line 1193 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__FPEInfo_72;
#line 1193 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_24_75;
#line 1195 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Type_22;
#line 1195 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Inst_24;
#line 1195 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___MutAttrs_25;
#line 1195 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_28;

#line 1194 "add_mutable_aux_preds.m"
    {
#line 1194 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_20);
    }
#line 1195 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutableName_21 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12, (MR_Integer) 0)));
#line 1195 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Type_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12, (MR_Integer) 1)));
#line 1195 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__InitTerm_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12, (MR_Integer) 2)));
#line 1195 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Inst_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12, (MR_Integer) 3)));
#line 1195 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___MutAttrs_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12, (MR_Integer) 4)));
#line 1195 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__VarSetMutable_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12, (MR_Integer) 5)));
#line 1195 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Context_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12, (MR_Integer) 6)));
#line 1195 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___SeqNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12, (MR_Integer) 7)));
#line 1197 "add_mutable_aux_preds.m"
    {
#line 1197 "add_mutable_aux_preds.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "X", &hlds__make_hlds__add_mutable_aux_preds__X_29, hlds__make_hlds__add_mutable_aux_preds__VarSetMutable_26, &hlds__make_hlds__add_mutable_aux_preds__VarSetMutableX_30);
    }
#line 1198 "add_mutable_aux_preds.m"
    {
#line 1198 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__VarX_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1198 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__VarX_31, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_29));
#line 1198 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__VarX_31, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_27));
#line 1198 "add_mutable_aux_preds.m"
    }
#line 1200 "add_mutable_aux_preds.m"
    {
#line 1200 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1200 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_32, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_27));
#line 1200 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_32, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarX_31));
#line 1200 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_32, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InitTerm_23));
#line 1200 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_32, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1200 "add_mutable_aux_preds.m"
    }
#line 1201 "add_mutable_aux_preds.m"
    {
#line 1201 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1201 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_47_47, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarX_31));
#line 1201 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1201 "add_mutable_aux_preds.m"
    }
#line 1201 "add_mutable_aux_preds.m"
    {
#line 1201 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__CallSetExpr_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1201 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallSetExpr_33, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_27));
#line 1201 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallSetExpr_33, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_14));
#line 1201 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallSetExpr_33, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_47_47));
#line 1201 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallSetExpr_33, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1201 "add_mutable_aux_preds.m"
    }
#line 1202 "add_mutable_aux_preds.m"
    {
#line 1202 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__UnifyCallSetExpr_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1202 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__UnifyCallSetExpr_34, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_27));
#line 1202 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__UnifyCallSetExpr_34, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_32));
#line 1202 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__UnifyCallSetExpr_34, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallSetExpr_33));
#line 1202 "add_mutable_aux_preds.m"
    }
#line 1206 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1205 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_35 = hlds__make_hlds__add_mutable_aux_preds__UnifyCallSetExpr_34;
#line 1206 "add_mutable_aux_preds.m"
    else
#line 1207 "add_mutable_aux_preds.m"
      {
#line 1207 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_13, (MR_Integer) 0)));

#line 1208 "add_mutable_aux_preds.m"
        {
#line 1208 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1208 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_35, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_27));
#line 1208 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_35, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_36));
#line 1208 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_35, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnifyCallSetExpr_34));
#line 1208 "add_mutable_aux_preds.m"
        }
#line 1207 "add_mutable_aux_preds.m"
      }
#line 1210 "add_mutable_aux_preds.m"
    {
#line 1210 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__InitPredName_37 = parse_tree__prog_mutable__mutable_init_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_20, hlds__make_hlds__add_mutable_aux_preds__MutableName_21);
    }
#line 1213 "add_mutable_aux_preds.m"
    {
#line 1213 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__add_mutable_aux_preds__VarSetMutableX_30, (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__InitPredName_37, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_35, hlds__make_hlds__add_mutable_aux_preds__PredStatus_16, hlds__make_hlds__add_mutable_aux_preds__Context_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_54_54, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_41, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_42, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_43, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_56_56);
    }
#line 1234 "add_mutable_aux_preds.m"
    {
#line 1234 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_new_user_init_pred_5_p_0(hlds__make_hlds__add_mutable_aux_preds__InitPredName_37, (MR_Integer) 0, &hlds__make_hlds__add_mutable_aux_preds__CName_70, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_54_54, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_24_75);
    }
#line 1235 "add_mutable_aux_preds.m"
    {
#line 1235 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1235 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_71, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InitPredName_37));
#line 1235 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1235 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_71, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1235 "add_mutable_aux_preds.m"
    }
#line 1236 "add_mutable_aux_preds.m"
    {
#line 1236 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__FPEInfo_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1236 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_72, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Lang_15));
#line 1236 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_72, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_71));
#line 1236 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_72, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CName_70));
#line 1236 "add_mutable_aux_preds.m"
    }
#line 1239 "add_mutable_aux_preds.m"
    {
#line 1239 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0((MR_Word) MR_mkword(MR_mktag(1), ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[36]))), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_72, hlds__make_hlds__add_mutable_aux_preds__Context_27, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_24_75, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_40, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_56_56, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_44);
#line 1239 "add_mutable_aux_preds.m"
      return;
    }
#line 1193 "add_mutable_aux_preds.m"
  }
#line 1187 "add_mutable_aux_preds.m"
}

#line 1041 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_main_get_set_preds_14_p_0_1(
#line 1041 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 1041 "add_mutable_aux_preds.m"
{
#line 1041 "add_mutable_aux_preds.m"
  {
#line 1041 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1041 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 1041 "add_mutable_aux_preds.m"
    {
#line 1041 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_main_get_set_preds__1041__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 1041 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1041 "add_mutable_aux_preds.m"
  }
#line 1041 "add_mutable_aux_preds.m"
}

#line 963 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_main_get_set_preds_14_p_0(
#line 963 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15,
#line 963 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_16,
#line 963 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17,
#line 963 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_18,
#line 963 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_19,
#line 963 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_20,
#line 963 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21,
#line 963 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_22,
#line 963 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_85,
#line 963 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_86,
#line 963 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_87,
#line 963 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_88,
#line 963 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_89,
#line 963 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_90)
#line 963 "add_mutable_aux_preds.m"
{
#line 972 "add_mutable_aux_preds.m"
  {
#line 972 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 972 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_253_253;
#line 972 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_26;
#line 972 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_27;
#line 972 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_30;
#line 972 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_31;
#line 972 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_33;
#line 972 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_35;
#line 972 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_36;
#line 972 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__AttachToIO_37;
#line 972 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ImplLang_38;
#line 972 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_40;
#line 972 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__X_44;
#line 972 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_45;
#line 972 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_92_92;
#line 974 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Type_28;
#line 974 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___InitTerm_29;
#line 974 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___VarSetMutable_32;
#line 974 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_34;
#line 979 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Lang_39;
#line 979 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___PreInit_41;
#line 979 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___LockUnlock_42;
#line 979 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_43;

#line 973 "add_mutable_aux_preds.m"
    {
#line 973 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_85, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_26);
    }
#line 974 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutableName_27 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15, (MR_Integer) 0)));
#line 974 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Type_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15, (MR_Integer) 1)));
#line 974 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___InitTerm_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15, (MR_Integer) 2)));
#line 974 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Inst_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15, (MR_Integer) 3)));
#line 974 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutAttrs_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15, (MR_Integer) 4)));
#line 974 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___VarSetMutable_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15, (MR_Integer) 5)));
#line 974 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Context_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15, (MR_Integer) 6)));
#line 974 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___SeqNum_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15, (MR_Integer) 7)));
#line 976 "add_mutable_aux_preds.m"
    {
#line 976 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsConstant_35 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_31);
    }
#line 977 "add_mutable_aux_preds.m"
    {
#line 977 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_36 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_31);
    }
#line 978 "add_mutable_aux_preds.m"
    {
#line 978 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__AttachToIO_37 = parse_tree__prog_item__mutable_var_attach_to_io_state_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_31);
    }
#line 979 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__ImplLang_38 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_16, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 979 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Lang_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_16, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 979 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_16, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 979 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___PreInit_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_16, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 979 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___LockUnlock_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_16, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 979 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_16, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 4144 "hlds.make_hlds.add_mutable_aux_preds.c"
    hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_253_253 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 981 "add_mutable_aux_preds.m"
    {
#line 981 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_92_92 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_253_253);
    }
#line 981 "add_mutable_aux_preds.m"
    {
#line 981 "add_mutable_aux_preds.m"
      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_253_253, (MR_String) "X", &hlds__make_hlds__add_mutable_aux_preds__X_44, hlds__make_hlds__add_mutable_aux_preds__V_92_92, &hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_45);
    }
#line 1043 "add_mutable_aux_preds.m"
#line 1043 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__IsConstant_35) {
#line 1043 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1043 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 984 "add_mutable_aux_preds.m"
        {
#line 984 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_254_254;
#line 984 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__ConstantGetPredName_46;
#line 984 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__ConstantGetAttrs0_48;
#line 984 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__ConstantGetAttrs_49;
#line 984 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__ConstantGetCode_51;
#line 984 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__ConstantSetCode_52;
#line 984 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_53;
#line 984 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_54;
#line 984 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_225_225;
#line 984 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_226_226;
#line 984 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_228_228;
#line 984 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_230_230;
#line 984 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_231_231;
#line 984 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_232_232;
#line 984 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_234_234;
#line 984 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_235_235;
#line 984 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_237_237;
#line 984 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_239_239;
#line 984 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_240_240;
#line 984 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_243_243;
#line 984 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_244_244;
#line 984 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_248_248;

#line 985 "add_mutable_aux_preds.m"
          {
#line 985 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__ConstantGetPredName_46 = parse_tree__prog_mutable__mutable_get_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_26, hlds__make_hlds__add_mutable_aux_preds__MutableName_27);
          }
#line 987 "add_mutable_aux_preds.m"
          {
#line 987 "add_mutable_aux_preds.m"
            *hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21 = parse_tree__prog_mutable__mutable_secret_set_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_26, hlds__make_hlds__add_mutable_aux_preds__MutableName_27);
          }
#line 991 "add_mutable_aux_preds.m"
          {
#line 991 "add_mutable_aux_preds.m"
            parse_tree__prog_data__set_purity_3_p_0((MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__Attrs_18, &hlds__make_hlds__add_mutable_aux_preds__ConstantGetAttrs0_48);
          }
#line 992 "add_mutable_aux_preds.m"
          {
#line 992 "add_mutable_aux_preds.m"
            parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__ConstantGetAttrs0_48, &hlds__make_hlds__add_mutable_aux_preds__ConstantGetAttrs_49);
          }
#line 1001 "add_mutable_aux_preds.m"
#line 1001 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__ImplLang_38) {
#line 1001 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1001 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 1001 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 1001 "add_mutable_aux_preds.m"
            case (MR_Integer) 2:
#line 998 "add_mutable_aux_preds.m"
              {
#line 998 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_221_221;

#line 999 "add_mutable_aux_preds.m"
                {
#line 999 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_221_221 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17, (MR_String) ";\n");
                }
#line 999 "add_mutable_aux_preds.m"
                {
#line 999 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__ConstantGetCode_51 = mercury__string__f_43_43_2_f_0((MR_String) "X = ", hlds__make_hlds__add_mutable_aux_preds__V_221_221);
                }
#line 1000 "add_mutable_aux_preds.m"
                {
#line 1000 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__ConstantSetCode_52 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17, (MR_String) " = X;\n");
                }
#line 998 "add_mutable_aux_preds.m"
              }
#line 1001 "add_mutable_aux_preds.m"
              break;
#line 1001 "add_mutable_aux_preds.m"
            case (MR_Integer) 3:
#line 1002 "add_mutable_aux_preds.m"
              {
#line 1002 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_203_203;
#line 1002 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_205_205;
#line 1002 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_218_218;

#line 1008 "add_mutable_aux_preds.m"
                {
#line 1008 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_205_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1008 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_205_205, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17));
#line 1008 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_205_205, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[28])));
#line 1008 "add_mutable_aux_preds.m"
                }
#line 1007 "add_mutable_aux_preds.m"
                {
#line 1007 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_203_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1007 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_203_203, 0) = ((MR_Box) ((MR_String) "\'ML_erlang_global_server\' ! {get_mutable, "));
#line 1007 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_203_203, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_205_205));
#line 1007 "add_mutable_aux_preds.m"
                }
#line 1006 "add_mutable_aux_preds.m"
                {
#line 1006 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__ConstantGetCode_51 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_203_203);
                }
#line 1016 "add_mutable_aux_preds.m"
                {
#line 1016 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_218_218 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17, (MR_String) ", X}");
                }
#line 1015 "add_mutable_aux_preds.m"
                {
#line 1015 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__ConstantSetCode_52 = mercury__string__f_43_43_2_f_0((MR_String) "\'ML_erlang_global_server\' ! {set_mutable, ", hlds__make_hlds__add_mutable_aux_preds__V_218_218);
                }
#line 1002 "add_mutable_aux_preds.m"
              }
#line 1001 "add_mutable_aux_preds.m"
              break;
#line 1001 "add_mutable_aux_preds.m"
          }
#line 1021 "add_mutable_aux_preds.m"
          {
#line 1021 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_228_228 = parse_tree__prog_mode__out_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_30);
          }
#line 1021 "add_mutable_aux_preds.m"
          {
#line 1021 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_226_226 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1021 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_226_226, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_44));
#line 1021 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_226_226, 1) = ((MR_Box) ((MR_String) "X"));
#line 1021 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_226_226, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_228_228));
#line 1021 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_226_226, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_40));
#line 1021 "add_mutable_aux_preds.m"
          }
#line 1021 "add_mutable_aux_preds.m"
          {
#line 1021 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_225_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1021 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_225_225, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_226_226));
#line 1021 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_225_225, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1021 "add_mutable_aux_preds.m"
          }
#line 4346 "hlds.make_hlds.add_mutable_aux_preds.c"
          hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_254_254 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
#line 1023 "add_mutable_aux_preds.m"
          {
#line 1023 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_230_230 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_254_254);
          }
#line 1024 "add_mutable_aux_preds.m"
          {
#line 1024 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_232_232 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1024 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_232_232, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1024 "add_mutable_aux_preds.m"
          }
#line 1024 "add_mutable_aux_preds.m"
          {
#line 1024 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_231_231 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1024 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_231_231, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ConstantGetCode_51));
#line 1024 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_231_231, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_232_232));
#line 1024 "add_mutable_aux_preds.m"
          }
#line 1018 "add_mutable_aux_preds.m"
          {
#line 1018 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1018 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_53, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ConstantGetAttrs_49));
#line 1018 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_53, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ConstantGetPredName_46));
#line 1018 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_53, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1018 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_53, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_225_225));
#line 1018 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_53, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_45));
#line 1018 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_53, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_230_230));
#line 1018 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_53, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_231_231));
#line 1018 "add_mutable_aux_preds.m"
          }
#line 1031 "add_mutable_aux_preds.m"
          {
#line 1031 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_237_237 = parse_tree__prog_mode__in_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_30);
          }
#line 1031 "add_mutable_aux_preds.m"
          {
#line 1031 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_235_235 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1031 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_235_235, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_44));
#line 1031 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_235_235, 1) = ((MR_Box) ((MR_String) "X"));
#line 1031 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_235_235, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_237_237));
#line 1031 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_235_235, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_40));
#line 1031 "add_mutable_aux_preds.m"
          }
#line 1031 "add_mutable_aux_preds.m"
          {
#line 1031 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_234_234 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1031 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_234_234, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_235_235));
#line 1031 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_234_234, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1031 "add_mutable_aux_preds.m"
          }
#line 1033 "add_mutable_aux_preds.m"
          {
#line 1033 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_239_239 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_254_254);
          }
#line 1034 "add_mutable_aux_preds.m"
          {
#line 1034 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_240_240 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1034 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_240_240, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ConstantSetCode_52));
#line 1034 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_240_240, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_232_232));
#line 1034 "add_mutable_aux_preds.m"
          }
#line 1028 "add_mutable_aux_preds.m"
          {
#line 1028 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1028 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_54, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Attrs_18));
#line 1028 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_54, 1) = ((MR_Box) (*hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21));
#line 1028 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_54, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1028 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_54, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_234_234));
#line 1028 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_54, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_45));
#line 1028 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_54, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_239_239));
#line 1028 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_54, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_240_240));
#line 1028 "add_mutable_aux_preds.m"
          }
#line 1036 "add_mutable_aux_preds.m"
          {
#line 1036 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_53, hlds__make_hlds__add_mutable_aux_preds__PredStatus_22, hlds__make_hlds__add_mutable_aux_preds__Context_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_85, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_243_243, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_89, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_244_244);
          }
#line 1038 "add_mutable_aux_preds.m"
          {
#line 1038 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_54, hlds__make_hlds__add_mutable_aux_preds__PredStatus_22, hlds__make_hlds__add_mutable_aux_preds__Context_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_243_243, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_86, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_244_244, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_90);
          }
#line 1041 "add_mutable_aux_preds.m"
          {
#line 1041 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_248_248 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1041 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_248_248, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[3]));
#line 1041 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_248_248, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__define_main_get_set_preds_14_p_0_1));
#line 1041 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_248_248, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1041 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_248_248, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__AttachToIO_37));
#line 1041 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_248_248, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1041 "add_mutable_aux_preds.m"
          }
#line 1041 "add_mutable_aux_preds.m"
          {
#line 1041 "add_mutable_aux_preds.m"
            mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_248_248, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_main_get_set_preds\'/14", (MR_String) "AttachToIO = mutable_attach_to_io_state");
          }
#line 984 "add_mutable_aux_preds.m"
          *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_88 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_87;
#line 984 "add_mutable_aux_preds.m"
        }
#line 1043 "add_mutable_aux_preds.m"
        break;
#line 1043 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 1044 "add_mutable_aux_preds.m"
        {
#line 1044 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__StdGetPredName_55;
#line 1044 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59;
#line 1044 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60;
#line 1044 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_170_170;
#line 1044 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_171_171;
#line 1044 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_172_172;

#line 1045 "add_mutable_aux_preds.m"
          {
#line 1045 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__StdGetPredName_55 = parse_tree__prog_mutable__mutable_get_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_26, hlds__make_hlds__add_mutable_aux_preds__MutableName_27);
          }
#line 1046 "add_mutable_aux_preds.m"
          {
#line 1046 "add_mutable_aux_preds.m"
            *hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21 = parse_tree__prog_mutable__mutable_set_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_26, hlds__make_hlds__add_mutable_aux_preds__MutableName_27);
          }
#line 1083 "add_mutable_aux_preds.m"
#line 1083 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__ImplLang_38) {
#line 1083 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1083 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 1083 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 1083 "add_mutable_aux_preds.m"
            case (MR_Integer) 2:
#line 1052 "add_mutable_aux_preds.m"
              {
#line 1052 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr_57;
#line 1052 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr_58;
#line 1052 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__StdPredArgs_63;
#line 1052 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__StdGetPredExpr_64;
#line 1052 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_158_158;
#line 1052 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_164_164;
#line 1052 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_165_165;
#line 1052 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_166_166;

#line 1056 "add_mutable_aux_preds.m"
                if ((hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1057 "add_mutable_aux_preds.m"
                  {
#line 1058 "add_mutable_aux_preds.m"
                    {
#line 1058 "add_mutable_aux_preds.m"
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_main_get_set_preds\'/14", (MR_String) "mutable_not_constant but MaybeUnsafeGetSetExprs = no");
#line 1058 "add_mutable_aux_preds.m"
                      return;
                    }
#line 1057 "add_mutable_aux_preds.m"
                  }
#line 1056 "add_mutable_aux_preds.m"
                else
#line 1054 "add_mutable_aux_preds.m"
                  {
#line 1054 "add_mutable_aux_preds.m"
                    MR_Tuple hlds__make_hlds__add_mutable_aux_preds__V_154_154 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_20, (MR_Integer) 0)));

#line 1055 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_154_154, (MR_Integer) 0)));
#line 1055 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_154_154, (MR_Integer) 1)));
#line 1054 "add_mutable_aux_preds.m"
                  }
#line 1065 "add_mutable_aux_preds.m"
                if ((hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1062 "add_mutable_aux_preds.m"
                  {
#line 1063 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59 = hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr_57;
#line 1064 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60 = hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr_58;
#line 1062 "add_mutable_aux_preds.m"
                  }
#line 1065 "add_mutable_aux_preds.m"
                else
#line 1066 "add_mutable_aux_preds.m"
                  {
#line 1066 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__CallLockExpr_61;
#line 1066 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr_62;
#line 1066 "add_mutable_aux_preds.m"
                    MR_Tuple hlds__make_hlds__add_mutable_aux_preds__V_155_155 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_19, (MR_Integer) 0)));
#line 1066 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_156_156;
#line 1066 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_157_157;

#line 1066 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__CallLockExpr_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_155_155, (MR_Integer) 0)));
#line 1066 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_155_155, (MR_Integer) 1)));
#line 1068 "add_mutable_aux_preds.m"
                    {
#line 1068 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__V_156_156 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1068 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__V_156_156, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1068 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__V_156_156, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr_57));
#line 1068 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__V_156_156, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr_62));
#line 1068 "add_mutable_aux_preds.m"
                    }
#line 1067 "add_mutable_aux_preds.m"
                    {
#line 1067 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1067 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1067 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallLockExpr_61));
#line 1067 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_156_156));
#line 1067 "add_mutable_aux_preds.m"
                    }
#line 1070 "add_mutable_aux_preds.m"
                    {
#line 1070 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__V_157_157 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1070 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__V_157_157, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1070 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__V_157_157, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr_58));
#line 1070 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__V_157_157, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr_62));
#line 1070 "add_mutable_aux_preds.m"
                    }
#line 1069 "add_mutable_aux_preds.m"
                    {
#line 1069 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1069 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1069 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallLockExpr_61));
#line 1069 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_157_157));
#line 1069 "add_mutable_aux_preds.m"
                    }
#line 1066 "add_mutable_aux_preds.m"
                  }
#line 1073 "add_mutable_aux_preds.m"
                {
#line 1073 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1073 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_158_158, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_44));
#line 1073 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_158_158, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1073 "add_mutable_aux_preds.m"
                }
#line 1073 "add_mutable_aux_preds.m"
                {
#line 1073 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__StdPredArgs_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1073 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__StdPredArgs_63, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_158_158));
#line 1073 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__StdPredArgs_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1073 "add_mutable_aux_preds.m"
                }
#line 1074 "add_mutable_aux_preds.m"
                {
#line 1074 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__StdGetPredExpr_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1074 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__StdGetPredExpr_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 1074 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__StdGetPredExpr_64, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1074 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__StdGetPredExpr_64, 2) = ((MR_Box) ((MR_Integer) 1));
#line 1074 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__StdGetPredExpr_64, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59));
#line 1074 "add_mutable_aux_preds.m"
                }
#line 1077 "add_mutable_aux_preds.m"
                {
#line 1077 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_45, (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__StdGetPredName_55, hlds__make_hlds__add_mutable_aux_preds__StdPredArgs_63, hlds__make_hlds__add_mutable_aux_preds__StdGetPredExpr_64, hlds__make_hlds__add_mutable_aux_preds__PredStatus_22, hlds__make_hlds__add_mutable_aux_preds__Context_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_85, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_164_164, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_87, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_165_165, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_89, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_166_166);
                }
#line 1080 "add_mutable_aux_preds.m"
                {
#line 1080 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_45, (MR_Integer) 0, *hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21, hlds__make_hlds__add_mutable_aux_preds__StdPredArgs_63, hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60, hlds__make_hlds__add_mutable_aux_preds__PredStatus_22, hlds__make_hlds__add_mutable_aux_preds__Context_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_164_164, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_170_170, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_165_165, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_171_171, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_166_166, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_172_172);
                }
#line 1052 "add_mutable_aux_preds.m"
              }
#line 1083 "add_mutable_aux_preds.m"
              break;
#line 1083 "add_mutable_aux_preds.m"
            case (MR_Integer) 3:
#line 1084 "add_mutable_aux_preds.m"
              {
#line 1084 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_256_256;
#line 1084 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__ThreadSafeAttrs_66;
#line 1084 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__ErlangGetAttrs_67;
#line 1084 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__ErlangSetAttrs_68;
#line 1084 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__StdGetCode_69;
#line 1084 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__StdSetCode_70;
#line 1084 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_71;
#line 1084 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_72;
#line 1084 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_120_120;
#line 1084 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_121_121;
#line 1084 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_123_123;
#line 1084 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_125_125;
#line 1084 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_126_126;
#line 1084 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_127_127;
#line 1084 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_129_129;
#line 1084 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_130_130;
#line 1084 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_132_132;
#line 1084 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_134_134;
#line 1084 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_135_135;
#line 1084 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_138_138;
#line 1084 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_139_139;
#line 1084 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_143_143;
#line 1084 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_144_144;

#line 1092 "add_mutable_aux_preds.m"
                {
#line 1092 "add_mutable_aux_preds.m"
                  parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__Attrs_18, &hlds__make_hlds__add_mutable_aux_preds__ThreadSafeAttrs_66);
                }
#line 1093 "add_mutable_aux_preds.m"
                {
#line 1093 "add_mutable_aux_preds.m"
                  parse_tree__prog_data__set_purity_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__ThreadSafeAttrs_66, &hlds__make_hlds__add_mutable_aux_preds__ErlangGetAttrs_67);
                }
#line 1094 "add_mutable_aux_preds.m"
                {
#line 1094 "add_mutable_aux_preds.m"
                  parse_tree__prog_data__set_purity_3_p_0((MR_Integer) 2, hlds__make_hlds__add_mutable_aux_preds__ThreadSafeAttrs_66, &hlds__make_hlds__add_mutable_aux_preds__ErlangSetAttrs_68);
                }
#line 1101 "add_mutable_aux_preds.m"
#line 1101 "add_mutable_aux_preds.m"
                switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_36) {
#line 1101 "add_mutable_aux_preds.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1101 "add_mutable_aux_preds.m"
                  case (MR_Integer) 0:
#line 1102 "add_mutable_aux_preds.m"
                    {
#line 1102 "add_mutable_aux_preds.m"
                      MR_Word hlds__make_hlds__add_mutable_aux_preds__V_96_96;
#line 1102 "add_mutable_aux_preds.m"
                      MR_Word hlds__make_hlds__add_mutable_aux_preds__V_98_98;
#line 1102 "add_mutable_aux_preds.m"
                      MR_String hlds__make_hlds__add_mutable_aux_preds__V_111_111;

#line 1108 "add_mutable_aux_preds.m"
                      {
#line 1108 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1108 "add_mutable_aux_preds.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_98_98, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17));
#line 1108 "add_mutable_aux_preds.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[28])));
#line 1108 "add_mutable_aux_preds.m"
                      }
#line 1107 "add_mutable_aux_preds.m"
                      {
#line 1107 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1107 "add_mutable_aux_preds.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_96_96, 0) = ((MR_Box) ((MR_String) "\'ML_erlang_global_server\' ! {get_mutable, "));
#line 1107 "add_mutable_aux_preds.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_96_96, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_98_98));
#line 1107 "add_mutable_aux_preds.m"
                      }
#line 1106 "add_mutable_aux_preds.m"
                      {
#line 1106 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__StdGetCode_69 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_96_96);
                      }
#line 1116 "add_mutable_aux_preds.m"
                      {
#line 1116 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__V_111_111 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17, (MR_String) ", X}");
                      }
#line 1115 "add_mutable_aux_preds.m"
                      {
#line 1115 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__StdSetCode_70 = mercury__string__f_43_43_2_f_0((MR_String) "\'ML_erlang_global_server\' ! {set_mutable, ", hlds__make_hlds__add_mutable_aux_preds__V_111_111);
                      }
#line 1102 "add_mutable_aux_preds.m"
                    }
#line 1101 "add_mutable_aux_preds.m"
                    break;
#line 1101 "add_mutable_aux_preds.m"
                  case (MR_Integer) 1:
#line 1096 "add_mutable_aux_preds.m"
                    {
#line 1096 "add_mutable_aux_preds.m"
                      MR_String hlds__make_hlds__add_mutable_aux_preds__V_114_114;
#line 1096 "add_mutable_aux_preds.m"
                      MR_String hlds__make_hlds__add_mutable_aux_preds__V_117_117;

#line 1098 "add_mutable_aux_preds.m"
                      {
#line 1098 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__V_114_114 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17, (MR_String) "})");
                      }
#line 1097 "add_mutable_aux_preds.m"
                      {
#line 1097 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__StdGetCode_69 = mercury__string__f_43_43_2_f_0((MR_String) "X = get({\'MR_thread_local_mutable\', ", hlds__make_hlds__add_mutable_aux_preds__V_114_114);
                      }
#line 1100 "add_mutable_aux_preds.m"
                      {
#line 1100 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__V_117_117 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17, (MR_String) "}, X)");
                      }
#line 1099 "add_mutable_aux_preds.m"
                      {
#line 1099 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__StdSetCode_70 = mercury__string__f_43_43_2_f_0((MR_String) "put({\'MR_thread_local_mutable\', ", hlds__make_hlds__add_mutable_aux_preds__V_117_117);
                      }
#line 1096 "add_mutable_aux_preds.m"
                    }
#line 1101 "add_mutable_aux_preds.m"
                    break;
#line 1101 "add_mutable_aux_preds.m"
                }
#line 1121 "add_mutable_aux_preds.m"
                {
#line 1121 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_123_123 = parse_tree__prog_mode__out_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_30);
                }
#line 1121 "add_mutable_aux_preds.m"
                {
#line 1121 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1121 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_121_121, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_44));
#line 1121 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_121_121, 1) = ((MR_Box) ((MR_String) "X"));
#line 1121 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_121_121, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_123_123));
#line 1121 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_121_121, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_40));
#line 1121 "add_mutable_aux_preds.m"
                }
#line 1121 "add_mutable_aux_preds.m"
                {
#line 1121 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1121 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_120_120, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_121_121));
#line 1121 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_120_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1121 "add_mutable_aux_preds.m"
                }
#line 4887 "hlds.make_hlds.add_mutable_aux_preds.c"
                hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_256_256 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
#line 1123 "add_mutable_aux_preds.m"
                {
#line 1123 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_125_125 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_256_256);
                }
#line 1124 "add_mutable_aux_preds.m"
                {
#line 1124 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1124 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_127_127, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1124 "add_mutable_aux_preds.m"
                }
#line 1124 "add_mutable_aux_preds.m"
                {
#line 1124 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_126_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1124 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_126_126, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__StdGetCode_69));
#line 1124 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_126_126, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_127_127));
#line 1124 "add_mutable_aux_preds.m"
                }
#line 1118 "add_mutable_aux_preds.m"
                {
#line 1118 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1118 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_71, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ErlangGetAttrs_67));
#line 1118 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_71, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__StdGetPredName_55));
#line 1118 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_71, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1118 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_71, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_120_120));
#line 1118 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_71, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_45));
#line 1118 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_71, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_125_125));
#line 1118 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_71, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_126_126));
#line 1118 "add_mutable_aux_preds.m"
                }
#line 1129 "add_mutable_aux_preds.m"
                {
#line 1129 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_132_132 = parse_tree__prog_mode__in_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_30);
                }
#line 1129 "add_mutable_aux_preds.m"
                {
#line 1129 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_130_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1129 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_130_130, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_44));
#line 1129 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_130_130, 1) = ((MR_Box) ((MR_String) "X"));
#line 1129 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_130_130, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_132_132));
#line 1129 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_130_130, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_40));
#line 1129 "add_mutable_aux_preds.m"
                }
#line 1129 "add_mutable_aux_preds.m"
                {
#line 1129 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1129 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_129_129, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_130_130));
#line 1129 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_129_129, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1129 "add_mutable_aux_preds.m"
                }
#line 1131 "add_mutable_aux_preds.m"
                {
#line 1131 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_134_134 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_256_256);
                }
#line 1132 "add_mutable_aux_preds.m"
                {
#line 1132 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_135_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1132 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_135_135, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__StdSetCode_70));
#line 1132 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_135_135, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_127_127));
#line 1132 "add_mutable_aux_preds.m"
                }
#line 1126 "add_mutable_aux_preds.m"
                {
#line 1126 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1126 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_72, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ErlangSetAttrs_68));
#line 1126 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_72, 1) = ((MR_Box) (*hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21));
#line 1126 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_72, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1126 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_72, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_129_129));
#line 1126 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_72, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_45));
#line 1126 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_72, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_134_134));
#line 1126 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_72, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_135_135));
#line 1126 "add_mutable_aux_preds.m"
                }
#line 1134 "add_mutable_aux_preds.m"
                {
#line 1134 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_71, hlds__make_hlds__add_mutable_aux_preds__PredStatus_22, hlds__make_hlds__add_mutable_aux_preds__Context_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_85, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_138_138, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_89, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_139_139);
                }
#line 1136 "add_mutable_aux_preds.m"
                {
#line 1136 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_72, hlds__make_hlds__add_mutable_aux_preds__PredStatus_22, hlds__make_hlds__add_mutable_aux_preds__Context_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_138_138, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_170_170, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_139_139, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_172_172);
                }
#line 1140 "add_mutable_aux_preds.m"
                {
#line 1140 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_144_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1140 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_144_144, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_44));
#line 1140 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_144_144, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1140 "add_mutable_aux_preds.m"
                }
#line 1140 "add_mutable_aux_preds.m"
                {
#line 1140 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1140 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_143_143, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_144_144));
#line 1140 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_143_143, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1140 "add_mutable_aux_preds.m"
                }
#line 1139 "add_mutable_aux_preds.m"
                {
#line 1139 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1139 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1139 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__StdGetPredName_55));
#line 1139 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_143_143));
#line 1139 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59, 3) = ((MR_Box) ((MR_Integer) 1));
#line 1139 "add_mutable_aux_preds.m"
                }
#line 1141 "add_mutable_aux_preds.m"
                {
#line 1141 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1141 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1141 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60, 1) = ((MR_Box) (*hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21));
#line 1141 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_143_143));
#line 1141 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1141 "add_mutable_aux_preds.m"
                }
#line 1084 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_171_171 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_87;
#line 1084 "add_mutable_aux_preds.m"
              }
#line 1083 "add_mutable_aux_preds.m"
              break;
#line 1083 "add_mutable_aux_preds.m"
          }
#line 1146 "add_mutable_aux_preds.m"
#line 1146 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__AttachToIO_37) {
#line 1146 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1146 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 1147 "add_mutable_aux_preds.m"
              {
#line 1147 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__IO0_74;
#line 1147 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__IO_75;
#line 1147 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__VarSetXandIOs_76;
#line 1147 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__IOPredArgs_79;
#line 1147 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_80;
#line 1147 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__IOGetPredExpr_81;
#line 1147 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__IOSetPredExpr_82;
#line 1147 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__PureIOGetPredExpr_83;
#line 1147 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__PureIOSetPredExpr_84;
#line 1147 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_VarSet_175_175;
#line 1147 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_178_178;
#line 1147 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_179_179;
#line 1147 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_180_180;
#line 1147 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_181_181;
#line 1147 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_182_182;
#line 1147 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_192_192;
#line 1147 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_193_193;
#line 1147 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_194_194;

#line 1150 "add_mutable_aux_preds.m"
                {
#line 1150 "add_mutable_aux_preds.m"
                  mercury__varset__new_named_var_4_p_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_253_253, (MR_String) "IO0", &hlds__make_hlds__add_mutable_aux_preds__IO0_74, hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_45, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_VarSet_175_175);
                }
#line 1151 "add_mutable_aux_preds.m"
                {
#line 1151 "add_mutable_aux_preds.m"
                  mercury__varset__new_named_var_4_p_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_253_253, (MR_String) "IO", &hlds__make_hlds__add_mutable_aux_preds__IO_75, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_VarSet_175_175, &hlds__make_hlds__add_mutable_aux_preds__VarSetXandIOs_76);
                }
#line 1156 "add_mutable_aux_preds.m"
                {
#line 1156 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_178_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1156 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_178_178, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_44));
#line 1156 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_178_178, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1156 "add_mutable_aux_preds.m"
                }
#line 1157 "add_mutable_aux_preds.m"
                {
#line 1157 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_180_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1157 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_180_180, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__IO0_74));
#line 1157 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_180_180, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1157 "add_mutable_aux_preds.m"
                }
#line 1157 "add_mutable_aux_preds.m"
                {
#line 1157 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_182_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1157 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_182_182, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__IO_75));
#line 1157 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_182_182, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1157 "add_mutable_aux_preds.m"
                }
#line 1157 "add_mutable_aux_preds.m"
                {
#line 1157 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_181_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1157 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_181_181, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_182_182));
#line 1157 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_181_181, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1157 "add_mutable_aux_preds.m"
                }
#line 1157 "add_mutable_aux_preds.m"
                {
#line 1157 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_179_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1157 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_179_179, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_180_180));
#line 1157 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_179_179, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_181_181));
#line 1157 "add_mutable_aux_preds.m"
                }
#line 1156 "add_mutable_aux_preds.m"
                {
#line 1156 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__IOPredArgs_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1156 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__IOPredArgs_79, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_178_178));
#line 1156 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__IOPredArgs_79, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_179_179));
#line 1156 "add_mutable_aux_preds.m"
                }
#line 1165 "add_mutable_aux_preds.m"
                {
#line 1165 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1165 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_80, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1165 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_80, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_180_180));
#line 1165 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_80, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_182_182));
#line 1165 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_80, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1165 "add_mutable_aux_preds.m"
                }
#line 1168 "add_mutable_aux_preds.m"
                {
#line 1168 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__IOGetPredExpr_81 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1168 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__IOGetPredExpr_81, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1168 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__IOGetPredExpr_81, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59));
#line 1168 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__IOGetPredExpr_81, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_80));
#line 1168 "add_mutable_aux_preds.m"
                }
#line 1169 "add_mutable_aux_preds.m"
                {
#line 1169 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__IOSetPredExpr_82 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1169 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__IOSetPredExpr_82, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1169 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__IOSetPredExpr_82, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60));
#line 1169 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__IOSetPredExpr_82, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_80));
#line 1169 "add_mutable_aux_preds.m"
                }
#line 1171 "add_mutable_aux_preds.m"
                {
#line 1171 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__PureIOGetPredExpr_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1171 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOGetPredExpr_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 1171 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOGetPredExpr_83, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1171 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOGetPredExpr_83, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1171 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOGetPredExpr_83, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__IOGetPredExpr_81));
#line 1171 "add_mutable_aux_preds.m"
                }
#line 1173 "add_mutable_aux_preds.m"
                {
#line 1173 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__PureIOSetPredExpr_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1173 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOSetPredExpr_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 1173 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOSetPredExpr_84, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1173 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOSetPredExpr_84, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1173 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOSetPredExpr_84, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__IOSetPredExpr_82));
#line 1173 "add_mutable_aux_preds.m"
                }
#line 1175 "add_mutable_aux_preds.m"
                {
#line 1175 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__add_mutable_aux_preds__VarSetXandIOs_76, (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__StdGetPredName_55, hlds__make_hlds__add_mutable_aux_preds__IOPredArgs_79, hlds__make_hlds__add_mutable_aux_preds__PureIOGetPredExpr_83, hlds__make_hlds__add_mutable_aux_preds__PredStatus_22, hlds__make_hlds__add_mutable_aux_preds__Context_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_170_170, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_192_192, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_171_171, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_193_193, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_172_172, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_194_194);
                }
#line 1178 "add_mutable_aux_preds.m"
                {
#line 1178 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__add_mutable_aux_preds__VarSetXandIOs_76, (MR_Integer) 0, *hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21, hlds__make_hlds__add_mutable_aux_preds__IOPredArgs_79, hlds__make_hlds__add_mutable_aux_preds__PureIOSetPredExpr_84, hlds__make_hlds__add_mutable_aux_preds__PredStatus_22, hlds__make_hlds__add_mutable_aux_preds__Context_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_192_192, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_86, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_193_193, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_88, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_194_194, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_90);
#line 1178 "add_mutable_aux_preds.m"
                  return;
                }
#line 1147 "add_mutable_aux_preds.m"
              }
#line 1146 "add_mutable_aux_preds.m"
              break;
#line 1146 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 1145 "add_mutable_aux_preds.m"
              {
#line 1145 "add_mutable_aux_preds.m"
                *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_86 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_170_170;
#line 1145 "add_mutable_aux_preds.m"
                *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_88 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_171_171;
#line 1145 "add_mutable_aux_preds.m"
                *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_90 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_172_172;
#line 1145 "add_mutable_aux_preds.m"
              }
#line 1146 "add_mutable_aux_preds.m"
              break;
#line 1146 "add_mutable_aux_preds.m"
          }
#line 1044 "add_mutable_aux_preds.m"
        }
#line 1043 "add_mutable_aux_preds.m"
        break;
#line 1043 "add_mutable_aux_preds.m"
    }
#line 972 "add_mutable_aux_preds.m"
  }
#line 963 "add_mutable_aux_preds.m"
}

#line 843 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_unsafe_get_set_preds_12_p_0_1(
#line 843 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 843 "add_mutable_aux_preds.m"
{
#line 843 "add_mutable_aux_preds.m"
  {
#line 843 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 843 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 843 "add_mutable_aux_preds.m"
    {
#line 843 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_unsafe_get_set_preds__843__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 843 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 843 "add_mutable_aux_preds.m"
  }
#line 843 "add_mutable_aux_preds.m"
}

#line 827 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_unsafe_get_set_preds_12_p_0(
#line 827 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13,
#line 827 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_14,
#line 827 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15,
#line 827 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_16,
#line 827 "add_mutable_aux_preds.m"
  MR_Tuple * hlds__make_hlds__add_mutable_aux_preds__UnsafeGetSetExprs_17,
#line 827 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_18,
#line 827 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_56,
#line 827 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_57,
#line 827 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_58,
#line 827 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_59,
#line 827 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_60,
#line 827 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_61)
#line 827 "add_mutable_aux_preds.m"
{
#line 835 "add_mutable_aux_preds.m"
  {
#line 835 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 835 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_154_154;
#line 835 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_155_155;
#line 835 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_22;
#line 835 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_23;
#line 835 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_24;
#line 835 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_26;
#line 835 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27;
#line 835 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_29;
#line 835 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_31;
#line 835 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32;
#line 835 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ImplLang_33;
#line 835 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_34;
#line 835 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_35;
#line 835 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__X_39;
#line 835 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_40;
#line 835 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeGetAttrs_42;
#line 835 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeSetAttrs_43;
#line 835 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TrailedMutable_44;
#line 835 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__TrailCode_45;
#line 835 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_46;
#line 835 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__UnsafeSetCode_47;
#line 835 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeGetPredName_50;
#line 835 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeSetPredName_51;
#line 835 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_52;
#line 835 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_53;
#line 835 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr0_54;
#line 835 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr0_55;
#line 835 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_62_62;
#line 835 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_68_68;
#line 835 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_121_121;
#line 835 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_122_122;
#line 835 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_124_124;
#line 835 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_126_126;
#line 835 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_127_127;
#line 835 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_128_128;
#line 835 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_130_130;
#line 835 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_131_131;
#line 835 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_133_133;
#line 835 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_135_135;
#line 835 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_136_136;
#line 835 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__V_137_137;
#line 835 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_140_140;
#line 835 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_141_141;
#line 835 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_145_145;
#line 835 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_146_146;
#line 837 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___InitTerm_25;
#line 837 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___VarSetMutable_28;
#line 837 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_30;
#line 841 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___PreInit_36;
#line 841 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___LockUnlock_37;
#line 841 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_38;

#line 836 "add_mutable_aux_preds.m"
    {
#line 836 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_56, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_22);
    }
#line 837 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutableName_23 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 0)));
#line 837 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Type_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 1)));
#line 837 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___InitTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 2)));
#line 837 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Inst_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 3)));
#line 837 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 4)));
#line 837 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___VarSetMutable_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 5)));
#line 837 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Context_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 6)));
#line 837 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___SeqNum_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 7)));
#line 839 "add_mutable_aux_preds.m"
    {
#line 839 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsConstant_31 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27);
    }
#line 840 "add_mutable_aux_preds.m"
    {
#line 840 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27);
    }
#line 841 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__ImplLang_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 841 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Lang_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 841 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 841 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___PreInit_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 841 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___LockUnlock_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 841 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 843 "add_mutable_aux_preds.m"
    {
#line 843 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 843 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_62_62, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[12]));
#line 843 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_62_62, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__define_unsafe_get_set_preds_12_p_0_1));
#line 843 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_62_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 843 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_62_62, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__IsConstant_31));
#line 843 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_62_62, 4) = ((MR_Box) ((MR_Integer) 0));
#line 843 "add_mutable_aux_preds.m"
    }
#line 843 "add_mutable_aux_preds.m"
    {
#line 843 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_62_62, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_unsafe_get_set_preds\'/12", (MR_String) "need_unsafe_get_set_preds, but IsConstant = mutable_constant");
    }
#line 5513 "hlds.make_hlds.add_mutable_aux_preds.c"
    hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_154_154 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 845 "add_mutable_aux_preds.m"
    {
#line 845 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_68_68 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_154_154);
    }
#line 845 "add_mutable_aux_preds.m"
    {
#line 845 "add_mutable_aux_preds.m"
      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_154_154, (MR_String) "X", &hlds__make_hlds__add_mutable_aux_preds__X_39, hlds__make_hlds__add_mutable_aux_preds__V_68_68, &hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_40);
    }
#line 847 "add_mutable_aux_preds.m"
    {
#line 847 "add_mutable_aux_preds.m"
      parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__Attrs_16, &hlds__make_hlds__add_mutable_aux_preds__UnsafeSetAttrs_43);
    }
#line 848 "add_mutable_aux_preds.m"
    {
#line 848 "add_mutable_aux_preds.m"
      parse_tree__prog_data__set_purity_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__UnsafeSetAttrs_43, &hlds__make_hlds__add_mutable_aux_preds__UnsafeGetAttrs_42);
    }
#line 851 "add_mutable_aux_preds.m"
    {
#line 851 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__TrailedMutable_44 = parse_tree__prog_item__mutable_var_trailed_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27);
    }
#line 877 "add_mutable_aux_preds.m"
#line 877 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__ImplLang_33) {
#line 877 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 877 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 853 "add_mutable_aux_preds.m"
        {
#line 857 "add_mutable_aux_preds.m"
#line 857 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__TrailedMutable_44) {
#line 857 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 857 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 858 "add_mutable_aux_preds.m"
              {
#line 858 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_102_102;

#line 862 "add_mutable_aux_preds.m"
                {
#line 862 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_102_102 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ");\n");
                }
#line 861 "add_mutable_aux_preds.m"
                {
#line 861 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__TrailCode_45 = mercury__string__f_43_43_2_f_0((MR_String) "MR_trail_current_value(&", hlds__make_hlds__add_mutable_aux_preds__V_102_102);
                }
#line 858 "add_mutable_aux_preds.m"
              }
#line 857 "add_mutable_aux_preds.m"
              break;
#line 857 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 856 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__TrailCode_45 = (MR_String) "";
#line 857 "add_mutable_aux_preds.m"
              break;
#line 857 "add_mutable_aux_preds.m"
          }
#line 868 "add_mutable_aux_preds.m"
#line 868 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32) {
#line 868 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 868 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 865 "add_mutable_aux_preds.m"
              {
#line 865 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_117_117;

#line 866 "add_mutable_aux_preds.m"
                {
#line 866 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_117_117 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ";\n");
                }
#line 866 "add_mutable_aux_preds.m"
                {
#line 866 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_46 = mercury__string__f_43_43_2_f_0((MR_String) "X = ", hlds__make_hlds__add_mutable_aux_preds__V_117_117);
                }
#line 867 "add_mutable_aux_preds.m"
                {
#line 867 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeSetCode_47 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) " = X;\n");
                }
#line 865 "add_mutable_aux_preds.m"
              }
#line 868 "add_mutable_aux_preds.m"
              break;
#line 868 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 869 "add_mutable_aux_preds.m"
              {
#line 869 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__TypeName_48;
#line 869 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_105_105;
#line 869 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_106_106;
#line 869 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_108_108;
#line 869 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_111_111;
#line 869 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_112_112;
#line 869 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_114_114;

#line 870 "add_mutable_aux_preds.m"
                {
#line 870 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__TypeName_48 = hlds__make_hlds__add_mutable_aux_preds__global_foreign_type_name_4_f_0(hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_35, hlds__make_hlds__add_mutable_aux_preds__Lang_34, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_56, hlds__make_hlds__add_mutable_aux_preds__Type_24);
                }
#line 873 "add_mutable_aux_preds.m"
                {
#line 873 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_108_108 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ");\n");
                }
#line 873 "add_mutable_aux_preds.m"
                {
#line 873 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_106_106 = mercury__string__f_43_43_2_f_0((MR_String) ", X, ", hlds__make_hlds__add_mutable_aux_preds__V_108_108);
                }
#line 873 "add_mutable_aux_preds.m"
                {
#line 873 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_105_105 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeName_48, hlds__make_hlds__add_mutable_aux_preds__V_106_106);
                }
#line 872 "add_mutable_aux_preds.m"
                {
#line 872 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_46 = mercury__string__f_43_43_2_f_0((MR_String) "MR_get_thread_local_mutable(", hlds__make_hlds__add_mutable_aux_preds__V_105_105);
                }
#line 875 "add_mutable_aux_preds.m"
                {
#line 875 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_114_114 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ");\n");
                }
#line 875 "add_mutable_aux_preds.m"
                {
#line 875 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_112_112 = mercury__string__f_43_43_2_f_0((MR_String) ", X, ", hlds__make_hlds__add_mutable_aux_preds__V_114_114);
                }
#line 875 "add_mutable_aux_preds.m"
                {
#line 875 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_111_111 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeName_48, hlds__make_hlds__add_mutable_aux_preds__V_112_112);
                }
#line 874 "add_mutable_aux_preds.m"
                {
#line 874 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeSetCode_47 = mercury__string__f_43_43_2_f_0((MR_String) "MR_set_thread_local_mutable(", hlds__make_hlds__add_mutable_aux_preds__V_111_111);
                }
#line 869 "add_mutable_aux_preds.m"
              }
#line 868 "add_mutable_aux_preds.m"
              break;
#line 868 "add_mutable_aux_preds.m"
          }
#line 853 "add_mutable_aux_preds.m"
        }
#line 877 "add_mutable_aux_preds.m"
        break;
#line 877 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 878 "add_mutable_aux_preds.m"
        {
#line 881 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__TrailCode_45 = (MR_String) "";
#line 886 "add_mutable_aux_preds.m"
#line 886 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32) {
#line 886 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 886 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 883 "add_mutable_aux_preds.m"
              {
#line 883 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_96_96;
#line 883 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_99_99;

#line 884 "add_mutable_aux_preds.m"
                {
#line 884 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_96_96 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ";\n");
                }
#line 884 "add_mutable_aux_preds.m"
                {
#line 884 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_46 = mercury__string__f_43_43_2_f_0((MR_String) "\tX = ", hlds__make_hlds__add_mutable_aux_preds__V_96_96);
                }
#line 885 "add_mutable_aux_preds.m"
                {
#line 885 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_99_99 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) " = X;\n");
                }
#line 885 "add_mutable_aux_preds.m"
                {
#line 885 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeSetCode_47 = mercury__string__f_43_43_2_f_0((MR_String) "\t", hlds__make_hlds__add_mutable_aux_preds__V_99_99);
                }
#line 883 "add_mutable_aux_preds.m"
              }
#line 886 "add_mutable_aux_preds.m"
              break;
#line 886 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 887 "add_mutable_aux_preds.m"
              {
#line 887 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__Cast_49;
#line 887 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_87_87;
#line 887 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_88_88;
#line 887 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_90_90;
#line 887 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_93_93;
#line 888 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_156_156;

#line 888 "add_mutable_aux_preds.m"
                {
#line 888 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_156_156 = parse_tree__builtin_lib_types__int_type_0_f_0();
                }
#line 888 "add_mutable_aux_preds.m"
                {
#line 888 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__make_hlds__add_mutable_aux_preds__Type_24, hlds__make_hlds__add_mutable_aux_preds__V_156_156);
                }
#line 890 "add_mutable_aux_preds.m"
                if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 889 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__Cast_49 = (MR_String) "(int) ";
#line 890 "add_mutable_aux_preds.m"
                else
#line 891 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__Cast_49 = (MR_String) "";
#line 895 "add_mutable_aux_preds.m"
                {
#line 895 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_90_90 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ");\n");
                }
#line 894 "add_mutable_aux_preds.m"
                {
#line 894 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_88_88 = mercury__string__f_43_43_2_f_0((MR_String) "runtime.ThreadLocalMutables.get(", hlds__make_hlds__add_mutable_aux_preds__V_90_90);
                }
#line 893 "add_mutable_aux_preds.m"
                {
#line 893 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_87_87 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__Cast_49, hlds__make_hlds__add_mutable_aux_preds__V_88_88);
                }
#line 893 "add_mutable_aux_preds.m"
                {
#line 893 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_46 = mercury__string__f_43_43_2_f_0((MR_String) "\tX = ", hlds__make_hlds__add_mutable_aux_preds__V_87_87);
                }
#line 897 "add_mutable_aux_preds.m"
                {
#line 897 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_93_93 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ", X);\n");
                }
#line 896 "add_mutable_aux_preds.m"
                {
#line 896 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeSetCode_47 = mercury__string__f_43_43_2_f_0((MR_String) "\truntime.ThreadLocalMutables.set(", hlds__make_hlds__add_mutable_aux_preds__V_93_93);
                }
#line 887 "add_mutable_aux_preds.m"
              }
#line 886 "add_mutable_aux_preds.m"
              break;
#line 886 "add_mutable_aux_preds.m"
          }
#line 878 "add_mutable_aux_preds.m"
        }
#line 877 "add_mutable_aux_preds.m"
        break;
#line 877 "add_mutable_aux_preds.m"
      case (MR_Integer) 3:
#line 914 "add_mutable_aux_preds.m"
        {
#line 915 "add_mutable_aux_preds.m"
          {
#line 915 "add_mutable_aux_preds.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_unsafe_get_set_preds\'/12", (MR_String) "unsafe_get_set for erlang");
#line 915 "add_mutable_aux_preds.m"
            return;
          }
#line 914 "add_mutable_aux_preds.m"
        }
#line 877 "add_mutable_aux_preds.m"
        break;
#line 877 "add_mutable_aux_preds.m"
      case (MR_Integer) 2:
#line 900 "add_mutable_aux_preds.m"
        {
#line 903 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__TrailCode_45 = (MR_String) "";
#line 908 "add_mutable_aux_preds.m"
#line 908 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32) {
#line 908 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 908 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 905 "add_mutable_aux_preds.m"
              {
#line 905 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_81_81;
#line 905 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_84_84;

#line 906 "add_mutable_aux_preds.m"
                {
#line 906 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_81_81 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ";\n");
                }
#line 906 "add_mutable_aux_preds.m"
                {
#line 906 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_46 = mercury__string__f_43_43_2_f_0((MR_String) "\tX = ", hlds__make_hlds__add_mutable_aux_preds__V_81_81);
                }
#line 907 "add_mutable_aux_preds.m"
                {
#line 907 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_84_84 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) " = X;\n");
                }
#line 907 "add_mutable_aux_preds.m"
                {
#line 907 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeSetCode_47 = mercury__string__f_43_43_2_f_0((MR_String) "\t", hlds__make_hlds__add_mutable_aux_preds__V_84_84);
                }
#line 905 "add_mutable_aux_preds.m"
              }
#line 908 "add_mutable_aux_preds.m"
              break;
#line 908 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 909 "add_mutable_aux_preds.m"
              {
#line 909 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_75_75;
#line 909 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_78_78;

#line 910 "add_mutable_aux_preds.m"
                {
#line 910 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_75_75 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ".get();\n");
                }
#line 910 "add_mutable_aux_preds.m"
                {
#line 910 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_46 = mercury__string__f_43_43_2_f_0((MR_String) "\tX = ", hlds__make_hlds__add_mutable_aux_preds__V_75_75);
                }
#line 911 "add_mutable_aux_preds.m"
                {
#line 911 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_78_78 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ".set(X);\n");
                }
#line 911 "add_mutable_aux_preds.m"
                {
#line 911 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeSetCode_47 = mercury__string__f_43_43_2_f_0((MR_String) "\t", hlds__make_hlds__add_mutable_aux_preds__V_78_78);
                }
#line 909 "add_mutable_aux_preds.m"
              }
#line 908 "add_mutable_aux_preds.m"
              break;
#line 908 "add_mutable_aux_preds.m"
          }
#line 900 "add_mutable_aux_preds.m"
        }
#line 877 "add_mutable_aux_preds.m"
        break;
#line 877 "add_mutable_aux_preds.m"
    }
#line 918 "add_mutable_aux_preds.m"
    {
#line 918 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__UnsafeGetPredName_50 = parse_tree__prog_mutable__mutable_unsafe_get_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_22, hlds__make_hlds__add_mutable_aux_preds__MutableName_23);
    }
#line 920 "add_mutable_aux_preds.m"
    {
#line 920 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__UnsafeSetPredName_51 = parse_tree__prog_mutable__mutable_unsafe_set_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_22, hlds__make_hlds__add_mutable_aux_preds__MutableName_23);
    }
#line 925 "add_mutable_aux_preds.m"
    {
#line 925 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_124_124 = parse_tree__prog_mode__out_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_26);
    }
#line 925 "add_mutable_aux_preds.m"
    {
#line 925 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 925 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_122_122, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_39));
#line 925 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_122_122, 1) = ((MR_Box) ((MR_String) "X"));
#line 925 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_122_122, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_124_124));
#line 925 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_122_122, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_35));
#line 925 "add_mutable_aux_preds.m"
    }
#line 925 "add_mutable_aux_preds.m"
    {
#line 925 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 925 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_121_121, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_122_122));
#line 925 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_121_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 925 "add_mutable_aux_preds.m"
    }
#line 5946 "hlds.make_hlds.add_mutable_aux_preds.c"
    hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_155_155 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
#line 927 "add_mutable_aux_preds.m"
    {
#line 927 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_126_126 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_155_155);
    }
#line 928 "add_mutable_aux_preds.m"
    {
#line 928 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 928 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_128_128, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_29));
#line 928 "add_mutable_aux_preds.m"
    }
#line 928 "add_mutable_aux_preds.m"
    {
#line 928 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_127_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 928 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_127_127, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_46));
#line 928 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_127_127, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_128_128));
#line 928 "add_mutable_aux_preds.m"
    }
#line 922 "add_mutable_aux_preds.m"
    {
#line 922 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 922 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_52, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeGetAttrs_42));
#line 922 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_52, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeGetPredName_50));
#line 922 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_52, 2) = ((MR_Box) ((MR_Integer) 0));
#line 922 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_52, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_121_121));
#line 922 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_52, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_40));
#line 922 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_52, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_126_126));
#line 922 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_52, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_127_127));
#line 922 "add_mutable_aux_preds.m"
    }
#line 933 "add_mutable_aux_preds.m"
    {
#line 933 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_133_133 = parse_tree__prog_mode__in_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_26);
    }
#line 933 "add_mutable_aux_preds.m"
    {
#line 933 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_131_131 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 933 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_131_131, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_39));
#line 933 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_131_131, 1) = ((MR_Box) ((MR_String) "X"));
#line 933 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_131_131, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_133_133));
#line 933 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_131_131, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_35));
#line 933 "add_mutable_aux_preds.m"
    }
#line 933 "add_mutable_aux_preds.m"
    {
#line 933 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 933 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_130_130, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_131_131));
#line 933 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_130_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 933 "add_mutable_aux_preds.m"
    }
#line 935 "add_mutable_aux_preds.m"
    {
#line 935 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_135_135 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_155_155);
    }
#line 936 "add_mutable_aux_preds.m"
    {
#line 936 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_137_137 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TrailCode_45, hlds__make_hlds__add_mutable_aux_preds__UnsafeSetCode_47);
    }
#line 936 "add_mutable_aux_preds.m"
    {
#line 936 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_136_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 936 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_136_136, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_137_137));
#line 936 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_136_136, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_128_128));
#line 936 "add_mutable_aux_preds.m"
    }
#line 930 "add_mutable_aux_preds.m"
    {
#line 930 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 930 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_53, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeSetAttrs_43));
#line 930 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_53, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeSetPredName_51));
#line 930 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_53, 2) = ((MR_Box) ((MR_Integer) 0));
#line 930 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_53, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_130_130));
#line 930 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_53, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_40));
#line 930 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_53, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_135_135));
#line 930 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_53, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_136_136));
#line 930 "add_mutable_aux_preds.m"
    }
#line 938 "add_mutable_aux_preds.m"
    {
#line 938 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_52, hlds__make_hlds__add_mutable_aux_preds__PredStatus_18, hlds__make_hlds__add_mutable_aux_preds__Context_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_56, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_140_140, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_60, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_141_141);
    }
#line 940 "add_mutable_aux_preds.m"
    {
#line 940 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_53, hlds__make_hlds__add_mutable_aux_preds__PredStatus_18, hlds__make_hlds__add_mutable_aux_preds__Context_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_140_140, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_57, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_141_141, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_61);
    }
#line 944 "add_mutable_aux_preds.m"
    {
#line 944 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 944 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_146_146, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_39));
#line 944 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_146_146, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_29));
#line 944 "add_mutable_aux_preds.m"
    }
#line 944 "add_mutable_aux_preds.m"
    {
#line 944 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_145_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 944 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_145_145, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_146_146));
#line 944 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_145_145, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 944 "add_mutable_aux_preds.m"
    }
#line 943 "add_mutable_aux_preds.m"
    {
#line 943 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr0_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 943 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr0_54, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_29));
#line 943 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr0_54, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeGetPredName_50));
#line 943 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr0_54, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_145_145));
#line 943 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr0_54, 3) = ((MR_Box) ((MR_Integer) 1));
#line 943 "add_mutable_aux_preds.m"
    }
#line 945 "add_mutable_aux_preds.m"
    {
#line 945 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr0_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 945 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr0_55, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_29));
#line 945 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr0_55, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeSetPredName_51));
#line 945 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr0_55, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_145_145));
#line 945 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr0_55, 3) = ((MR_Box) ((MR_Integer) 2));
#line 945 "add_mutable_aux_preds.m"
    }
#line 947 "add_mutable_aux_preds.m"
    {
#line 947 "add_mutable_aux_preds.m"
      MR_Tuple base;
#line 947 "add_mutable_aux_preds.m"
      base = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 947 "add_mutable_aux_preds.m"
      *hlds__make_hlds__add_mutable_aux_preds__UnsafeGetSetExprs_17 = base;
#line 947 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr0_54));
#line 947 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr0_55));
#line 947 "add_mutable_aux_preds.m"
    }
#line 835 "add_mutable_aux_preds.m"
    *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_59 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_58;
#line 835 "add_mutable_aux_preds.m"
  }
#line 827 "add_mutable_aux_preds.m"
}

#line 756 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_lock_unlock_preds_12_p_0_1(
#line 756 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 756 "add_mutable_aux_preds.m"
{
#line 756 "add_mutable_aux_preds.m"
  {
#line 756 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 756 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 756 "add_mutable_aux_preds.m"
    {
#line 756 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_lock_unlock_preds__756__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 756 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 756 "add_mutable_aux_preds.m"
  }
#line 756 "add_mutable_aux_preds.m"
}

#line 741 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_lock_unlock_preds_12_p_0(
#line 741 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13,
#line 741 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_14,
#line 741 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15,
#line 741 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_16,
#line 741 "add_mutable_aux_preds.m"
  MR_Tuple * hlds__make_hlds__add_mutable_aux_preds__LockUnlockExprs_17,
#line 741 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_18,
#line 741 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_49,
#line 741 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_50,
#line 741 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_51,
#line 741 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_52,
#line 741 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_53,
#line 741 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_54)
#line 741 "add_mutable_aux_preds.m"
{
#line 748 "add_mutable_aux_preds.m"
  {
#line 748 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 748 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_22;
#line 748 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_23;
#line 748 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27;
#line 748 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_29;
#line 748 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_31;
#line 748 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32;
#line 748 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ImplLang_33;
#line 748 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_55_55;
#line 750 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Type_24;
#line 750 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___InitTerm_25;
#line 750 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Inst_26;
#line 750 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___VarSetMutable_28;
#line 750 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_30;
#line 754 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Lang_34;
#line 754 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_35;
#line 754 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___PreInit_36;
#line 754 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___LockUnlock_37;
#line 754 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_38;

#line 749 "add_mutable_aux_preds.m"
    {
#line 749 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_49, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_22);
    }
#line 750 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutableName_23 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 0)));
#line 750 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Type_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 1)));
#line 750 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___InitTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 2)));
#line 750 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Inst_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 3)));
#line 750 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 4)));
#line 750 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___VarSetMutable_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 5)));
#line 750 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Context_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 6)));
#line 750 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___SeqNum_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 7)));
#line 752 "add_mutable_aux_preds.m"
    {
#line 752 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsConstant_31 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27);
    }
#line 753 "add_mutable_aux_preds.m"
    {
#line 753 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27);
    }
#line 754 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__ImplLang_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 754 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Lang_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 754 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 754 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___PreInit_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 754 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___LockUnlock_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 754 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 756 "add_mutable_aux_preds.m"
    {
#line 756 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 756 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[12]));
#line 756 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__define_lock_unlock_preds_12_p_0_1));
#line 756 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 756 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__IsConstant_31));
#line 756 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 4) = ((MR_Box) ((MR_Integer) 0));
#line 756 "add_mutable_aux_preds.m"
    }
#line 756 "add_mutable_aux_preds.m"
    {
#line 756 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_55_55, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_lock_unlock_preds\'/12", (MR_String) "need_lock_unlock_preds, but IsConstant = mutable_constant");
    }
#line 814 "add_mutable_aux_preds.m"
#line 814 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__ImplLang_33) {
#line 814 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 814 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 760 "add_mutable_aux_preds.m"
        {
#line 760 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_119_119;
#line 760 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_120_120;
#line 760 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__LockAndUnlockAttrs_39;
#line 760 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__MutableMutexVarName_40;
#line 760 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__LockForeignProcBody_41;
#line 760 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__UnlockForeignProcBody_42;
#line 760 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__LockPredName_43;
#line 760 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__UnlockPredName_44;
#line 760 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_45;
#line 760 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_46;
#line 760 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__CallLockExpr0_47;
#line 760 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr0_48;
#line 760 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_98_98;
#line 760 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_99_99;
#line 760 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_100_100;
#line 760 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_101_101;
#line 760 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_104_104;
#line 760 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_105_105;
#line 760 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_106_106;
#line 760 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_109_109;
#line 760 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_110_110;

#line 761 "add_mutable_aux_preds.m"
          {
#line 761 "add_mutable_aux_preds.m"
            parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__Attrs_16, &hlds__make_hlds__add_mutable_aux_preds__LockAndUnlockAttrs_39);
          }
#line 762 "add_mutable_aux_preds.m"
          {
#line 762 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__MutableMutexVarName_40 = parse_tree__prog_mutable__mutable_mutex_var_name_1_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15);
          }
#line 780 "add_mutable_aux_preds.m"
#line 780 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32) {
#line 780 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 780 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 765 "add_mutable_aux_preds.m"
              {
#line 765 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_70_70;
#line 765 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_72_72;
#line 765 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_73_73;
#line 765 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_75_75;
#line 765 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_76_76;
#line 765 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_78_78;
#line 765 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_83_83;
#line 765 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_85_85;
#line 765 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_86_86;
#line 765 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_88_88;
#line 765 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_89_89;
#line 765 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_91_91;

#line 771 "add_mutable_aux_preds.m"
                {
#line 771 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_78_78 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__MutableMutexVarName_40, (MR_String) "\");\n#endif\n");
                }
#line 771 "add_mutable_aux_preds.m"
                {
#line 771 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_76_76 = mercury__string__f_43_43_2_f_0((MR_String) ",\n                    \"", hlds__make_hlds__add_mutable_aux_preds__V_78_78);
                }
#line 770 "add_mutable_aux_preds.m"
                {
#line 770 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_75_75 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__MutableMutexVarName_40, hlds__make_hlds__add_mutable_aux_preds__V_76_76);
                }
#line 770 "add_mutable_aux_preds.m"
                {
#line 770 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_73_73 = mercury__string__f_43_43_2_f_0((MR_String) "  MR_LOCK(&", hlds__make_hlds__add_mutable_aux_preds__V_75_75);
                }
#line 773 "add_mutable_aux_preds.m"
                {
#line 773 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 773 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_72_72, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_73_73));
#line 773 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 773 "add_mutable_aux_preds.m"
                }
#line 769 "add_mutable_aux_preds.m"
                {
#line 769 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 769 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_70_70, 0) = ((MR_Box) ((MR_String) "#ifdef MR_THREAD_SAFE\n"));
#line 769 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_70_70, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_72_72));
#line 769 "add_mutable_aux_preds.m"
                }
#line 768 "add_mutable_aux_preds.m"
                {
#line 768 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__LockForeignProcBody_41 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_70_70);
                }
#line 777 "add_mutable_aux_preds.m"
                {
#line 777 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_91_91 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__MutableMutexVarName_40, (MR_String) "\");\n#endif\n");
                }
#line 777 "add_mutable_aux_preds.m"
                {
#line 777 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_89_89 = mercury__string__f_43_43_2_f_0((MR_String) ",\n                    \"", hlds__make_hlds__add_mutable_aux_preds__V_91_91);
                }
#line 776 "add_mutable_aux_preds.m"
                {
#line 776 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_88_88 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__MutableMutexVarName_40, hlds__make_hlds__add_mutable_aux_preds__V_89_89);
                }
#line 776 "add_mutable_aux_preds.m"
                {
#line 776 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_86_86 = mercury__string__f_43_43_2_f_0((MR_String) "  MR_UNLOCK(&", hlds__make_hlds__add_mutable_aux_preds__V_88_88);
                }
#line 779 "add_mutable_aux_preds.m"
                {
#line 779 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 779 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_85_85, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_86_86));
#line 779 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 779 "add_mutable_aux_preds.m"
                }
#line 775 "add_mutable_aux_preds.m"
                {
#line 775 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 775 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_83_83, 0) = ((MR_Box) ((MR_String) "#ifdef MR_THREAD_SAFE\n"));
#line 775 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_83_83, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_85_85));
#line 775 "add_mutable_aux_preds.m"
                }
#line 774 "add_mutable_aux_preds.m"
                {
#line 774 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnlockForeignProcBody_42 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_83_83);
                }
#line 765 "add_mutable_aux_preds.m"
              }
#line 780 "add_mutable_aux_preds.m"
              break;
#line 780 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 781 "add_mutable_aux_preds.m"
              {
#line 782 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__LockForeignProcBody_41 = (MR_String) "";
#line 783 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__UnlockForeignProcBody_42 = (MR_String) "";
#line 781 "add_mutable_aux_preds.m"
              }
#line 780 "add_mutable_aux_preds.m"
              break;
#line 780 "add_mutable_aux_preds.m"
          }
#line 785 "add_mutable_aux_preds.m"
          {
#line 785 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__LockPredName_43 = parse_tree__prog_mutable__mutable_lock_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_22, hlds__make_hlds__add_mutable_aux_preds__MutableName_23);
          }
#line 787 "add_mutable_aux_preds.m"
          {
#line 787 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__UnlockPredName_44 = parse_tree__prog_mutable__mutable_unlock_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_22, hlds__make_hlds__add_mutable_aux_preds__MutableName_23);
          }
#line 6513 "hlds.make_hlds.add_mutable_aux_preds.c"
          hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_119_119 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 793 "add_mutable_aux_preds.m"
          {
#line 793 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_98_98 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_119_119);
          }
#line 6520 "hlds.make_hlds.add_mutable_aux_preds.c"
          hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_120_120 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
#line 794 "add_mutable_aux_preds.m"
          {
#line 794 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_99_99 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_120_120);
          }
#line 795 "add_mutable_aux_preds.m"
          {
#line 795 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 795 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_101_101, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_29));
#line 795 "add_mutable_aux_preds.m"
          }
#line 795 "add_mutable_aux_preds.m"
          {
#line 795 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 795 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_100_100, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockForeignProcBody_41));
#line 795 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_100_100, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_101_101));
#line 795 "add_mutable_aux_preds.m"
          }
#line 789 "add_mutable_aux_preds.m"
          {
#line 789 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 789 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_45, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockAndUnlockAttrs_39));
#line 789 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_45, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockPredName_43));
#line 789 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_45, 2) = ((MR_Box) ((MR_Integer) 0));
#line 789 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_45, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 789 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_45, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_98_98));
#line 789 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_45, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_99_99));
#line 789 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_45, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_100_100));
#line 789 "add_mutable_aux_preds.m"
          }
#line 801 "add_mutable_aux_preds.m"
          {
#line 801 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_104_104 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_119_119);
          }
#line 802 "add_mutable_aux_preds.m"
          {
#line 802 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_105_105 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_120_120);
          }
#line 803 "add_mutable_aux_preds.m"
          {
#line 803 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 803 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_106_106, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnlockForeignProcBody_42));
#line 803 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_106_106, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_101_101));
#line 803 "add_mutable_aux_preds.m"
          }
#line 797 "add_mutable_aux_preds.m"
          {
#line 797 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 797 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_46, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockAndUnlockAttrs_39));
#line 797 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_46, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnlockPredName_44));
#line 797 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_46, 2) = ((MR_Box) ((MR_Integer) 0));
#line 797 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_46, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 797 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_46, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_104_104));
#line 797 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_46, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_105_105));
#line 797 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_46, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_106_106));
#line 797 "add_mutable_aux_preds.m"
          }
#line 805 "add_mutable_aux_preds.m"
          {
#line 805 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_45, hlds__make_hlds__add_mutable_aux_preds__PredStatus_18, hlds__make_hlds__add_mutable_aux_preds__Context_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_49, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_109_109, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_53, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_110_110);
          }
#line 807 "add_mutable_aux_preds.m"
          {
#line 807 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_46, hlds__make_hlds__add_mutable_aux_preds__PredStatus_18, hlds__make_hlds__add_mutable_aux_preds__Context_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_109_109, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_50, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_110_110, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_54);
          }
#line 810 "add_mutable_aux_preds.m"
          {
#line 810 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__CallLockExpr0_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 810 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallLockExpr0_47, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_29));
#line 810 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallLockExpr0_47, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockPredName_43));
#line 810 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallLockExpr0_47, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 810 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallLockExpr0_47, 3) = ((MR_Box) ((MR_Integer) 2));
#line 810 "add_mutable_aux_preds.m"
          }
#line 812 "add_mutable_aux_preds.m"
          {
#line 812 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr0_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 812 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr0_48, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_29));
#line 812 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr0_48, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnlockPredName_44));
#line 812 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr0_48, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 812 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr0_48, 3) = ((MR_Box) ((MR_Integer) 2));
#line 812 "add_mutable_aux_preds.m"
          }
#line 813 "add_mutable_aux_preds.m"
          {
#line 813 "add_mutable_aux_preds.m"
            MR_Tuple base;
#line 813 "add_mutable_aux_preds.m"
            base = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 813 "add_mutable_aux_preds.m"
            *hlds__make_hlds__add_mutable_aux_preds__LockUnlockExprs_17 = base;
#line 813 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallLockExpr0_47));
#line 813 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr0_48));
#line 813 "add_mutable_aux_preds.m"
          }
#line 760 "add_mutable_aux_preds.m"
        }
#line 814 "add_mutable_aux_preds.m"
        break;
#line 814 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 815 "add_mutable_aux_preds.m"
        {
#line 816 "add_mutable_aux_preds.m"
          {
#line 816 "add_mutable_aux_preds.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_lock_unlock_preds\'/12", (MR_String) "lock_unlock for csharp");
#line 816 "add_mutable_aux_preds.m"
            return;
          }
#line 815 "add_mutable_aux_preds.m"
        }
#line 814 "add_mutable_aux_preds.m"
        break;
#line 814 "add_mutable_aux_preds.m"
      case (MR_Integer) 3:
#line 821 "add_mutable_aux_preds.m"
        {
#line 822 "add_mutable_aux_preds.m"
          {
#line 822 "add_mutable_aux_preds.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_lock_unlock_preds\'/12", (MR_String) "lock_unlock for erlang");
#line 822 "add_mutable_aux_preds.m"
            return;
          }
#line 821 "add_mutable_aux_preds.m"
        }
#line 814 "add_mutable_aux_preds.m"
        break;
#line 814 "add_mutable_aux_preds.m"
      case (MR_Integer) 2:
#line 818 "add_mutable_aux_preds.m"
        {
#line 819 "add_mutable_aux_preds.m"
          {
#line 819 "add_mutable_aux_preds.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_lock_unlock_preds\'/12", (MR_String) "lock_unlock for java");
#line 819 "add_mutable_aux_preds.m"
            return;
          }
#line 818 "add_mutable_aux_preds.m"
        }
#line 814 "add_mutable_aux_preds.m"
        break;
#line 814 "add_mutable_aux_preds.m"
    }
#line 748 "add_mutable_aux_preds.m"
    *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_52 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_51;
#line 748 "add_mutable_aux_preds.m"
  }
#line 741 "add_mutable_aux_preds.m"
}

#line 695 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_pre_init_pred_12_p_0_1(
#line 695 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 695 "add_mutable_aux_preds.m"
{
#line 695 "add_mutable_aux_preds.m"
  {
#line 695 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 695 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 695 "add_mutable_aux_preds.m"
    {
#line 695 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_pre_init_pred__695__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 695 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 695 "add_mutable_aux_preds.m"
  }
#line 695 "add_mutable_aux_preds.m"
}

#line 679 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_pre_init_pred_12_p_0(
#line 679 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13,
#line 679 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_14,
#line 679 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15,
#line 679 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_16,
#line 679 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_17,
#line 679 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_18,
#line 679 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_42,
#line 679 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_43,
#line 679 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_44,
#line 679 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_45,
#line 679 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_46,
#line 679 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_47)
#line 679 "add_mutable_aux_preds.m"
{
#line 686 "add_mutable_aux_preds.m"
  {
#line 686 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 686 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_22;
#line 686 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_23;
#line 686 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27;
#line 686 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_29;
#line 686 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_31;
#line 686 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32;
#line 686 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ImplLang_33;
#line 686 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInitPredName_39;
#line 686 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__PreInitCode_40;
#line 686 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41;
#line 686 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_48_48;
#line 686 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_74_74;
#line 686 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_75_75;
#line 686 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_76_76;
#line 686 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_77_77;
#line 688 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Type_24;
#line 688 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___InitTerm_25;
#line 688 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Inst_26;
#line 688 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___VarSetMutable_28;
#line 688 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_30;
#line 692 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Lang_34;
#line 692 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_35;
#line 692 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___PreInit_36;
#line 692 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___LockUnlock_37;
#line 692 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_38;

#line 687 "add_mutable_aux_preds.m"
    {
#line 687 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_42, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_22);
    }
#line 688 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutableName_23 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 0)));
#line 688 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Type_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 1)));
#line 688 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___InitTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 2)));
#line 688 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Inst_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 3)));
#line 688 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 4)));
#line 688 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___VarSetMutable_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 5)));
#line 688 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Context_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 6)));
#line 688 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___SeqNum_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 7)));
#line 690 "add_mutable_aux_preds.m"
    {
#line 690 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsConstant_31 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27);
    }
#line 691 "add_mutable_aux_preds.m"
    {
#line 691 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27);
    }
#line 692 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__ImplLang_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 692 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Lang_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 692 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 692 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___PreInit_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 692 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___LockUnlock_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 692 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 695 "add_mutable_aux_preds.m"
    {
#line 695 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 695 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_48_48, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[12]));
#line 695 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_48_48, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__define_pre_init_pred_12_p_0_1));
#line 695 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 695 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_48_48, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__IsConstant_31));
#line 695 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_48_48, 4) = ((MR_Box) ((MR_Integer) 0));
#line 695 "add_mutable_aux_preds.m"
    }
#line 695 "add_mutable_aux_preds.m"
    {
#line 695 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_48_48, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_pre_init_pred\'/12", (MR_String) "need_pre_init_pred, but IsConstant = mutable_constant");
    }
#line 697 "add_mutable_aux_preds.m"
    {
#line 697 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PreInitPredName_39 = parse_tree__prog_mutable__mutable_pre_init_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_22, hlds__make_hlds__add_mutable_aux_preds__MutableName_23);
    }
#line 715 "add_mutable_aux_preds.m"
#line 715 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__ImplLang_33) {
#line 715 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 715 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 710 "add_mutable_aux_preds.m"
#line 710 "add_mutable_aux_preds.m"
        switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32) {
#line 710 "add_mutable_aux_preds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 710 "add_mutable_aux_preds.m"
          case (MR_Integer) 0:
#line 702 "add_mutable_aux_preds.m"
            {
#line 702 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__V_61_61;
#line 702 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__V_63_63;
#line 702 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__V_65_65;
#line 702 "add_mutable_aux_preds.m"
              MR_String hlds__make_hlds__add_mutable_aux_preds__V_66_66;

#line 706 "add_mutable_aux_preds.m"
              {
#line 706 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_66_66 = parse_tree__prog_mutable__mutable_mutex_var_name_1_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15);
              }
#line 706 "add_mutable_aux_preds.m"
              {
#line 706 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 706 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_65_65, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_66_66));
#line 706 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[23])));
#line 706 "add_mutable_aux_preds.m"
              }
#line 705 "add_mutable_aux_preds.m"
              {
#line 705 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 705 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_63_63, 0) = ((MR_Box) ((MR_String) "   pthread_mutex_init(&"));
#line 705 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_63_63, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_65_65));
#line 705 "add_mutable_aux_preds.m"
              }
#line 704 "add_mutable_aux_preds.m"
              {
#line 704 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 704 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_61_61, 0) = ((MR_Box) ((MR_String) "#ifdef MR_THREAD_SAFE\n"));
#line 704 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_61_61, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_63_63));
#line 704 "add_mutable_aux_preds.m"
              }
#line 703 "add_mutable_aux_preds.m"
              {
#line 703 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__PreInitCode_40 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_61_61);
              }
#line 702 "add_mutable_aux_preds.m"
            }
#line 710 "add_mutable_aux_preds.m"
            break;
#line 710 "add_mutable_aux_preds.m"
          case (MR_Integer) 1:
#line 711 "add_mutable_aux_preds.m"
            {
#line 712 "add_mutable_aux_preds.m"
              {
#line 712 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__PreInitCode_40 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) " = MR_new_thread_local_mutable_index();\n");
              }
#line 711 "add_mutable_aux_preds.m"
            }
#line 710 "add_mutable_aux_preds.m"
            break;
#line 710 "add_mutable_aux_preds.m"
        }
#line 715 "add_mutable_aux_preds.m"
        break;
#line 715 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 716 "add_mutable_aux_preds.m"
        {
#line 717 "add_mutable_aux_preds.m"
          {
#line 717 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__PreInitCode_40 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) " = runtime.ThreadLocalMutables.new_index();\n");
          }
#line 716 "add_mutable_aux_preds.m"
        }
#line 715 "add_mutable_aux_preds.m"
        break;
#line 715 "add_mutable_aux_preds.m"
      case (MR_Integer) 3:
#line 723 "add_mutable_aux_preds.m"
        {
#line 724 "add_mutable_aux_preds.m"
          {
#line 724 "add_mutable_aux_preds.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_pre_init_pred\'/12", (MR_String) "preinit for erlang");
#line 724 "add_mutable_aux_preds.m"
            return;
          }
#line 723 "add_mutable_aux_preds.m"
        }
#line 715 "add_mutable_aux_preds.m"
        break;
#line 715 "add_mutable_aux_preds.m"
      case (MR_Integer) 2:
#line 720 "add_mutable_aux_preds.m"
        {
#line 721 "add_mutable_aux_preds.m"
          {
#line 721 "add_mutable_aux_preds.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_pre_init_pred\'/12", (MR_String) "preinit for java");
#line 721 "add_mutable_aux_preds.m"
            return;
          }
#line 720 "add_mutable_aux_preds.m"
        }
#line 715 "add_mutable_aux_preds.m"
        break;
#line 715 "add_mutable_aux_preds.m"
    }
#line 730 "add_mutable_aux_preds.m"
    {
#line 730 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_74_74 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 731 "add_mutable_aux_preds.m"
    {
#line 731 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_75_75 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
#line 732 "add_mutable_aux_preds.m"
    {
#line 732 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 732 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_77_77, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_29));
#line 732 "add_mutable_aux_preds.m"
    }
#line 732 "add_mutable_aux_preds.m"
    {
#line 732 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 732 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_76_76, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PreInitCode_40));
#line 732 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_76_76, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_77_77));
#line 732 "add_mutable_aux_preds.m"
    }
#line 726 "add_mutable_aux_preds.m"
    {
#line 726 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 726 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Attrs_16));
#line 726 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PreInitPredName_39));
#line 726 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41, 2) = ((MR_Box) ((MR_Integer) 0));
#line 726 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 726 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_74_74));
#line 726 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_75_75));
#line 726 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_76_76));
#line 726 "add_mutable_aux_preds.m"
    }
#line 734 "add_mutable_aux_preds.m"
    {
#line 734 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41, hlds__make_hlds__add_mutable_aux_preds__PredStatus_18, hlds__make_hlds__add_mutable_aux_preds__Context_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_42, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_43, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_46, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_47);
    }
#line 737 "add_mutable_aux_preds.m"
    {
#line 737 "add_mutable_aux_preds.m"
      MR_Word base;
#line 737 "add_mutable_aux_preds.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 737 "add_mutable_aux_preds.m"
      *hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_17 = base;
#line 737 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_29));
#line 737 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PreInitPredName_39));
#line 737 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 737 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) ((MR_Integer) 2));
#line 737 "add_mutable_aux_preds.m"
    }
#line 686 "add_mutable_aux_preds.m"
    *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_45 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_44;
#line 686 "add_mutable_aux_preds.m"
  }
#line 679 "add_mutable_aux_preds.m"
}

#line 595 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_aux_preds_10_p_0(
#line 595 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11,
#line 595 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_12,
#line 595 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_13,
#line 595 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredStatus_14,
#line 595 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34,
#line 595 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_35,
#line 595 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_36,
#line 595 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_37,
#line 595 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38,
#line 595 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39)
#line 595 "add_mutable_aux_preds.m"
{
#line 601 "add_mutable_aux_preds.m"
  {
#line 601 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 601 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ImplLang_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 601 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 601 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 601 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInit_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 601 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__LockUnlock_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 601 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 601 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs0_24;
#line 601 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_26;
#line 601 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_27;
#line 601 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_29;
#line 601 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_31;
#line 601 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_33;
#line 601 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_43_43;
#line 601 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_44_44;
#line 601 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_45_45;
#line 601 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46;
#line 601 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_47_47;
#line 601 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_48_48;
#line 601 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_49_49;
#line 601 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_50_50;
#line 601 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51;
#line 601 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_52_52;
#line 601 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_53_53;
#line 601 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_54_54;

#line 607 "add_mutable_aux_preds.m"
    {
#line 607 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__Attrs0_24 = parse_tree__prog_data__default_attributes_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Lang_19);
    }
#line 612 "add_mutable_aux_preds.m"
#line 612 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__ImplLang_18) {
#line 612 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 612 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 609 "add_mutable_aux_preds.m"
        {
#line 609 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs1_25;

#line 610 "add_mutable_aux_preds.m"
          {
#line 610 "add_mutable_aux_preds.m"
            parse_tree__prog_data__set_box_policy_3_p_0(hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_20, hlds__make_hlds__add_mutable_aux_preds__Attrs0_24, &hlds__make_hlds__add_mutable_aux_preds__Attrs1_25);
          }
#line 611 "add_mutable_aux_preds.m"
          {
#line 611 "add_mutable_aux_preds.m"
            parse_tree__prog_data__set_may_call_mercury_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__Attrs1_25, &hlds__make_hlds__add_mutable_aux_preds__Attrs_26);
          }
#line 609 "add_mutable_aux_preds.m"
        }
#line 612 "add_mutable_aux_preds.m"
        break;
#line 612 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 612 "add_mutable_aux_preds.m"
      case (MR_Integer) 2:
#line 615 "add_mutable_aux_preds.m"
        {
#line 620 "add_mutable_aux_preds.m"
          {
#line 620 "add_mutable_aux_preds.m"
            parse_tree__prog_data__set_may_duplicate_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[2]), hlds__make_hlds__add_mutable_aux_preds__Attrs0_24, &hlds__make_hlds__add_mutable_aux_preds__Attrs_26);
          }
#line 615 "add_mutable_aux_preds.m"
        }
#line 612 "add_mutable_aux_preds.m"
        break;
#line 612 "add_mutable_aux_preds.m"
      case (MR_Integer) 3:
#line 623 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__Attrs_26 = hlds__make_hlds__add_mutable_aux_preds__Attrs0_24;
#line 612 "add_mutable_aux_preds.m"
        break;
#line 612 "add_mutable_aux_preds.m"
    }
#line 636 "add_mutable_aux_preds.m"
#line 636 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__PreInit_21) {
#line 636 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 636 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 634 "add_mutable_aux_preds.m"
        {
#line 635 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 634 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_43_43 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34;
#line 634 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_44_44 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_36;
#line 634 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_45_45 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38;
#line 634 "add_mutable_aux_preds.m"
        }
#line 636 "add_mutable_aux_preds.m"
        break;
#line 636 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 637 "add_mutable_aux_preds.m"
        {
#line 637 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_28;

#line 638 "add_mutable_aux_preds.m"
          {
#line 638 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__define_pre_init_pred_12_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11, hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_13, hlds__make_hlds__add_mutable_aux_preds__Attrs_26, &hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_28, hlds__make_hlds__add_mutable_aux_preds__PredStatus_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_43_43, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_36, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_44_44, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_45_45);
          }
#line 641 "add_mutable_aux_preds.m"
          {
#line 641 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 641 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_27, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_28));
#line 641 "add_mutable_aux_preds.m"
          }
#line 637 "add_mutable_aux_preds.m"
        }
#line 636 "add_mutable_aux_preds.m"
        break;
#line 636 "add_mutable_aux_preds.m"
    }
#line 646 "add_mutable_aux_preds.m"
#line 646 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__LockUnlock_22) {
#line 646 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 646 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 644 "add_mutable_aux_preds.m"
        {
#line 645 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 644 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_43_43;
#line 644 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_47_47 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_44_44;
#line 644 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_48_48 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_45_45;
#line 644 "add_mutable_aux_preds.m"
        }
#line 646 "add_mutable_aux_preds.m"
        break;
#line 646 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 647 "add_mutable_aux_preds.m"
        {
#line 647 "add_mutable_aux_preds.m"
          MR_Tuple hlds__make_hlds__add_mutable_aux_preds__LockUnlockExprs_30;

#line 648 "add_mutable_aux_preds.m"
          {
#line 648 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__define_lock_unlock_preds_12_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11, hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_13, hlds__make_hlds__add_mutable_aux_preds__Attrs_26, &hlds__make_hlds__add_mutable_aux_preds__LockUnlockExprs_30, hlds__make_hlds__add_mutable_aux_preds__PredStatus_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_43_43, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_44_44, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_47_47, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_45_45, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_48_48);
          }
#line 651 "add_mutable_aux_preds.m"
          {
#line 651 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 651 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_29, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockUnlockExprs_30));
#line 651 "add_mutable_aux_preds.m"
          }
#line 647 "add_mutable_aux_preds.m"
        }
#line 646 "add_mutable_aux_preds.m"
        break;
#line 646 "add_mutable_aux_preds.m"
    }
#line 656 "add_mutable_aux_preds.m"
#line 656 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_23) {
#line 656 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 656 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 654 "add_mutable_aux_preds.m"
        {
#line 655 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 654 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_49_49 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46;
#line 654 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_50_50 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_47_47;
#line 654 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_48_48;
#line 654 "add_mutable_aux_preds.m"
        }
#line 656 "add_mutable_aux_preds.m"
        break;
#line 656 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 657 "add_mutable_aux_preds.m"
        {
#line 657 "add_mutable_aux_preds.m"
          MR_Tuple hlds__make_hlds__add_mutable_aux_preds__UnsafeGetSetExprs_32;

#line 658 "add_mutable_aux_preds.m"
          {
#line 658 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__define_unsafe_get_set_preds_12_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11, hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_13, hlds__make_hlds__add_mutable_aux_preds__Attrs_26, &hlds__make_hlds__add_mutable_aux_preds__UnsafeGetSetExprs_32, hlds__make_hlds__add_mutable_aux_preds__PredStatus_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_49_49, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_47_47, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_50_50, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_48_48, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51);
          }
#line 661 "add_mutable_aux_preds.m"
          {
#line 661 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 661 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_31, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeGetSetExprs_32));
#line 661 "add_mutable_aux_preds.m"
          }
#line 657 "add_mutable_aux_preds.m"
        }
#line 656 "add_mutable_aux_preds.m"
        break;
#line 656 "add_mutable_aux_preds.m"
    }
#line 667 "add_mutable_aux_preds.m"
    {
#line 667 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__define_main_get_set_preds_14_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11, hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_13, hlds__make_hlds__add_mutable_aux_preds__Attrs_26, hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_29, hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_31, &hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_33, hlds__make_hlds__add_mutable_aux_preds__PredStatus_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_49_49, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_52_52, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_50_50, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_53_53, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_54_54);
    }
#line 674 "add_mutable_aux_preds.m"
    {
#line 674 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__define_init_pred_11_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11, hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_27, hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_33, hlds__make_hlds__add_mutable_aux_preds__Lang_19, hlds__make_hlds__add_mutable_aux_preds__PredStatus_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_52_52, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_35, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_53_53, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_37, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_54_54, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39);
#line 674 "add_mutable_aux_preds.m"
      return;
    }
#line 601 "add_mutable_aux_preds.m"
  }
#line 595 "add_mutable_aux_preds.m"
}

#line 559 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_global_var_java_6_p_0(
#line 559 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_7,
#line 559 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_8,
#line 559 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_9,
#line 559 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_10,
#line 559 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_15,
#line 559 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_16)
#line 559 "add_mutable_aux_preds.m"
{
#line 564 "add_mutable_aux_preds.m"
  {
#line 564 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 564 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__DefnBody_13;
#line 564 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_14;
#line 564 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_36_36;

#line 576 "add_mutable_aux_preds.m"
#line 576 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_9) {
#line 576 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 576 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 566 "add_mutable_aux_preds.m"
        {
#line 566 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__TypeStr_12;
#line 566 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__V_30_30;
#line 566 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__V_31_31;
#line 566 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__V_33_33;
#line 570 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_39_39;

#line 570 "add_mutable_aux_preds.m"
          {
#line 570 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_39_39 = parse_tree__builtin_lib_types__int_type_0_f_0();
          }
#line 570 "add_mutable_aux_preds.m"
          {
#line 570 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__make_hlds__add_mutable_aux_preds__Type_8, hlds__make_hlds__add_mutable_aux_preds__V_39_39);
          }
#line 572 "add_mutable_aux_preds.m"
          if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 571 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__TypeStr_12 = (MR_String) "int";
#line 572 "add_mutable_aux_preds.m"
          else
#line 573 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__TypeStr_12 = (MR_String) "java.lang.Object";
#line 575 "add_mutable_aux_preds.m"
          {
#line 575 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_33_33 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_7, (MR_String) ";\n");
          }
#line 575 "add_mutable_aux_preds.m"
          {
#line 575 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_31_31 = mercury__string__f_43_43_2_f_0((MR_String) " ", hlds__make_hlds__add_mutable_aux_preds__V_33_33);
          }
#line 575 "add_mutable_aux_preds.m"
          {
#line 575 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_30_30 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeStr_12, hlds__make_hlds__add_mutable_aux_preds__V_31_31);
          }
#line 575 "add_mutable_aux_preds.m"
          {
#line 575 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__DefnBody_13 = mercury__string__f_43_43_2_f_0((MR_String) "static ", hlds__make_hlds__add_mutable_aux_preds__V_30_30);
          }
#line 566 "add_mutable_aux_preds.m"
        }
#line 576 "add_mutable_aux_preds.m"
        break;
#line 576 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 577 "add_mutable_aux_preds.m"
        {
#line 577 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_17_17;
#line 577 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_19_19;
#line 577 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_20_20;
#line 577 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_22_22;
#line 577 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_23_23;
#line 577 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_25_25;
#line 577 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__TypeStr_38;
#line 578 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_40_40;

#line 578 "add_mutable_aux_preds.m"
          {
#line 578 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_40_40 = parse_tree__builtin_lib_types__int_type_0_f_0();
          }
#line 578 "add_mutable_aux_preds.m"
          {
#line 578 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__make_hlds__add_mutable_aux_preds__Type_8, hlds__make_hlds__add_mutable_aux_preds__V_40_40);
          }
#line 580 "add_mutable_aux_preds.m"
          if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 579 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__TypeStr_38 = (MR_String) "java.lang.Integer";
#line 580 "add_mutable_aux_preds.m"
          else
#line 581 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__TypeStr_38 = (MR_String) "java.lang.Object";
#line 586 "add_mutable_aux_preds.m"
          {
#line 586 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 586 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_25_25, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TypeStr_38));
#line 586 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[35])));
#line 586 "add_mutable_aux_preds.m"
          }
#line 586 "add_mutable_aux_preds.m"
          {
#line 586 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 586 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_23_23, 0) = ((MR_Box) ((MR_String) " = new java.lang.InheritableThreadLocal<"));
#line 586 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_23_23, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_25_25));
#line 586 "add_mutable_aux_preds.m"
          }
#line 585 "add_mutable_aux_preds.m"
          {
#line 585 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 585 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_22_22, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_7));
#line 585 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_22_22, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_23_23));
#line 585 "add_mutable_aux_preds.m"
          }
#line 584 "add_mutable_aux_preds.m"
          {
#line 584 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 584 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_20_20, 0) = ((MR_Box) ((MR_String) "> "));
#line 584 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_20_20, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_22_22));
#line 584 "add_mutable_aux_preds.m"
          }
#line 584 "add_mutable_aux_preds.m"
          {
#line 584 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 584 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_19_19, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TypeStr_38));
#line 584 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_19_19, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_20_20));
#line 584 "add_mutable_aux_preds.m"
          }
#line 584 "add_mutable_aux_preds.m"
          {
#line 584 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 584 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_17_17, 0) = ((MR_Box) ((MR_String) "static java.lang.ThreadLocal<"));
#line 584 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_17_17, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_19_19));
#line 584 "add_mutable_aux_preds.m"
          }
#line 583 "add_mutable_aux_preds.m"
          {
#line 583 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__DefnBody_13 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_17_17);
          }
#line 577 "add_mutable_aux_preds.m"
        }
#line 576 "add_mutable_aux_preds.m"
        break;
#line 576 "add_mutable_aux_preds.m"
    }
#line 590 "add_mutable_aux_preds.m"
    {
#line 590 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 590 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_36_36, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__DefnBody_13));
#line 590 "add_mutable_aux_preds.m"
    }
#line 590 "add_mutable_aux_preds.m"
    {
#line 590 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 590 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_14, 0) = ((MR_Box) ((MR_Integer) 2));
#line 590 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_14, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_36_36));
#line 590 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_14, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_10));
#line 590 "add_mutable_aux_preds.m"
    }
#line 591 "add_mutable_aux_preds.m"
    {
#line 591 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_add_foreign_body_code_3_p_0(hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_15, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_16);
#line 591 "add_mutable_aux_preds.m"
      return;
    }
#line 564 "add_mutable_aux_preds.m"
  }
#line 559 "add_mutable_aux_preds.m"
}

#line 458 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_global_var_c_7_p_0(
#line 458 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_8,
#line 458 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_9,
#line 458 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_10,
#line 458 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_11,
#line 458 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_12,
#line 458 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_26,
#line 458 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_27)
#line 458 "add_mutable_aux_preds.m"
{
#line 463 "add_mutable_aux_preds.m"
  {
#line 463 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 463 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__HighLevelTypeName_14;
#line 463 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__LowLevelTypeName_15;
#line 463 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__TypeName_18;
#line 463 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__LockDeclStrs_19;
#line 463 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__LockDefnStrs_20;
#line 463 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__DeclBody_22;
#line 463 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignDeclCode_23;
#line 463 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__DefnBody_24;
#line 463 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignBodyCode_25;
#line 463 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_51_51;
#line 463 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_53_53;
#line 463 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_55_55;
#line 463 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_56_56;
#line 463 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_58_58;
#line 463 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_59_59;
#line 463 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_61_61;
#line 463 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_63_63;
#line 463 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_65_65;
#line 463 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_66_66;
#line 463 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_68_68;
#line 463 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_69_69;
#line 463 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_71_71;
#line 463 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_75_75;
#line 463 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_76_76;
#line 463 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_77_77;
#line 463 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_78_78;
#line 463 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_80_80;
#line 463 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_81_81;
#line 463 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_84_84;

#line 486 "add_mutable_aux_preds.m"
#line 486 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_11) {
#line 486 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 486 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 469 "add_mutable_aux_preds.m"
        {
#line 469 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__Globals_16;
#line 469 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__HighLevelCode_17;

#line 1333 "add_mutable_aux_preds.m"
          {
#line 1333 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__HighLevelTypeName_14 = backend_libs__foreign__mercury_exported_type_to_string_3_f_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_26, (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__Type_9);
          }
#line 1331 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LowLevelTypeName_15 = (MR_String) "MR_Word";
#line 477 "add_mutable_aux_preds.m"
          {
#line 477 "add_mutable_aux_preds.m"
            hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_26, &hlds__make_hlds__add_mutable_aux_preds__Globals_16);
          }
#line 478 "add_mutable_aux_preds.m"
          {
#line 478 "add_mutable_aux_preds.m"
            libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_16, (MR_Integer) 256, &hlds__make_hlds__add_mutable_aux_preds__HighLevelCode_17);
          }
#line 482 "add_mutable_aux_preds.m"
#line 482 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__HighLevelCode_17) {
#line 482 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 482 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 481 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__TypeName_18 = hlds__make_hlds__add_mutable_aux_preds__LowLevelTypeName_15;
#line 482 "add_mutable_aux_preds.m"
              break;
#line 482 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 484 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__TypeName_18 = hlds__make_hlds__add_mutable_aux_preds__HighLevelTypeName_14;
#line 482 "add_mutable_aux_preds.m"
              break;
#line 482 "add_mutable_aux_preds.m"
          }
#line 469 "add_mutable_aux_preds.m"
        }
#line 486 "add_mutable_aux_preds.m"
        break;
#line 486 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 487 "add_mutable_aux_preds.m"
        {
#line 490 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__TypeName_18 = (MR_String) "MR_Unsigned";
#line 491 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__HighLevelTypeName_14 = hlds__make_hlds__add_mutable_aux_preds__TypeName_18;
#line 492 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LowLevelTypeName_15 = hlds__make_hlds__add_mutable_aux_preds__TypeName_18;
#line 487 "add_mutable_aux_preds.m"
        }
#line 486 "add_mutable_aux_preds.m"
        break;
#line 486 "add_mutable_aux_preds.m"
    }
#line 498 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__IsConstant_10 == (MR_Integer) 1);
#line 499 "add_mutable_aux_preds.m"
    if (!(hlds__make_hlds__add_mutable_aux_preds__succeeded))
#line 499 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_11 == (MR_Integer) 1);
#line 504 "add_mutable_aux_preds.m"
    if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 502 "add_mutable_aux_preds.m"
      {
#line 502 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__LockDeclStrs_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 503 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__LockDefnStrs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 502 "add_mutable_aux_preds.m"
      }
#line 504 "add_mutable_aux_preds.m"
    else
#line 505 "add_mutable_aux_preds.m"
      {
#line 505 "add_mutable_aux_preds.m"
        MR_String hlds__make_hlds__add_mutable_aux_preds__MutexVarName_21;
#line 505 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_34_34;
#line 505 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_36_36;
#line 505 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_43_43;

#line 505 "add_mutable_aux_preds.m"
        {
#line 505 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__MutexVarName_21 = parse_tree__prog_mutable__mutable_mutex_var_name_1_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_8);
        }
#line 508 "add_mutable_aux_preds.m"
        {
#line 508 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 508 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_36_36, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__MutexVarName_21));
#line 508 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[22])));
#line 508 "add_mutable_aux_preds.m"
        }
#line 508 "add_mutable_aux_preds.m"
        {
#line 508 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 508 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_34_34, 0) = ((MR_Box) ((MR_String) "    extern MercuryLock "));
#line 508 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_34_34, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_36_36));
#line 508 "add_mutable_aux_preds.m"
        }
#line 507 "add_mutable_aux_preds.m"
        {
#line 507 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LockDeclStrs_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 507 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__LockDeclStrs_19, 0) = ((MR_Box) ((MR_String) "#ifdef MR_THREAD_SAFE\n"));
#line 507 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__LockDeclStrs_19, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_34_34));
#line 507 "add_mutable_aux_preds.m"
        }
#line 513 "add_mutable_aux_preds.m"
        {
#line 513 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 513 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_43_43, 0) = ((MR_Box) ((MR_String) "    MercuryLock "));
#line 513 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_43_43, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_36_36));
#line 513 "add_mutable_aux_preds.m"
        }
#line 512 "add_mutable_aux_preds.m"
        {
#line 512 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LockDefnStrs_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 512 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__LockDefnStrs_20, 0) = ((MR_Box) ((MR_String) "#ifdef MR_THREAD_SAFE\n"));
#line 512 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__LockDefnStrs_20, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_43_43));
#line 512 "add_mutable_aux_preds.m"
        }
#line 505 "add_mutable_aux_preds.m"
      }
#line 523 "add_mutable_aux_preds.m"
    {
#line 523 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 523 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_71_71, 0) = ((MR_Box) ((MR_String) "#endif\n"));
#line 523 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_71_71, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockDeclStrs_19));
#line 523 "add_mutable_aux_preds.m"
    }
#line 522 "add_mutable_aux_preds.m"
    {
#line 522 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 522 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_69_69, 0) = ((MR_Box) ((MR_String) ";\n"));
#line 522 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_69_69, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_71_71));
#line 522 "add_mutable_aux_preds.m"
    }
#line 522 "add_mutable_aux_preds.m"
    {
#line 522 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 522 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_68_68, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_8));
#line 522 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_68_68, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_69_69));
#line 522 "add_mutable_aux_preds.m"
    }
#line 522 "add_mutable_aux_preds.m"
    {
#line 522 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 522 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_66_66, 0) = ((MR_Box) ((MR_String) " "));
#line 522 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_66_66, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_68_68));
#line 522 "add_mutable_aux_preds.m"
    }
#line 522 "add_mutable_aux_preds.m"
    {
#line 522 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 522 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_65_65, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LowLevelTypeName_15));
#line 522 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_65_65, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_66_66));
#line 522 "add_mutable_aux_preds.m"
    }
#line 522 "add_mutable_aux_preds.m"
    {
#line 522 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 522 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_63_63, 0) = ((MR_Box) ((MR_String) "    extern "));
#line 522 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_63_63, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_65_65));
#line 522 "add_mutable_aux_preds.m"
    }
#line 521 "add_mutable_aux_preds.m"
    {
#line 521 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 521 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_61_61, 0) = ((MR_Box) ((MR_String) "#else\n"));
#line 521 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_61_61, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_63_63));
#line 521 "add_mutable_aux_preds.m"
    }
#line 520 "add_mutable_aux_preds.m"
    {
#line 520 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 520 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_59_59, 0) = ((MR_Box) ((MR_String) ";\n"));
#line 520 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_59_59, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_61_61));
#line 520 "add_mutable_aux_preds.m"
    }
#line 520 "add_mutable_aux_preds.m"
    {
#line 520 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 520 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_58_58, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_8));
#line 520 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_58_58, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_59_59));
#line 520 "add_mutable_aux_preds.m"
    }
#line 520 "add_mutable_aux_preds.m"
    {
#line 520 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 520 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_56_56, 0) = ((MR_Box) ((MR_String) " "));
#line 520 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_56_56, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_58_58));
#line 520 "add_mutable_aux_preds.m"
    }
#line 520 "add_mutable_aux_preds.m"
    {
#line 520 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 520 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__HighLevelTypeName_14));
#line 520 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_56_56));
#line 520 "add_mutable_aux_preds.m"
    }
#line 520 "add_mutable_aux_preds.m"
    {
#line 520 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 520 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_53_53, 0) = ((MR_Box) ((MR_String) "    extern "));
#line 520 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_53_53, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_55_55));
#line 520 "add_mutable_aux_preds.m"
    }
#line 519 "add_mutable_aux_preds.m"
    {
#line 519 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 519 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_51_51, 0) = ((MR_Box) ((MR_String) "#ifdef MR_HIGHLEVEL_CODE\n"));
#line 519 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_51_51, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_53_53));
#line 519 "add_mutable_aux_preds.m"
    }
#line 518 "add_mutable_aux_preds.m"
    {
#line 518 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__DeclBody_22 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_51_51);
    }
#line 525 "add_mutable_aux_preds.m"
    {
#line 525 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 525 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_75_75, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__DeclBody_22));
#line 525 "add_mutable_aux_preds.m"
    }
#line 524 "add_mutable_aux_preds.m"
    {
#line 524 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__ForeignDeclCode_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 524 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignDeclCode_23, 0) = ((MR_Box) ((MR_Integer) 0));
#line 524 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignDeclCode_23, 1) = ((MR_Box) ((MR_Integer) 1));
#line 524 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignDeclCode_23, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_75_75));
#line 524 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignDeclCode_23, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_12));
#line 524 "add_mutable_aux_preds.m"
    }
#line 526 "add_mutable_aux_preds.m"
    {
#line 526 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_add_foreign_decl_code_3_p_0(hlds__make_hlds__add_mutable_aux_preds__ForeignDeclCode_23, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_26, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_76_76);
    }
#line 529 "add_mutable_aux_preds.m"
    {
#line 529 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 529 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_81_81, 0) = ((MR_Box) ((MR_String) ";\n"));
#line 529 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_81_81, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockDefnStrs_20));
#line 529 "add_mutable_aux_preds.m"
    }
#line 529 "add_mutable_aux_preds.m"
    {
#line 529 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 529 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_80_80, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_8));
#line 529 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_80_80, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_81_81));
#line 529 "add_mutable_aux_preds.m"
    }
#line 529 "add_mutable_aux_preds.m"
    {
#line 529 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 529 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_78_78, 0) = ((MR_Box) ((MR_String) " "));
#line 529 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_78_78, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_80_80));
#line 529 "add_mutable_aux_preds.m"
    }
#line 529 "add_mutable_aux_preds.m"
    {
#line 529 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 529 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_77_77, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TypeName_18));
#line 529 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_77_77, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_78_78));
#line 529 "add_mutable_aux_preds.m"
    }
#line 528 "add_mutable_aux_preds.m"
    {
#line 528 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__DefnBody_24 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_77_77);
    }
#line 530 "add_mutable_aux_preds.m"
    {
#line 530 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 530 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_84_84, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__DefnBody_24));
#line 530 "add_mutable_aux_preds.m"
    }
#line 530 "add_mutable_aux_preds.m"
    {
#line 530 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__ForeignBodyCode_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 530 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignBodyCode_25, 0) = ((MR_Box) ((MR_Integer) 0));
#line 530 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignBodyCode_25, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_84_84));
#line 530 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignBodyCode_25, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_12));
#line 530 "add_mutable_aux_preds.m"
    }
#line 531 "add_mutable_aux_preds.m"
    {
#line 531 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_add_foreign_body_code_3_p_0(hlds__make_hlds__add_mutable_aux_preds__ForeignBodyCode_25, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_76_76, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_27);
#line 531 "add_mutable_aux_preds.m"
      return;
    }
#line 463 "add_mutable_aux_preds.m"
  }
#line 458 "add_mutable_aux_preds.m"
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
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_70_70, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[1])));
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
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_76_76, 4) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[33]));
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
      hlds__hlds_pred__marker_list_to_markers_2_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[34]), &hlds__make_hlds__add_mutable_aux_preds__Markers_34);
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
      hlds__hlds_pred__marker_list_to_markers_2_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[34]), &hlds__make_hlds__add_mutable_aux_preds__Markers_30);
    }
#line 284 "add_mutable_aux_preds.m"
    {
#line 284 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_pred__module_add_pred_or_func_19_p_0(hlds__make_hlds__add_mutable_aux_preds__PredOrigin_25, hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_26, hlds__make_hlds__add_mutable_aux_preds__InstVarSet_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__PredName_17, hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_18, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[1]), hlds__make_hlds__add_mutable_aux_preds__Purity_19, (MR_Word) &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[33], hlds__make_hlds__add_mutable_aux_preds__Markers_30, hlds__make_hlds__add_mutable_aux_preds__Context_22, hlds__make_hlds__add_mutable_aux_preds__PredStatus_20, hlds__make_hlds__add_mutable_aux_preds__NeedQual_21, &hlds__make_hlds__add_mutable_aux_preds__V_31_31, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_32, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_33, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_34, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_35);
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
#line 404 "add_mutable_aux_preds.m"
  {
#line 404 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 404 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_14 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 0)));
#line 404 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 1)));
#line 404 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 4)));
#line 404 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 6)));
#line 404 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_22;
#line 405 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___InitTerm_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 2)));
#line 405 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Inst_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 3)));
#line 405 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___VarSet_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 5)));
#line 405 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 7)));

#line 407 "add_mutable_aux_preds.m"
    {
#line 407 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__get_mutable_target_params_3_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34, hlds__make_hlds__add_mutable_aux_preds__MutAttrs_18, &hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_22);
    }
#line 410 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 409 "add_mutable_aux_preds.m"
      {
#line 409 "add_mutable_aux_preds.m"
        *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_35 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34;
#line 409 "add_mutable_aux_preds.m"
        *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_37 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_36;
#line 409 "add_mutable_aux_preds.m"
        *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38;
#line 409 "add_mutable_aux_preds.m"
      }
#line 410 "add_mutable_aux_preds.m"
    else
#line 411 "add_mutable_aux_preds.m"
      {
#line 411 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_22, (MR_Integer) 0)));
#line 411 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__ImplLang_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_23, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 411 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_23, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 411 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_30;
#line 411 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_31;
#line 411 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_32;
#line 411 "add_mutable_aux_preds.m"
        MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_33;
#line 411 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_42_42;
#line 411 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_53;
#line 412 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_23, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 412 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds___PreInit_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_23, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 412 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds___LockUnlock_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_23, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 412 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_23, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);

#line 414 "add_mutable_aux_preds.m"
        {
#line 414 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__IsConstant_30 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_18);
        }
#line 415 "add_mutable_aux_preds.m"
        {
#line 415 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_31 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_18);
        }
#line 418 "add_mutable_aux_preds.m"
        {
#line 418 "add_mutable_aux_preds.m"
          hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_32);
        }
#line 1254 "add_mutable_aux_preds.m"
        {
#line 1254 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_53 = parse_tree__prog_item__mutable_var_maybe_foreign_names_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_18);
        }
#line 1259 "add_mutable_aux_preds.m"
        if ((hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1258 "add_mutable_aux_preds.m"
          {
#line 1258 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_33 = parse_tree__prog_mutable__mutable_c_var_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_32, hlds__make_hlds__add_mutable_aux_preds__MutableName_14);
          }
#line 1259 "add_mutable_aux_preds.m"
        else
#line 1260 "add_mutable_aux_preds.m"
          {
#line 1260 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignNames_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_53, (MR_Integer) 0)));
#line 1262 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds___Specs_55;

#line 1262 "add_mutable_aux_preds.m"
            {
#line 1262 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__get_global_name_from_foreign_names_9_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34, hlds__make_hlds__add_mutable_aux_preds__Context_20, hlds__make_hlds__add_mutable_aux_preds__ModuleName_32, hlds__make_hlds__add_mutable_aux_preds__MutableName_14, hlds__make_hlds__add_mutable_aux_preds__Lang_25, hlds__make_hlds__add_mutable_aux_preds__ForeignNames_54, &hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__add_mutable_aux_preds___Specs_55);
            }
#line 1260 "add_mutable_aux_preds.m"
          }
#line 430 "add_mutable_aux_preds.m"
#line 430 "add_mutable_aux_preds.m"
        switch (hlds__make_hlds__add_mutable_aux_preds__ImplLang_24) {
#line 430 "add_mutable_aux_preds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 430 "add_mutable_aux_preds.m"
          case (MR_Integer) 0:
#line 428 "add_mutable_aux_preds.m"
            {
#line 428 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__define_global_var_c_7_p_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_33, hlds__make_hlds__add_mutable_aux_preds__Type_15, hlds__make_hlds__add_mutable_aux_preds__IsConstant_30, hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_31, hlds__make_hlds__add_mutable_aux_preds__Context_20, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_42_42);
            }
#line 430 "add_mutable_aux_preds.m"
            break;
#line 430 "add_mutable_aux_preds.m"
          case (MR_Integer) 1:
#line 540 "add_mutable_aux_preds.m"
            {
#line 540 "add_mutable_aux_preds.m"
              MR_String hlds__make_hlds__add_mutable_aux_preds__TypeStr_64;
#line 540 "add_mutable_aux_preds.m"
              MR_String hlds__make_hlds__add_mutable_aux_preds__DefnBody_65;
#line 540 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_66;
#line 540 "add_mutable_aux_preds.m"
              MR_String hlds__make_hlds__add_mutable_aux_preds__V_68_68;
#line 540 "add_mutable_aux_preds.m"
              MR_String hlds__make_hlds__add_mutable_aux_preds__V_69_69;
#line 540 "add_mutable_aux_preds.m"
              MR_String hlds__make_hlds__add_mutable_aux_preds__V_71_71;
#line 540 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__V_74_74;

#line 548 "add_mutable_aux_preds.m"
#line 548 "add_mutable_aux_preds.m"
              switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_31) {
#line 548 "add_mutable_aux_preds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 548 "add_mutable_aux_preds.m"
                case (MR_Integer) 0:
#line 545 "add_mutable_aux_preds.m"
                  {
#line 543 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_76_76;

#line 543 "add_mutable_aux_preds.m"
                    {
#line 543 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__V_76_76 = parse_tree__builtin_lib_types__int_type_0_f_0();
                    }
#line 543 "add_mutable_aux_preds.m"
                    {
#line 543 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__make_hlds__add_mutable_aux_preds__Type_15, hlds__make_hlds__add_mutable_aux_preds__V_76_76);
                    }
#line 545 "add_mutable_aux_preds.m"
                    if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 544 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__TypeStr_64 = (MR_String) "int";
#line 545 "add_mutable_aux_preds.m"
                    else
#line 546 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__TypeStr_64 = (MR_String) "object";
#line 545 "add_mutable_aux_preds.m"
                  }
#line 548 "add_mutable_aux_preds.m"
                  break;
#line 548 "add_mutable_aux_preds.m"
                case (MR_Integer) 1:
#line 550 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__TypeStr_64 = (MR_String) "int";
#line 548 "add_mutable_aux_preds.m"
                  break;
#line 548 "add_mutable_aux_preds.m"
              }
#line 552 "add_mutable_aux_preds.m"
              {
#line 552 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_71_71 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_33, (MR_String) ";\n");
              }
#line 552 "add_mutable_aux_preds.m"
              {
#line 552 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_69_69 = mercury__string__f_43_43_2_f_0((MR_String) " ", hlds__make_hlds__add_mutable_aux_preds__V_71_71);
              }
#line 552 "add_mutable_aux_preds.m"
              {
#line 552 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_68_68 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeStr_64, hlds__make_hlds__add_mutable_aux_preds__V_69_69);
              }
#line 552 "add_mutable_aux_preds.m"
              {
#line 552 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__DefnBody_65 = mercury__string__f_43_43_2_f_0((MR_String) "static ", hlds__make_hlds__add_mutable_aux_preds__V_68_68);
              }
#line 554 "add_mutable_aux_preds.m"
              {
#line 554 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 554 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_74_74, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__DefnBody_65));
#line 554 "add_mutable_aux_preds.m"
              }
#line 554 "add_mutable_aux_preds.m"
              {
#line 554 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 554 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_66, 0) = ((MR_Box) ((MR_Integer) 1));
#line 554 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_66, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_74_74));
#line 554 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_66, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_20));
#line 554 "add_mutable_aux_preds.m"
              }
#line 555 "add_mutable_aux_preds.m"
              {
#line 555 "add_mutable_aux_preds.m"
                hlds__hlds_module__module_add_foreign_body_code_3_p_0(hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_66, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_42_42);
              }
#line 540 "add_mutable_aux_preds.m"
            }
#line 430 "add_mutable_aux_preds.m"
            break;
#line 430 "add_mutable_aux_preds.m"
          case (MR_Integer) 3:
#line 439 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_42_42 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34;
#line 430 "add_mutable_aux_preds.m"
            break;
#line 430 "add_mutable_aux_preds.m"
          case (MR_Integer) 2:
#line 436 "add_mutable_aux_preds.m"
            {
#line 436 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__define_global_var_java_6_p_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_33, hlds__make_hlds__add_mutable_aux_preds__Type_15, hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_31, hlds__make_hlds__add_mutable_aux_preds__Context_20, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_42_42);
            }
#line 430 "add_mutable_aux_preds.m"
            break;
#line 430 "add_mutable_aux_preds.m"
        }
#line 446 "add_mutable_aux_preds.m"
        {
#line 446 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__define_aux_preds_10_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, hlds__make_hlds__add_mutable_aux_preds__TargetParams_23, hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_33, hlds__make_hlds__add_mutable_aux_preds__PredStatus_10, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_42_42, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_35, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_36, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_37, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39);
#line 446 "add_mutable_aux_preds.m"
          return;
        }
#line 411 "add_mutable_aux_preds.m"
      }
#line 404 "add_mutable_aux_preds.m"
  }
#line 34 "add_mutable_aux_preds.m"
}

#line 28 "add_mutable_aux_preds.m"
void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__do_mutable_checks_5_p_0(
#line 28 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_6,
#line 28 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_37,
#line 28 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_38,
#line 28 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_39,
#line 28 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_40)
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
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TrailMutableUpdates_27;
#line 323 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UseTrail_28;
#line 323 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_63_63;
#line 323 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_83_83;
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
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_37, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_9);
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
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_37, &hlds__make_hlds__add_mutable_aux_preds__Globals_18);
    }
#line 328 "add_mutable_aux_preds.m"
    {
#line 328 "add_mutable_aux_preds.m"
      libs__globals__get_target_2_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_18, &hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_19);
    }
#line 350 "add_mutable_aux_preds.m"
#line 350 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_19) {
#line 350 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 350 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 338 "add_mutable_aux_preds.m"
        {
#line 338 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_21;

#line 339 "add_mutable_aux_preds.m"
          {
#line 339 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_21 = parse_tree__prog_item__mutable_var_maybe_foreign_names_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_14);
          }
#line 342 "add_mutable_aux_preds.m"
          if ((hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 341 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_63_63 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_39;
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
                hlds__make_hlds__add_mutable_aux_preds__get_global_name_from_foreign_names_9_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_37, hlds__make_hlds__add_mutable_aux_preds__Context_16, hlds__make_hlds__add_mutable_aux_preds__ModuleName_9, hlds__make_hlds__add_mutable_aux_preds__Name_10, (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__ForeignNames_22, &hlds__make_hlds__add_mutable_aux_preds___TargetMutableName_23, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_39, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_63_63);
              }
#line 343 "add_mutable_aux_preds.m"
            }
#line 338 "add_mutable_aux_preds.m"
        }
#line 350 "add_mutable_aux_preds.m"
        break;
#line 350 "add_mutable_aux_preds.m"
      case (MR_Integer) 2:
#line 338 "add_mutable_aux_preds.m"
        {
#line 338 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_114;

#line 339 "add_mutable_aux_preds.m"
          {
#line 339 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_114 = parse_tree__prog_item__mutable_var_maybe_foreign_names_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_14);
          }
#line 342 "add_mutable_aux_preds.m"
          if ((hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_114 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 341 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_63_63 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_39;
#line 342 "add_mutable_aux_preds.m"
          else
#line 343 "add_mutable_aux_preds.m"
            {
#line 343 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignNames_109 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_114, (MR_Integer) 0)));
#line 346 "add_mutable_aux_preds.m"
              MR_String hlds__make_hlds__add_mutable_aux_preds___TargetMutableName_108;

#line 346 "add_mutable_aux_preds.m"
              {
#line 346 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__get_global_name_from_foreign_names_9_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_37, hlds__make_hlds__add_mutable_aux_preds__Context_16, hlds__make_hlds__add_mutable_aux_preds__ModuleName_9, hlds__make_hlds__add_mutable_aux_preds__Name_10, (MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__ForeignNames_109, &hlds__make_hlds__add_mutable_aux_preds___TargetMutableName_108, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_39, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_63_63);
              }
#line 343 "add_mutable_aux_preds.m"
            }
#line 338 "add_mutable_aux_preds.m"
        }
#line 350 "add_mutable_aux_preds.m"
        break;
#line 350 "add_mutable_aux_preds.m"
      case (MR_Integer) 4:
#line 338 "add_mutable_aux_preds.m"
        {
#line 338 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_123;

#line 339 "add_mutable_aux_preds.m"
          {
#line 339 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_123 = parse_tree__prog_item__mutable_var_maybe_foreign_names_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_14);
          }
#line 342 "add_mutable_aux_preds.m"
          if ((hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_123 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 341 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_63_63 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_39;
#line 342 "add_mutable_aux_preds.m"
          else
#line 343 "add_mutable_aux_preds.m"
            {
#line 343 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignNames_118 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_123, (MR_Integer) 0)));
#line 346 "add_mutable_aux_preds.m"
              MR_String hlds__make_hlds__add_mutable_aux_preds___TargetMutableName_117;

#line 346 "add_mutable_aux_preds.m"
              {
#line 346 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__get_global_name_from_foreign_names_9_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_37, hlds__make_hlds__add_mutable_aux_preds__Context_16, hlds__make_hlds__add_mutable_aux_preds__ModuleName_9, hlds__make_hlds__add_mutable_aux_preds__Name_10, (MR_Integer) 4, hlds__make_hlds__add_mutable_aux_preds__ForeignNames_118, &hlds__make_hlds__add_mutable_aux_preds___TargetMutableName_117, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_39, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_63_63);
              }
#line 343 "add_mutable_aux_preds.m"
            }
#line 338 "add_mutable_aux_preds.m"
        }
#line 350 "add_mutable_aux_preds.m"
        break;
#line 350 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 351 "add_mutable_aux_preds.m"
        {
#line 351 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__Pieces_24;
#line 351 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__Msg_25;
#line 351 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__Spec_26;
#line 351 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_43_43;
#line 351 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_46_46;
#line 351 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_47_47;
#line 351 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__V_48_48;
#line 351 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_55_55;
#line 351 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_56_56;
#line 351 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_60_60;

#line 354 "add_mutable_aux_preds.m"
          {
#line 354 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_48_48 = libs__globals__compilation_target_string_1_f_0(hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_19);
          }
#line 354 "add_mutable_aux_preds.m"
          {
#line 354 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_47_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 354 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__V_47_47, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_48_48));
#line 354 "add_mutable_aux_preds.m"
          }
#line 354 "add_mutable_aux_preds.m"
          {
#line 354 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 354 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_46_46, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_47_47));
#line 354 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[9])));
#line 354 "add_mutable_aux_preds.m"
          }
#line 353 "add_mutable_aux_preds.m"
          {
#line 353 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 353 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_43_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[30])));
#line 353 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_43_43, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_46_46));
#line 353 "add_mutable_aux_preds.m"
          }
#line 352 "add_mutable_aux_preds.m"
          {
#line 352 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__Pieces_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__Pieces_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[29])));
#line 352 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__Pieces_24, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_43_43));
#line 352 "add_mutable_aux_preds.m"
          }
#line 356 "add_mutable_aux_preds.m"
          {
#line 356 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 356 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_56_56, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Pieces_24));
#line 356 "add_mutable_aux_preds.m"
          }
#line 356 "add_mutable_aux_preds.m"
          {
#line 356 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 356 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_56_56));
#line 356 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 356 "add_mutable_aux_preds.m"
          }
#line 356 "add_mutable_aux_preds.m"
          {
#line 356 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__Msg_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 356 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Msg_25, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_16));
#line 356 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Msg_25, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_55_55));
#line 356 "add_mutable_aux_preds.m"
          }
#line 357 "add_mutable_aux_preds.m"
          {
#line 357 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 357 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_60_60, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Msg_25));
#line 357 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 357 "add_mutable_aux_preds.m"
          }
#line 357 "add_mutable_aux_preds.m"
          {
#line 357 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__Spec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 357 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Spec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 357 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Spec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 357 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Spec_26, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_60_60));
#line 357 "add_mutable_aux_preds.m"
          }
#line 358 "add_mutable_aux_preds.m"
          {
#line 358 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 358 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_63_63, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Spec_26));
#line 358 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_63_63, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_39));
#line 358 "add_mutable_aux_preds.m"
          }
#line 351 "add_mutable_aux_preds.m"
        }
#line 350 "add_mutable_aux_preds.m"
        break;
#line 350 "add_mutable_aux_preds.m"
      case (MR_Integer) 3:
#line 338 "add_mutable_aux_preds.m"
        {
#line 338 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_132;

#line 339 "add_mutable_aux_preds.m"
          {
#line 339 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_132 = parse_tree__prog_item__mutable_var_maybe_foreign_names_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_14);
          }
#line 342 "add_mutable_aux_preds.m"
          if ((hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_132 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 341 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_63_63 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_39;
#line 342 "add_mutable_aux_preds.m"
          else
#line 343 "add_mutable_aux_preds.m"
            {
#line 343 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignNames_127 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_132, (MR_Integer) 0)));
#line 346 "add_mutable_aux_preds.m"
              MR_String hlds__make_hlds__add_mutable_aux_preds___TargetMutableName_126;

#line 346 "add_mutable_aux_preds.m"
              {
#line 346 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__get_global_name_from_foreign_names_9_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_37, hlds__make_hlds__add_mutable_aux_preds__Context_16, hlds__make_hlds__add_mutable_aux_preds__ModuleName_9, hlds__make_hlds__add_mutable_aux_preds__Name_10, (MR_Integer) 2, hlds__make_hlds__add_mutable_aux_preds__ForeignNames_127, &hlds__make_hlds__add_mutable_aux_preds___TargetMutableName_126, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_39, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_63_63);
              }
#line 343 "add_mutable_aux_preds.m"
            }
#line 338 "add_mutable_aux_preds.m"
        }
#line 350 "add_mutable_aux_preds.m"
        break;
#line 350 "add_mutable_aux_preds.m"
    }
#line 362 "add_mutable_aux_preds.m"
    {
#line 362 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__TrailMutableUpdates_27 = parse_tree__prog_item__mutable_var_trailed_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_14);
    }
#line 363 "add_mutable_aux_preds.m"
    {
#line 363 "add_mutable_aux_preds.m"
      libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_18, (MR_Integer) 220, &hlds__make_hlds__add_mutable_aux_preds__UseTrail_28);
    }
#line 365 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__TrailMutableUpdates_27 == (MR_Integer) 1);
#line 365 "add_mutable_aux_preds.m"
    if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 366 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__UseTrail_28 == (MR_Integer) 0);
#line 374 "add_mutable_aux_preds.m"
    if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 369 "add_mutable_aux_preds.m"
      {
#line 369 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__TrailMsg_30;
#line 369 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__TrailSpec_31;
#line 369 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_81_81;

#line 370 "add_mutable_aux_preds.m"
        {
#line 370 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__TrailMsg_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 370 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TrailMsg_30, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_16));
#line 370 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TrailMsg_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[31])));
#line 370 "add_mutable_aux_preds.m"
        }
#line 372 "add_mutable_aux_preds.m"
        {
#line 372 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 372 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_81_81, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TrailMsg_30));
#line 372 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 372 "add_mutable_aux_preds.m"
        }
#line 371 "add_mutable_aux_preds.m"
        {
#line 371 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__TrailSpec_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 371 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TrailSpec_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 371 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TrailSpec_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 371 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TrailSpec_31, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_81_81));
#line 371 "add_mutable_aux_preds.m"
        }
#line 373 "add_mutable_aux_preds.m"
        {
#line 373 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 373 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_83_83, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TrailSpec_31));
#line 373 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_83_83, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_63_63));
#line 373 "add_mutable_aux_preds.m"
        }
#line 369 "add_mutable_aux_preds.m"
      }
#line 374 "add_mutable_aux_preds.m"
    else
#line 374 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_83_83 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_63_63;
#line 380 "add_mutable_aux_preds.m"
    {
#line 380 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__hlds_code_util__is_valid_mutable_inst_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_37, hlds__make_hlds__add_mutable_aux_preds__Inst_13);
    }
#line 382 "add_mutable_aux_preds.m"
    if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 382 "add_mutable_aux_preds.m"
      *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_40 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_83_83;
#line 382 "add_mutable_aux_preds.m"
    else
#line 386 "add_mutable_aux_preds.m"
      {
#line 386 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__DummyInstVarset_32;
#line 386 "add_mutable_aux_preds.m"
        MR_String hlds__make_hlds__add_mutable_aux_preds__InstStr_33;
#line 386 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__InvalidInstPieces_34;
#line 386 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__InvalidInstMsg_35;
#line 386 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__InvalidInstSpec_36;
#line 386 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_87_87;
#line 386 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_88_88;
#line 386 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_99_99;
#line 386 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_100_100;
#line 386 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_104_104;

#line 386 "add_mutable_aux_preds.m"
        {
#line 386 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__DummyInstVarset_32 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
        }
#line 387 "add_mutable_aux_preds.m"
        {
#line 387 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__InstStr_33 = hlds__hlds_out__hlds_out_mode__mercury_expanded_inst_to_string_4_f_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_37, hlds__make_hlds__add_mutable_aux_preds__DummyInstVarset_32, hlds__make_hlds__add_mutable_aux_preds__Inst_13);
        }
#line 389 "add_mutable_aux_preds.m"
        {
#line 389 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_88_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 389 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__V_88_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 389 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__V_88_88, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InstStr_33));
#line 389 "add_mutable_aux_preds.m"
        }
#line 389 "add_mutable_aux_preds.m"
        {
#line 389 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 389 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_87_87, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_88_88));
#line 389 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_87_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[20])));
#line 389 "add_mutable_aux_preds.m"
        }
#line 389 "add_mutable_aux_preds.m"
        {
#line 389 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__InvalidInstPieces_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 389 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__InvalidInstPieces_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[32])));
#line 389 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__InvalidInstPieces_34, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_87_87));
#line 389 "add_mutable_aux_preds.m"
        }
#line 394 "add_mutable_aux_preds.m"
        {
#line 394 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 394 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_100_100, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InvalidInstPieces_34));
#line 394 "add_mutable_aux_preds.m"
        }
#line 394 "add_mutable_aux_preds.m"
        {
#line 394 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 394 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_99_99, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_100_100));
#line 394 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 394 "add_mutable_aux_preds.m"
        }
#line 394 "add_mutable_aux_preds.m"
        {
#line 394 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__InvalidInstMsg_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 394 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__InvalidInstMsg_35, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_16));
#line 394 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__InvalidInstMsg_35, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_99_99));
#line 394 "add_mutable_aux_preds.m"
        }
#line 396 "add_mutable_aux_preds.m"
        {
#line 396 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 396 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_104_104, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InvalidInstMsg_35));
#line 396 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_104_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 396 "add_mutable_aux_preds.m"
        }
#line 395 "add_mutable_aux_preds.m"
        {
#line 395 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__InvalidInstSpec_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 395 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__InvalidInstSpec_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 395 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__InvalidInstSpec_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 395 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__InvalidInstSpec_36, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_104_104));
#line 395 "add_mutable_aux_preds.m"
        }
#line 397 "add_mutable_aux_preds.m"
        {
#line 397 "add_mutable_aux_preds.m"
          MR_Word base;
#line 397 "add_mutable_aux_preds.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 397 "add_mutable_aux_preds.m"
          *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_40 = base;
#line 397 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InvalidInstSpec_36));
#line 397 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_83_83));
#line 397 "add_mutable_aux_preds.m"
        }
#line 386 "add_mutable_aux_preds.m"
      }
#line 323 "add_mutable_aux_preds.m"
    *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_38 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_37;
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
        MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInit_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_22, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 77 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__LockUnlock_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_22, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 77 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_22, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
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
        MR_Word hlds__make_hlds__add_mutable_aux_preds___Lang_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_22, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 78 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_22, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);

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
