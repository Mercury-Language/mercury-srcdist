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
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_mutable.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
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

#line 1031 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_main_get_set_preds__1031__1_2_p_0(
#line 1031 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__AttachToIO_37,
#line 1031 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_252);

#line 833 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_unsafe_get_set_preds__833__1_2_p_0(
#line 833 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_31,
#line 833 "add_mutable_aux_preds.m"
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

#line 306 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__306__1_2_p_0(
#line 306 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Constraints_29,
#line 306 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_78);

#line 304 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__304__1_2_p_0(
#line 304 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeDetism_23,
#line 304 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_72);

#line 303 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__303__1_2_p_0(
#line 303 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__WithInst_22,
#line 303 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_67);

#line 302 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__302__1_2_p_0(
#line 302 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__WithType_21,
#line 302 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_62);

#line 300 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__300__1_2_p_0(
#line 300 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredOrFunc_19,
#line 300 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_57);

#line 299 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__299__1_2_p_0(
#line 299 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ExistQVars_27,
#line 299 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_52);

#line 297 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__297__1_2_p_0(
#line 297 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__InstVarSet_26,
#line 297 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_47);

#line 295 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__295__1_2_p_0(
#line 295 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_25,
#line 295 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_42);

#line 129 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_mutable_aux_pred_decls__129__1_2_p_0(
#line 129 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__AttachToIO_29,
#line 129 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_83);

#line 127 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_mutable_aux_pred_decls__127__1_2_p_0(
#line 127 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_26,
#line 127 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_78);

#line 125 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_mutable_aux_pred_decls__125__1_2_p_0(
#line 125 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__LockUnlock_25,
#line 125 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_73);

#line 123 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_mutable_aux_pred_decls__123__1_2_p_0(
#line 123 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInit_24,
#line 123 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_68);

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

#line 1177 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_init_pred_11_p_0(
#line 1177 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12,
#line 1177 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_13,
#line 1177 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_14,
#line 1177 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_15,
#line 1177 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_16,
#line 1177 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39,
#line 1177 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_40,
#line 1177 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_41,
#line 1177 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_42,
#line 1177 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_43,
#line 1177 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_44);

#line 1031 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_main_get_set_preds_14_p_0_1(
#line 1031 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 953 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_main_get_set_preds_14_p_0(
#line 953 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15,
#line 953 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_16,
#line 953 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17,
#line 953 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_18,
#line 953 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_19,
#line 953 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_20,
#line 953 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21,
#line 953 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_22,
#line 953 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_85,
#line 953 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_86,
#line 953 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_87,
#line 953 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_88,
#line 953 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_89,
#line 953 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_90);

#line 833 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_unsafe_get_set_preds_12_p_0_1(
#line 833 "add_mutable_aux_preds.m"
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
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_18,
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
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_18,
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
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_18,
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

#line 588 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_aux_preds_10_p_0(
#line 588 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11,
#line 588 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_12,
#line 588 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_13,
#line 588 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_14,
#line 588 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34,
#line 588 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_35,
#line 588 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_36,
#line 588 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_37,
#line 588 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38,
#line 588 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39);

#line 552 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_global_var_java_6_p_0(
#line 552 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_7,
#line 552 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_8,
#line 552 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_9,
#line 552 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_10,
#line 552 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_15,
#line 552 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_16);

#line 451 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_global_var_c_7_p_0(
#line 451 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_8,
#line 451 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_9,
#line 451 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_10,
#line 451 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_11,
#line 451 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_12,
#line 451 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_26,
#line 451 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_27);

#line 306 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_8(
#line 306 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 304 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_7(
#line 304 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 303 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_6(
#line 303 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 302 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_5(
#line 302 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 300 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_4(
#line 300 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 299 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_3(
#line 299 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 297 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_2(
#line 297 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 295 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_1(
#line 295 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 284 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0(
#line 284 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_10,
#line 284 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_11,
#line 284 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_12,
#line 284 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Kind_13,
#line 284 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_14,
#line 284 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34,
#line 284 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_35,
#line 284 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_36,
#line 284 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_37);

#line 265 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_12_p_0(
#line 265 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_13,
#line 265 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_14,
#line 265 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Kind_15,
#line 265 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_16,
#line 265 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_17,
#line 265 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Purity_18,
#line 265 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_19,
#line 265 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_20,
#line 265 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_30,
#line 265 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_31,
#line 265 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_32,
#line 265 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_33);

#line 251 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_pre_init_pred_decl_8_p_0(
#line 251 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_9,
#line 251 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_10,
#line 251 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_11,
#line 251 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_12,
#line 251 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_17,
#line 251 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_18,
#line 251 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_19,
#line 251 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_20);

#line 234 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_init_pred_decl_8_p_0(
#line 234 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_9,
#line 234 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_10,
#line 234 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_11,
#line 234 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_12,
#line 234 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_17,
#line 234 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_18,
#line 234 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_19,
#line 234 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_20);

#line 196 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_unlock_pred_decl_8_p_0(
#line 196 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_9,
#line 196 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_10,
#line 196 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_11,
#line 196 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_12,
#line 196 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_17,
#line 196 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_18,
#line 196 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_19,
#line 196 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_20);

#line 193 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_lock_pred_decl_8_p_0(
#line 193 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_9,
#line 193 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_10,
#line 193 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_11,
#line 193 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_12,
#line 193 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_17,
#line 193 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_18,
#line 193 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_19,
#line 193 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_20);

#line 189 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_unsafe_set_pred_decl_10_p_0(
#line 189 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_11,
#line 189 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_12,
#line 189 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_13,
#line 189 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_14,
#line 189 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_15,
#line 189 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_16,
#line 189 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_21,
#line 189 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_22,
#line 189 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_23,
#line 189 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_24);

#line 185 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_unsafe_get_pred_decl_10_p_0(
#line 185 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_11,
#line 185 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_12,
#line 185 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_13,
#line 185 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_14,
#line 185 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_15,
#line 185 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_16,
#line 185 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_21,
#line 185 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_22,
#line 185 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_23,
#line 185 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_24);

#line 129 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decls_6_p_0_4(
#line 129 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 127 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decls_6_p_0_3(
#line 127 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 125 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decls_6_p_0_2(
#line 125 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 123 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decls_6_p_0_1(
#line 123 "add_mutable_aux_preds.m"
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 30 */
  {
    ((MR_Box) ((MR_Integer) 22)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 31 */
  {
    ((MR_Box) ((MR_String) ">();\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 32 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: multiple foreign_name attributes"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "specified for the"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: foreign_name mutable attribute"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not yet implemented for the"))
  },
  /* row 37 */
  {
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[2])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the inst"))
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
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[15])))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1440 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1448 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1456 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1464 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__add_mutable_aux_preds__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1472 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1480 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1488 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_determinism_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0
  }
};

#line 1496 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_0 = {
  (MR_String) "mutable_lang_c",
  (MR_Integer) 0
};

#line 1502 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_1 = {
  (MR_String) "mutable_lang_csharp",
  (MR_Integer) 1
};

#line 1508 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_2 = {
  (MR_String) "mutable_lang_java",
  (MR_Integer) 2
};

#line 1514 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_3 = {
  (MR_String) "mutable_lang_erlang",
  (MR_Integer) 3
};

#line 1520 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_value_ordered_mutable_impl_lang_0[4] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_1,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_2,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_3
};

#line 1528 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_name_ordered_mutable_impl_lang_0[4] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_1,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_3,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_2
};

#line 1536 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_mutable_impl_lang_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2
};

#line 1544 "hlds.make_hlds.add_mutable_aux_preds.c"
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

#line 1561 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_PseudoTypeInfo hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__field_types_mutable_target_params_0_0[6] = {
  (MR_PseudoTypeInfo) &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_mutable_impl_lang_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_box_policy_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_need_pre_init_pred_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_need_lock_unlock_preds_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_need_unsafe_get_set_preds_0
};

#line 1571 "hlds.make_hlds.add_mutable_aux_preds.c"
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

#line 1605 "hlds.make_hlds.add_mutable_aux_preds.c"
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

#line 1620 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_stag_ordered_mutable_target_params_0_0[1] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_functor_desc_mutable_target_params_0_0
};

#line 1625 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_DuPtagLayout hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_ptag_ordered_mutable_target_params_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_stag_ordered_mutable_target_params_0_0
  }
};

#line 1634 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_name_ordered_mutable_target_params_0[1] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_functor_desc_mutable_target_params_0_0
};

#line 1639 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_mutable_target_params_0[1] = {
  (MR_Integer) 0
};

#line 1644 "hlds.make_hlds.add_mutable_aux_preds.c"
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

#line 1661 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_lock_unlock_preds_0_0 = {
  (MR_String) "dont_need_lock_unlock_preds",
  (MR_Integer) 0
};

#line 1667 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_lock_unlock_preds_0_1 = {
  (MR_String) "need_lock_unlock_preds",
  (MR_Integer) 1
};

#line 1673 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_value_ordered_need_lock_unlock_preds_0[2] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_lock_unlock_preds_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_lock_unlock_preds_0_1
};

#line 1679 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_name_ordered_need_lock_unlock_preds_0[2] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_lock_unlock_preds_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_lock_unlock_preds_0_1
};

#line 1685 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_need_lock_unlock_preds_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1691 "hlds.make_hlds.add_mutable_aux_preds.c"
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

#line 1708 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_pre_init_pred_0_0 = {
  (MR_String) "dont_need_pre_init_pred",
  (MR_Integer) 0
};

#line 1714 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_pre_init_pred_0_1 = {
  (MR_String) "need_pre_init_pred",
  (MR_Integer) 1
};

#line 1720 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_value_ordered_need_pre_init_pred_0[2] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_pre_init_pred_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_pre_init_pred_0_1
};

#line 1726 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_name_ordered_need_pre_init_pred_0[2] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_pre_init_pred_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_pre_init_pred_0_1
};

#line 1732 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_need_pre_init_pred_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1738 "hlds.make_hlds.add_mutable_aux_preds.c"
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

#line 1755 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_unsafe_get_set_preds_0_0 = {
  (MR_String) "dont_need_unsafe_get_set_preds",
  (MR_Integer) 0
};

#line 1761 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_unsafe_get_set_preds_0_1 = {
  (MR_String) "need_unsafe_get_set_preds",
  (MR_Integer) 1
};

#line 1767 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_value_ordered_need_unsafe_get_set_preds_0[2] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_unsafe_get_set_preds_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_unsafe_get_set_preds_0_1
};

#line 1773 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_name_ordered_need_unsafe_get_set_preds_0[2] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_unsafe_get_set_preds_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_unsafe_get_set_preds_0_1
};

#line 1779 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_need_unsafe_get_set_preds_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1785 "hlds.make_hlds.add_mutable_aux_preds.c"
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

#line 1802 "hlds.make_hlds.add_mutable_aux_preds.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_impl_lang_0_0_10001(
#line 1805 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 1807 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2)
#line 1809 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 1811 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 1813 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 1816 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 1818 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_impl_lang_0_0(((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2));
    }
#line 1821 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1823 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 1825 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 1828 "hlds.make_hlds.add_mutable_aux_preds.c"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_impl_lang_0_0_10001(
#line 1831 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box * hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 1833 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2,
#line 1835 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3)
#line 1837 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 1839 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 1841 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1;

#line 1844 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 1846 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_impl_lang_0_0(&hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3));
    }
#line 1849 "hlds.make_hlds.add_mutable_aux_preds.c"
    *hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1));
#line 1851 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 1853 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 1856 "hlds.make_hlds.add_mutable_aux_preds.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_target_params_0_0_10001(
#line 1859 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 1861 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2)
#line 1863 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 1865 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 1867 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 1870 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 1872 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_target_params_0_0(((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2));
    }
#line 1875 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1877 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 1879 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 1882 "hlds.make_hlds.add_mutable_aux_preds.c"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_target_params_0_0_10001(
#line 1885 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box * hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 1887 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2,
#line 1889 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3)
#line 1891 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 1893 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 1895 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1;

#line 1898 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 1900 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_target_params_0_0(&hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3));
    }
#line 1903 "hlds.make_hlds.add_mutable_aux_preds.c"
    *hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1));
#line 1905 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 1907 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 1910 "hlds.make_hlds.add_mutable_aux_preds.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_lock_unlock_preds_0_0_10001(
#line 1913 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 1915 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2)
#line 1917 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 1919 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 1921 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 1924 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 1926 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds____Unify____need_lock_unlock_preds_0_0(((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2));
    }
#line 1929 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1931 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 1933 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 1936 "hlds.make_hlds.add_mutable_aux_preds.c"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_lock_unlock_preds_0_0_10001(
#line 1939 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box * hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 1941 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2,
#line 1943 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3)
#line 1945 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 1947 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 1949 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1;

#line 1952 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 1954 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds____Compare____need_lock_unlock_preds_0_0(&hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3));
    }
#line 1957 "hlds.make_hlds.add_mutable_aux_preds.c"
    *hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1));
#line 1959 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 1961 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 1964 "hlds.make_hlds.add_mutable_aux_preds.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_pre_init_pred_0_0_10001(
#line 1967 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 1969 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2)
#line 1971 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 1973 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 1975 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 1978 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 1980 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds____Unify____need_pre_init_pred_0_0(((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2));
    }
#line 1983 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1985 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 1987 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 1990 "hlds.make_hlds.add_mutable_aux_preds.c"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_pre_init_pred_0_0_10001(
#line 1993 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box * hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 1995 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2,
#line 1997 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3)
#line 1999 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 2001 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 2003 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1;

#line 2006 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 2008 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds____Compare____need_pre_init_pred_0_0(&hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3));
    }
#line 2011 "hlds.make_hlds.add_mutable_aux_preds.c"
    *hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1));
#line 2013 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 2015 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 2018 "hlds.make_hlds.add_mutable_aux_preds.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_unsafe_get_set_preds_0_0_10001(
#line 2021 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 2023 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2)
#line 2025 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 2027 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 2029 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 2032 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 2034 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds____Unify____need_unsafe_get_set_preds_0_0(((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2));
    }
#line 2037 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 2039 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 2041 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 2044 "hlds.make_hlds.add_mutable_aux_preds.c"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_unsafe_get_set_preds_0_0_10001(
#line 2047 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box * hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 2049 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2,
#line 2051 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3)
#line 2053 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 2055 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 2057 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1;

#line 2060 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 2062 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds____Compare____need_unsafe_get_set_preds_0_0(&hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3));
    }
#line 2065 "hlds.make_hlds.add_mutable_aux_preds.c"
    *hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1));
#line 2067 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 2069 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 28 "add_mutable_aux_preds.m"
void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_109_117_116_97_98_108_101_95_99_104_101_99_107_115_95_95_91_50_93_95_48_6_p_0(
#line 28 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7,
#line 28 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39,
#line 28 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_40,
#line 28 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_41,
#line 28 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_42)
#line 28 "add_mutable_aux_preds.m"
{
#line 316 "add_mutable_aux_preds.m"
  {
#line 316 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 316 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_11;
#line 316 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__Name_12;
#line 316 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_15;
#line 316 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_16;
#line 316 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_18;
#line 316 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Globals_20;
#line 316 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_21;
#line 316 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TrailMutableUpdates_29;
#line 316 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UseTrail_30;
#line 316 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_65_65;
#line 316 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_85_85;
#line 318 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Type_13;
#line 318 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___InitTerm_14;
#line 318 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___VarSet_17;
#line 318 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_19;

#line 317 "add_mutable_aux_preds.m"
    {
#line 317 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_11);
    }
#line 318 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Name_12 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7, (MR_Integer) 0)));
#line 318 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7, (MR_Integer) 1)));
#line 318 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___InitTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7, (MR_Integer) 2)));
#line 318 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Inst_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7, (MR_Integer) 3)));
#line 318 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutAttrs_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7, (MR_Integer) 4)));
#line 318 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___VarSet_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7, (MR_Integer) 5)));
#line 318 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7, (MR_Integer) 6)));
#line 318 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___SeqNum_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7, (MR_Integer) 7)));
#line 320 "add_mutable_aux_preds.m"
    {
#line 320 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_mutable_aux_preds__Globals_20);
    }
#line 321 "add_mutable_aux_preds.m"
    {
#line 321 "add_mutable_aux_preds.m"
      libs__globals__get_target_2_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_20, &hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_21);
    }
#line 343 "add_mutable_aux_preds.m"
#line 343 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_21) {
#line 343 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 343 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 331 "add_mutable_aux_preds.m"
        {
#line 331 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_23;

#line 332 "add_mutable_aux_preds.m"
          {
#line 332 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_23 = parse_tree__prog_item__mutable_var_maybe_foreign_names_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_16);
          }
#line 335 "add_mutable_aux_preds.m"
          if ((hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 334 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_65_65 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_41;
#line 335 "add_mutable_aux_preds.m"
          else
#line 336 "add_mutable_aux_preds.m"
            {
#line 336 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignNames_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_23, (MR_Integer) 0)));
#line 339 "add_mutable_aux_preds.m"
              MR_String hlds__make_hlds__add_mutable_aux_preds___TargetMutableName_25;

#line 339 "add_mutable_aux_preds.m"
              {
#line 339 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__get_global_name_from_foreign_names_9_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39, hlds__make_hlds__add_mutable_aux_preds__Context_18, hlds__make_hlds__add_mutable_aux_preds__ModuleName_11, hlds__make_hlds__add_mutable_aux_preds__Name_12, (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__ForeignNames_24, &hlds__make_hlds__add_mutable_aux_preds___TargetMutableName_25, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_41, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_65_65);
              }
#line 336 "add_mutable_aux_preds.m"
            }
#line 331 "add_mutable_aux_preds.m"
        }
#line 343 "add_mutable_aux_preds.m"
        break;
#line 343 "add_mutable_aux_preds.m"
      case (MR_Integer) 2:
#line 331 "add_mutable_aux_preds.m"
        {
#line 331 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_116;

#line 332 "add_mutable_aux_preds.m"
          {
#line 332 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_116 = parse_tree__prog_item__mutable_var_maybe_foreign_names_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_16);
          }
#line 335 "add_mutable_aux_preds.m"
          if ((hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_116 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 334 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_65_65 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_41;
#line 335 "add_mutable_aux_preds.m"
          else
#line 336 "add_mutable_aux_preds.m"
            {
#line 336 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignNames_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_116, (MR_Integer) 0)));
#line 339 "add_mutable_aux_preds.m"
              MR_String hlds__make_hlds__add_mutable_aux_preds___TargetMutableName_110;

#line 339 "add_mutable_aux_preds.m"
              {
#line 339 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__get_global_name_from_foreign_names_9_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39, hlds__make_hlds__add_mutable_aux_preds__Context_18, hlds__make_hlds__add_mutable_aux_preds__ModuleName_11, hlds__make_hlds__add_mutable_aux_preds__Name_12, (MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__ForeignNames_111, &hlds__make_hlds__add_mutable_aux_preds___TargetMutableName_110, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_41, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_65_65);
              }
#line 336 "add_mutable_aux_preds.m"
            }
#line 331 "add_mutable_aux_preds.m"
        }
#line 343 "add_mutable_aux_preds.m"
        break;
#line 343 "add_mutable_aux_preds.m"
      case (MR_Integer) 4:
#line 331 "add_mutable_aux_preds.m"
        {
#line 331 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_125;

#line 332 "add_mutable_aux_preds.m"
          {
#line 332 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_125 = parse_tree__prog_item__mutable_var_maybe_foreign_names_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_16);
          }
#line 335 "add_mutable_aux_preds.m"
          if ((hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_125 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 334 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_65_65 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_41;
#line 335 "add_mutable_aux_preds.m"
          else
#line 336 "add_mutable_aux_preds.m"
            {
#line 336 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignNames_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_125, (MR_Integer) 0)));
#line 339 "add_mutable_aux_preds.m"
              MR_String hlds__make_hlds__add_mutable_aux_preds___TargetMutableName_119;

#line 339 "add_mutable_aux_preds.m"
              {
#line 339 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__get_global_name_from_foreign_names_9_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39, hlds__make_hlds__add_mutable_aux_preds__Context_18, hlds__make_hlds__add_mutable_aux_preds__ModuleName_11, hlds__make_hlds__add_mutable_aux_preds__Name_12, (MR_Integer) 4, hlds__make_hlds__add_mutable_aux_preds__ForeignNames_120, &hlds__make_hlds__add_mutable_aux_preds___TargetMutableName_119, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_41, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_65_65);
              }
#line 336 "add_mutable_aux_preds.m"
            }
#line 331 "add_mutable_aux_preds.m"
        }
#line 343 "add_mutable_aux_preds.m"
        break;
#line 343 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 344 "add_mutable_aux_preds.m"
        {
#line 344 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__Pieces_26;
#line 344 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__Msg_27;
#line 344 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__Spec_28;
#line 344 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_45_45;
#line 344 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_48_48;
#line 344 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_49_49;
#line 344 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__V_50_50;
#line 344 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_57_57;
#line 344 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_58_58;
#line 344 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_62_62;

#line 347 "add_mutable_aux_preds.m"
          {
#line 347 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_50_50 = libs__globals__compilation_target_string_1_f_0(hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_21);
          }
#line 347 "add_mutable_aux_preds.m"
          {
#line 347 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_49_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 347 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__V_49_49, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_50_50));
#line 347 "add_mutable_aux_preds.m"
          }
#line 347 "add_mutable_aux_preds.m"
          {
#line 347 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 347 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_48_48, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_49_49));
#line 347 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[9])));
#line 347 "add_mutable_aux_preds.m"
          }
#line 346 "add_mutable_aux_preds.m"
          {
#line 346 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 346 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_45_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[36])));
#line 346 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_45_45, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_48_48));
#line 346 "add_mutable_aux_preds.m"
          }
#line 345 "add_mutable_aux_preds.m"
          {
#line 345 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__Pieces_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 345 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__Pieces_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[35])));
#line 345 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__Pieces_26, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_45_45));
#line 345 "add_mutable_aux_preds.m"
          }
#line 349 "add_mutable_aux_preds.m"
          {
#line 349 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 349 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_58_58, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Pieces_26));
#line 349 "add_mutable_aux_preds.m"
          }
#line 349 "add_mutable_aux_preds.m"
          {
#line 349 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 349 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_57_57, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_58_58));
#line 349 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 349 "add_mutable_aux_preds.m"
          }
#line 349 "add_mutable_aux_preds.m"
          {
#line 349 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__Msg_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 349 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Msg_27, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_18));
#line 349 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Msg_27, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_57_57));
#line 349 "add_mutable_aux_preds.m"
          }
#line 350 "add_mutable_aux_preds.m"
          {
#line 350 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 350 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_62_62, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Msg_27));
#line 350 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 350 "add_mutable_aux_preds.m"
          }
#line 350 "add_mutable_aux_preds.m"
          {
#line 350 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__Spec_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 350 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Spec_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 350 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Spec_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 350 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Spec_28, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_62_62));
#line 350 "add_mutable_aux_preds.m"
          }
#line 351 "add_mutable_aux_preds.m"
          {
#line 351 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 351 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_65_65, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Spec_28));
#line 351 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_65_65, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_41));
#line 351 "add_mutable_aux_preds.m"
          }
#line 344 "add_mutable_aux_preds.m"
        }
#line 343 "add_mutable_aux_preds.m"
        break;
#line 343 "add_mutable_aux_preds.m"
      case (MR_Integer) 3:
#line 331 "add_mutable_aux_preds.m"
        {
#line 331 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_134;

#line 332 "add_mutable_aux_preds.m"
          {
#line 332 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_134 = parse_tree__prog_item__mutable_var_maybe_foreign_names_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_16);
          }
#line 335 "add_mutable_aux_preds.m"
          if ((hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_134 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 334 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_65_65 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_41;
#line 335 "add_mutable_aux_preds.m"
          else
#line 336 "add_mutable_aux_preds.m"
            {
#line 336 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignNames_129 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_134, (MR_Integer) 0)));
#line 339 "add_mutable_aux_preds.m"
              MR_String hlds__make_hlds__add_mutable_aux_preds___TargetMutableName_128;

#line 339 "add_mutable_aux_preds.m"
              {
#line 339 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__get_global_name_from_foreign_names_9_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39, hlds__make_hlds__add_mutable_aux_preds__Context_18, hlds__make_hlds__add_mutable_aux_preds__ModuleName_11, hlds__make_hlds__add_mutable_aux_preds__Name_12, (MR_Integer) 2, hlds__make_hlds__add_mutable_aux_preds__ForeignNames_129, &hlds__make_hlds__add_mutable_aux_preds___TargetMutableName_128, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_41, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_65_65);
              }
#line 336 "add_mutable_aux_preds.m"
            }
#line 331 "add_mutable_aux_preds.m"
        }
#line 343 "add_mutable_aux_preds.m"
        break;
#line 343 "add_mutable_aux_preds.m"
    }
#line 355 "add_mutable_aux_preds.m"
    {
#line 355 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__TrailMutableUpdates_29 = parse_tree__prog_item__mutable_var_trailed_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_16);
    }
#line 356 "add_mutable_aux_preds.m"
    {
#line 356 "add_mutable_aux_preds.m"
      libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_20, (MR_Integer) 219, &hlds__make_hlds__add_mutable_aux_preds__UseTrail_30);
    }
#line 358 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__TrailMutableUpdates_29 == (MR_Integer) 1);
#line 358 "add_mutable_aux_preds.m"
    if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 359 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__UseTrail_30 == (MR_Integer) 0);
#line 367 "add_mutable_aux_preds.m"
    if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 362 "add_mutable_aux_preds.m"
      {
#line 362 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__TrailMsg_32;
#line 362 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__TrailSpec_33;
#line 362 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_83_83;

#line 363 "add_mutable_aux_preds.m"
        {
#line 363 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__TrailMsg_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 363 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TrailMsg_32, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_18));
#line 363 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TrailMsg_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[37])));
#line 363 "add_mutable_aux_preds.m"
        }
#line 365 "add_mutable_aux_preds.m"
        {
#line 365 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 365 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_83_83, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TrailMsg_32));
#line 365 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 365 "add_mutable_aux_preds.m"
        }
#line 364 "add_mutable_aux_preds.m"
        {
#line 364 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__TrailSpec_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 364 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TrailSpec_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 364 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TrailSpec_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 364 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TrailSpec_33, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_83_83));
#line 364 "add_mutable_aux_preds.m"
        }
#line 366 "add_mutable_aux_preds.m"
        {
#line 366 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 366 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_85_85, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TrailSpec_33));
#line 366 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_85_85, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_65_65));
#line 366 "add_mutable_aux_preds.m"
        }
#line 362 "add_mutable_aux_preds.m"
      }
#line 367 "add_mutable_aux_preds.m"
    else
#line 367 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_85_85 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_65_65;
#line 373 "add_mutable_aux_preds.m"
    {
#line 373 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__hlds_code_util__is_valid_mutable_inst_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39, hlds__make_hlds__add_mutable_aux_preds__Inst_15);
    }
#line 375 "add_mutable_aux_preds.m"
    if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 375 "add_mutable_aux_preds.m"
      *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_42 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_85_85;
#line 375 "add_mutable_aux_preds.m"
    else
#line 379 "add_mutable_aux_preds.m"
      {
#line 379 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__DummyInstVarset_34;
#line 379 "add_mutable_aux_preds.m"
        MR_String hlds__make_hlds__add_mutable_aux_preds__InstStr_35;
#line 379 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__InvalidInstPieces_36;
#line 379 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__InvalidInstMsg_37;
#line 379 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__InvalidInstSpec_38;
#line 379 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_89_89;
#line 379 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_90_90;
#line 379 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_101_101;
#line 379 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_102_102;
#line 379 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_106_106;

#line 379 "add_mutable_aux_preds.m"
        {
#line 379 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__DummyInstVarset_34 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
        }
#line 380 "add_mutable_aux_preds.m"
        {
#line 380 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__InstStr_35 = hlds__hlds_out__hlds_out_mode__mercury_expanded_inst_to_string_4_f_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39, hlds__make_hlds__add_mutable_aux_preds__DummyInstVarset_34, hlds__make_hlds__add_mutable_aux_preds__Inst_15);
        }
#line 382 "add_mutable_aux_preds.m"
        {
#line 382 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_90_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 382 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__V_90_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 382 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__V_90_90, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InstStr_35));
#line 382 "add_mutable_aux_preds.m"
        }
#line 382 "add_mutable_aux_preds.m"
        {
#line 382 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 382 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_89_89, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_90_90));
#line 382 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[20])));
#line 382 "add_mutable_aux_preds.m"
        }
#line 382 "add_mutable_aux_preds.m"
        {
#line 382 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__InvalidInstPieces_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 382 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__InvalidInstPieces_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[38])));
#line 382 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__InvalidInstPieces_36, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_89_89));
#line 382 "add_mutable_aux_preds.m"
        }
#line 387 "add_mutable_aux_preds.m"
        {
#line 387 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 387 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_102_102, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InvalidInstPieces_36));
#line 387 "add_mutable_aux_preds.m"
        }
#line 387 "add_mutable_aux_preds.m"
        {
#line 387 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 387 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_101_101, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_102_102));
#line 387 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 387 "add_mutable_aux_preds.m"
        }
#line 387 "add_mutable_aux_preds.m"
        {
#line 387 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__InvalidInstMsg_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 387 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__InvalidInstMsg_37, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_18));
#line 387 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__InvalidInstMsg_37, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_101_101));
#line 387 "add_mutable_aux_preds.m"
        }
#line 389 "add_mutable_aux_preds.m"
        {
#line 389 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 389 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_106_106, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InvalidInstMsg_37));
#line 389 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_106_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 389 "add_mutable_aux_preds.m"
        }
#line 388 "add_mutable_aux_preds.m"
        {
#line 388 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__InvalidInstSpec_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 388 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__InvalidInstSpec_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 388 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__InvalidInstSpec_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 388 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__InvalidInstSpec_38, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_106_106));
#line 388 "add_mutable_aux_preds.m"
        }
#line 390 "add_mutable_aux_preds.m"
        {
#line 390 "add_mutable_aux_preds.m"
          MR_Word base;
#line 390 "add_mutable_aux_preds.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 390 "add_mutable_aux_preds.m"
          *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_42 = base;
#line 390 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InvalidInstSpec_38));
#line 390 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_85_85));
#line 390 "add_mutable_aux_preds.m"
        }
#line 379 "add_mutable_aux_preds.m"
      }
#line 316 "add_mutable_aux_preds.m"
    *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_40 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39;
#line 316 "add_mutable_aux_preds.m"
  }
#line 28 "add_mutable_aux_preds.m"
}

#line 1031 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_main_get_set_preds__1031__1_2_p_0(
#line 1031 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__AttachToIO_37,
#line 1031 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_252)
#line 1031 "add_mutable_aux_preds.m"
{
#line 1031 "add_mutable_aux_preds.m"
  {
#line 1031 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__AttachToIO_37 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_252);

#line 1031 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1031 "add_mutable_aux_preds.m"
  }
#line 1031 "add_mutable_aux_preds.m"
}

#line 833 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_unsafe_get_set_preds__833__1_2_p_0(
#line 833 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_31,
#line 833 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_66)
#line 833 "add_mutable_aux_preds.m"
{
#line 833 "add_mutable_aux_preds.m"
  {
#line 833 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__IsConstant_31 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_66);

#line 833 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 833 "add_mutable_aux_preds.m"
  }
#line 833 "add_mutable_aux_preds.m"
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

#line 306 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__306__1_2_p_0(
#line 306 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Constraints_29,
#line 306 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_78)
#line 306 "add_mutable_aux_preds.m"
{
#line 306 "add_mutable_aux_preds.m"
  {
#line 306 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 306 "add_mutable_aux_preds.m"
    {
#line 306 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = parse_tree__prog_data____Unify____prog_constraints_0_0(hlds__make_hlds__add_mutable_aux_preds__Constraints_29, hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_78);
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
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeDetism_23,
#line 304 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_72)
#line 304 "add_mutable_aux_preds.m"
{
#line 304 "add_mutable_aux_preds.m"
  {
#line 304 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 304 "add_mutable_aux_preds.m"
    {
#line 304 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[6], ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__MaybeDetism_23)), ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_72)));
    }
#line 304 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 304 "add_mutable_aux_preds.m"
  }
#line 304 "add_mutable_aux_preds.m"
}

#line 303 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__303__1_2_p_0(
#line 303 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__WithInst_22,
#line 303 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_67)
#line 303 "add_mutable_aux_preds.m"
{
#line 303 "add_mutable_aux_preds.m"
  {
#line 303 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 303 "add_mutable_aux_preds.m"
    {
#line 303 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[5], ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__WithInst_22)), ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_67)));
    }
#line 303 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 303 "add_mutable_aux_preds.m"
  }
#line 303 "add_mutable_aux_preds.m"
}

#line 302 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__302__1_2_p_0(
#line 302 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__WithType_21,
#line 302 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_62)
#line 302 "add_mutable_aux_preds.m"
{
#line 302 "add_mutable_aux_preds.m"
  {
#line 302 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 302 "add_mutable_aux_preds.m"
    {
#line 302 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[4], ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__WithType_21)), ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_62)));
    }
#line 302 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 302 "add_mutable_aux_preds.m"
  }
#line 302 "add_mutable_aux_preds.m"
}

#line 300 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__300__1_2_p_0(
#line 300 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredOrFunc_19,
#line 300 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_57)
#line 300 "add_mutable_aux_preds.m"
{
#line 300 "add_mutable_aux_preds.m"
  {
#line 300 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__PredOrFunc_19 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_57);

#line 300 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 300 "add_mutable_aux_preds.m"
  }
#line 300 "add_mutable_aux_preds.m"
}

#line 299 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__299__1_2_p_0(
#line 299 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ExistQVars_27,
#line 299 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_52)
#line 299 "add_mutable_aux_preds.m"
{
#line 299 "add_mutable_aux_preds.m"
  {
#line 299 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 299 "add_mutable_aux_preds.m"
    {
#line 299 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[3], ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ExistQVars_27)), ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_52)));
    }
#line 299 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 299 "add_mutable_aux_preds.m"
  }
#line 299 "add_mutable_aux_preds.m"
}

#line 297 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__297__1_2_p_0(
#line 297 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__InstVarSet_26,
#line 297 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_47)
#line 297 "add_mutable_aux_preds.m"
{
#line 297 "add_mutable_aux_preds.m"
  {
#line 297 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 297 "add_mutable_aux_preds.m"
    {
#line 297 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[1], ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InstVarSet_26)), ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_47)));
    }
#line 297 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 297 "add_mutable_aux_preds.m"
  }
#line 297 "add_mutable_aux_preds.m"
}

#line 295 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__295__1_2_p_0(
#line 295 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_25,
#line 295 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_42)
#line 295 "add_mutable_aux_preds.m"
{
#line 295 "add_mutable_aux_preds.m"
  {
#line 295 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 295 "add_mutable_aux_preds.m"
    {
#line 295 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[0], ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_25)), ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_42)));
    }
#line 295 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 295 "add_mutable_aux_preds.m"
  }
#line 295 "add_mutable_aux_preds.m"
}

#line 129 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_mutable_aux_pred_decls__129__1_2_p_0(
#line 129 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__AttachToIO_29,
#line 129 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_83)
#line 129 "add_mutable_aux_preds.m"
{
#line 129 "add_mutable_aux_preds.m"
  {
#line 129 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__AttachToIO_29 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_83);

#line 129 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 129 "add_mutable_aux_preds.m"
  }
#line 129 "add_mutable_aux_preds.m"
}

#line 127 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_mutable_aux_pred_decls__127__1_2_p_0(
#line 127 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_26,
#line 127 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_78)
#line 127 "add_mutable_aux_preds.m"
{
#line 127 "add_mutable_aux_preds.m"
  {
#line 127 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_26 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_78);

#line 127 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 127 "add_mutable_aux_preds.m"
  }
#line 127 "add_mutable_aux_preds.m"
}

#line 125 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_mutable_aux_pred_decls__125__1_2_p_0(
#line 125 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__LockUnlock_25,
#line 125 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_73)
#line 125 "add_mutable_aux_preds.m"
{
#line 125 "add_mutable_aux_preds.m"
  {
#line 125 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__LockUnlock_25 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_73);

#line 125 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 125 "add_mutable_aux_preds.m"
  }
#line 125 "add_mutable_aux_preds.m"
}

#line 123 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_mutable_aux_pred_decls__123__1_2_p_0(
#line 123 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInit_24,
#line 123 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_68)
#line 123 "add_mutable_aux_preds.m"
{
#line 123 "add_mutable_aux_preds.m"
  {
#line 123 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__PreInit_24 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_68);

#line 123 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 123 "add_mutable_aux_preds.m"
  }
#line 123 "add_mutable_aux_preds.m"
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
#line 3070 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 3072 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);

#line 3075 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 3077 "hlds.make_hlds.add_mutable_aux_preds.c"
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
#line 3123 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 3125 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);

#line 3128 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 3130 "hlds.make_hlds.add_mutable_aux_preds.c"
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
#line 3176 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 3178 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);

#line 3181 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 3183 "hlds.make_hlds.add_mutable_aux_preds.c"
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
#line 3212 "hlds.make_hlds.add_mutable_aux_preds.c"
      *hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1 = (MR_Integer) 0;
#line 1346 "add_mutable_aux_preds.m"
    else
#line 1346 "add_mutable_aux_preds.m"
      {
#line 1346 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1346 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 1346 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1346 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1346 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1346 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 1346 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1346 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 1346 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1346 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1346 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1346 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
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
#line 3254 "hlds.make_hlds.add_mutable_aux_preds.c"
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
#line 3278 "hlds.make_hlds.add_mutable_aux_preds.c"
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
#line 3302 "hlds.make_hlds.add_mutable_aux_preds.c"
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
#line 3326 "hlds.make_hlds.add_mutable_aux_preds.c"
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
#line 3350 "hlds.make_hlds.add_mutable_aux_preds.c"
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
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 1346 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1346 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1346 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1346 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 1346 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1346 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 1346 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1346 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1346 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1346 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);

#line 3444 "hlds.make_hlds.add_mutable_aux_preds.c"
        hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_3_3 == hlds__make_hlds__add_mutable_aux_preds__V_9_9);
#line 1346 "add_mutable_aux_preds.m"
        if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1346 "add_mutable_aux_preds.m"
          {
#line 3450 "hlds.make_hlds.add_mutable_aux_preds.c"
            hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_4_4 == hlds__make_hlds__add_mutable_aux_preds__V_10_10);
#line 1346 "add_mutable_aux_preds.m"
            if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1346 "add_mutable_aux_preds.m"
              {
#line 3456 "hlds.make_hlds.add_mutable_aux_preds.c"
                hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_5_5 == hlds__make_hlds__add_mutable_aux_preds__V_11_11);
#line 1346 "add_mutable_aux_preds.m"
                if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1346 "add_mutable_aux_preds.m"
                  {
#line 3462 "hlds.make_hlds.add_mutable_aux_preds.c"
                    hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_6_6 == hlds__make_hlds__add_mutable_aux_preds__V_12_12);
#line 1346 "add_mutable_aux_preds.m"
                    if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1346 "add_mutable_aux_preds.m"
                      {
#line 3468 "hlds.make_hlds.add_mutable_aux_preds.c"
                        hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_7_7 == hlds__make_hlds__add_mutable_aux_preds__V_13_13);
#line 1346 "add_mutable_aux_preds.m"
                        if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 3472 "hlds.make_hlds.add_mutable_aux_preds.c"
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
#line 3532 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 3534 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);

#line 3537 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 3539 "hlds.make_hlds.add_mutable_aux_preds.c"
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
#line 1432 "add_mutable_aux_preds.m"
#line 1432 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_8) {
#line 1432 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1432 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 1416 "add_mutable_aux_preds.m"
        {
#line 1416 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__HighLevelCode_14;
#line 1416 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_15;
#line 1416 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_17;
#line 1416 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInit_18;
#line 1416 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__LockUnlock_19;
#line 1416 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_20;
#line 1416 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_21;

#line 1377 "add_mutable_aux_preds.m"
          {
#line 1377 "add_mutable_aux_preds.m"
            libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_7, (MR_Integer) 255, &hlds__make_hlds__add_mutable_aux_preds__HighLevelCode_14);
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
                hlds__make_hlds__add_mutable_aux_preds__PreInit_18 = (MR_Integer) 1;
#line 1421 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__LockUnlock_19 = (MR_Integer) 1;
#line 1422 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_20 = (MR_Integer) 1;
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
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_21, 0) = ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 2)) | ((((hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_15 << (MR_Integer) 5)) | ((((hlds__make_hlds__add_mutable_aux_preds__PreInit_18 << (MR_Integer) 6)) | ((((hlds__make_hlds__add_mutable_aux_preds__LockUnlock_19 << (MR_Integer) 7)) | ((hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_20 << (MR_Integer) 8)))))))))))));
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
#line 1416 "add_mutable_aux_preds.m"
        }
#line 1432 "add_mutable_aux_preds.m"
        break;
#line 1432 "add_mutable_aux_preds.m"
      case (MR_Integer) 2:
#line 1416 "add_mutable_aux_preds.m"
        {
#line 1416 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_16;
#line 1416 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInit0_25;
#line 1416 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_29;
#line 1416 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInit_30;
#line 1416 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__LockUnlock_31;
#line 1416 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_32;
#line 1416 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_33;

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
              hlds__make_hlds__add_mutable_aux_preds__PreInit0_25 = (MR_Integer) 0;
#line 1393 "add_mutable_aux_preds.m"
              break;
#line 1393 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 1392 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__PreInit0_25 = (MR_Integer) 1;
#line 1393 "add_mutable_aux_preds.m"
              break;
#line 1393 "add_mutable_aux_preds.m"
          }
#line 1417 "add_mutable_aux_preds.m"
          {
#line 1417 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__IsConstant_29 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_5);
          }
#line 1423 "add_mutable_aux_preds.m"
#line 1423 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__IsConstant_29) {
#line 1423 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1423 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 1424 "add_mutable_aux_preds.m"
              {
#line 1425 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__PreInit_30 = (MR_Integer) 0;
#line 1426 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__LockUnlock_31 = (MR_Integer) 0;
#line 1427 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_32 = (MR_Integer) 0;
#line 1424 "add_mutable_aux_preds.m"
              }
#line 1423 "add_mutable_aux_preds.m"
              break;
#line 1423 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 1419 "add_mutable_aux_preds.m"
              {
#line 1420 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__PreInit_30 = hlds__make_hlds__add_mutable_aux_preds__PreInit0_25;
#line 1421 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__LockUnlock_31 = (MR_Integer) 0;
#line 1422 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_32 = (MR_Integer) 1;
#line 1419 "add_mutable_aux_preds.m"
              }
#line 1423 "add_mutable_aux_preds.m"
              break;
#line 1423 "add_mutable_aux_preds.m"
          }
#line 1429 "add_mutable_aux_preds.m"
          {
#line 1429 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__TargetParams_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1429 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_33, 0) = ((MR_Box) (((MR_Integer) 1 | (((((MR_Integer) 1 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 5)) | ((((hlds__make_hlds__add_mutable_aux_preds__PreInit_30 << (MR_Integer) 6)) | ((((hlds__make_hlds__add_mutable_aux_preds__LockUnlock_31 << (MR_Integer) 7)) | ((hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_32 << (MR_Integer) 8)))))))))))));
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
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetParams_33));
#line 1431 "add_mutable_aux_preds.m"
          }
#line 1416 "add_mutable_aux_preds.m"
        }
#line 1432 "add_mutable_aux_preds.m"
        break;
#line 1432 "add_mutable_aux_preds.m"
      case (MR_Integer) 4:
#line 1416 "add_mutable_aux_preds.m"
        {
#line 1416 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_40;
#line 1416 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInit_41;
#line 1416 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__LockUnlock_42;
#line 1416 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_43;
#line 1416 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_44;

#line 1417 "add_mutable_aux_preds.m"
          {
#line 1417 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__IsConstant_40 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_5);
          }
#line 1423 "add_mutable_aux_preds.m"
#line 1423 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__IsConstant_40) {
#line 1423 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1423 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 1424 "add_mutable_aux_preds.m"
              {
#line 1425 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__PreInit_41 = (MR_Integer) 0;
#line 1426 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__LockUnlock_42 = (MR_Integer) 0;
#line 1427 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_43 = (MR_Integer) 0;
#line 1424 "add_mutable_aux_preds.m"
              }
#line 1423 "add_mutable_aux_preds.m"
              break;
#line 1423 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 1419 "add_mutable_aux_preds.m"
              {
#line 1420 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__PreInit_41 = (MR_Integer) 0;
#line 1421 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__LockUnlock_42 = (MR_Integer) 0;
#line 1422 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_43 = (MR_Integer) 0;
#line 1419 "add_mutable_aux_preds.m"
              }
#line 1423 "add_mutable_aux_preds.m"
              break;
#line 1423 "add_mutable_aux_preds.m"
          }
#line 1429 "add_mutable_aux_preds.m"
          {
#line 1429 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__TargetParams_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1429 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_44, 0) = ((MR_Box) (((MR_Integer) 3 | (((((MR_Integer) 4 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 5)) | ((((hlds__make_hlds__add_mutable_aux_preds__PreInit_41 << (MR_Integer) 6)) | ((((hlds__make_hlds__add_mutable_aux_preds__LockUnlock_42 << (MR_Integer) 7)) | ((hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_43 << (MR_Integer) 8)))))))))))));
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
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetParams_44));
#line 1431 "add_mutable_aux_preds.m"
          }
#line 1416 "add_mutable_aux_preds.m"
        }
#line 1432 "add_mutable_aux_preds.m"
        break;
#line 1432 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 1435 "add_mutable_aux_preds.m"
        *hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1432 "add_mutable_aux_preds.m"
        break;
#line 1432 "add_mutable_aux_preds.m"
      case (MR_Integer) 3:
#line 1416 "add_mutable_aux_preds.m"
        {
#line 1416 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_51;
#line 1416 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInit_52;
#line 1416 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__LockUnlock_53;
#line 1416 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_54;
#line 1416 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_55;

#line 1417 "add_mutable_aux_preds.m"
          {
#line 1417 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__IsConstant_51 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_5);
          }
#line 1423 "add_mutable_aux_preds.m"
#line 1423 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__IsConstant_51) {
#line 1423 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1423 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 1424 "add_mutable_aux_preds.m"
              {
#line 1425 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__PreInit_52 = (MR_Integer) 0;
#line 1426 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__LockUnlock_53 = (MR_Integer) 0;
#line 1427 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_54 = (MR_Integer) 0;
#line 1424 "add_mutable_aux_preds.m"
              }
#line 1423 "add_mutable_aux_preds.m"
              break;
#line 1423 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 1419 "add_mutable_aux_preds.m"
              {
#line 1420 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__PreInit_52 = (MR_Integer) 0;
#line 1421 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__LockUnlock_53 = (MR_Integer) 0;
#line 1422 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_54 = (MR_Integer) 1;
#line 1419 "add_mutable_aux_preds.m"
              }
#line 1423 "add_mutable_aux_preds.m"
              break;
#line 1423 "add_mutable_aux_preds.m"
          }
#line 1429 "add_mutable_aux_preds.m"
          {
#line 1429 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__TargetParams_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1429 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_55, 0) = ((MR_Box) (((MR_Integer) 2 | (((((MR_Integer) 2 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 5)) | ((((hlds__make_hlds__add_mutable_aux_preds__PreInit_52 << (MR_Integer) 6)) | ((((hlds__make_hlds__add_mutable_aux_preds__LockUnlock_53 << (MR_Integer) 7)) | ((hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_54 << (MR_Integer) 8)))))))))))));
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
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetParams_55));
#line 1431 "add_mutable_aux_preds.m"
          }
#line 1416 "add_mutable_aux_preds.m"
        }
#line 1432 "add_mutable_aux_preds.m"
        break;
#line 1432 "add_mutable_aux_preds.m"
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
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[9])));
#line 1287 "add_mutable_aux_preds.m"
            }
#line 1286 "add_mutable_aux_preds.m"
            {
#line 1286 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1286 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_33_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[34])));
#line 1286 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_33_33, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_36_36));
#line 1286 "add_mutable_aux_preds.m"
            }
#line 1285 "add_mutable_aux_preds.m"
            {
#line 1285 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__Pieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1285 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__Pieces_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[33])));
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
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Spec_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
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

#line 1177 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_init_pred_11_p_0(
#line 1177 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12,
#line 1177 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_13,
#line 1177 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_14,
#line 1177 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_15,
#line 1177 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_16,
#line 1177 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39,
#line 1177 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_40,
#line 1177 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_41,
#line 1177 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_42,
#line 1177 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_43,
#line 1177 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_44)
#line 1177 "add_mutable_aux_preds.m"
{
#line 1183 "add_mutable_aux_preds.m"
  {
#line 1183 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1183 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_20;
#line 1183 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_21;
#line 1183 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InitTerm_23;
#line 1183 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__VarSetMutable_26;
#line 1183 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_27;
#line 1183 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__X_29;
#line 1183 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__VarSetMutableX_30;
#line 1183 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__VarX_31;
#line 1183 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_32;
#line 1183 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__CallSetExpr_33;
#line 1183 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnifyCallSetExpr_34;
#line 1183 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_35;
#line 1183 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InitPredName_37;
#line 1183 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_47_47;
#line 1183 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_54_54;
#line 1183 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_56_56;
#line 1183 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__CName_71;
#line 1183 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_72;
#line 1183 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__FPEInfo_73;
#line 1183 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_26_76;
#line 1185 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Type_22;
#line 1185 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Inst_24;
#line 1185 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___MutAttrs_25;
#line 1185 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_28;

#line 1184 "add_mutable_aux_preds.m"
    {
#line 1184 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_20);
    }
#line 1185 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutableName_21 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12, (MR_Integer) 0)));
#line 1185 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Type_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12, (MR_Integer) 1)));
#line 1185 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__InitTerm_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12, (MR_Integer) 2)));
#line 1185 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Inst_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12, (MR_Integer) 3)));
#line 1185 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___MutAttrs_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12, (MR_Integer) 4)));
#line 1185 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__VarSetMutable_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12, (MR_Integer) 5)));
#line 1185 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Context_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12, (MR_Integer) 6)));
#line 1185 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___SeqNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12, (MR_Integer) 7)));
#line 1187 "add_mutable_aux_preds.m"
    {
#line 1187 "add_mutable_aux_preds.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "X", &hlds__make_hlds__add_mutable_aux_preds__X_29, hlds__make_hlds__add_mutable_aux_preds__VarSetMutable_26, &hlds__make_hlds__add_mutable_aux_preds__VarSetMutableX_30);
    }
#line 1188 "add_mutable_aux_preds.m"
    {
#line 1188 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__VarX_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1188 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__VarX_31, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_29));
#line 1188 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__VarX_31, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_27));
#line 1188 "add_mutable_aux_preds.m"
    }
#line 1190 "add_mutable_aux_preds.m"
    {
#line 1190 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1190 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_32, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_27));
#line 1190 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_32, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarX_31));
#line 1190 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_32, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InitTerm_23));
#line 1190 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_32, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1190 "add_mutable_aux_preds.m"
    }
#line 1191 "add_mutable_aux_preds.m"
    {
#line 1191 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1191 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_47_47, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarX_31));
#line 1191 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1191 "add_mutable_aux_preds.m"
    }
#line 1191 "add_mutable_aux_preds.m"
    {
#line 1191 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__CallSetExpr_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1191 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallSetExpr_33, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_27));
#line 1191 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallSetExpr_33, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_14));
#line 1191 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallSetExpr_33, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_47_47));
#line 1191 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallSetExpr_33, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1191 "add_mutable_aux_preds.m"
    }
#line 1192 "add_mutable_aux_preds.m"
    {
#line 1192 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__UnifyCallSetExpr_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1192 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__UnifyCallSetExpr_34, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_27));
#line 1192 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__UnifyCallSetExpr_34, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_32));
#line 1192 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__UnifyCallSetExpr_34, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallSetExpr_33));
#line 1192 "add_mutable_aux_preds.m"
    }
#line 1196 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1195 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_35 = hlds__make_hlds__add_mutable_aux_preds__UnifyCallSetExpr_34;
#line 1196 "add_mutable_aux_preds.m"
    else
#line 1197 "add_mutable_aux_preds.m"
      {
#line 1197 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_13, (MR_Integer) 0)));

#line 1198 "add_mutable_aux_preds.m"
        {
#line 1198 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1198 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_35, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_27));
#line 1198 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_35, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_36));
#line 1198 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_35, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnifyCallSetExpr_34));
#line 1198 "add_mutable_aux_preds.m"
        }
#line 1197 "add_mutable_aux_preds.m"
      }
#line 1200 "add_mutable_aux_preds.m"
    {
#line 1200 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__InitPredName_37 = parse_tree__prog_mutable__mutable_init_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_20, hlds__make_hlds__add_mutable_aux_preds__MutableName_21);
    }
#line 1203 "add_mutable_aux_preds.m"
    {
#line 1203 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__add_mutable_aux_preds__VarSetMutableX_30, (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__InitPredName_37, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_35, hlds__make_hlds__add_mutable_aux_preds__Status_16, hlds__make_hlds__add_mutable_aux_preds__Context_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_54_54, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_41, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_42, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_43, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_56_56);
    }
#line 1225 "add_mutable_aux_preds.m"
    {
#line 1225 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_new_user_init_pred_5_p_0(hlds__make_hlds__add_mutable_aux_preds__InitPredName_37, (MR_Integer) 0, &hlds__make_hlds__add_mutable_aux_preds__CName_71, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_54_54, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_26_76);
    }
#line 1226 "add_mutable_aux_preds.m"
    {
#line 1226 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1226 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_72, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InitPredName_37));
#line 1226 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1226 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_72, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1226 "add_mutable_aux_preds.m"
    }
#line 1227 "add_mutable_aux_preds.m"
    {
#line 1227 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__FPEInfo_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1227 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_73, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Lang_15));
#line 1227 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_73, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_72));
#line 1227 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_73, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CName_71));
#line 1227 "add_mutable_aux_preds.m"
    }
#line 1230 "add_mutable_aux_preds.m"
    {
#line 1230 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0((MR_Word) MR_mkword(MR_mktag(1), ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[32]))), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_73, hlds__make_hlds__add_mutable_aux_preds__Context_27, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_26_76, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_40, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_56_56, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_44);
#line 1230 "add_mutable_aux_preds.m"
      return;
    }
#line 1183 "add_mutable_aux_preds.m"
  }
#line 1177 "add_mutable_aux_preds.m"
}

#line 1031 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_main_get_set_preds_14_p_0_1(
#line 1031 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 1031 "add_mutable_aux_preds.m"
{
#line 1031 "add_mutable_aux_preds.m"
  {
#line 1031 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1031 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 1031 "add_mutable_aux_preds.m"
    {
#line 1031 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_main_get_set_preds__1031__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 1031 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1031 "add_mutable_aux_preds.m"
  }
#line 1031 "add_mutable_aux_preds.m"
}

#line 953 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_main_get_set_preds_14_p_0(
#line 953 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15,
#line 953 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_16,
#line 953 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17,
#line 953 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_18,
#line 953 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_19,
#line 953 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_20,
#line 953 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21,
#line 953 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_22,
#line 953 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_85,
#line 953 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_86,
#line 953 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_87,
#line 953 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_88,
#line 953 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_89,
#line 953 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_90)
#line 953 "add_mutable_aux_preds.m"
{
#line 962 "add_mutable_aux_preds.m"
  {
#line 962 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 962 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_253_253;
#line 962 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_26;
#line 962 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_27;
#line 962 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_30;
#line 962 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_31;
#line 962 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_33;
#line 962 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_35;
#line 962 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_36;
#line 962 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__AttachToIO_37;
#line 962 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ImplLang_38;
#line 962 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_40;
#line 962 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__X_44;
#line 962 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_45;
#line 962 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_92_92;
#line 964 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Type_28;
#line 964 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___InitTerm_29;
#line 964 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___VarSetMutable_32;
#line 964 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_34;
#line 969 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Lang_39;
#line 969 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___PreInit_41;
#line 969 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___LockUnlock_42;
#line 969 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_43;

#line 963 "add_mutable_aux_preds.m"
    {
#line 963 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_85, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_26);
    }
#line 964 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutableName_27 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15, (MR_Integer) 0)));
#line 964 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Type_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15, (MR_Integer) 1)));
#line 964 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___InitTerm_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15, (MR_Integer) 2)));
#line 964 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Inst_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15, (MR_Integer) 3)));
#line 964 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutAttrs_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15, (MR_Integer) 4)));
#line 964 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___VarSetMutable_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15, (MR_Integer) 5)));
#line 964 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Context_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15, (MR_Integer) 6)));
#line 964 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___SeqNum_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15, (MR_Integer) 7)));
#line 966 "add_mutable_aux_preds.m"
    {
#line 966 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsConstant_35 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_31);
    }
#line 967 "add_mutable_aux_preds.m"
    {
#line 967 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_36 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_31);
    }
#line 968 "add_mutable_aux_preds.m"
    {
#line 968 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__AttachToIO_37 = parse_tree__prog_item__mutable_var_attach_to_io_state_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_31);
    }
#line 969 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__ImplLang_38 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_16, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 969 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Lang_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_16, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 969 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_16, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 969 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___PreInit_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_16, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 969 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___LockUnlock_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_16, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 969 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_16, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 4714 "hlds.make_hlds.add_mutable_aux_preds.c"
    hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_253_253 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 971 "add_mutable_aux_preds.m"
    {
#line 971 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_92_92 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_253_253);
    }
#line 971 "add_mutable_aux_preds.m"
    {
#line 971 "add_mutable_aux_preds.m"
      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_253_253, (MR_String) "X", &hlds__make_hlds__add_mutable_aux_preds__X_44, hlds__make_hlds__add_mutable_aux_preds__V_92_92, &hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_45);
    }
#line 1033 "add_mutable_aux_preds.m"
#line 1033 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__IsConstant_35) {
#line 1033 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1033 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 974 "add_mutable_aux_preds.m"
        {
#line 974 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_254_254;
#line 974 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__ConstantGetPredName_46;
#line 974 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__ConstantGetAttrs0_48;
#line 974 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__ConstantGetAttrs_49;
#line 974 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__ConstantGetCode_51;
#line 974 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__ConstantSetCode_52;
#line 974 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_53;
#line 974 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_54;
#line 974 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_225_225;
#line 974 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_226_226;
#line 974 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_228_228;
#line 974 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_230_230;
#line 974 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_231_231;
#line 974 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_232_232;
#line 974 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_234_234;
#line 974 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_235_235;
#line 974 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_237_237;
#line 974 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_239_239;
#line 974 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_240_240;
#line 974 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_243_243;
#line 974 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_244_244;
#line 974 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_248_248;

#line 975 "add_mutable_aux_preds.m"
          {
#line 975 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__ConstantGetPredName_46 = parse_tree__prog_mutable__mutable_get_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_26, hlds__make_hlds__add_mutable_aux_preds__MutableName_27);
          }
#line 977 "add_mutable_aux_preds.m"
          {
#line 977 "add_mutable_aux_preds.m"
            *hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21 = parse_tree__prog_mutable__mutable_secret_set_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_26, hlds__make_hlds__add_mutable_aux_preds__MutableName_27);
          }
#line 981 "add_mutable_aux_preds.m"
          {
#line 981 "add_mutable_aux_preds.m"
            parse_tree__prog_data__set_purity_3_p_0((MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__Attrs_18, &hlds__make_hlds__add_mutable_aux_preds__ConstantGetAttrs0_48);
          }
#line 982 "add_mutable_aux_preds.m"
          {
#line 982 "add_mutable_aux_preds.m"
            parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__ConstantGetAttrs0_48, &hlds__make_hlds__add_mutable_aux_preds__ConstantGetAttrs_49);
          }
#line 991 "add_mutable_aux_preds.m"
#line 991 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__ImplLang_38) {
#line 991 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 991 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 991 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 991 "add_mutable_aux_preds.m"
            case (MR_Integer) 2:
#line 988 "add_mutable_aux_preds.m"
              {
#line 988 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_221_221;

#line 989 "add_mutable_aux_preds.m"
                {
#line 989 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_221_221 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17, (MR_String) ";\n");
                }
#line 989 "add_mutable_aux_preds.m"
                {
#line 989 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__ConstantGetCode_51 = mercury__string__f_43_43_2_f_0((MR_String) "X = ", hlds__make_hlds__add_mutable_aux_preds__V_221_221);
                }
#line 990 "add_mutable_aux_preds.m"
                {
#line 990 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__ConstantSetCode_52 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17, (MR_String) " = X;\n");
                }
#line 988 "add_mutable_aux_preds.m"
              }
#line 991 "add_mutable_aux_preds.m"
              break;
#line 991 "add_mutable_aux_preds.m"
            case (MR_Integer) 3:
#line 992 "add_mutable_aux_preds.m"
              {
#line 992 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_203_203;
#line 992 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_205_205;
#line 992 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_218_218;

#line 998 "add_mutable_aux_preds.m"
                {
#line 998 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_205_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 998 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_205_205, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17));
#line 998 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_205_205, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[28])));
#line 998 "add_mutable_aux_preds.m"
                }
#line 997 "add_mutable_aux_preds.m"
                {
#line 997 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_203_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 997 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_203_203, 0) = ((MR_Box) ((MR_String) "\'ML_erlang_global_server\' ! {get_mutable, "));
#line 997 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_203_203, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_205_205));
#line 997 "add_mutable_aux_preds.m"
                }
#line 996 "add_mutable_aux_preds.m"
                {
#line 996 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__ConstantGetCode_51 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_203_203);
                }
#line 1006 "add_mutable_aux_preds.m"
                {
#line 1006 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_218_218 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17, (MR_String) ", X}");
                }
#line 1005 "add_mutable_aux_preds.m"
                {
#line 1005 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__ConstantSetCode_52 = mercury__string__f_43_43_2_f_0((MR_String) "\'ML_erlang_global_server\' ! {set_mutable, ", hlds__make_hlds__add_mutable_aux_preds__V_218_218);
                }
#line 992 "add_mutable_aux_preds.m"
              }
#line 991 "add_mutable_aux_preds.m"
              break;
#line 991 "add_mutable_aux_preds.m"
          }
#line 1011 "add_mutable_aux_preds.m"
          {
#line 1011 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_228_228 = parse_tree__prog_mode__out_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_30);
          }
#line 1011 "add_mutable_aux_preds.m"
          {
#line 1011 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_226_226 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1011 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_226_226, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_44));
#line 1011 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_226_226, 1) = ((MR_Box) ((MR_String) "X"));
#line 1011 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_226_226, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_228_228));
#line 1011 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_226_226, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_40));
#line 1011 "add_mutable_aux_preds.m"
          }
#line 1011 "add_mutable_aux_preds.m"
          {
#line 1011 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_225_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1011 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_225_225, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_226_226));
#line 1011 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_225_225, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1011 "add_mutable_aux_preds.m"
          }
#line 4916 "hlds.make_hlds.add_mutable_aux_preds.c"
          hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_254_254 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
#line 1013 "add_mutable_aux_preds.m"
          {
#line 1013 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_230_230 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_254_254);
          }
#line 1014 "add_mutable_aux_preds.m"
          {
#line 1014 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_232_232 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1014 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_232_232, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1014 "add_mutable_aux_preds.m"
          }
#line 1014 "add_mutable_aux_preds.m"
          {
#line 1014 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_231_231 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1014 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_231_231, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ConstantGetCode_51));
#line 1014 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_231_231, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_232_232));
#line 1014 "add_mutable_aux_preds.m"
          }
#line 1008 "add_mutable_aux_preds.m"
          {
#line 1008 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1008 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_53, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ConstantGetAttrs_49));
#line 1008 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_53, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ConstantGetPredName_46));
#line 1008 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_53, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1008 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_53, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_225_225));
#line 1008 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_53, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_45));
#line 1008 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_53, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_230_230));
#line 1008 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_53, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_231_231));
#line 1008 "add_mutable_aux_preds.m"
          }
#line 1021 "add_mutable_aux_preds.m"
          {
#line 1021 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_237_237 = parse_tree__prog_mode__in_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_30);
          }
#line 1021 "add_mutable_aux_preds.m"
          {
#line 1021 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_235_235 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1021 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_235_235, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_44));
#line 1021 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_235_235, 1) = ((MR_Box) ((MR_String) "X"));
#line 1021 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_235_235, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_237_237));
#line 1021 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_235_235, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_40));
#line 1021 "add_mutable_aux_preds.m"
          }
#line 1021 "add_mutable_aux_preds.m"
          {
#line 1021 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_234_234 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1021 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_234_234, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_235_235));
#line 1021 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_234_234, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1021 "add_mutable_aux_preds.m"
          }
#line 1023 "add_mutable_aux_preds.m"
          {
#line 1023 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_239_239 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_254_254);
          }
#line 1024 "add_mutable_aux_preds.m"
          {
#line 1024 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_240_240 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1024 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_240_240, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ConstantSetCode_52));
#line 1024 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_240_240, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_232_232));
#line 1024 "add_mutable_aux_preds.m"
          }
#line 1018 "add_mutable_aux_preds.m"
          {
#line 1018 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1018 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_54, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Attrs_18));
#line 1018 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_54, 1) = ((MR_Box) (*hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21));
#line 1018 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_54, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1018 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_54, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_234_234));
#line 1018 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_54, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_45));
#line 1018 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_54, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_239_239));
#line 1018 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_54, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_240_240));
#line 1018 "add_mutable_aux_preds.m"
          }
#line 1026 "add_mutable_aux_preds.m"
          {
#line 1026 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_53, hlds__make_hlds__add_mutable_aux_preds__Status_22, hlds__make_hlds__add_mutable_aux_preds__Context_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_85, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_243_243, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_89, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_244_244);
          }
#line 1028 "add_mutable_aux_preds.m"
          {
#line 1028 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_54, hlds__make_hlds__add_mutable_aux_preds__Status_22, hlds__make_hlds__add_mutable_aux_preds__Context_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_243_243, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_86, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_244_244, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_90);
          }
#line 1031 "add_mutable_aux_preds.m"
          {
#line 1031 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_248_248 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1031 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_248_248, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[3]));
#line 1031 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_248_248, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__define_main_get_set_preds_14_p_0_1));
#line 1031 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_248_248, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1031 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_248_248, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__AttachToIO_37));
#line 1031 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_248_248, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1031 "add_mutable_aux_preds.m"
          }
#line 1031 "add_mutable_aux_preds.m"
          {
#line 1031 "add_mutable_aux_preds.m"
            mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_248_248, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_main_get_set_preds\'/14", (MR_String) "AttachToIO = mutable_attach_to_io_state");
          }
#line 974 "add_mutable_aux_preds.m"
          *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_88 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_87;
#line 974 "add_mutable_aux_preds.m"
        }
#line 1033 "add_mutable_aux_preds.m"
        break;
#line 1033 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 1034 "add_mutable_aux_preds.m"
        {
#line 1034 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__StdGetPredName_55;
#line 1034 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59;
#line 1034 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60;
#line 1034 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_170_170;
#line 1034 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_171_171;
#line 1034 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_172_172;

#line 1035 "add_mutable_aux_preds.m"
          {
#line 1035 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__StdGetPredName_55 = parse_tree__prog_mutable__mutable_get_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_26, hlds__make_hlds__add_mutable_aux_preds__MutableName_27);
          }
#line 1036 "add_mutable_aux_preds.m"
          {
#line 1036 "add_mutable_aux_preds.m"
            *hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21 = parse_tree__prog_mutable__mutable_set_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_26, hlds__make_hlds__add_mutable_aux_preds__MutableName_27);
          }
#line 1073 "add_mutable_aux_preds.m"
#line 1073 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__ImplLang_38) {
#line 1073 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1073 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 1073 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 1073 "add_mutable_aux_preds.m"
            case (MR_Integer) 2:
#line 1042 "add_mutable_aux_preds.m"
              {
#line 1042 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr_57;
#line 1042 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr_58;
#line 1042 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__StdPredArgs_63;
#line 1042 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__StdGetPredExpr_64;
#line 1042 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_158_158;
#line 1042 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_164_164;
#line 1042 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_165_165;
#line 1042 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_166_166;

#line 1046 "add_mutable_aux_preds.m"
                if ((hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1047 "add_mutable_aux_preds.m"
                  {
#line 1048 "add_mutable_aux_preds.m"
                    {
#line 1048 "add_mutable_aux_preds.m"
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_main_get_set_preds\'/14", (MR_String) "mutable_not_constant but MaybeUnsafeGetSetExprs = no");
#line 1048 "add_mutable_aux_preds.m"
                      return;
                    }
#line 1047 "add_mutable_aux_preds.m"
                  }
#line 1046 "add_mutable_aux_preds.m"
                else
#line 1044 "add_mutable_aux_preds.m"
                  {
#line 1044 "add_mutable_aux_preds.m"
                    MR_Tuple hlds__make_hlds__add_mutable_aux_preds__V_154_154 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_20, (MR_Integer) 0)));

#line 1045 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_154_154, (MR_Integer) 0)));
#line 1045 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_154_154, (MR_Integer) 1)));
#line 1044 "add_mutable_aux_preds.m"
                  }
#line 1055 "add_mutable_aux_preds.m"
                if ((hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1052 "add_mutable_aux_preds.m"
                  {
#line 1053 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59 = hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr_57;
#line 1054 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60 = hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr_58;
#line 1052 "add_mutable_aux_preds.m"
                  }
#line 1055 "add_mutable_aux_preds.m"
                else
#line 1056 "add_mutable_aux_preds.m"
                  {
#line 1056 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__CallLockExpr_61;
#line 1056 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr_62;
#line 1056 "add_mutable_aux_preds.m"
                    MR_Tuple hlds__make_hlds__add_mutable_aux_preds__V_155_155 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_19, (MR_Integer) 0)));
#line 1056 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_156_156;
#line 1056 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_157_157;

#line 1056 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__CallLockExpr_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_155_155, (MR_Integer) 0)));
#line 1056 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_155_155, (MR_Integer) 1)));
#line 1058 "add_mutable_aux_preds.m"
                    {
#line 1058 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__V_156_156 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1058 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__V_156_156, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1058 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__V_156_156, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr_57));
#line 1058 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__V_156_156, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr_62));
#line 1058 "add_mutable_aux_preds.m"
                    }
#line 1057 "add_mutable_aux_preds.m"
                    {
#line 1057 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1057 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1057 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallLockExpr_61));
#line 1057 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_156_156));
#line 1057 "add_mutable_aux_preds.m"
                    }
#line 1060 "add_mutable_aux_preds.m"
                    {
#line 1060 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__V_157_157 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1060 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__V_157_157, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1060 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__V_157_157, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr_58));
#line 1060 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__V_157_157, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr_62));
#line 1060 "add_mutable_aux_preds.m"
                    }
#line 1059 "add_mutable_aux_preds.m"
                    {
#line 1059 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1059 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1059 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallLockExpr_61));
#line 1059 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_157_157));
#line 1059 "add_mutable_aux_preds.m"
                    }
#line 1056 "add_mutable_aux_preds.m"
                  }
#line 1063 "add_mutable_aux_preds.m"
                {
#line 1063 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1063 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_158_158, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_44));
#line 1063 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_158_158, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1063 "add_mutable_aux_preds.m"
                }
#line 1063 "add_mutable_aux_preds.m"
                {
#line 1063 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__StdPredArgs_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1063 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__StdPredArgs_63, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_158_158));
#line 1063 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__StdPredArgs_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1063 "add_mutable_aux_preds.m"
                }
#line 1064 "add_mutable_aux_preds.m"
                {
#line 1064 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__StdGetPredExpr_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1064 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__StdGetPredExpr_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 1064 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__StdGetPredExpr_64, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1064 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__StdGetPredExpr_64, 2) = ((MR_Box) ((MR_Integer) 1));
#line 1064 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__StdGetPredExpr_64, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59));
#line 1064 "add_mutable_aux_preds.m"
                }
#line 1067 "add_mutable_aux_preds.m"
                {
#line 1067 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_45, (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__StdGetPredName_55, hlds__make_hlds__add_mutable_aux_preds__StdPredArgs_63, hlds__make_hlds__add_mutable_aux_preds__StdGetPredExpr_64, hlds__make_hlds__add_mutable_aux_preds__Status_22, hlds__make_hlds__add_mutable_aux_preds__Context_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_85, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_164_164, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_87, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_165_165, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_89, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_166_166);
                }
#line 1070 "add_mutable_aux_preds.m"
                {
#line 1070 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_45, (MR_Integer) 0, *hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21, hlds__make_hlds__add_mutable_aux_preds__StdPredArgs_63, hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60, hlds__make_hlds__add_mutable_aux_preds__Status_22, hlds__make_hlds__add_mutable_aux_preds__Context_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_164_164, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_170_170, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_165_165, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_171_171, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_166_166, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_172_172);
                }
#line 1042 "add_mutable_aux_preds.m"
              }
#line 1073 "add_mutable_aux_preds.m"
              break;
#line 1073 "add_mutable_aux_preds.m"
            case (MR_Integer) 3:
#line 1074 "add_mutable_aux_preds.m"
              {
#line 1074 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_256_256;
#line 1074 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__ThreadSafeAttrs_66;
#line 1074 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__ErlangGetAttrs_67;
#line 1074 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__ErlangSetAttrs_68;
#line 1074 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__StdGetCode_69;
#line 1074 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__StdSetCode_70;
#line 1074 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_71;
#line 1074 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_72;
#line 1074 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_120_120;
#line 1074 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_121_121;
#line 1074 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_123_123;
#line 1074 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_125_125;
#line 1074 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_126_126;
#line 1074 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_127_127;
#line 1074 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_129_129;
#line 1074 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_130_130;
#line 1074 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_132_132;
#line 1074 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_134_134;
#line 1074 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_135_135;
#line 1074 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_138_138;
#line 1074 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_139_139;
#line 1074 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_143_143;
#line 1074 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_144_144;

#line 1082 "add_mutable_aux_preds.m"
                {
#line 1082 "add_mutable_aux_preds.m"
                  parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__Attrs_18, &hlds__make_hlds__add_mutable_aux_preds__ThreadSafeAttrs_66);
                }
#line 1083 "add_mutable_aux_preds.m"
                {
#line 1083 "add_mutable_aux_preds.m"
                  parse_tree__prog_data__set_purity_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__ThreadSafeAttrs_66, &hlds__make_hlds__add_mutable_aux_preds__ErlangGetAttrs_67);
                }
#line 1084 "add_mutable_aux_preds.m"
                {
#line 1084 "add_mutable_aux_preds.m"
                  parse_tree__prog_data__set_purity_3_p_0((MR_Integer) 2, hlds__make_hlds__add_mutable_aux_preds__ThreadSafeAttrs_66, &hlds__make_hlds__add_mutable_aux_preds__ErlangSetAttrs_68);
                }
#line 1091 "add_mutable_aux_preds.m"
#line 1091 "add_mutable_aux_preds.m"
                switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_36) {
#line 1091 "add_mutable_aux_preds.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1091 "add_mutable_aux_preds.m"
                  case (MR_Integer) 0:
#line 1092 "add_mutable_aux_preds.m"
                    {
#line 1092 "add_mutable_aux_preds.m"
                      MR_Word hlds__make_hlds__add_mutable_aux_preds__V_96_96;
#line 1092 "add_mutable_aux_preds.m"
                      MR_Word hlds__make_hlds__add_mutable_aux_preds__V_98_98;
#line 1092 "add_mutable_aux_preds.m"
                      MR_String hlds__make_hlds__add_mutable_aux_preds__V_111_111;

#line 1098 "add_mutable_aux_preds.m"
                      {
#line 1098 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1098 "add_mutable_aux_preds.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_98_98, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17));
#line 1098 "add_mutable_aux_preds.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[28])));
#line 1098 "add_mutable_aux_preds.m"
                      }
#line 1097 "add_mutable_aux_preds.m"
                      {
#line 1097 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1097 "add_mutable_aux_preds.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_96_96, 0) = ((MR_Box) ((MR_String) "\'ML_erlang_global_server\' ! {get_mutable, "));
#line 1097 "add_mutable_aux_preds.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_96_96, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_98_98));
#line 1097 "add_mutable_aux_preds.m"
                      }
#line 1096 "add_mutable_aux_preds.m"
                      {
#line 1096 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__StdGetCode_69 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_96_96);
                      }
#line 1106 "add_mutable_aux_preds.m"
                      {
#line 1106 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__V_111_111 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17, (MR_String) ", X}");
                      }
#line 1105 "add_mutable_aux_preds.m"
                      {
#line 1105 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__StdSetCode_70 = mercury__string__f_43_43_2_f_0((MR_String) "\'ML_erlang_global_server\' ! {set_mutable, ", hlds__make_hlds__add_mutable_aux_preds__V_111_111);
                      }
#line 1092 "add_mutable_aux_preds.m"
                    }
#line 1091 "add_mutable_aux_preds.m"
                    break;
#line 1091 "add_mutable_aux_preds.m"
                  case (MR_Integer) 1:
#line 1086 "add_mutable_aux_preds.m"
                    {
#line 1086 "add_mutable_aux_preds.m"
                      MR_String hlds__make_hlds__add_mutable_aux_preds__V_114_114;
#line 1086 "add_mutable_aux_preds.m"
                      MR_String hlds__make_hlds__add_mutable_aux_preds__V_117_117;

#line 1088 "add_mutable_aux_preds.m"
                      {
#line 1088 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__V_114_114 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17, (MR_String) "})");
                      }
#line 1087 "add_mutable_aux_preds.m"
                      {
#line 1087 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__StdGetCode_69 = mercury__string__f_43_43_2_f_0((MR_String) "X = get({\'MR_thread_local_mutable\', ", hlds__make_hlds__add_mutable_aux_preds__V_114_114);
                      }
#line 1090 "add_mutable_aux_preds.m"
                      {
#line 1090 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__V_117_117 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17, (MR_String) "}, X)");
                      }
#line 1089 "add_mutable_aux_preds.m"
                      {
#line 1089 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__StdSetCode_70 = mercury__string__f_43_43_2_f_0((MR_String) "put({\'MR_thread_local_mutable\', ", hlds__make_hlds__add_mutable_aux_preds__V_117_117);
                      }
#line 1086 "add_mutable_aux_preds.m"
                    }
#line 1091 "add_mutable_aux_preds.m"
                    break;
#line 1091 "add_mutable_aux_preds.m"
                }
#line 1111 "add_mutable_aux_preds.m"
                {
#line 1111 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_123_123 = parse_tree__prog_mode__out_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_30);
                }
#line 1111 "add_mutable_aux_preds.m"
                {
#line 1111 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1111 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_121_121, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_44));
#line 1111 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_121_121, 1) = ((MR_Box) ((MR_String) "X"));
#line 1111 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_121_121, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_123_123));
#line 1111 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_121_121, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_40));
#line 1111 "add_mutable_aux_preds.m"
                }
#line 1111 "add_mutable_aux_preds.m"
                {
#line 1111 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1111 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_120_120, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_121_121));
#line 1111 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_120_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1111 "add_mutable_aux_preds.m"
                }
#line 5457 "hlds.make_hlds.add_mutable_aux_preds.c"
                hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_256_256 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
#line 1113 "add_mutable_aux_preds.m"
                {
#line 1113 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_125_125 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_256_256);
                }
#line 1114 "add_mutable_aux_preds.m"
                {
#line 1114 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1114 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_127_127, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1114 "add_mutable_aux_preds.m"
                }
#line 1114 "add_mutable_aux_preds.m"
                {
#line 1114 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_126_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1114 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_126_126, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__StdGetCode_69));
#line 1114 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_126_126, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_127_127));
#line 1114 "add_mutable_aux_preds.m"
                }
#line 1108 "add_mutable_aux_preds.m"
                {
#line 1108 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1108 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_71, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ErlangGetAttrs_67));
#line 1108 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_71, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__StdGetPredName_55));
#line 1108 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_71, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1108 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_71, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_120_120));
#line 1108 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_71, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_45));
#line 1108 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_71, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_125_125));
#line 1108 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_71, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_126_126));
#line 1108 "add_mutable_aux_preds.m"
                }
#line 1119 "add_mutable_aux_preds.m"
                {
#line 1119 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_132_132 = parse_tree__prog_mode__in_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_30);
                }
#line 1119 "add_mutable_aux_preds.m"
                {
#line 1119 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_130_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1119 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_130_130, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_44));
#line 1119 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_130_130, 1) = ((MR_Box) ((MR_String) "X"));
#line 1119 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_130_130, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_132_132));
#line 1119 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_130_130, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_40));
#line 1119 "add_mutable_aux_preds.m"
                }
#line 1119 "add_mutable_aux_preds.m"
                {
#line 1119 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1119 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_129_129, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_130_130));
#line 1119 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_129_129, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1119 "add_mutable_aux_preds.m"
                }
#line 1121 "add_mutable_aux_preds.m"
                {
#line 1121 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_134_134 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_256_256);
                }
#line 1122 "add_mutable_aux_preds.m"
                {
#line 1122 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_135_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1122 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_135_135, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__StdSetCode_70));
#line 1122 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_135_135, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_127_127));
#line 1122 "add_mutable_aux_preds.m"
                }
#line 1116 "add_mutable_aux_preds.m"
                {
#line 1116 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1116 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_72, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ErlangSetAttrs_68));
#line 1116 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_72, 1) = ((MR_Box) (*hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21));
#line 1116 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_72, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1116 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_72, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_129_129));
#line 1116 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_72, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_45));
#line 1116 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_72, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_134_134));
#line 1116 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_72, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_135_135));
#line 1116 "add_mutable_aux_preds.m"
                }
#line 1124 "add_mutable_aux_preds.m"
                {
#line 1124 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_71, hlds__make_hlds__add_mutable_aux_preds__Status_22, hlds__make_hlds__add_mutable_aux_preds__Context_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_85, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_138_138, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_89, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_139_139);
                }
#line 1126 "add_mutable_aux_preds.m"
                {
#line 1126 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_72, hlds__make_hlds__add_mutable_aux_preds__Status_22, hlds__make_hlds__add_mutable_aux_preds__Context_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_138_138, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_170_170, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_139_139, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_172_172);
                }
#line 1130 "add_mutable_aux_preds.m"
                {
#line 1130 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_144_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1130 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_144_144, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_44));
#line 1130 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_144_144, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1130 "add_mutable_aux_preds.m"
                }
#line 1130 "add_mutable_aux_preds.m"
                {
#line 1130 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1130 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_143_143, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_144_144));
#line 1130 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_143_143, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1130 "add_mutable_aux_preds.m"
                }
#line 1129 "add_mutable_aux_preds.m"
                {
#line 1129 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1129 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1129 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__StdGetPredName_55));
#line 1129 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_143_143));
#line 1129 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59, 3) = ((MR_Box) ((MR_Integer) 1));
#line 1129 "add_mutable_aux_preds.m"
                }
#line 1131 "add_mutable_aux_preds.m"
                {
#line 1131 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1131 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1131 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60, 1) = ((MR_Box) (*hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21));
#line 1131 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_143_143));
#line 1131 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1131 "add_mutable_aux_preds.m"
                }
#line 1074 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_171_171 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_87;
#line 1074 "add_mutable_aux_preds.m"
              }
#line 1073 "add_mutable_aux_preds.m"
              break;
#line 1073 "add_mutable_aux_preds.m"
          }
#line 1136 "add_mutable_aux_preds.m"
#line 1136 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__AttachToIO_37) {
#line 1136 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1136 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 1137 "add_mutable_aux_preds.m"
              {
#line 1137 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__IO0_74;
#line 1137 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__IO_75;
#line 1137 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__VarSetXandIOs_76;
#line 1137 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__IOPredArgs_79;
#line 1137 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_80;
#line 1137 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__IOGetPredExpr_81;
#line 1137 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__IOSetPredExpr_82;
#line 1137 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__PureIOGetPredExpr_83;
#line 1137 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__PureIOSetPredExpr_84;
#line 1137 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_VarSet_175_175;
#line 1137 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_178_178;
#line 1137 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_179_179;
#line 1137 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_180_180;
#line 1137 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_181_181;
#line 1137 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_182_182;
#line 1137 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_192_192;
#line 1137 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_193_193;
#line 1137 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_194_194;

#line 1140 "add_mutable_aux_preds.m"
                {
#line 1140 "add_mutable_aux_preds.m"
                  mercury__varset__new_named_var_4_p_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_253_253, (MR_String) "IO0", &hlds__make_hlds__add_mutable_aux_preds__IO0_74, hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_45, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_VarSet_175_175);
                }
#line 1141 "add_mutable_aux_preds.m"
                {
#line 1141 "add_mutable_aux_preds.m"
                  mercury__varset__new_named_var_4_p_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_253_253, (MR_String) "IO", &hlds__make_hlds__add_mutable_aux_preds__IO_75, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_VarSet_175_175, &hlds__make_hlds__add_mutable_aux_preds__VarSetXandIOs_76);
                }
#line 1146 "add_mutable_aux_preds.m"
                {
#line 1146 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_178_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1146 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_178_178, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_44));
#line 1146 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_178_178, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1146 "add_mutable_aux_preds.m"
                }
#line 1147 "add_mutable_aux_preds.m"
                {
#line 1147 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_180_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1147 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_180_180, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__IO0_74));
#line 1147 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_180_180, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1147 "add_mutable_aux_preds.m"
                }
#line 1147 "add_mutable_aux_preds.m"
                {
#line 1147 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_182_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1147 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_182_182, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__IO_75));
#line 1147 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_182_182, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1147 "add_mutable_aux_preds.m"
                }
#line 1147 "add_mutable_aux_preds.m"
                {
#line 1147 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_181_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1147 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_181_181, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_182_182));
#line 1147 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_181_181, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1147 "add_mutable_aux_preds.m"
                }
#line 1147 "add_mutable_aux_preds.m"
                {
#line 1147 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_179_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1147 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_179_179, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_180_180));
#line 1147 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_179_179, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_181_181));
#line 1147 "add_mutable_aux_preds.m"
                }
#line 1146 "add_mutable_aux_preds.m"
                {
#line 1146 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__IOPredArgs_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1146 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__IOPredArgs_79, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_178_178));
#line 1146 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__IOPredArgs_79, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_179_179));
#line 1146 "add_mutable_aux_preds.m"
                }
#line 1155 "add_mutable_aux_preds.m"
                {
#line 1155 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1155 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_80, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1155 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_80, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_180_180));
#line 1155 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_80, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_182_182));
#line 1155 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_80, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1155 "add_mutable_aux_preds.m"
                }
#line 1158 "add_mutable_aux_preds.m"
                {
#line 1158 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__IOGetPredExpr_81 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1158 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__IOGetPredExpr_81, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1158 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__IOGetPredExpr_81, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59));
#line 1158 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__IOGetPredExpr_81, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_80));
#line 1158 "add_mutable_aux_preds.m"
                }
#line 1159 "add_mutable_aux_preds.m"
                {
#line 1159 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__IOSetPredExpr_82 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1159 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__IOSetPredExpr_82, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1159 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__IOSetPredExpr_82, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60));
#line 1159 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__IOSetPredExpr_82, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_80));
#line 1159 "add_mutable_aux_preds.m"
                }
#line 1161 "add_mutable_aux_preds.m"
                {
#line 1161 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__PureIOGetPredExpr_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1161 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOGetPredExpr_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 1161 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOGetPredExpr_83, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1161 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOGetPredExpr_83, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1161 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOGetPredExpr_83, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__IOGetPredExpr_81));
#line 1161 "add_mutable_aux_preds.m"
                }
#line 1163 "add_mutable_aux_preds.m"
                {
#line 1163 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__PureIOSetPredExpr_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1163 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOSetPredExpr_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 1163 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOSetPredExpr_84, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1163 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOSetPredExpr_84, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1163 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOSetPredExpr_84, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__IOSetPredExpr_82));
#line 1163 "add_mutable_aux_preds.m"
                }
#line 1165 "add_mutable_aux_preds.m"
                {
#line 1165 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__add_mutable_aux_preds__VarSetXandIOs_76, (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__StdGetPredName_55, hlds__make_hlds__add_mutable_aux_preds__IOPredArgs_79, hlds__make_hlds__add_mutable_aux_preds__PureIOGetPredExpr_83, hlds__make_hlds__add_mutable_aux_preds__Status_22, hlds__make_hlds__add_mutable_aux_preds__Context_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_170_170, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_192_192, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_171_171, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_193_193, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_172_172, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_194_194);
                }
#line 1168 "add_mutable_aux_preds.m"
                {
#line 1168 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__add_mutable_aux_preds__VarSetXandIOs_76, (MR_Integer) 0, *hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21, hlds__make_hlds__add_mutable_aux_preds__IOPredArgs_79, hlds__make_hlds__add_mutable_aux_preds__PureIOSetPredExpr_84, hlds__make_hlds__add_mutable_aux_preds__Status_22, hlds__make_hlds__add_mutable_aux_preds__Context_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_192_192, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_86, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_193_193, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_88, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_194_194, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_90);
#line 1168 "add_mutable_aux_preds.m"
                  return;
                }
#line 1137 "add_mutable_aux_preds.m"
              }
#line 1136 "add_mutable_aux_preds.m"
              break;
#line 1136 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 1135 "add_mutable_aux_preds.m"
              {
#line 1135 "add_mutable_aux_preds.m"
                *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_86 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_170_170;
#line 1135 "add_mutable_aux_preds.m"
                *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_88 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_171_171;
#line 1135 "add_mutable_aux_preds.m"
                *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_90 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_172_172;
#line 1135 "add_mutable_aux_preds.m"
              }
#line 1136 "add_mutable_aux_preds.m"
              break;
#line 1136 "add_mutable_aux_preds.m"
          }
#line 1034 "add_mutable_aux_preds.m"
        }
#line 1033 "add_mutable_aux_preds.m"
        break;
#line 1033 "add_mutable_aux_preds.m"
    }
#line 962 "add_mutable_aux_preds.m"
  }
#line 953 "add_mutable_aux_preds.m"
}

#line 833 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_unsafe_get_set_preds_12_p_0_1(
#line 833 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 833 "add_mutable_aux_preds.m"
{
#line 833 "add_mutable_aux_preds.m"
  {
#line 833 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 833 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 833 "add_mutable_aux_preds.m"
    {
#line 833 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_unsafe_get_set_preds__833__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 833 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 833 "add_mutable_aux_preds.m"
  }
#line 833 "add_mutable_aux_preds.m"
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
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_18,
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
#line 825 "add_mutable_aux_preds.m"
  {
#line 825 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 825 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_154_154;
#line 825 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_155_155;
#line 825 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_22;
#line 825 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_23;
#line 825 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_24;
#line 825 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_26;
#line 825 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27;
#line 825 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_29;
#line 825 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_31;
#line 825 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32;
#line 825 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ImplLang_33;
#line 825 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_34;
#line 825 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_35;
#line 825 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__X_39;
#line 825 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_40;
#line 825 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeGetAttrs_42;
#line 825 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeSetAttrs_43;
#line 825 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TrailedMutable_44;
#line 825 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__TrailCode_45;
#line 825 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_46;
#line 825 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__UnsafeSetCode_47;
#line 825 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeGetPredName_50;
#line 825 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeSetPredName_51;
#line 825 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_52;
#line 825 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_53;
#line 825 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr0_54;
#line 825 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr0_55;
#line 825 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_62_62;
#line 825 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_68_68;
#line 825 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_121_121;
#line 825 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_122_122;
#line 825 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_124_124;
#line 825 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_126_126;
#line 825 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_127_127;
#line 825 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_128_128;
#line 825 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_130_130;
#line 825 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_131_131;
#line 825 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_133_133;
#line 825 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_135_135;
#line 825 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_136_136;
#line 825 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__V_137_137;
#line 825 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_140_140;
#line 825 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_141_141;
#line 825 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_145_145;
#line 825 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_146_146;
#line 827 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___InitTerm_25;
#line 827 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___VarSetMutable_28;
#line 827 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_30;
#line 831 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___PreInit_36;
#line 831 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___LockUnlock_37;
#line 831 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_38;

#line 826 "add_mutable_aux_preds.m"
    {
#line 826 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_56, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_22);
    }
#line 827 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutableName_23 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 0)));
#line 827 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Type_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 1)));
#line 827 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___InitTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 2)));
#line 827 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Inst_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 3)));
#line 827 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 4)));
#line 827 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___VarSetMutable_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 5)));
#line 827 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Context_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 6)));
#line 827 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___SeqNum_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 7)));
#line 829 "add_mutable_aux_preds.m"
    {
#line 829 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsConstant_31 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27);
    }
#line 830 "add_mutable_aux_preds.m"
    {
#line 830 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27);
    }
#line 831 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__ImplLang_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 831 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Lang_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 831 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 831 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___PreInit_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 831 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___LockUnlock_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 831 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 833 "add_mutable_aux_preds.m"
    {
#line 833 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 833 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_62_62, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[12]));
#line 833 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_62_62, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__define_unsafe_get_set_preds_12_p_0_1));
#line 833 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_62_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 833 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_62_62, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__IsConstant_31));
#line 833 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_62_62, 4) = ((MR_Box) ((MR_Integer) 0));
#line 833 "add_mutable_aux_preds.m"
    }
#line 833 "add_mutable_aux_preds.m"
    {
#line 833 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_62_62, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_unsafe_get_set_preds\'/12", (MR_String) "need_unsafe_get_set_preds, but IsConstant = mutable_constant");
    }
#line 6083 "hlds.make_hlds.add_mutable_aux_preds.c"
    hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_154_154 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 835 "add_mutable_aux_preds.m"
    {
#line 835 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_68_68 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_154_154);
    }
#line 835 "add_mutable_aux_preds.m"
    {
#line 835 "add_mutable_aux_preds.m"
      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_154_154, (MR_String) "X", &hlds__make_hlds__add_mutable_aux_preds__X_39, hlds__make_hlds__add_mutable_aux_preds__V_68_68, &hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_40);
    }
#line 837 "add_mutable_aux_preds.m"
    {
#line 837 "add_mutable_aux_preds.m"
      parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__Attrs_16, &hlds__make_hlds__add_mutable_aux_preds__UnsafeSetAttrs_43);
    }
#line 838 "add_mutable_aux_preds.m"
    {
#line 838 "add_mutable_aux_preds.m"
      parse_tree__prog_data__set_purity_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__UnsafeSetAttrs_43, &hlds__make_hlds__add_mutable_aux_preds__UnsafeGetAttrs_42);
    }
#line 841 "add_mutable_aux_preds.m"
    {
#line 841 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__TrailedMutable_44 = parse_tree__prog_item__mutable_var_trailed_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27);
    }
#line 867 "add_mutable_aux_preds.m"
#line 867 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__ImplLang_33) {
#line 867 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 867 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 843 "add_mutable_aux_preds.m"
        {
#line 847 "add_mutable_aux_preds.m"
#line 847 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__TrailedMutable_44) {
#line 847 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 847 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 848 "add_mutable_aux_preds.m"
              {
#line 848 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_102_102;

#line 852 "add_mutable_aux_preds.m"
                {
#line 852 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_102_102 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ");\n");
                }
#line 851 "add_mutable_aux_preds.m"
                {
#line 851 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__TrailCode_45 = mercury__string__f_43_43_2_f_0((MR_String) "MR_trail_current_value(&", hlds__make_hlds__add_mutable_aux_preds__V_102_102);
                }
#line 848 "add_mutable_aux_preds.m"
              }
#line 847 "add_mutable_aux_preds.m"
              break;
#line 847 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 846 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__TrailCode_45 = (MR_String) "";
#line 847 "add_mutable_aux_preds.m"
              break;
#line 847 "add_mutable_aux_preds.m"
          }
#line 858 "add_mutable_aux_preds.m"
#line 858 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32) {
#line 858 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 858 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 855 "add_mutable_aux_preds.m"
              {
#line 855 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_117_117;

#line 856 "add_mutable_aux_preds.m"
                {
#line 856 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_117_117 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ";\n");
                }
#line 856 "add_mutable_aux_preds.m"
                {
#line 856 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_46 = mercury__string__f_43_43_2_f_0((MR_String) "X = ", hlds__make_hlds__add_mutable_aux_preds__V_117_117);
                }
#line 857 "add_mutable_aux_preds.m"
                {
#line 857 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeSetCode_47 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) " = X;\n");
                }
#line 855 "add_mutable_aux_preds.m"
              }
#line 858 "add_mutable_aux_preds.m"
              break;
#line 858 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 859 "add_mutable_aux_preds.m"
              {
#line 859 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__TypeName_48;
#line 859 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_105_105;
#line 859 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_106_106;
#line 859 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_108_108;
#line 859 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_111_111;
#line 859 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_112_112;
#line 859 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_114_114;

#line 860 "add_mutable_aux_preds.m"
                {
#line 860 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__TypeName_48 = hlds__make_hlds__add_mutable_aux_preds__global_foreign_type_name_4_f_0(hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_35, hlds__make_hlds__add_mutable_aux_preds__Lang_34, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_56, hlds__make_hlds__add_mutable_aux_preds__Type_24);
                }
#line 863 "add_mutable_aux_preds.m"
                {
#line 863 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_108_108 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ");\n");
                }
#line 863 "add_mutable_aux_preds.m"
                {
#line 863 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_106_106 = mercury__string__f_43_43_2_f_0((MR_String) ", X, ", hlds__make_hlds__add_mutable_aux_preds__V_108_108);
                }
#line 863 "add_mutable_aux_preds.m"
                {
#line 863 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_105_105 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeName_48, hlds__make_hlds__add_mutable_aux_preds__V_106_106);
                }
#line 862 "add_mutable_aux_preds.m"
                {
#line 862 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_46 = mercury__string__f_43_43_2_f_0((MR_String) "MR_get_thread_local_mutable(", hlds__make_hlds__add_mutable_aux_preds__V_105_105);
                }
#line 865 "add_mutable_aux_preds.m"
                {
#line 865 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_114_114 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ");\n");
                }
#line 865 "add_mutable_aux_preds.m"
                {
#line 865 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_112_112 = mercury__string__f_43_43_2_f_0((MR_String) ", X, ", hlds__make_hlds__add_mutable_aux_preds__V_114_114);
                }
#line 865 "add_mutable_aux_preds.m"
                {
#line 865 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_111_111 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeName_48, hlds__make_hlds__add_mutable_aux_preds__V_112_112);
                }
#line 864 "add_mutable_aux_preds.m"
                {
#line 864 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeSetCode_47 = mercury__string__f_43_43_2_f_0((MR_String) "MR_set_thread_local_mutable(", hlds__make_hlds__add_mutable_aux_preds__V_111_111);
                }
#line 859 "add_mutable_aux_preds.m"
              }
#line 858 "add_mutable_aux_preds.m"
              break;
#line 858 "add_mutable_aux_preds.m"
          }
#line 843 "add_mutable_aux_preds.m"
        }
#line 867 "add_mutable_aux_preds.m"
        break;
#line 867 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 868 "add_mutable_aux_preds.m"
        {
#line 871 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__TrailCode_45 = (MR_String) "";
#line 876 "add_mutable_aux_preds.m"
#line 876 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32) {
#line 876 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 876 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 873 "add_mutable_aux_preds.m"
              {
#line 873 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_96_96;
#line 873 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_99_99;

#line 874 "add_mutable_aux_preds.m"
                {
#line 874 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_96_96 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ";\n");
                }
#line 874 "add_mutable_aux_preds.m"
                {
#line 874 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_46 = mercury__string__f_43_43_2_f_0((MR_String) "\tX = ", hlds__make_hlds__add_mutable_aux_preds__V_96_96);
                }
#line 875 "add_mutable_aux_preds.m"
                {
#line 875 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_99_99 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) " = X;\n");
                }
#line 875 "add_mutable_aux_preds.m"
                {
#line 875 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeSetCode_47 = mercury__string__f_43_43_2_f_0((MR_String) "\t", hlds__make_hlds__add_mutable_aux_preds__V_99_99);
                }
#line 873 "add_mutable_aux_preds.m"
              }
#line 876 "add_mutable_aux_preds.m"
              break;
#line 876 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 877 "add_mutable_aux_preds.m"
              {
#line 877 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__Cast_49;
#line 877 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_87_87;
#line 877 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_88_88;
#line 877 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_90_90;
#line 877 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_93_93;
#line 878 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_156_156;

#line 878 "add_mutable_aux_preds.m"
                {
#line 878 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_156_156 = parse_tree__builtin_lib_types__int_type_0_f_0();
                }
#line 878 "add_mutable_aux_preds.m"
                {
#line 878 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__make_hlds__add_mutable_aux_preds__Type_24, hlds__make_hlds__add_mutable_aux_preds__V_156_156);
                }
#line 880 "add_mutable_aux_preds.m"
                if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 879 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__Cast_49 = (MR_String) "(int) ";
#line 880 "add_mutable_aux_preds.m"
                else
#line 881 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__Cast_49 = (MR_String) "";
#line 885 "add_mutable_aux_preds.m"
                {
#line 885 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_90_90 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ");\n");
                }
#line 884 "add_mutable_aux_preds.m"
                {
#line 884 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_88_88 = mercury__string__f_43_43_2_f_0((MR_String) "runtime.ThreadLocalMutables.get(", hlds__make_hlds__add_mutable_aux_preds__V_90_90);
                }
#line 883 "add_mutable_aux_preds.m"
                {
#line 883 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_87_87 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__Cast_49, hlds__make_hlds__add_mutable_aux_preds__V_88_88);
                }
#line 883 "add_mutable_aux_preds.m"
                {
#line 883 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_46 = mercury__string__f_43_43_2_f_0((MR_String) "\tX = ", hlds__make_hlds__add_mutable_aux_preds__V_87_87);
                }
#line 887 "add_mutable_aux_preds.m"
                {
#line 887 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_93_93 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ", X);\n");
                }
#line 886 "add_mutable_aux_preds.m"
                {
#line 886 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeSetCode_47 = mercury__string__f_43_43_2_f_0((MR_String) "\truntime.ThreadLocalMutables.set(", hlds__make_hlds__add_mutable_aux_preds__V_93_93);
                }
#line 877 "add_mutable_aux_preds.m"
              }
#line 876 "add_mutable_aux_preds.m"
              break;
#line 876 "add_mutable_aux_preds.m"
          }
#line 868 "add_mutable_aux_preds.m"
        }
#line 867 "add_mutable_aux_preds.m"
        break;
#line 867 "add_mutable_aux_preds.m"
      case (MR_Integer) 3:
#line 904 "add_mutable_aux_preds.m"
        {
#line 905 "add_mutable_aux_preds.m"
          {
#line 905 "add_mutable_aux_preds.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_unsafe_get_set_preds\'/12", (MR_String) "unsafe_get_set for erlang");
#line 905 "add_mutable_aux_preds.m"
            return;
          }
#line 904 "add_mutable_aux_preds.m"
        }
#line 867 "add_mutable_aux_preds.m"
        break;
#line 867 "add_mutable_aux_preds.m"
      case (MR_Integer) 2:
#line 890 "add_mutable_aux_preds.m"
        {
#line 893 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__TrailCode_45 = (MR_String) "";
#line 898 "add_mutable_aux_preds.m"
#line 898 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32) {
#line 898 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 898 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 895 "add_mutable_aux_preds.m"
              {
#line 895 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_81_81;
#line 895 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_84_84;

#line 896 "add_mutable_aux_preds.m"
                {
#line 896 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_81_81 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ";\n");
                }
#line 896 "add_mutable_aux_preds.m"
                {
#line 896 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_46 = mercury__string__f_43_43_2_f_0((MR_String) "\tX = ", hlds__make_hlds__add_mutable_aux_preds__V_81_81);
                }
#line 897 "add_mutable_aux_preds.m"
                {
#line 897 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_84_84 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) " = X;\n");
                }
#line 897 "add_mutable_aux_preds.m"
                {
#line 897 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeSetCode_47 = mercury__string__f_43_43_2_f_0((MR_String) "\t", hlds__make_hlds__add_mutable_aux_preds__V_84_84);
                }
#line 895 "add_mutable_aux_preds.m"
              }
#line 898 "add_mutable_aux_preds.m"
              break;
#line 898 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 899 "add_mutable_aux_preds.m"
              {
#line 899 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_75_75;
#line 899 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_78_78;

#line 900 "add_mutable_aux_preds.m"
                {
#line 900 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_75_75 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ".get();\n");
                }
#line 900 "add_mutable_aux_preds.m"
                {
#line 900 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_46 = mercury__string__f_43_43_2_f_0((MR_String) "\tX = ", hlds__make_hlds__add_mutable_aux_preds__V_75_75);
                }
#line 901 "add_mutable_aux_preds.m"
                {
#line 901 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_78_78 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ".set(X);\n");
                }
#line 901 "add_mutable_aux_preds.m"
                {
#line 901 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeSetCode_47 = mercury__string__f_43_43_2_f_0((MR_String) "\t", hlds__make_hlds__add_mutable_aux_preds__V_78_78);
                }
#line 899 "add_mutable_aux_preds.m"
              }
#line 898 "add_mutable_aux_preds.m"
              break;
#line 898 "add_mutable_aux_preds.m"
          }
#line 890 "add_mutable_aux_preds.m"
        }
#line 867 "add_mutable_aux_preds.m"
        break;
#line 867 "add_mutable_aux_preds.m"
    }
#line 908 "add_mutable_aux_preds.m"
    {
#line 908 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__UnsafeGetPredName_50 = parse_tree__prog_mutable__mutable_unsafe_get_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_22, hlds__make_hlds__add_mutable_aux_preds__MutableName_23);
    }
#line 910 "add_mutable_aux_preds.m"
    {
#line 910 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__UnsafeSetPredName_51 = parse_tree__prog_mutable__mutable_unsafe_set_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_22, hlds__make_hlds__add_mutable_aux_preds__MutableName_23);
    }
#line 915 "add_mutable_aux_preds.m"
    {
#line 915 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_124_124 = parse_tree__prog_mode__out_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_26);
    }
#line 915 "add_mutable_aux_preds.m"
    {
#line 915 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 915 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_122_122, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_39));
#line 915 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_122_122, 1) = ((MR_Box) ((MR_String) "X"));
#line 915 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_122_122, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_124_124));
#line 915 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_122_122, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_35));
#line 915 "add_mutable_aux_preds.m"
    }
#line 915 "add_mutable_aux_preds.m"
    {
#line 915 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 915 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_121_121, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_122_122));
#line 915 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_121_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 915 "add_mutable_aux_preds.m"
    }
#line 6516 "hlds.make_hlds.add_mutable_aux_preds.c"
    hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_155_155 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
#line 917 "add_mutable_aux_preds.m"
    {
#line 917 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_126_126 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_155_155);
    }
#line 918 "add_mutable_aux_preds.m"
    {
#line 918 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 918 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_128_128, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_29));
#line 918 "add_mutable_aux_preds.m"
    }
#line 918 "add_mutable_aux_preds.m"
    {
#line 918 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_127_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 918 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_127_127, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_46));
#line 918 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_127_127, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_128_128));
#line 918 "add_mutable_aux_preds.m"
    }
#line 912 "add_mutable_aux_preds.m"
    {
#line 912 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 912 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_52, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeGetAttrs_42));
#line 912 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_52, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeGetPredName_50));
#line 912 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_52, 2) = ((MR_Box) ((MR_Integer) 0));
#line 912 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_52, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_121_121));
#line 912 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_52, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_40));
#line 912 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_52, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_126_126));
#line 912 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_52, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_127_127));
#line 912 "add_mutable_aux_preds.m"
    }
#line 923 "add_mutable_aux_preds.m"
    {
#line 923 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_133_133 = parse_tree__prog_mode__in_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_26);
    }
#line 923 "add_mutable_aux_preds.m"
    {
#line 923 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_131_131 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 923 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_131_131, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_39));
#line 923 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_131_131, 1) = ((MR_Box) ((MR_String) "X"));
#line 923 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_131_131, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_133_133));
#line 923 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_131_131, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_35));
#line 923 "add_mutable_aux_preds.m"
    }
#line 923 "add_mutable_aux_preds.m"
    {
#line 923 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 923 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_130_130, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_131_131));
#line 923 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_130_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 923 "add_mutable_aux_preds.m"
    }
#line 925 "add_mutable_aux_preds.m"
    {
#line 925 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_135_135 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_155_155);
    }
#line 926 "add_mutable_aux_preds.m"
    {
#line 926 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_137_137 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TrailCode_45, hlds__make_hlds__add_mutable_aux_preds__UnsafeSetCode_47);
    }
#line 926 "add_mutable_aux_preds.m"
    {
#line 926 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_136_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 926 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_136_136, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_137_137));
#line 926 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_136_136, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_128_128));
#line 926 "add_mutable_aux_preds.m"
    }
#line 920 "add_mutable_aux_preds.m"
    {
#line 920 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 920 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_53, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeSetAttrs_43));
#line 920 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_53, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeSetPredName_51));
#line 920 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_53, 2) = ((MR_Box) ((MR_Integer) 0));
#line 920 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_53, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_130_130));
#line 920 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_53, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_40));
#line 920 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_53, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_135_135));
#line 920 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_53, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_136_136));
#line 920 "add_mutable_aux_preds.m"
    }
#line 928 "add_mutable_aux_preds.m"
    {
#line 928 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_52, hlds__make_hlds__add_mutable_aux_preds__Status_18, hlds__make_hlds__add_mutable_aux_preds__Context_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_56, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_140_140, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_60, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_141_141);
    }
#line 930 "add_mutable_aux_preds.m"
    {
#line 930 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_53, hlds__make_hlds__add_mutable_aux_preds__Status_18, hlds__make_hlds__add_mutable_aux_preds__Context_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_140_140, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_57, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_141_141, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_61);
    }
#line 934 "add_mutable_aux_preds.m"
    {
#line 934 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 934 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_146_146, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_39));
#line 934 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_146_146, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_29));
#line 934 "add_mutable_aux_preds.m"
    }
#line 934 "add_mutable_aux_preds.m"
    {
#line 934 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_145_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 934 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_145_145, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_146_146));
#line 934 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_145_145, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 934 "add_mutable_aux_preds.m"
    }
#line 933 "add_mutable_aux_preds.m"
    {
#line 933 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr0_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 933 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr0_54, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_29));
#line 933 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr0_54, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeGetPredName_50));
#line 933 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr0_54, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_145_145));
#line 933 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr0_54, 3) = ((MR_Box) ((MR_Integer) 1));
#line 933 "add_mutable_aux_preds.m"
    }
#line 935 "add_mutable_aux_preds.m"
    {
#line 935 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr0_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 935 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr0_55, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_29));
#line 935 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr0_55, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeSetPredName_51));
#line 935 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr0_55, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_145_145));
#line 935 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr0_55, 3) = ((MR_Box) ((MR_Integer) 2));
#line 935 "add_mutable_aux_preds.m"
    }
#line 937 "add_mutable_aux_preds.m"
    {
#line 937 "add_mutable_aux_preds.m"
      MR_Tuple base;
#line 937 "add_mutable_aux_preds.m"
      base = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 937 "add_mutable_aux_preds.m"
      *hlds__make_hlds__add_mutable_aux_preds__UnsafeGetSetExprs_17 = base;
#line 937 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr0_54));
#line 937 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr0_55));
#line 937 "add_mutable_aux_preds.m"
    }
#line 825 "add_mutable_aux_preds.m"
    *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_59 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_58;
#line 825 "add_mutable_aux_preds.m"
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
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_18,
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
    hlds__make_hlds__add_mutable_aux_preds___Lang_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 745 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 745 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___PreInit_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 745 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___LockUnlock_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 745 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
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
#line 7083 "hlds.make_hlds.add_mutable_aux_preds.c"
          hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_119_119 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 784 "add_mutable_aux_preds.m"
          {
#line 784 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_98_98 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_119_119);
          }
#line 7090 "hlds.make_hlds.add_mutable_aux_preds.c"
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
            hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_45, hlds__make_hlds__add_mutable_aux_preds__Status_18, hlds__make_hlds__add_mutable_aux_preds__Context_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_49, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_109_109, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_53, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_110_110);
          }
#line 798 "add_mutable_aux_preds.m"
          {
#line 798 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_46, hlds__make_hlds__add_mutable_aux_preds__Status_18, hlds__make_hlds__add_mutable_aux_preds__Context_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_109_109, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_50, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_110_110, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_54);
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
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_18,
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
    hlds__make_hlds__add_mutable_aux_preds___Lang_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 683 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 683 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___PreInit_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 683 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___LockUnlock_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 683 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
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
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[23])));
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
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41, hlds__make_hlds__add_mutable_aux_preds__Status_18, hlds__make_hlds__add_mutable_aux_preds__Context_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_42, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_43, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_46, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_47);
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

#line 588 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_aux_preds_10_p_0(
#line 588 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11,
#line 588 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_12,
#line 588 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_13,
#line 588 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_14,
#line 588 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34,
#line 588 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_35,
#line 588 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_36,
#line 588 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_37,
#line 588 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38,
#line 588 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39)
#line 588 "add_mutable_aux_preds.m"
{
#line 594 "add_mutable_aux_preds.m"
  {
#line 594 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 594 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ImplLang_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 594 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 594 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 594 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInit_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 594 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__LockUnlock_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 594 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 594 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs0_24;
#line 594 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_26;
#line 594 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_27;
#line 594 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_29;
#line 594 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_31;
#line 594 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_33;
#line 594 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_43_43;
#line 594 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_44_44;
#line 594 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_45_45;
#line 594 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46;
#line 594 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_47_47;
#line 594 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_48_48;
#line 594 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_49_49;
#line 594 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_50_50;
#line 594 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51;
#line 594 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_52_52;
#line 594 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_53_53;
#line 594 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_54_54;

#line 600 "add_mutable_aux_preds.m"
    {
#line 600 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__Attrs0_24 = parse_tree__prog_data__default_attributes_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Lang_19);
    }
#line 605 "add_mutable_aux_preds.m"
#line 605 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__ImplLang_18) {
#line 605 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 605 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 602 "add_mutable_aux_preds.m"
        {
#line 602 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs1_25;

#line 603 "add_mutable_aux_preds.m"
          {
#line 603 "add_mutable_aux_preds.m"
            parse_tree__prog_data__set_box_policy_3_p_0(hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_20, hlds__make_hlds__add_mutable_aux_preds__Attrs0_24, &hlds__make_hlds__add_mutable_aux_preds__Attrs1_25);
          }
#line 604 "add_mutable_aux_preds.m"
          {
#line 604 "add_mutable_aux_preds.m"
            parse_tree__prog_data__set_may_call_mercury_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__Attrs1_25, &hlds__make_hlds__add_mutable_aux_preds__Attrs_26);
          }
#line 602 "add_mutable_aux_preds.m"
        }
#line 605 "add_mutable_aux_preds.m"
        break;
#line 605 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 605 "add_mutable_aux_preds.m"
      case (MR_Integer) 2:
#line 608 "add_mutable_aux_preds.m"
        {
#line 613 "add_mutable_aux_preds.m"
          {
#line 613 "add_mutable_aux_preds.m"
            parse_tree__prog_data__set_may_duplicate_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[1]), hlds__make_hlds__add_mutable_aux_preds__Attrs0_24, &hlds__make_hlds__add_mutable_aux_preds__Attrs_26);
          }
#line 608 "add_mutable_aux_preds.m"
        }
#line 605 "add_mutable_aux_preds.m"
        break;
#line 605 "add_mutable_aux_preds.m"
      case (MR_Integer) 3:
#line 616 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__Attrs_26 = hlds__make_hlds__add_mutable_aux_preds__Attrs0_24;
#line 605 "add_mutable_aux_preds.m"
        break;
#line 605 "add_mutable_aux_preds.m"
    }
#line 629 "add_mutable_aux_preds.m"
#line 629 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__PreInit_21) {
#line 629 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 629 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 627 "add_mutable_aux_preds.m"
        {
#line 628 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 627 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_43_43 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34;
#line 627 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_44_44 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_36;
#line 627 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_45_45 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38;
#line 627 "add_mutable_aux_preds.m"
        }
#line 629 "add_mutable_aux_preds.m"
        break;
#line 629 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 630 "add_mutable_aux_preds.m"
        {
#line 630 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_28;

#line 631 "add_mutable_aux_preds.m"
          {
#line 631 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__define_pre_init_pred_12_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11, hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_13, hlds__make_hlds__add_mutable_aux_preds__Attrs_26, &hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_28, hlds__make_hlds__add_mutable_aux_preds__Status_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_43_43, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_36, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_44_44, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_45_45);
          }
#line 633 "add_mutable_aux_preds.m"
          {
#line 633 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 633 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_27, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_28));
#line 633 "add_mutable_aux_preds.m"
          }
#line 630 "add_mutable_aux_preds.m"
        }
#line 629 "add_mutable_aux_preds.m"
        break;
#line 629 "add_mutable_aux_preds.m"
    }
#line 638 "add_mutable_aux_preds.m"
#line 638 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__LockUnlock_22) {
#line 638 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 638 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 636 "add_mutable_aux_preds.m"
        {
#line 637 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 636 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_43_43;
#line 636 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_47_47 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_44_44;
#line 636 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_48_48 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_45_45;
#line 636 "add_mutable_aux_preds.m"
        }
#line 638 "add_mutable_aux_preds.m"
        break;
#line 638 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 639 "add_mutable_aux_preds.m"
        {
#line 639 "add_mutable_aux_preds.m"
          MR_Tuple hlds__make_hlds__add_mutable_aux_preds__LockUnlockExprs_30;

#line 640 "add_mutable_aux_preds.m"
          {
#line 640 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__define_lock_unlock_preds_12_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11, hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_13, hlds__make_hlds__add_mutable_aux_preds__Attrs_26, &hlds__make_hlds__add_mutable_aux_preds__LockUnlockExprs_30, hlds__make_hlds__add_mutable_aux_preds__Status_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_43_43, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_44_44, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_47_47, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_45_45, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_48_48);
          }
#line 642 "add_mutable_aux_preds.m"
          {
#line 642 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 642 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_29, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockUnlockExprs_30));
#line 642 "add_mutable_aux_preds.m"
          }
#line 639 "add_mutable_aux_preds.m"
        }
#line 638 "add_mutable_aux_preds.m"
        break;
#line 638 "add_mutable_aux_preds.m"
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
            hlds__make_hlds__add_mutable_aux_preds__define_unsafe_get_set_preds_12_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11, hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_13, hlds__make_hlds__add_mutable_aux_preds__Attrs_26, &hlds__make_hlds__add_mutable_aux_preds__UnsafeGetSetExprs_32, hlds__make_hlds__add_mutable_aux_preds__Status_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_49_49, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_47_47, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_50_50, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_48_48, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51);
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
      hlds__make_hlds__add_mutable_aux_preds__define_main_get_set_preds_14_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11, hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_13, hlds__make_hlds__add_mutable_aux_preds__Attrs_26, hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_29, hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_31, &hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_33, hlds__make_hlds__add_mutable_aux_preds__Status_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_49_49, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_52_52, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_50_50, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_53_53, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_54_54);
    }
#line 665 "add_mutable_aux_preds.m"
    {
#line 665 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__define_init_pred_11_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11, hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_27, hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_33, hlds__make_hlds__add_mutable_aux_preds__Lang_19, hlds__make_hlds__add_mutable_aux_preds__Status_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_52_52, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_35, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_53_53, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_37, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_54_54, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39);
#line 665 "add_mutable_aux_preds.m"
      return;
    }
#line 594 "add_mutable_aux_preds.m"
  }
#line 588 "add_mutable_aux_preds.m"
}

#line 552 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_global_var_java_6_p_0(
#line 552 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_7,
#line 552 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_8,
#line 552 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_9,
#line 552 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_10,
#line 552 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_15,
#line 552 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_16)
#line 552 "add_mutable_aux_preds.m"
{
#line 557 "add_mutable_aux_preds.m"
  {
#line 557 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 557 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__DefnBody_13;
#line 557 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_14;
#line 557 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_36_36;

#line 569 "add_mutable_aux_preds.m"
#line 569 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_9) {
#line 569 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 569 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 559 "add_mutable_aux_preds.m"
        {
#line 559 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__TypeStr_12;
#line 559 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__V_30_30;
#line 559 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__V_31_31;
#line 559 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__V_33_33;
#line 563 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_39_39;

#line 563 "add_mutable_aux_preds.m"
          {
#line 563 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_39_39 = parse_tree__builtin_lib_types__int_type_0_f_0();
          }
#line 563 "add_mutable_aux_preds.m"
          {
#line 563 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__make_hlds__add_mutable_aux_preds__Type_8, hlds__make_hlds__add_mutable_aux_preds__V_39_39);
          }
#line 565 "add_mutable_aux_preds.m"
          if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 564 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__TypeStr_12 = (MR_String) "int";
#line 565 "add_mutable_aux_preds.m"
          else
#line 566 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__TypeStr_12 = (MR_String) "java.lang.Object";
#line 568 "add_mutable_aux_preds.m"
          {
#line 568 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_33_33 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_7, (MR_String) ";\n");
          }
#line 568 "add_mutable_aux_preds.m"
          {
#line 568 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_31_31 = mercury__string__f_43_43_2_f_0((MR_String) " ", hlds__make_hlds__add_mutable_aux_preds__V_33_33);
          }
#line 568 "add_mutable_aux_preds.m"
          {
#line 568 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_30_30 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeStr_12, hlds__make_hlds__add_mutable_aux_preds__V_31_31);
          }
#line 568 "add_mutable_aux_preds.m"
          {
#line 568 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__DefnBody_13 = mercury__string__f_43_43_2_f_0((MR_String) "static ", hlds__make_hlds__add_mutable_aux_preds__V_30_30);
          }
#line 559 "add_mutable_aux_preds.m"
        }
#line 569 "add_mutable_aux_preds.m"
        break;
#line 569 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 570 "add_mutable_aux_preds.m"
        {
#line 570 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_17_17;
#line 570 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_19_19;
#line 570 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_20_20;
#line 570 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_22_22;
#line 570 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_23_23;
#line 570 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_25_25;
#line 570 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__TypeStr_38;
#line 571 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_40_40;

#line 571 "add_mutable_aux_preds.m"
          {
#line 571 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_40_40 = parse_tree__builtin_lib_types__int_type_0_f_0();
          }
#line 571 "add_mutable_aux_preds.m"
          {
#line 571 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__make_hlds__add_mutable_aux_preds__Type_8, hlds__make_hlds__add_mutable_aux_preds__V_40_40);
          }
#line 573 "add_mutable_aux_preds.m"
          if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 572 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__TypeStr_38 = (MR_String) "java.lang.Integer";
#line 573 "add_mutable_aux_preds.m"
          else
#line 574 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__TypeStr_38 = (MR_String) "java.lang.Object";
#line 579 "add_mutable_aux_preds.m"
          {
#line 579 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 579 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_25_25, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TypeStr_38));
#line 579 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[31])));
#line 579 "add_mutable_aux_preds.m"
          }
#line 579 "add_mutable_aux_preds.m"
          {
#line 579 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 579 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_23_23, 0) = ((MR_Box) ((MR_String) " = new java.lang.InheritableThreadLocal<"));
#line 579 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_23_23, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_25_25));
#line 579 "add_mutable_aux_preds.m"
          }
#line 578 "add_mutable_aux_preds.m"
          {
#line 578 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 578 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_22_22, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_7));
#line 578 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_22_22, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_23_23));
#line 578 "add_mutable_aux_preds.m"
          }
#line 577 "add_mutable_aux_preds.m"
          {
#line 577 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 577 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_20_20, 0) = ((MR_Box) ((MR_String) "> "));
#line 577 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_20_20, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_22_22));
#line 577 "add_mutable_aux_preds.m"
          }
#line 577 "add_mutable_aux_preds.m"
          {
#line 577 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 577 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_19_19, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TypeStr_38));
#line 577 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_19_19, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_20_20));
#line 577 "add_mutable_aux_preds.m"
          }
#line 577 "add_mutable_aux_preds.m"
          {
#line 577 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 577 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_17_17, 0) = ((MR_Box) ((MR_String) "static java.lang.ThreadLocal<"));
#line 577 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_17_17, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_19_19));
#line 577 "add_mutable_aux_preds.m"
          }
#line 576 "add_mutable_aux_preds.m"
          {
#line 576 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__DefnBody_13 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_17_17);
          }
#line 570 "add_mutable_aux_preds.m"
        }
#line 569 "add_mutable_aux_preds.m"
        break;
#line 569 "add_mutable_aux_preds.m"
    }
#line 583 "add_mutable_aux_preds.m"
    {
#line 583 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 583 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_36_36, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__DefnBody_13));
#line 583 "add_mutable_aux_preds.m"
    }
#line 583 "add_mutable_aux_preds.m"
    {
#line 583 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 583 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_14, 0) = ((MR_Box) ((MR_Integer) 2));
#line 583 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_14, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_36_36));
#line 583 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_14, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_10));
#line 583 "add_mutable_aux_preds.m"
    }
#line 584 "add_mutable_aux_preds.m"
    {
#line 584 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_add_foreign_body_code_3_p_0(hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_15, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_16);
#line 584 "add_mutable_aux_preds.m"
      return;
    }
#line 557 "add_mutable_aux_preds.m"
  }
#line 552 "add_mutable_aux_preds.m"
}

#line 451 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_global_var_c_7_p_0(
#line 451 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_8,
#line 451 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_9,
#line 451 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_10,
#line 451 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_11,
#line 451 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_12,
#line 451 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_26,
#line 451 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_27)
#line 451 "add_mutable_aux_preds.m"
{
#line 456 "add_mutable_aux_preds.m"
  {
#line 456 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 456 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__HighLevelTypeName_14;
#line 456 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__LowLevelTypeName_15;
#line 456 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__TypeName_18;
#line 456 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__LockDeclStrs_19;
#line 456 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__LockDefnStrs_20;
#line 456 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__DeclBody_22;
#line 456 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignDeclCode_23;
#line 456 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__DefnBody_24;
#line 456 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignBodyCode_25;
#line 456 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_51_51;
#line 456 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_53_53;
#line 456 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_55_55;
#line 456 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_56_56;
#line 456 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_58_58;
#line 456 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_59_59;
#line 456 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_61_61;
#line 456 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_63_63;
#line 456 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_65_65;
#line 456 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_66_66;
#line 456 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_68_68;
#line 456 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_69_69;
#line 456 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_71_71;
#line 456 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_75_75;
#line 456 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_76_76;
#line 456 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_77_77;
#line 456 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_78_78;
#line 456 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_80_80;
#line 456 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_81_81;
#line 456 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_84_84;

#line 479 "add_mutable_aux_preds.m"
#line 479 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_11) {
#line 479 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 479 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 462 "add_mutable_aux_preds.m"
        {
#line 462 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__Globals_16;
#line 462 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__HighLevelCode_17;

#line 1324 "add_mutable_aux_preds.m"
          {
#line 1324 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__HighLevelTypeName_14 = backend_libs__foreign__mercury_exported_type_to_string_3_f_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_26, (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__Type_9);
          }
#line 1322 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LowLevelTypeName_15 = (MR_String) "MR_Word";
#line 470 "add_mutable_aux_preds.m"
          {
#line 470 "add_mutable_aux_preds.m"
            hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_26, &hlds__make_hlds__add_mutable_aux_preds__Globals_16);
          }
#line 471 "add_mutable_aux_preds.m"
          {
#line 471 "add_mutable_aux_preds.m"
            libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_16, (MR_Integer) 255, &hlds__make_hlds__add_mutable_aux_preds__HighLevelCode_17);
          }
#line 475 "add_mutable_aux_preds.m"
#line 475 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__HighLevelCode_17) {
#line 475 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 475 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 474 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__TypeName_18 = hlds__make_hlds__add_mutable_aux_preds__LowLevelTypeName_15;
#line 475 "add_mutable_aux_preds.m"
              break;
#line 475 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 477 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__TypeName_18 = hlds__make_hlds__add_mutable_aux_preds__HighLevelTypeName_14;
#line 475 "add_mutable_aux_preds.m"
              break;
#line 475 "add_mutable_aux_preds.m"
          }
#line 462 "add_mutable_aux_preds.m"
        }
#line 479 "add_mutable_aux_preds.m"
        break;
#line 479 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 480 "add_mutable_aux_preds.m"
        {
#line 483 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__TypeName_18 = (MR_String) "MR_Unsigned";
#line 484 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__HighLevelTypeName_14 = hlds__make_hlds__add_mutable_aux_preds__TypeName_18;
#line 485 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LowLevelTypeName_15 = hlds__make_hlds__add_mutable_aux_preds__TypeName_18;
#line 480 "add_mutable_aux_preds.m"
        }
#line 479 "add_mutable_aux_preds.m"
        break;
#line 479 "add_mutable_aux_preds.m"
    }
#line 491 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__IsConstant_10 == (MR_Integer) 1);
#line 492 "add_mutable_aux_preds.m"
    if (!(hlds__make_hlds__add_mutable_aux_preds__succeeded))
#line 492 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_11 == (MR_Integer) 1);
#line 497 "add_mutable_aux_preds.m"
    if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 495 "add_mutable_aux_preds.m"
      {
#line 495 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__LockDeclStrs_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 496 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__LockDefnStrs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 495 "add_mutable_aux_preds.m"
      }
#line 497 "add_mutable_aux_preds.m"
    else
#line 498 "add_mutable_aux_preds.m"
      {
#line 498 "add_mutable_aux_preds.m"
        MR_String hlds__make_hlds__add_mutable_aux_preds__MutexVarName_21;
#line 498 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_34_34;
#line 498 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_36_36;
#line 498 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_43_43;

#line 498 "add_mutable_aux_preds.m"
        {
#line 498 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__MutexVarName_21 = parse_tree__prog_mutable__mutable_mutex_var_name_1_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_8);
        }
#line 501 "add_mutable_aux_preds.m"
        {
#line 501 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 501 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_36_36, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__MutexVarName_21));
#line 501 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[22])));
#line 501 "add_mutable_aux_preds.m"
        }
#line 501 "add_mutable_aux_preds.m"
        {
#line 501 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 501 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_34_34, 0) = ((MR_Box) ((MR_String) "    extern MercuryLock "));
#line 501 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_34_34, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_36_36));
#line 501 "add_mutable_aux_preds.m"
        }
#line 500 "add_mutable_aux_preds.m"
        {
#line 500 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LockDeclStrs_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 500 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__LockDeclStrs_19, 0) = ((MR_Box) ((MR_String) "#ifdef MR_THREAD_SAFE\n"));
#line 500 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__LockDeclStrs_19, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_34_34));
#line 500 "add_mutable_aux_preds.m"
        }
#line 506 "add_mutable_aux_preds.m"
        {
#line 506 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 506 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_43_43, 0) = ((MR_Box) ((MR_String) "    MercuryLock "));
#line 506 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_43_43, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_36_36));
#line 506 "add_mutable_aux_preds.m"
        }
#line 505 "add_mutable_aux_preds.m"
        {
#line 505 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LockDefnStrs_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 505 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__LockDefnStrs_20, 0) = ((MR_Box) ((MR_String) "#ifdef MR_THREAD_SAFE\n"));
#line 505 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__LockDefnStrs_20, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_43_43));
#line 505 "add_mutable_aux_preds.m"
        }
#line 498 "add_mutable_aux_preds.m"
      }
#line 516 "add_mutable_aux_preds.m"
    {
#line 516 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 516 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_71_71, 0) = ((MR_Box) ((MR_String) "#endif\n"));
#line 516 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_71_71, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockDeclStrs_19));
#line 516 "add_mutable_aux_preds.m"
    }
#line 515 "add_mutable_aux_preds.m"
    {
#line 515 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 515 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_69_69, 0) = ((MR_Box) ((MR_String) ";\n"));
#line 515 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_69_69, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_71_71));
#line 515 "add_mutable_aux_preds.m"
    }
#line 515 "add_mutable_aux_preds.m"
    {
#line 515 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 515 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_68_68, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_8));
#line 515 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_68_68, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_69_69));
#line 515 "add_mutable_aux_preds.m"
    }
#line 515 "add_mutable_aux_preds.m"
    {
#line 515 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 515 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_66_66, 0) = ((MR_Box) ((MR_String) " "));
#line 515 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_66_66, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_68_68));
#line 515 "add_mutable_aux_preds.m"
    }
#line 515 "add_mutable_aux_preds.m"
    {
#line 515 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 515 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_65_65, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LowLevelTypeName_15));
#line 515 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_65_65, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_66_66));
#line 515 "add_mutable_aux_preds.m"
    }
#line 515 "add_mutable_aux_preds.m"
    {
#line 515 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 515 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_63_63, 0) = ((MR_Box) ((MR_String) "    extern "));
#line 515 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_63_63, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_65_65));
#line 515 "add_mutable_aux_preds.m"
    }
#line 514 "add_mutable_aux_preds.m"
    {
#line 514 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 514 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_61_61, 0) = ((MR_Box) ((MR_String) "#else\n"));
#line 514 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_61_61, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_63_63));
#line 514 "add_mutable_aux_preds.m"
    }
#line 513 "add_mutable_aux_preds.m"
    {
#line 513 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 513 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_59_59, 0) = ((MR_Box) ((MR_String) ";\n"));
#line 513 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_59_59, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_61_61));
#line 513 "add_mutable_aux_preds.m"
    }
#line 513 "add_mutable_aux_preds.m"
    {
#line 513 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 513 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_58_58, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_8));
#line 513 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_58_58, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_59_59));
#line 513 "add_mutable_aux_preds.m"
    }
#line 513 "add_mutable_aux_preds.m"
    {
#line 513 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 513 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_56_56, 0) = ((MR_Box) ((MR_String) " "));
#line 513 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_56_56, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_58_58));
#line 513 "add_mutable_aux_preds.m"
    }
#line 513 "add_mutable_aux_preds.m"
    {
#line 513 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 513 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__HighLevelTypeName_14));
#line 513 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_56_56));
#line 513 "add_mutable_aux_preds.m"
    }
#line 513 "add_mutable_aux_preds.m"
    {
#line 513 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 513 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_53_53, 0) = ((MR_Box) ((MR_String) "    extern "));
#line 513 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_53_53, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_55_55));
#line 513 "add_mutable_aux_preds.m"
    }
#line 512 "add_mutable_aux_preds.m"
    {
#line 512 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 512 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_51_51, 0) = ((MR_Box) ((MR_String) "#ifdef MR_HIGHLEVEL_CODE\n"));
#line 512 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_51_51, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_53_53));
#line 512 "add_mutable_aux_preds.m"
    }
#line 511 "add_mutable_aux_preds.m"
    {
#line 511 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__DeclBody_22 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_51_51);
    }
#line 518 "add_mutable_aux_preds.m"
    {
#line 518 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 518 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_75_75, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__DeclBody_22));
#line 518 "add_mutable_aux_preds.m"
    }
#line 517 "add_mutable_aux_preds.m"
    {
#line 517 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__ForeignDeclCode_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 517 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignDeclCode_23, 0) = ((MR_Box) ((MR_Integer) 0));
#line 517 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignDeclCode_23, 1) = ((MR_Box) ((MR_Integer) 1));
#line 517 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignDeclCode_23, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_75_75));
#line 517 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignDeclCode_23, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_12));
#line 517 "add_mutable_aux_preds.m"
    }
#line 519 "add_mutable_aux_preds.m"
    {
#line 519 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_add_foreign_decl_code_3_p_0(hlds__make_hlds__add_mutable_aux_preds__ForeignDeclCode_23, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_26, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_76_76);
    }
#line 522 "add_mutable_aux_preds.m"
    {
#line 522 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 522 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_81_81, 0) = ((MR_Box) ((MR_String) ";\n"));
#line 522 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_81_81, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockDefnStrs_20));
#line 522 "add_mutable_aux_preds.m"
    }
#line 522 "add_mutable_aux_preds.m"
    {
#line 522 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 522 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_80_80, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_8));
#line 522 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_80_80, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_81_81));
#line 522 "add_mutable_aux_preds.m"
    }
#line 522 "add_mutable_aux_preds.m"
    {
#line 522 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 522 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_78_78, 0) = ((MR_Box) ((MR_String) " "));
#line 522 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_78_78, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_80_80));
#line 522 "add_mutable_aux_preds.m"
    }
#line 522 "add_mutable_aux_preds.m"
    {
#line 522 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 522 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_77_77, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TypeName_18));
#line 522 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_77_77, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_78_78));
#line 522 "add_mutable_aux_preds.m"
    }
#line 521 "add_mutable_aux_preds.m"
    {
#line 521 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__DefnBody_24 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_77_77);
    }
#line 523 "add_mutable_aux_preds.m"
    {
#line 523 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 523 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_84_84, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__DefnBody_24));
#line 523 "add_mutable_aux_preds.m"
    }
#line 523 "add_mutable_aux_preds.m"
    {
#line 523 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__ForeignBodyCode_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 523 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignBodyCode_25, 0) = ((MR_Box) ((MR_Integer) 0));
#line 523 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignBodyCode_25, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_84_84));
#line 523 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignBodyCode_25, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_12));
#line 523 "add_mutable_aux_preds.m"
    }
#line 524 "add_mutable_aux_preds.m"
    {
#line 524 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_add_foreign_body_code_3_p_0(hlds__make_hlds__add_mutable_aux_preds__ForeignBodyCode_25, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_76_76, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_27);
#line 524 "add_mutable_aux_preds.m"
      return;
    }
#line 456 "add_mutable_aux_preds.m"
  }
#line 451 "add_mutable_aux_preds.m"
}

#line 306 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_8(
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
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_7(
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

#line 303 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_6(
#line 303 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 303 "add_mutable_aux_preds.m"
{
#line 303 "add_mutable_aux_preds.m"
  {
#line 303 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 303 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 303 "add_mutable_aux_preds.m"
    {
#line 303 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__303__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 303 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 303 "add_mutable_aux_preds.m"
  }
#line 303 "add_mutable_aux_preds.m"
}

#line 302 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_5(
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

#line 300 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_4(
#line 300 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 300 "add_mutable_aux_preds.m"
{
#line 300 "add_mutable_aux_preds.m"
  {
#line 300 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 300 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 300 "add_mutable_aux_preds.m"
    {
#line 300 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__300__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 300 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 300 "add_mutable_aux_preds.m"
  }
#line 300 "add_mutable_aux_preds.m"
}

#line 299 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_3(
#line 299 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 299 "add_mutable_aux_preds.m"
{
#line 299 "add_mutable_aux_preds.m"
  {
#line 299 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 299 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 299 "add_mutable_aux_preds.m"
    {
#line 299 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__299__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 299 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 299 "add_mutable_aux_preds.m"
  }
#line 299 "add_mutable_aux_preds.m"
}

#line 297 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_2(
#line 297 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 297 "add_mutable_aux_preds.m"
{
#line 297 "add_mutable_aux_preds.m"
  {
#line 297 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 297 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 297 "add_mutable_aux_preds.m"
    {
#line 297 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__297__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 297 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 297 "add_mutable_aux_preds.m"
  }
#line 297 "add_mutable_aux_preds.m"
}

#line 295 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_1(
#line 295 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 295 "add_mutable_aux_preds.m"
{
#line 295 "add_mutable_aux_preds.m"
  {
#line 295 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 295 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 295 "add_mutable_aux_preds.m"
    {
#line 295 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__295__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 295 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 295 "add_mutable_aux_preds.m"
  }
#line 295 "add_mutable_aux_preds.m"
}

#line 284 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0(
#line 284 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_10,
#line 284 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_11,
#line 284 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_12,
#line 284 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Kind_13,
#line 284 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_14,
#line 284 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34,
#line 284 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_35,
#line 284 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_36,
#line 284 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_37)
#line 284 "add_mutable_aux_preds.m"
{
#line 290 "add_mutable_aux_preds.m"
  {
#line 290 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 290 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredOrigin_17;
#line 290 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_18;
#line 290 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredOrFunc_19;
#line 290 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TypesAndModes_20;
#line 290 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__WithType_21;
#line 290 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__WithInst_22;
#line 290 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeDetism_23;
#line 290 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_25;
#line 290 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InstVarSet_26;
#line 290 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ExistQVars_27;
#line 290 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Purity_28;
#line 290 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Constraints_29;
#line 290 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_30;
#line 290 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Markers_32;
#line 290 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_38_38;
#line 290 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_42_42;
#line 290 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_43_43;
#line 290 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_47_47;
#line 290 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_48_48;
#line 290 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_53_53;
#line 290 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_58_58;
#line 290 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_63_63;
#line 290 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_68_68;
#line 290 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_74_74;
#line 292 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Origin_24;
#line 292 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_31;
#line 309 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_33_33;

#line 291 "add_mutable_aux_preds.m"
    {
#line 291 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredOrigin_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 291 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PredOrigin_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 291 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PredOrigin_17, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ModuleName_11));
#line 291 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PredOrigin_17, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Name_12));
#line 291 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PredOrigin_17, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Kind_13));
#line 291 "add_mutable_aux_preds.m"
    }
#line 292 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__PredName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_10, (MR_Integer) 0)));
#line 292 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__PredOrFunc_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_10, (MR_Integer) 1)));
#line 292 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__TypesAndModes_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_10, (MR_Integer) 2)));
#line 292 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__WithType_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_10, (MR_Integer) 3)));
#line 292 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__WithInst_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_10, (MR_Integer) 4)));
#line 292 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MaybeDetism_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_10, (MR_Integer) 5)));
#line 292 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Origin_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_10, (MR_Integer) 6)));
#line 292 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_10, (MR_Integer) 7)));
#line 292 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__InstVarSet_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_10, (MR_Integer) 8)));
#line 292 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__ExistQVars_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_10, (MR_Integer) 9)));
#line 292 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Purity_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_10, (MR_Integer) 10)));
#line 292 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Constraints_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_10, (MR_Integer) 11)));
#line 292 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Context_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_10, (MR_Integer) 12)));
#line 292 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___SeqNum_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_10, (MR_Integer) 13)));
#line 295 "add_mutable_aux_preds.m"
    {
#line 295 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_42_42 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
    }
#line 295 "add_mutable_aux_preds.m"
    {
#line 295 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 295 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_38_38, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[4]));
#line 295 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_38_38, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_1));
#line 295 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 295 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_38_38, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_25));
#line 295 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_38_38, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_42_42));
#line 295 "add_mutable_aux_preds.m"
    }
#line 295 "add_mutable_aux_preds.m"
    {
#line 295 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_38_38, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/9", (MR_String) "TypeVarSet != varset.init");
    }
#line 297 "add_mutable_aux_preds.m"
    {
#line 297 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_47_47 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
#line 297 "add_mutable_aux_preds.m"
    {
#line 297 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 297 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_43_43, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[5]));
#line 297 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_43_43, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_2));
#line 297 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 297 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_43_43, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InstVarSet_26));
#line 297 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_43_43, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_47_47));
#line 297 "add_mutable_aux_preds.m"
    }
#line 297 "add_mutable_aux_preds.m"
    {
#line 297 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_43_43, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/9", (MR_String) "InstVarSet != varset.init");
    }
#line 299 "add_mutable_aux_preds.m"
    {
#line 299 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 299 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_48_48, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[6]));
#line 299 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_48_48, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_3));
#line 299 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 299 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_48_48, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ExistQVars_27));
#line 299 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_48_48, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 299 "add_mutable_aux_preds.m"
    }
#line 299 "add_mutable_aux_preds.m"
    {
#line 299 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_48_48, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/9", (MR_String) "ExistQVars != []");
    }
#line 300 "add_mutable_aux_preds.m"
    {
#line 300 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 300 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_53_53, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[7]));
#line 300 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_53_53, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_4));
#line 300 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 300 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_53_53, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PredOrFunc_19));
#line 300 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_53_53, 4) = ((MR_Box) ((MR_Integer) 0));
#line 300 "add_mutable_aux_preds.m"
    }
#line 300 "add_mutable_aux_preds.m"
    {
#line 300 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_53_53, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/9", (MR_String) "PredOrFunc != pf_predicate");
    }
#line 302 "add_mutable_aux_preds.m"
    {
#line 302 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 302 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_58_58, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[8]));
#line 302 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_58_58, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_5));
#line 302 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 302 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_58_58, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__WithType_21));
#line 302 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_58_58, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 302 "add_mutable_aux_preds.m"
    }
#line 302 "add_mutable_aux_preds.m"
    {
#line 302 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_58_58, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/9", (MR_String) "WithType != no");
    }
#line 303 "add_mutable_aux_preds.m"
    {
#line 303 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 303 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_63_63, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[9]));
#line 303 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_63_63, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_6));
#line 303 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 303 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_63_63, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__WithInst_22));
#line 303 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_63_63, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 303 "add_mutable_aux_preds.m"
    }
#line 303 "add_mutable_aux_preds.m"
    {
#line 303 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_63_63, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/9", (MR_String) "WithInst != no");
    }
#line 304 "add_mutable_aux_preds.m"
    {
#line 304 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 304 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_68_68, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[10]));
#line 304 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_68_68, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_7));
#line 304 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_68_68, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 304 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_68_68, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__MaybeDetism_23));
#line 304 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_68_68, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[0])));
#line 304 "add_mutable_aux_preds.m"
    }
#line 304 "add_mutable_aux_preds.m"
    {
#line 304 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_68_68, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/9", (MR_String) "MaybeDet != yes(detism_det)");
    }
#line 306 "add_mutable_aux_preds.m"
    {
#line 306 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 306 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_74_74, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[11]));
#line 306 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_74_74, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_8));
#line 306 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_74_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 306 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_74_74, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Constraints_29));
#line 306 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_74_74, 4) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[29]));
#line 306 "add_mutable_aux_preds.m"
    }
#line 306 "add_mutable_aux_preds.m"
    {
#line 306 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_74_74, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/9", (MR_String) "Constraints != constraints([], [])");
    }
#line 308 "add_mutable_aux_preds.m"
    {
#line 308 "add_mutable_aux_preds.m"
      hlds__hlds_pred__marker_list_to_markers_2_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[30]), &hlds__make_hlds__add_mutable_aux_preds__Markers_32);
    }
#line 309 "add_mutable_aux_preds.m"
    {
#line 309 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_pred__module_add_pred_or_func_18_p_0(hlds__make_hlds__add_mutable_aux_preds__PredOrigin_17, hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_25, hlds__make_hlds__add_mutable_aux_preds__InstVarSet_26, hlds__make_hlds__add_mutable_aux_preds__ExistQVars_27, hlds__make_hlds__add_mutable_aux_preds__PredOrFunc_19, hlds__make_hlds__add_mutable_aux_preds__PredName_18, hlds__make_hlds__add_mutable_aux_preds__TypesAndModes_20, hlds__make_hlds__add_mutable_aux_preds__MaybeDetism_23, hlds__make_hlds__add_mutable_aux_preds__Purity_28, hlds__make_hlds__add_mutable_aux_preds__Constraints_29, hlds__make_hlds__add_mutable_aux_preds__Markers_32, hlds__make_hlds__add_mutable_aux_preds__Context_30, hlds__make_hlds__add_mutable_aux_preds__Status_14, &hlds__make_hlds__add_mutable_aux_preds__V_33_33, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_35, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_36, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_37);
    }
#line 290 "add_mutable_aux_preds.m"
  }
#line 284 "add_mutable_aux_preds.m"
}

#line 265 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_12_p_0(
#line 265 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_13,
#line 265 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_14,
#line 265 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Kind_15,
#line 265 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_16,
#line 265 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_17,
#line 265 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Purity_18,
#line 265 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_19,
#line 265 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_20,
#line 265 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_30,
#line 265 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_31,
#line 265 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_32,
#line 265 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_33)
#line 265 "add_mutable_aux_preds.m"
{
#line 271 "add_mutable_aux_preds.m"
  {
#line 271 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 271 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredOrigin_23;
#line 271 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_24;
#line 271 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InstVarSet_25;
#line 271 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Markers_28;
#line 278 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_29_29;

#line 272 "add_mutable_aux_preds.m"
    {
#line 272 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredOrigin_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 272 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PredOrigin_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 272 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PredOrigin_23, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ModuleName_13));
#line 272 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PredOrigin_23, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Name_14));
#line 272 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PredOrigin_23, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Kind_15));
#line 272 "add_mutable_aux_preds.m"
    }
#line 273 "add_mutable_aux_preds.m"
    {
#line 273 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_24 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
    }
#line 274 "add_mutable_aux_preds.m"
    {
#line 274 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__InstVarSet_25 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
#line 277 "add_mutable_aux_preds.m"
    {
#line 277 "add_mutable_aux_preds.m"
      hlds__hlds_pred__marker_list_to_markers_2_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[30]), &hlds__make_hlds__add_mutable_aux_preds__Markers_28);
    }
#line 278 "add_mutable_aux_preds.m"
    {
#line 278 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_pred__module_add_pred_or_func_18_p_0(hlds__make_hlds__add_mutable_aux_preds__PredOrigin_23, hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_24, hlds__make_hlds__add_mutable_aux_preds__InstVarSet_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__PredName_16, hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_17, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[0]), hlds__make_hlds__add_mutable_aux_preds__Purity_18, (MR_Word) &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[29], hlds__make_hlds__add_mutable_aux_preds__Markers_28, hlds__make_hlds__add_mutable_aux_preds__Context_20, hlds__make_hlds__add_mutable_aux_preds__Status_19, &hlds__make_hlds__add_mutable_aux_preds__V_29_29, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_30, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_31, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_32, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_33);
    }
#line 271 "add_mutable_aux_preds.m"
  }
#line 265 "add_mutable_aux_preds.m"
}

#line 251 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_pre_init_pred_decl_8_p_0(
#line 251 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_9,
#line 251 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_10,
#line 251 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_11,
#line 251 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_12,
#line 251 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_17,
#line 251 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_18,
#line 251 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_19,
#line 251 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_20)
#line 251 "add_mutable_aux_preds.m"
{
#line 256 "add_mutable_aux_preds.m"
  {
#line 256 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 256 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_15;

#line 257 "add_mutable_aux_preds.m"
    {
#line 257 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredName_15 = parse_tree__prog_mutable__mutable_pre_init_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_9, hlds__make_hlds__add_mutable_aux_preds__Name_10);
    }
#line 259 "add_mutable_aux_preds.m"
    {
#line 259 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_12_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_9, hlds__make_hlds__add_mutable_aux_preds__Name_10, (MR_Integer) 10, hlds__make_hlds__add_mutable_aux_preds__PredName_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 2, hlds__make_hlds__add_mutable_aux_preds__Status_11, hlds__make_hlds__add_mutable_aux_preds__Context_12, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_17, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_18, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_19, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_20);
#line 259 "add_mutable_aux_preds.m"
      return;
    }
#line 256 "add_mutable_aux_preds.m"
  }
#line 251 "add_mutable_aux_preds.m"
}

#line 234 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_init_pred_decl_8_p_0(
#line 234 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_9,
#line 234 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_10,
#line 234 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_11,
#line 234 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_12,
#line 234 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_17,
#line 234 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_18,
#line 234 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_19,
#line 234 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_20)
#line 234 "add_mutable_aux_preds.m"
{
#line 239 "add_mutable_aux_preds.m"
  {
#line 239 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 239 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_15;

#line 240 "add_mutable_aux_preds.m"
    {
#line 240 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredName_15 = parse_tree__prog_mutable__mutable_init_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_9, hlds__make_hlds__add_mutable_aux_preds__Name_10);
    }
#line 242 "add_mutable_aux_preds.m"
    {
#line 242 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_12_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_9, hlds__make_hlds__add_mutable_aux_preds__Name_10, (MR_Integer) 10, hlds__make_hlds__add_mutable_aux_preds__PredName_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 2, hlds__make_hlds__add_mutable_aux_preds__Status_11, hlds__make_hlds__add_mutable_aux_preds__Context_12, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_17, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_18, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_19, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_20);
#line 242 "add_mutable_aux_preds.m"
      return;
    }
#line 239 "add_mutable_aux_preds.m"
  }
#line 234 "add_mutable_aux_preds.m"
}

#line 196 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_unlock_pred_decl_8_p_0(
#line 196 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_9,
#line 196 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_10,
#line 196 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_11,
#line 196 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_12,
#line 196 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_17,
#line 196 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_18,
#line 196 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_19,
#line 196 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_20)
#line 196 "add_mutable_aux_preds.m"
{
#line 225 "add_mutable_aux_preds.m"
  {
#line 225 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 225 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_15;

#line 226 "add_mutable_aux_preds.m"
    {
#line 226 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredName_15 = parse_tree__prog_mutable__mutable_unlock_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_9, hlds__make_hlds__add_mutable_aux_preds__Name_10);
    }
#line 228 "add_mutable_aux_preds.m"
    {
#line 228 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_12_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_9, hlds__make_hlds__add_mutable_aux_preds__Name_10, (MR_Integer) 9, hlds__make_hlds__add_mutable_aux_preds__PredName_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 2, hlds__make_hlds__add_mutable_aux_preds__Status_11, hlds__make_hlds__add_mutable_aux_preds__Context_12, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_17, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_18, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_19, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_20);
#line 228 "add_mutable_aux_preds.m"
      return;
    }
#line 225 "add_mutable_aux_preds.m"
  }
#line 196 "add_mutable_aux_preds.m"
}

#line 193 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_lock_pred_decl_8_p_0(
#line 193 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_9,
#line 193 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_10,
#line 193 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_11,
#line 193 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_12,
#line 193 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_17,
#line 193 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_18,
#line 193 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_19,
#line 193 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_20)
#line 193 "add_mutable_aux_preds.m"
{
#line 217 "add_mutable_aux_preds.m"
  {
#line 217 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 217 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_15;

#line 218 "add_mutable_aux_preds.m"
    {
#line 218 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredName_15 = parse_tree__prog_mutable__mutable_lock_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_9, hlds__make_hlds__add_mutable_aux_preds__Name_10);
    }
#line 220 "add_mutable_aux_preds.m"
    {
#line 220 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_12_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_9, hlds__make_hlds__add_mutable_aux_preds__Name_10, (MR_Integer) 8, hlds__make_hlds__add_mutable_aux_preds__PredName_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 2, hlds__make_hlds__add_mutable_aux_preds__Status_11, hlds__make_hlds__add_mutable_aux_preds__Context_12, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_17, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_18, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_19, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_20);
#line 220 "add_mutable_aux_preds.m"
      return;
    }
#line 217 "add_mutable_aux_preds.m"
  }
#line 193 "add_mutable_aux_preds.m"
}

#line 189 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_unsafe_set_pred_decl_10_p_0(
#line 189 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_11,
#line 189 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_12,
#line 189 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_13,
#line 189 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_14,
#line 189 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_15,
#line 189 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_16,
#line 189 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_21,
#line 189 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_22,
#line 189 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_23,
#line 189 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_24)
#line 189 "add_mutable_aux_preds.m"
{
#line 209 "add_mutable_aux_preds.m"
  {
#line 209 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 209 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_19;
#line 209 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_20;
#line 209 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_25_25;
#line 209 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_26_26;

#line 210 "add_mutable_aux_preds.m"
    {
#line 210 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredName_19 = parse_tree__prog_mutable__mutable_unsafe_set_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_11, hlds__make_hlds__add_mutable_aux_preds__Name_12);
    }
#line 211 "add_mutable_aux_preds.m"
    {
#line 211 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_26_26 = parse_tree__prog_mode__in_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_14);
    }
#line 211 "add_mutable_aux_preds.m"
    {
#line 211 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 211 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_25_25, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Type_13));
#line 211 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_25_25, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_26_26));
#line 211 "add_mutable_aux_preds.m"
    }
#line 211 "add_mutable_aux_preds.m"
    {
#line 211 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 211 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_20, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_25_25));
#line 211 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 211 "add_mutable_aux_preds.m"
    }
#line 212 "add_mutable_aux_preds.m"
    {
#line 212 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_12_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_11, hlds__make_hlds__add_mutable_aux_preds__Name_12, (MR_Integer) 5, hlds__make_hlds__add_mutable_aux_preds__PredName_19, hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_20, (MR_Integer) 2, hlds__make_hlds__add_mutable_aux_preds__Status_15, hlds__make_hlds__add_mutable_aux_preds__Context_16, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_21, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_22, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_23, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_24);
#line 212 "add_mutable_aux_preds.m"
      return;
    }
#line 209 "add_mutable_aux_preds.m"
  }
#line 189 "add_mutable_aux_preds.m"
}

#line 185 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_unsafe_get_pred_decl_10_p_0(
#line 185 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_11,
#line 185 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_12,
#line 185 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_13,
#line 185 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_14,
#line 185 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_15,
#line 185 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_16,
#line 185 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_21,
#line 185 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_22,
#line 185 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_23,
#line 185 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_24)
#line 185 "add_mutable_aux_preds.m"
{
#line 201 "add_mutable_aux_preds.m"
  {
#line 201 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 201 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_19;
#line 201 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_20;
#line 201 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_25_25;
#line 201 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_26_26;

#line 202 "add_mutable_aux_preds.m"
    {
#line 202 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredName_19 = parse_tree__prog_mutable__mutable_unsafe_get_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_11, hlds__make_hlds__add_mutable_aux_preds__Name_12);
    }
#line 203 "add_mutable_aux_preds.m"
    {
#line 203 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_26_26 = parse_tree__prog_mode__out_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_14);
    }
#line 203 "add_mutable_aux_preds.m"
    {
#line 203 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 203 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_25_25, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Type_13));
#line 203 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_25_25, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_26_26));
#line 203 "add_mutable_aux_preds.m"
    }
#line 203 "add_mutable_aux_preds.m"
    {
#line 203 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 203 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_20, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_25_25));
#line 203 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 203 "add_mutable_aux_preds.m"
    }
#line 204 "add_mutable_aux_preds.m"
    {
#line 204 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_12_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_11, hlds__make_hlds__add_mutable_aux_preds__Name_12, (MR_Integer) 4, hlds__make_hlds__add_mutable_aux_preds__PredName_19, hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_20, (MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__Status_15, hlds__make_hlds__add_mutable_aux_preds__Context_16, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_21, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_22, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_23, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_24);
#line 204 "add_mutable_aux_preds.m"
      return;
    }
#line 201 "add_mutable_aux_preds.m"
  }
#line 185 "add_mutable_aux_preds.m"
}

#line 34 "add_mutable_aux_preds.m"
void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_defns_8_p_0(
#line 34 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9,
#line 34 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_10,
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
#line 397 "add_mutable_aux_preds.m"
  {
#line 397 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 397 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_14 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 0)));
#line 397 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 1)));
#line 397 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 4)));
#line 397 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 6)));
#line 397 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_22;
#line 398 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___InitTerm_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 2)));
#line 398 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Inst_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 3)));
#line 398 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___VarSet_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 5)));
#line 398 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 7)));

#line 400 "add_mutable_aux_preds.m"
    {
#line 400 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__get_mutable_target_params_3_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34, hlds__make_hlds__add_mutable_aux_preds__MutAttrs_18, &hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_22);
    }
#line 403 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 402 "add_mutable_aux_preds.m"
      {
#line 402 "add_mutable_aux_preds.m"
        *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_35 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34;
#line 402 "add_mutable_aux_preds.m"
        *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_37 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_36;
#line 402 "add_mutable_aux_preds.m"
        *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38;
#line 402 "add_mutable_aux_preds.m"
      }
#line 403 "add_mutable_aux_preds.m"
    else
#line 404 "add_mutable_aux_preds.m"
      {
#line 404 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_22, (MR_Integer) 0)));
#line 404 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__ImplLang_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_23, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 404 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_23, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 404 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_30;
#line 404 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_31;
#line 404 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_32;
#line 404 "add_mutable_aux_preds.m"
        MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_33;
#line 404 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_42_42;
#line 404 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_53;
#line 405 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_23, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 405 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds___PreInit_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_23, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 405 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds___LockUnlock_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_23, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 405 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_23, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);

#line 407 "add_mutable_aux_preds.m"
        {
#line 407 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__IsConstant_30 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_18);
        }
#line 408 "add_mutable_aux_preds.m"
        {
#line 408 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_31 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_18);
        }
#line 411 "add_mutable_aux_preds.m"
        {
#line 411 "add_mutable_aux_preds.m"
          hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_32);
        }
#line 1245 "add_mutable_aux_preds.m"
        {
#line 1245 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_53 = parse_tree__prog_item__mutable_var_maybe_foreign_names_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_18);
        }
#line 1250 "add_mutable_aux_preds.m"
        if ((hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1249 "add_mutable_aux_preds.m"
          {
#line 1249 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_33 = parse_tree__prog_mutable__mutable_c_var_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_32, hlds__make_hlds__add_mutable_aux_preds__MutableName_14);
          }
#line 1250 "add_mutable_aux_preds.m"
        else
#line 1251 "add_mutable_aux_preds.m"
          {
#line 1251 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignNames_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_53, (MR_Integer) 0)));
#line 1253 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds___Specs_55;

#line 1253 "add_mutable_aux_preds.m"
            {
#line 1253 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__get_global_name_from_foreign_names_9_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34, hlds__make_hlds__add_mutable_aux_preds__Context_20, hlds__make_hlds__add_mutable_aux_preds__ModuleName_32, hlds__make_hlds__add_mutable_aux_preds__MutableName_14, hlds__make_hlds__add_mutable_aux_preds__Lang_25, hlds__make_hlds__add_mutable_aux_preds__ForeignNames_54, &hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__add_mutable_aux_preds___Specs_55);
            }
#line 1251 "add_mutable_aux_preds.m"
          }
#line 423 "add_mutable_aux_preds.m"
#line 423 "add_mutable_aux_preds.m"
        switch (hlds__make_hlds__add_mutable_aux_preds__ImplLang_24) {
#line 423 "add_mutable_aux_preds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 423 "add_mutable_aux_preds.m"
          case (MR_Integer) 0:
#line 421 "add_mutable_aux_preds.m"
            {
#line 421 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__define_global_var_c_7_p_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_33, hlds__make_hlds__add_mutable_aux_preds__Type_15, hlds__make_hlds__add_mutable_aux_preds__IsConstant_30, hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_31, hlds__make_hlds__add_mutable_aux_preds__Context_20, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_42_42);
            }
#line 423 "add_mutable_aux_preds.m"
            break;
#line 423 "add_mutable_aux_preds.m"
          case (MR_Integer) 1:
#line 533 "add_mutable_aux_preds.m"
            {
#line 533 "add_mutable_aux_preds.m"
              MR_String hlds__make_hlds__add_mutable_aux_preds__TypeStr_64;
#line 533 "add_mutable_aux_preds.m"
              MR_String hlds__make_hlds__add_mutable_aux_preds__DefnBody_65;
#line 533 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_66;
#line 533 "add_mutable_aux_preds.m"
              MR_String hlds__make_hlds__add_mutable_aux_preds__V_68_68;
#line 533 "add_mutable_aux_preds.m"
              MR_String hlds__make_hlds__add_mutable_aux_preds__V_69_69;
#line 533 "add_mutable_aux_preds.m"
              MR_String hlds__make_hlds__add_mutable_aux_preds__V_71_71;
#line 533 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__V_74_74;

#line 541 "add_mutable_aux_preds.m"
#line 541 "add_mutable_aux_preds.m"
              switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_31) {
#line 541 "add_mutable_aux_preds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 541 "add_mutable_aux_preds.m"
                case (MR_Integer) 0:
#line 538 "add_mutable_aux_preds.m"
                  {
#line 536 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_76_76;

#line 536 "add_mutable_aux_preds.m"
                    {
#line 536 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__V_76_76 = parse_tree__builtin_lib_types__int_type_0_f_0();
                    }
#line 536 "add_mutable_aux_preds.m"
                    {
#line 536 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__make_hlds__add_mutable_aux_preds__Type_15, hlds__make_hlds__add_mutable_aux_preds__V_76_76);
                    }
#line 538 "add_mutable_aux_preds.m"
                    if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 537 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__TypeStr_64 = (MR_String) "int";
#line 538 "add_mutable_aux_preds.m"
                    else
#line 539 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__TypeStr_64 = (MR_String) "object";
#line 538 "add_mutable_aux_preds.m"
                  }
#line 541 "add_mutable_aux_preds.m"
                  break;
#line 541 "add_mutable_aux_preds.m"
                case (MR_Integer) 1:
#line 543 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__TypeStr_64 = (MR_String) "int";
#line 541 "add_mutable_aux_preds.m"
                  break;
#line 541 "add_mutable_aux_preds.m"
              }
#line 545 "add_mutable_aux_preds.m"
              {
#line 545 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_71_71 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_33, (MR_String) ";\n");
              }
#line 545 "add_mutable_aux_preds.m"
              {
#line 545 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_69_69 = mercury__string__f_43_43_2_f_0((MR_String) " ", hlds__make_hlds__add_mutable_aux_preds__V_71_71);
              }
#line 545 "add_mutable_aux_preds.m"
              {
#line 545 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_68_68 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeStr_64, hlds__make_hlds__add_mutable_aux_preds__V_69_69);
              }
#line 545 "add_mutable_aux_preds.m"
              {
#line 545 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__DefnBody_65 = mercury__string__f_43_43_2_f_0((MR_String) "static ", hlds__make_hlds__add_mutable_aux_preds__V_68_68);
              }
#line 547 "add_mutable_aux_preds.m"
              {
#line 547 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 547 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_74_74, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__DefnBody_65));
#line 547 "add_mutable_aux_preds.m"
              }
#line 547 "add_mutable_aux_preds.m"
              {
#line 547 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 547 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_66, 0) = ((MR_Box) ((MR_Integer) 1));
#line 547 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_66, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_74_74));
#line 547 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_66, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_20));
#line 547 "add_mutable_aux_preds.m"
              }
#line 548 "add_mutable_aux_preds.m"
              {
#line 548 "add_mutable_aux_preds.m"
                hlds__hlds_module__module_add_foreign_body_code_3_p_0(hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_66, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_42_42);
              }
#line 533 "add_mutable_aux_preds.m"
            }
#line 423 "add_mutable_aux_preds.m"
            break;
#line 423 "add_mutable_aux_preds.m"
          case (MR_Integer) 3:
#line 432 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_42_42 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34;
#line 423 "add_mutable_aux_preds.m"
            break;
#line 423 "add_mutable_aux_preds.m"
          case (MR_Integer) 2:
#line 429 "add_mutable_aux_preds.m"
            {
#line 429 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__define_global_var_java_6_p_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_33, hlds__make_hlds__add_mutable_aux_preds__Type_15, hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_31, hlds__make_hlds__add_mutable_aux_preds__Context_20, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_42_42);
            }
#line 423 "add_mutable_aux_preds.m"
            break;
#line 423 "add_mutable_aux_preds.m"
        }
#line 439 "add_mutable_aux_preds.m"
        {
#line 439 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__define_aux_preds_10_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, hlds__make_hlds__add_mutable_aux_preds__TargetParams_23, hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_33, hlds__make_hlds__add_mutable_aux_preds__Status_10, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_42_42, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_35, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_36, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_37, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39);
#line 439 "add_mutable_aux_preds.m"
          return;
        }
#line 404 "add_mutable_aux_preds.m"
      }
#line 397 "add_mutable_aux_preds.m"
  }
#line 34 "add_mutable_aux_preds.m"
}

#line 28 "add_mutable_aux_preds.m"
void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__do_mutable_checks_6_p_0(
#line 28 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7,
#line 28 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds___Status_8,
#line 28 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39,
#line 28 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_40,
#line 28 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_41,
#line 28 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_42)
#line 28 "add_mutable_aux_preds.m"
{
#line 316 "add_mutable_aux_preds.m"
  {
#line 316 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 316 "add_mutable_aux_preds.m"
    {
#line 316 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_109_117_116_97_98_108_101_95_99_104_101_99_107_115_95_95_91_50_93_95_48_6_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_40, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_41, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_42);
#line 316 "add_mutable_aux_preds.m"
      return;
    }
#line 316 "add_mutable_aux_preds.m"
  }
#line 28 "add_mutable_aux_preds.m"
}

#line 129 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decls_6_p_0_4(
#line 129 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 129 "add_mutable_aux_preds.m"
{
#line 129 "add_mutable_aux_preds.m"
  {
#line 129 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 129 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 129 "add_mutable_aux_preds.m"
    {
#line 129 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_mutable_aux_pred_decls__129__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 129 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 129 "add_mutable_aux_preds.m"
  }
#line 129 "add_mutable_aux_preds.m"
}

#line 127 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decls_6_p_0_3(
#line 127 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 127 "add_mutable_aux_preds.m"
{
#line 127 "add_mutable_aux_preds.m"
  {
#line 127 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 127 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 127 "add_mutable_aux_preds.m"
    {
#line 127 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_mutable_aux_pred_decls__127__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 127 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 127 "add_mutable_aux_preds.m"
  }
#line 127 "add_mutable_aux_preds.m"
}

#line 125 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decls_6_p_0_2(
#line 125 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 125 "add_mutable_aux_preds.m"
{
#line 125 "add_mutable_aux_preds.m"
  {
#line 125 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 125 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 125 "add_mutable_aux_preds.m"
    {
#line 125 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_mutable_aux_pred_decls__125__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 125 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 125 "add_mutable_aux_preds.m"
  }
#line 125 "add_mutable_aux_preds.m"
}

#line 123 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decls_6_p_0_1(
#line 123 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 123 "add_mutable_aux_preds.m"
{
#line 123 "add_mutable_aux_preds.m"
  {
#line 123 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 123 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 123 "add_mutable_aux_preds.m"
    {
#line 123 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_mutable_aux_pred_decls__123__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 123 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 123 "add_mutable_aux_preds.m"
  }
#line 123 "add_mutable_aux_preds.m"
}

#line 22 "add_mutable_aux_preds.m"
void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decls_6_p_0(
#line 22 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7,
#line 22 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_8,
#line 22 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_36,
#line 22 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_37,
#line 22 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38,
#line 22 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39)
#line 22 "add_mutable_aux_preds.m"
{
#line 69 "add_mutable_aux_preds.m"
  {
#line 69 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 69 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7, (MR_Integer) 0)));
#line 69 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7, (MR_Integer) 1)));
#line 69 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7, (MR_Integer) 3)));
#line 69 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7, (MR_Integer) 4)));
#line 69 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7, (MR_Integer) 6)));
#line 69 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_19;
#line 70 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___InitValue_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7, (MR_Integer) 2)));
#line 70 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___VarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7, (MR_Integer) 5)));
#line 70 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7, (MR_Integer) 7)));

#line 72 "add_mutable_aux_preds.m"
    {
#line 72 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__get_mutable_target_params_3_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_36, hlds__make_hlds__add_mutable_aux_preds__MutAttrs_15, &hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_19);
    }
#line 75 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 74 "add_mutable_aux_preds.m"
      {
#line 74 "add_mutable_aux_preds.m"
        *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_37 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_36;
#line 74 "add_mutable_aux_preds.m"
        *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38;
#line 74 "add_mutable_aux_preds.m"
      }
#line 75 "add_mutable_aux_preds.m"
    else
#line 76 "add_mutable_aux_preds.m"
      {
#line 76 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_19, (MR_Integer) 0)));
#line 76 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInit_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_20, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 76 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__LockUnlock_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_20, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 76 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_20, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 76 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_27;
#line 76 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_28;
#line 76 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__AttachToIO_29;
#line 76 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_40_40;
#line 76 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_41_41;
#line 76 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_42_42;
#line 76 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_43_43;
#line 76 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46;
#line 76 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_47_47;
#line 76 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_50_50;
#line 76 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51;
#line 77 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds___ImplLang_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_20, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 77 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds___Lang_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_20, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 77 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_20, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);

#line 79 "add_mutable_aux_preds.m"
        {
#line 79 "add_mutable_aux_preds.m"
          hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_36, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_27);
        }
#line 89 "add_mutable_aux_preds.m"
#line 89 "add_mutable_aux_preds.m"
        switch (hlds__make_hlds__add_mutable_aux_preds__PreInit_24) {
#line 89 "add_mutable_aux_preds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 89 "add_mutable_aux_preds.m"
          case (MR_Integer) 0:
#line 88 "add_mutable_aux_preds.m"
            {
#line 88 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_40_40 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_36;
#line 88 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_41_41 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38;
#line 88 "add_mutable_aux_preds.m"
            }
#line 89 "add_mutable_aux_preds.m"
            break;
#line 89 "add_mutable_aux_preds.m"
          case (MR_Integer) 1:
#line 91 "add_mutable_aux_preds.m"
            {
#line 91 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__add_mutable_pre_init_pred_decl_8_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_27, hlds__make_hlds__add_mutable_aux_preds__Name_11, hlds__make_hlds__add_mutable_aux_preds__Status_8, hlds__make_hlds__add_mutable_aux_preds__Context_17, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_36, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_40_40, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_41_41);
            }
#line 89 "add_mutable_aux_preds.m"
            break;
#line 89 "add_mutable_aux_preds.m"
        }
#line 96 "add_mutable_aux_preds.m"
        {
#line 96 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__add_mutable_init_pred_decl_8_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_27, hlds__make_hlds__add_mutable_aux_preds__Name_11, hlds__make_hlds__add_mutable_aux_preds__Status_8, hlds__make_hlds__add_mutable_aux_preds__Context_17, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_40_40, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_42_42, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_41_41, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_43_43);
        }
#line 102 "add_mutable_aux_preds.m"
#line 102 "add_mutable_aux_preds.m"
        switch (hlds__make_hlds__add_mutable_aux_preds__LockUnlock_25) {
#line 102 "add_mutable_aux_preds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 102 "add_mutable_aux_preds.m"
          case (MR_Integer) 0:
#line 101 "add_mutable_aux_preds.m"
            {
#line 101 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_42_42;
#line 101 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_47_47 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_43_43;
#line 101 "add_mutable_aux_preds.m"
            }
#line 102 "add_mutable_aux_preds.m"
            break;
#line 102 "add_mutable_aux_preds.m"
          case (MR_Integer) 1:
#line 103 "add_mutable_aux_preds.m"
            {
#line 103 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_44_44;
#line 103 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_45_45;

#line 104 "add_mutable_aux_preds.m"
              {
#line 104 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__add_mutable_lock_pred_decl_8_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_27, hlds__make_hlds__add_mutable_aux_preds__Name_11, hlds__make_hlds__add_mutable_aux_preds__Status_8, hlds__make_hlds__add_mutable_aux_preds__Context_17, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_42_42, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_44_44, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_43_43, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_45_45);
              }
#line 106 "add_mutable_aux_preds.m"
              {
#line 106 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__add_mutable_unlock_pred_decl_8_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_27, hlds__make_hlds__add_mutable_aux_preds__Name_11, hlds__make_hlds__add_mutable_aux_preds__Status_8, hlds__make_hlds__add_mutable_aux_preds__Context_17, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_44_44, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_45_45, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_47_47);
              }
#line 103 "add_mutable_aux_preds.m"
            }
#line 102 "add_mutable_aux_preds.m"
            break;
#line 102 "add_mutable_aux_preds.m"
        }
#line 111 "add_mutable_aux_preds.m"
#line 111 "add_mutable_aux_preds.m"
        switch (hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_26) {
#line 111 "add_mutable_aux_preds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 111 "add_mutable_aux_preds.m"
          case (MR_Integer) 0:
#line 110 "add_mutable_aux_preds.m"
            {
#line 110 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_50_50 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46;
#line 110 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_47_47;
#line 110 "add_mutable_aux_preds.m"
            }
#line 111 "add_mutable_aux_preds.m"
            break;
#line 111 "add_mutable_aux_preds.m"
          case (MR_Integer) 1:
#line 112 "add_mutable_aux_preds.m"
            {
#line 112 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_48_48;
#line 112 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_49_49;

#line 113 "add_mutable_aux_preds.m"
              {
#line 113 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__add_mutable_unsafe_get_pred_decl_10_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_27, hlds__make_hlds__add_mutable_aux_preds__Name_11, hlds__make_hlds__add_mutable_aux_preds__Type_12, hlds__make_hlds__add_mutable_aux_preds__Inst_14, hlds__make_hlds__add_mutable_aux_preds__Status_8, hlds__make_hlds__add_mutable_aux_preds__Context_17, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_48_48, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_47_47, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_49_49);
              }
#line 115 "add_mutable_aux_preds.m"
              {
#line 115 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__add_mutable_unsafe_set_pred_decl_10_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_27, hlds__make_hlds__add_mutable_aux_preds__Name_11, hlds__make_hlds__add_mutable_aux_preds__Type_12, hlds__make_hlds__add_mutable_aux_preds__Inst_14, hlds__make_hlds__add_mutable_aux_preds__Status_8, hlds__make_hlds__add_mutable_aux_preds__Context_17, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_48_48, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_50_50, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_49_49, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51);
              }
#line 112 "add_mutable_aux_preds.m"
            }
#line 111 "add_mutable_aux_preds.m"
            break;
#line 111 "add_mutable_aux_preds.m"
        }
#line 119 "add_mutable_aux_preds.m"
        {
#line 119 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__IsConstant_28 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_15);
        }
#line 120 "add_mutable_aux_preds.m"
        {
#line 120 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__AttachToIO_29 = parse_tree__prog_item__mutable_var_attach_to_io_state_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_15);
        }
#line 145 "add_mutable_aux_preds.m"
#line 145 "add_mutable_aux_preds.m"
        switch (hlds__make_hlds__add_mutable_aux_preds__IsConstant_28) {
#line 145 "add_mutable_aux_preds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 145 "add_mutable_aux_preds.m"
          case (MR_Integer) 1:
#line 122 "add_mutable_aux_preds.m"
            {
#line 122 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__ConstantGetPredDecl_30;
#line 122 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__ConstantSetPredDecl_31;
#line 122 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__V_64_64;
#line 122 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__V_69_69;
#line 122 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__V_74_74;
#line 122 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__V_79_79;
#line 122 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_85_85;
#line 122 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_86_86;

#line 123 "add_mutable_aux_preds.m"
              {
#line 123 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 123 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_64_64, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[0]));
#line 123 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_64_64, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decls_6_p_0_1));
#line 123 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 123 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_64_64, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PreInit_24));
#line 123 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_64_64, 4) = ((MR_Box) ((MR_Integer) 0));
#line 123 "add_mutable_aux_preds.m"
              }
#line 123 "add_mutable_aux_preds.m"
              {
#line 123 "add_mutable_aux_preds.m"
                mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_64_64, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_mutable_aux_pred_decls\'/6", (MR_String) "PreInit = need_pre_init_pred");
              }
#line 125 "add_mutable_aux_preds.m"
              {
#line 125 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 125 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_69_69, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[1]));
#line 125 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_69_69, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decls_6_p_0_2));
#line 125 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_69_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 125 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_69_69, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockUnlock_25));
#line 125 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_69_69, 4) = ((MR_Box) ((MR_Integer) 0));
#line 125 "add_mutable_aux_preds.m"
              }
#line 125 "add_mutable_aux_preds.m"
              {
#line 125 "add_mutable_aux_preds.m"
                mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_69_69, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_mutable_aux_pred_decls\'/6", (MR_String) "LockUnlock = need_lock_unlock_preds");
              }
#line 127 "add_mutable_aux_preds.m"
              {
#line 127 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 127 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_74_74, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[2]));
#line 127 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_74_74, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decls_6_p_0_3));
#line 127 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_74_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 127 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_74_74, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_26));
#line 127 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_74_74, 4) = ((MR_Box) ((MR_Integer) 0));
#line 127 "add_mutable_aux_preds.m"
              }
#line 127 "add_mutable_aux_preds.m"
              {
#line 127 "add_mutable_aux_preds.m"
                mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_74_74, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_mutable_aux_pred_decls\'/6", (MR_String) "UnsafeAccess = need_unsafe_get_set_preds");
              }
#line 129 "add_mutable_aux_preds.m"
              {
#line 129 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 129 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_79_79, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[3]));
#line 129 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_79_79, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decls_6_p_0_4));
#line 129 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_79_79, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 129 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_79_79, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__AttachToIO_29));
#line 129 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_79_79, 4) = ((MR_Box) ((MR_Integer) 0));
#line 129 "add_mutable_aux_preds.m"
              }
#line 129 "add_mutable_aux_preds.m"
              {
#line 129 "add_mutable_aux_preds.m"
                mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_79_79, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_mutable_aux_pred_decls\'/6", (MR_String) "AttachToIO = mutable_attach_to_io_state");
              }
#line 135 "add_mutable_aux_preds.m"
              {
#line 135 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__ConstantGetPredDecl_30 = parse_tree__prog_mutable__constant_get_pred_decl_5_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_27, hlds__make_hlds__add_mutable_aux_preds__Name_11, hlds__make_hlds__add_mutable_aux_preds__Type_12, hlds__make_hlds__add_mutable_aux_preds__Inst_14, hlds__make_hlds__add_mutable_aux_preds__Context_17);
              }
#line 137 "add_mutable_aux_preds.m"
              {
#line 137 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__ConstantSetPredDecl_31 = parse_tree__prog_mutable__constant_set_pred_decl_5_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_27, hlds__make_hlds__add_mutable_aux_preds__Name_11, hlds__make_hlds__add_mutable_aux_preds__Type_12, hlds__make_hlds__add_mutable_aux_preds__Inst_14, hlds__make_hlds__add_mutable_aux_preds__Context_17);
              }
#line 139 "add_mutable_aux_preds.m"
              {
#line 139 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0(hlds__make_hlds__add_mutable_aux_preds__ConstantGetPredDecl_30, hlds__make_hlds__add_mutable_aux_preds__ModuleName_27, hlds__make_hlds__add_mutable_aux_preds__Name_11, (MR_Integer) 6, hlds__make_hlds__add_mutable_aux_preds__Status_8, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_50_50, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_85_85, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_86_86);
              }
#line 142 "add_mutable_aux_preds.m"
              {
#line 142 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0(hlds__make_hlds__add_mutable_aux_preds__ConstantSetPredDecl_31, hlds__make_hlds__add_mutable_aux_preds__ModuleName_27, hlds__make_hlds__add_mutable_aux_preds__Name_11, (MR_Integer) 7, hlds__make_hlds__add_mutable_aux_preds__Status_8, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_85_85, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_37, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_86_86, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39);
#line 142 "add_mutable_aux_preds.m"
                return;
              }
#line 122 "add_mutable_aux_preds.m"
            }
#line 145 "add_mutable_aux_preds.m"
            break;
#line 145 "add_mutable_aux_preds.m"
          case (MR_Integer) 0:
#line 146 "add_mutable_aux_preds.m"
            {
#line 146 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__StdGetPredDecl_32;
#line 146 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__StdSetPredDecl_33;
#line 146 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_53_53;
#line 146 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_54_54;
#line 146 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_56_56;
#line 146 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_57_57;

#line 150 "add_mutable_aux_preds.m"
              {
#line 150 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__StdGetPredDecl_32 = parse_tree__prog_mutable__std_get_pred_decl_5_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_27, hlds__make_hlds__add_mutable_aux_preds__Name_11, hlds__make_hlds__add_mutable_aux_preds__Type_12, hlds__make_hlds__add_mutable_aux_preds__Inst_14, hlds__make_hlds__add_mutable_aux_preds__Context_17);
              }
#line 152 "add_mutable_aux_preds.m"
              {
#line 152 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__StdSetPredDecl_33 = parse_tree__prog_mutable__std_set_pred_decl_5_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_27, hlds__make_hlds__add_mutable_aux_preds__Name_11, hlds__make_hlds__add_mutable_aux_preds__Type_12, hlds__make_hlds__add_mutable_aux_preds__Inst_14, hlds__make_hlds__add_mutable_aux_preds__Context_17);
              }
#line 154 "add_mutable_aux_preds.m"
              {
#line 154 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0(hlds__make_hlds__add_mutable_aux_preds__StdGetPredDecl_32, hlds__make_hlds__add_mutable_aux_preds__ModuleName_27, hlds__make_hlds__add_mutable_aux_preds__Name_11, (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__Status_8, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_50_50, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_53_53, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_54_54);
              }
#line 157 "add_mutable_aux_preds.m"
              {
#line 157 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0(hlds__make_hlds__add_mutable_aux_preds__StdSetPredDecl_33, hlds__make_hlds__add_mutable_aux_preds__ModuleName_27, hlds__make_hlds__add_mutable_aux_preds__Name_11, (MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__Status_8, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_53_53, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_56_56, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_54_54, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_57_57);
              }
#line 165 "add_mutable_aux_preds.m"
#line 165 "add_mutable_aux_preds.m"
              switch (hlds__make_hlds__add_mutable_aux_preds__AttachToIO_29) {
#line 165 "add_mutable_aux_preds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 165 "add_mutable_aux_preds.m"
                case (MR_Integer) 1:
#line 166 "add_mutable_aux_preds.m"
                  {
#line 166 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__IOGetPredDecl_34;
#line 166 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__IOSetPredDecl_35;
#line 166 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_59_59;
#line 166 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_60_60;

#line 167 "add_mutable_aux_preds.m"
                    {
#line 167 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__IOGetPredDecl_34 = parse_tree__prog_mutable__io_get_pred_decl_5_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_27, hlds__make_hlds__add_mutable_aux_preds__Name_11, hlds__make_hlds__add_mutable_aux_preds__Type_12, hlds__make_hlds__add_mutable_aux_preds__Inst_14, hlds__make_hlds__add_mutable_aux_preds__Context_17);
                    }
#line 169 "add_mutable_aux_preds.m"
                    {
#line 169 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__IOSetPredDecl_35 = parse_tree__prog_mutable__io_set_pred_decl_5_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_27, hlds__make_hlds__add_mutable_aux_preds__Name_11, hlds__make_hlds__add_mutable_aux_preds__Type_12, hlds__make_hlds__add_mutable_aux_preds__Inst_14, hlds__make_hlds__add_mutable_aux_preds__Context_17);
                    }
#line 171 "add_mutable_aux_preds.m"
                    {
#line 171 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0(hlds__make_hlds__add_mutable_aux_preds__IOGetPredDecl_34, hlds__make_hlds__add_mutable_aux_preds__ModuleName_27, hlds__make_hlds__add_mutable_aux_preds__Name_11, (MR_Integer) 2, hlds__make_hlds__add_mutable_aux_preds__Status_8, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_56_56, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_59_59, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_57_57, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_60_60);
                    }
#line 174 "add_mutable_aux_preds.m"
                    {
#line 174 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0(hlds__make_hlds__add_mutable_aux_preds__IOSetPredDecl_35, hlds__make_hlds__add_mutable_aux_preds__ModuleName_27, hlds__make_hlds__add_mutable_aux_preds__Name_11, (MR_Integer) 3, hlds__make_hlds__add_mutable_aux_preds__Status_8, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_59_59, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_37, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_60_60, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39);
#line 174 "add_mutable_aux_preds.m"
                      return;
                    }
#line 166 "add_mutable_aux_preds.m"
                  }
#line 165 "add_mutable_aux_preds.m"
                  break;
#line 165 "add_mutable_aux_preds.m"
                case (MR_Integer) 0:
#line 164 "add_mutable_aux_preds.m"
                  {
#line 164 "add_mutable_aux_preds.m"
                    *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_37 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_56_56;
#line 164 "add_mutable_aux_preds.m"
                    *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_57_57;
#line 164 "add_mutable_aux_preds.m"
                  }
#line 165 "add_mutable_aux_preds.m"
                  break;
#line 165 "add_mutable_aux_preds.m"
              }
#line 146 "add_mutable_aux_preds.m"
            }
#line 145 "add_mutable_aux_preds.m"
            break;
#line 145 "add_mutable_aux_preds.m"
        }
#line 76 "add_mutable_aux_preds.m"
      }
#line 69 "add_mutable_aux_preds.m"
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
