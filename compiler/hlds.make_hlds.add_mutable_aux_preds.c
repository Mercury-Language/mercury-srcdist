/*
** Automatically generated from `add_mutable_aux_preds.m'
** by the Mercury compiler,
** version rotd-2015-08-10
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
#include "parse_tree.prog_util.mih"
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
#include "hlds.make_hlds.add_pragma.mih"
#include "hlds.make_hlds.add_pred.mih"
#include "hlds.make_hlds.add_special_pred.mih"
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

#line 1033 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_main_get_set_preds__1033__1_2_p_0(
#line 1033 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__AttachToIO_37,
#line 1033 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_252);

#line 835 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_unsafe_get_set_preds__835__1_2_p_0(
#line 835 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_31,
#line 835 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_66);

#line 749 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_lock_unlock_preds__749__1_2_p_0(
#line 749 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_31,
#line 749 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_59);

#line 688 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_pre_init_pred__688__1_2_p_0(
#line 688 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_31,
#line 688 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_52);

#line 308 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__308__1_2_p_0(
#line 308 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Constraints_29,
#line 308 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_78);

#line 306 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__306__1_2_p_0(
#line 306 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeDetism_23,
#line 306 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_72);

#line 305 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__305__1_2_p_0(
#line 305 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__WithInst_22,
#line 305 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_67);

#line 304 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__304__1_2_p_0(
#line 304 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__WithType_21,
#line 304 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_62);

#line 302 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__302__1_2_p_0(
#line 302 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredOrFunc_19,
#line 302 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_57);

#line 301 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__301__1_2_p_0(
#line 301 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ExistQVars_27,
#line 301 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_52);

#line 299 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__299__1_2_p_0(
#line 299 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__InstVarSet_26,
#line 299 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_47);

#line 297 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__297__1_2_p_0(
#line 297 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_25,
#line 297 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_42);

#line 131 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_mutable_aux_pred_decls__131__1_2_p_0(
#line 131 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__AttachToIO_29,
#line 131 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_83);

#line 129 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_mutable_aux_pred_decls__129__1_2_p_0(
#line 129 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_26,
#line 129 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_78);

#line 127 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_mutable_aux_pred_decls__127__1_2_p_0(
#line 127 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__LockUnlock_25,
#line 127 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_73);

#line 125 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_mutable_aux_pred_decls__125__1_2_p_0(
#line 125 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInit_24,
#line 125 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_68);

#line 1344 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_unsafe_get_set_preds_0_0(
#line 1344 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1344 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1344 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3);

#line 1344 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_unsafe_get_set_preds_0_0(
#line 1344 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1,
#line 1344 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);

#line 1336 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_pre_init_pred_0_0(
#line 1336 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1336 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1336 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3);

#line 1336 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_pre_init_pred_0_0(
#line 1336 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1,
#line 1336 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);

#line 1340 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_lock_unlock_preds_0_0(
#line 1340 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1340 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1340 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3);

#line 1340 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_lock_unlock_preds_0_0(
#line 1340 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1,
#line 1340 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);

#line 1348 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_target_params_0_0(
#line 1348 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1348 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1348 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3);

#line 1348 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_target_params_0_0(
#line 1348 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1348 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);

#line 1330 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_impl_lang_0_0(
#line 1330 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1330 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1330 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3);

#line 1330 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_impl_lang_0_0(
#line 1330 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1,
#line 1330 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);

#line 1362 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__get_mutable_target_params_3_p_0(
#line 1362 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_4,
#line 1362 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_5,
#line 1362 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_6);

#line 1321 "add_mutable_aux_preds.m"
static MR_String MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__global_foreign_type_name_4_f_0(
#line 1321 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1321 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_2,
#line 1321 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_3,
#line 1321 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_4);

#line 1299 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__get_matching_foreign_names_3_p_0(
#line 1299 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1299 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1299 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3);

#line 1265 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__get_global_name_from_foreign_names_9_p_0(
#line 1265 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_10,
#line 1265 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_11,
#line 1265 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_12,
#line 1265 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_13,
#line 1265 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_14,
#line 1265 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignNames_15,
#line 1265 "add_mutable_aux_preds.m"
  MR_String * hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_16,
#line 1265 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_28,
#line 1265 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_29);

#line 1179 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_init_pred_11_p_0(
#line 1179 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12,
#line 1179 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_13,
#line 1179 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_14,
#line 1179 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_15,
#line 1179 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_16,
#line 1179 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39,
#line 1179 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_40,
#line 1179 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_41,
#line 1179 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_42,
#line 1179 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_43,
#line 1179 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_44);

#line 1033 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_main_get_set_preds_14_p_0_1(
#line 1033 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 955 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_main_get_set_preds_14_p_0(
#line 955 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15,
#line 955 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_16,
#line 955 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17,
#line 955 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_18,
#line 955 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_19,
#line 955 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_20,
#line 955 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21,
#line 955 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_22,
#line 955 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_85,
#line 955 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_86,
#line 955 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_87,
#line 955 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_88,
#line 955 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_89,
#line 955 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_90);

#line 835 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_unsafe_get_set_preds_12_p_0_1(
#line 835 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 820 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_unsafe_get_set_preds_12_p_0(
#line 820 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13,
#line 820 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_14,
#line 820 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15,
#line 820 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_16,
#line 820 "add_mutable_aux_preds.m"
  MR_Tuple * hlds__make_hlds__add_mutable_aux_preds__UnsafeGetSetExprs_17,
#line 820 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_18,
#line 820 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_56,
#line 820 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_57,
#line 820 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_58,
#line 820 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_59,
#line 820 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_60,
#line 820 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_61);

#line 749 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_lock_unlock_preds_12_p_0_1(
#line 749 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 734 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_lock_unlock_preds_12_p_0(
#line 734 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13,
#line 734 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_14,
#line 734 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15,
#line 734 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_16,
#line 734 "add_mutable_aux_preds.m"
  MR_Tuple * hlds__make_hlds__add_mutable_aux_preds__LockUnlockExprs_17,
#line 734 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_18,
#line 734 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_49,
#line 734 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_50,
#line 734 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_51,
#line 734 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_52,
#line 734 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_53,
#line 734 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_54);

#line 688 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_pre_init_pred_12_p_0_1(
#line 688 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 672 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_pre_init_pred_12_p_0(
#line 672 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13,
#line 672 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_14,
#line 672 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15,
#line 672 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_16,
#line 672 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_17,
#line 672 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_18,
#line 672 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_42,
#line 672 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_43,
#line 672 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_44,
#line 672 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_45,
#line 672 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_46,
#line 672 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_47);

#line 590 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_aux_preds_10_p_0(
#line 590 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11,
#line 590 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_12,
#line 590 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_13,
#line 590 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_14,
#line 590 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34,
#line 590 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_35,
#line 590 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_36,
#line 590 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_37,
#line 590 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38,
#line 590 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39);

#line 554 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_global_var_java_6_p_0(
#line 554 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_7,
#line 554 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_8,
#line 554 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_9,
#line 554 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_10,
#line 554 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_15,
#line 554 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_16);

#line 453 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_global_var_c_7_p_0(
#line 453 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_8,
#line 453 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_9,
#line 453 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_10,
#line 453 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_11,
#line 453 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_12,
#line 453 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_26,
#line 453 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_27);

#line 308 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_8(
#line 308 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 306 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_7(
#line 306 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 305 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_6(
#line 305 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 304 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_5(
#line 304 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 302 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_4(
#line 302 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 301 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_3(
#line 301 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 299 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_2(
#line 299 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 297 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_1(
#line 297 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 286 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0(
#line 286 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_10,
#line 286 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_11,
#line 286 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_12,
#line 286 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Kind_13,
#line 286 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_14,
#line 286 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34,
#line 286 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_35,
#line 286 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_36,
#line 286 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_37);

#line 267 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_12_p_0(
#line 267 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_13,
#line 267 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_14,
#line 267 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Kind_15,
#line 267 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_16,
#line 267 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_17,
#line 267 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Purity_18,
#line 267 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_19,
#line 267 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_20,
#line 267 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_30,
#line 267 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_31,
#line 267 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_32,
#line 267 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_33);

#line 253 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_pre_init_pred_decl_8_p_0(
#line 253 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_9,
#line 253 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_10,
#line 253 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_11,
#line 253 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_12,
#line 253 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_17,
#line 253 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_18,
#line 253 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_19,
#line 253 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_20);

#line 236 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_init_pred_decl_8_p_0(
#line 236 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_9,
#line 236 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_10,
#line 236 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_11,
#line 236 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_12,
#line 236 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_17,
#line 236 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_18,
#line 236 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_19,
#line 236 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_20);

#line 198 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_unlock_pred_decl_8_p_0(
#line 198 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_9,
#line 198 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_10,
#line 198 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_11,
#line 198 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_12,
#line 198 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_17,
#line 198 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_18,
#line 198 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_19,
#line 198 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_20);

#line 195 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_lock_pred_decl_8_p_0(
#line 195 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_9,
#line 195 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_10,
#line 195 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_11,
#line 195 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_12,
#line 195 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_17,
#line 195 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_18,
#line 195 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_19,
#line 195 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_20);

#line 191 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_unsafe_set_pred_decl_10_p_0(
#line 191 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_11,
#line 191 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_12,
#line 191 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_13,
#line 191 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_14,
#line 191 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_15,
#line 191 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_16,
#line 191 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_21,
#line 191 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_22,
#line 191 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_23,
#line 191 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_24);

#line 187 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_unsafe_get_pred_decl_10_p_0(
#line 187 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_11,
#line 187 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_12,
#line 187 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_13,
#line 187 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_14,
#line 187 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_15,
#line 187 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_16,
#line 187 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_21,
#line 187 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_22,
#line 187 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_23,
#line 187 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_24);

#line 131 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decls_6_p_0_4(
#line 131 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 129 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decls_6_p_0_3(
#line 129 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 127 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decls_6_p_0_2(
#line 127 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 125 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decls_6_p_0_1(
#line 125 "add_mutable_aux_preds.m"
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1444 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1452 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1460 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1468 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__add_mutable_aux_preds__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1476 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1484 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1492 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_determinism_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0
  }
};

#line 1500 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_0 = {
  (MR_String) "mutable_lang_c",
  (MR_Integer) 0
};

#line 1506 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_1 = {
  (MR_String) "mutable_lang_csharp",
  (MR_Integer) 1
};

#line 1512 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_2 = {
  (MR_String) "mutable_lang_java",
  (MR_Integer) 2
};

#line 1518 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_3 = {
  (MR_String) "mutable_lang_erlang",
  (MR_Integer) 3
};

#line 1524 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_value_ordered_mutable_impl_lang_0[4] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_1,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_2,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_3
};

#line 1532 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_name_ordered_mutable_impl_lang_0[4] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_1,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_3,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_2
};

#line 1540 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_mutable_impl_lang_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2
};

#line 1548 "hlds.make_hlds.add_mutable_aux_preds.c"
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

#line 1565 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_PseudoTypeInfo hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__field_types_mutable_target_params_0_0[6] = {
  (MR_PseudoTypeInfo) &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_mutable_impl_lang_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_box_policy_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_need_pre_init_pred_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_need_lock_unlock_preds_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_need_unsafe_get_set_preds_0
};

#line 1575 "hlds.make_hlds.add_mutable_aux_preds.c"
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

#line 1609 "hlds.make_hlds.add_mutable_aux_preds.c"
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

#line 1624 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_stag_ordered_mutable_target_params_0_0[1] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_functor_desc_mutable_target_params_0_0
};

#line 1629 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_DuPtagLayout hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_ptag_ordered_mutable_target_params_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_stag_ordered_mutable_target_params_0_0
  }
};

#line 1638 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_name_ordered_mutable_target_params_0[1] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_functor_desc_mutable_target_params_0_0
};

#line 1643 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_mutable_target_params_0[1] = {
  (MR_Integer) 0
};

#line 1648 "hlds.make_hlds.add_mutable_aux_preds.c"
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

#line 1665 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_lock_unlock_preds_0_0 = {
  (MR_String) "dont_need_lock_unlock_preds",
  (MR_Integer) 0
};

#line 1671 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_lock_unlock_preds_0_1 = {
  (MR_String) "need_lock_unlock_preds",
  (MR_Integer) 1
};

#line 1677 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_value_ordered_need_lock_unlock_preds_0[2] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_lock_unlock_preds_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_lock_unlock_preds_0_1
};

#line 1683 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_name_ordered_need_lock_unlock_preds_0[2] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_lock_unlock_preds_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_lock_unlock_preds_0_1
};

#line 1689 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_need_lock_unlock_preds_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1695 "hlds.make_hlds.add_mutable_aux_preds.c"
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

#line 1712 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_pre_init_pred_0_0 = {
  (MR_String) "dont_need_pre_init_pred",
  (MR_Integer) 0
};

#line 1718 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_pre_init_pred_0_1 = {
  (MR_String) "need_pre_init_pred",
  (MR_Integer) 1
};

#line 1724 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_value_ordered_need_pre_init_pred_0[2] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_pre_init_pred_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_pre_init_pred_0_1
};

#line 1730 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_name_ordered_need_pre_init_pred_0[2] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_pre_init_pred_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_pre_init_pred_0_1
};

#line 1736 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_need_pre_init_pred_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1742 "hlds.make_hlds.add_mutable_aux_preds.c"
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

#line 1759 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_unsafe_get_set_preds_0_0 = {
  (MR_String) "dont_need_unsafe_get_set_preds",
  (MR_Integer) 0
};

#line 1765 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_unsafe_get_set_preds_0_1 = {
  (MR_String) "need_unsafe_get_set_preds",
  (MR_Integer) 1
};

#line 1771 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_value_ordered_need_unsafe_get_set_preds_0[2] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_unsafe_get_set_preds_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_unsafe_get_set_preds_0_1
};

#line 1777 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_name_ordered_need_unsafe_get_set_preds_0[2] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_unsafe_get_set_preds_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_unsafe_get_set_preds_0_1
};

#line 1783 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_need_unsafe_get_set_preds_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1789 "hlds.make_hlds.add_mutable_aux_preds.c"
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

#line 1806 "hlds.make_hlds.add_mutable_aux_preds.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_impl_lang_0_0_10001(
#line 1809 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 1811 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2)
#line 1813 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 1815 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 1817 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 1820 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 1822 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_impl_lang_0_0(((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2));
    }
#line 1825 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1827 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 1829 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 1832 "hlds.make_hlds.add_mutable_aux_preds.c"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_impl_lang_0_0_10001(
#line 1835 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box * hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 1837 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2,
#line 1839 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3)
#line 1841 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 1843 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 1845 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1;

#line 1848 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 1850 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_impl_lang_0_0(&hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3));
    }
#line 1853 "hlds.make_hlds.add_mutable_aux_preds.c"
    *hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1));
#line 1855 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 1857 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 1860 "hlds.make_hlds.add_mutable_aux_preds.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_target_params_0_0_10001(
#line 1863 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 1865 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2)
#line 1867 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 1869 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 1871 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 1874 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 1876 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_target_params_0_0(((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2));
    }
#line 1879 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1881 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 1883 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 1886 "hlds.make_hlds.add_mutable_aux_preds.c"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_target_params_0_0_10001(
#line 1889 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box * hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 1891 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2,
#line 1893 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3)
#line 1895 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 1897 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 1899 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1;

#line 1902 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 1904 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_target_params_0_0(&hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3));
    }
#line 1907 "hlds.make_hlds.add_mutable_aux_preds.c"
    *hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1));
#line 1909 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 1911 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 1914 "hlds.make_hlds.add_mutable_aux_preds.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_lock_unlock_preds_0_0_10001(
#line 1917 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 1919 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2)
#line 1921 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 1923 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 1925 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 1928 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 1930 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds____Unify____need_lock_unlock_preds_0_0(((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2));
    }
#line 1933 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1935 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 1937 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 1940 "hlds.make_hlds.add_mutable_aux_preds.c"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_lock_unlock_preds_0_0_10001(
#line 1943 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box * hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 1945 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2,
#line 1947 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3)
#line 1949 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 1951 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 1953 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1;

#line 1956 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 1958 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds____Compare____need_lock_unlock_preds_0_0(&hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3));
    }
#line 1961 "hlds.make_hlds.add_mutable_aux_preds.c"
    *hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1));
#line 1963 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 1965 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 1968 "hlds.make_hlds.add_mutable_aux_preds.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_pre_init_pred_0_0_10001(
#line 1971 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 1973 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2)
#line 1975 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 1977 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 1979 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 1982 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 1984 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds____Unify____need_pre_init_pred_0_0(((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2));
    }
#line 1987 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1989 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 1991 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 1994 "hlds.make_hlds.add_mutable_aux_preds.c"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_pre_init_pred_0_0_10001(
#line 1997 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box * hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 1999 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2,
#line 2001 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3)
#line 2003 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 2005 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 2007 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1;

#line 2010 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 2012 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds____Compare____need_pre_init_pred_0_0(&hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3));
    }
#line 2015 "hlds.make_hlds.add_mutable_aux_preds.c"
    *hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1));
#line 2017 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 2019 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 2022 "hlds.make_hlds.add_mutable_aux_preds.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_unsafe_get_set_preds_0_0_10001(
#line 2025 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 2027 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2)
#line 2029 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 2031 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 2033 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 2036 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 2038 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds____Unify____need_unsafe_get_set_preds_0_0(((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2));
    }
#line 2041 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 2043 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 2045 "hlds.make_hlds.add_mutable_aux_preds.c"
}

#line 2048 "hlds.make_hlds.add_mutable_aux_preds.c"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_unsafe_get_set_preds_0_0_10001(
#line 2051 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box * hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1,
#line 2053 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2,
#line 2055 "hlds.make_hlds.add_mutable_aux_preds.c"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3)
#line 2057 "hlds.make_hlds.add_mutable_aux_preds.c"
{
#line 2059 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 2061 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1;

#line 2064 "hlds.make_hlds.add_mutable_aux_preds.c"
    {
#line 2066 "hlds.make_hlds.add_mutable_aux_preds.c"
      hlds__make_hlds__add_mutable_aux_preds____Compare____need_unsafe_get_set_preds_0_0(&hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_3));
    }
#line 2069 "hlds.make_hlds.add_mutable_aux_preds.c"
    *hlds__make_hlds__add_mutable_aux_preds__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__conv0_HeadVar__1_1));
#line 2071 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 2073 "hlds.make_hlds.add_mutable_aux_preds.c"
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
#line 318 "add_mutable_aux_preds.m"
  {
#line 318 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 318 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_11;
#line 318 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__Name_12;
#line 318 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_15;
#line 318 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_16;
#line 318 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_18;
#line 318 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Globals_20;
#line 318 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_21;
#line 318 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TrailMutableUpdates_29;
#line 318 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UseTrail_30;
#line 318 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_65_65;
#line 318 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_85_85;
#line 320 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Type_13;
#line 320 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___InitTerm_14;
#line 320 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___VarSet_17;
#line 320 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_19;

#line 319 "add_mutable_aux_preds.m"
    {
#line 319 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_11);
    }
#line 320 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Name_12 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7, (MR_Integer) 0)));
#line 320 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7, (MR_Integer) 1)));
#line 320 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___InitTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7, (MR_Integer) 2)));
#line 320 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Inst_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7, (MR_Integer) 3)));
#line 320 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutAttrs_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7, (MR_Integer) 4)));
#line 320 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___VarSet_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7, (MR_Integer) 5)));
#line 320 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7, (MR_Integer) 6)));
#line 320 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___SeqNum_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7, (MR_Integer) 7)));
#line 322 "add_mutable_aux_preds.m"
    {
#line 322 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_mutable_aux_preds__Globals_20);
    }
#line 323 "add_mutable_aux_preds.m"
    {
#line 323 "add_mutable_aux_preds.m"
      libs__globals__get_target_2_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_20, &hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_21);
    }
#line 345 "add_mutable_aux_preds.m"
#line 345 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_21) {
#line 345 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 345 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 333 "add_mutable_aux_preds.m"
        {
#line 333 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_23;

#line 334 "add_mutable_aux_preds.m"
          {
#line 334 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_23 = parse_tree__prog_item__mutable_var_maybe_foreign_names_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_16);
          }
#line 337 "add_mutable_aux_preds.m"
          if ((hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 336 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_65_65 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_41;
#line 337 "add_mutable_aux_preds.m"
          else
#line 338 "add_mutable_aux_preds.m"
            {
#line 338 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignNames_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_23, (MR_Integer) 0)));
#line 341 "add_mutable_aux_preds.m"
              MR_String hlds__make_hlds__add_mutable_aux_preds___TargetMutableName_25;

#line 341 "add_mutable_aux_preds.m"
              {
#line 341 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__get_global_name_from_foreign_names_9_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39, hlds__make_hlds__add_mutable_aux_preds__Context_18, hlds__make_hlds__add_mutable_aux_preds__ModuleName_11, hlds__make_hlds__add_mutable_aux_preds__Name_12, (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__ForeignNames_24, &hlds__make_hlds__add_mutable_aux_preds___TargetMutableName_25, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_41, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_65_65);
              }
#line 338 "add_mutable_aux_preds.m"
            }
#line 333 "add_mutable_aux_preds.m"
        }
#line 345 "add_mutable_aux_preds.m"
        break;
#line 345 "add_mutable_aux_preds.m"
      case (MR_Integer) 2:
#line 333 "add_mutable_aux_preds.m"
        {
#line 333 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_116;

#line 334 "add_mutable_aux_preds.m"
          {
#line 334 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_116 = parse_tree__prog_item__mutable_var_maybe_foreign_names_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_16);
          }
#line 337 "add_mutable_aux_preds.m"
          if ((hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_116 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 336 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_65_65 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_41;
#line 337 "add_mutable_aux_preds.m"
          else
#line 338 "add_mutable_aux_preds.m"
            {
#line 338 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignNames_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_116, (MR_Integer) 0)));
#line 341 "add_mutable_aux_preds.m"
              MR_String hlds__make_hlds__add_mutable_aux_preds___TargetMutableName_110;

#line 341 "add_mutable_aux_preds.m"
              {
#line 341 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__get_global_name_from_foreign_names_9_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39, hlds__make_hlds__add_mutable_aux_preds__Context_18, hlds__make_hlds__add_mutable_aux_preds__ModuleName_11, hlds__make_hlds__add_mutable_aux_preds__Name_12, (MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__ForeignNames_111, &hlds__make_hlds__add_mutable_aux_preds___TargetMutableName_110, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_41, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_65_65);
              }
#line 338 "add_mutable_aux_preds.m"
            }
#line 333 "add_mutable_aux_preds.m"
        }
#line 345 "add_mutable_aux_preds.m"
        break;
#line 345 "add_mutable_aux_preds.m"
      case (MR_Integer) 4:
#line 333 "add_mutable_aux_preds.m"
        {
#line 333 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_125;

#line 334 "add_mutable_aux_preds.m"
          {
#line 334 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_125 = parse_tree__prog_item__mutable_var_maybe_foreign_names_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_16);
          }
#line 337 "add_mutable_aux_preds.m"
          if ((hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_125 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 336 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_65_65 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_41;
#line 337 "add_mutable_aux_preds.m"
          else
#line 338 "add_mutable_aux_preds.m"
            {
#line 338 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignNames_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_125, (MR_Integer) 0)));
#line 341 "add_mutable_aux_preds.m"
              MR_String hlds__make_hlds__add_mutable_aux_preds___TargetMutableName_119;

#line 341 "add_mutable_aux_preds.m"
              {
#line 341 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__get_global_name_from_foreign_names_9_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39, hlds__make_hlds__add_mutable_aux_preds__Context_18, hlds__make_hlds__add_mutable_aux_preds__ModuleName_11, hlds__make_hlds__add_mutable_aux_preds__Name_12, (MR_Integer) 4, hlds__make_hlds__add_mutable_aux_preds__ForeignNames_120, &hlds__make_hlds__add_mutable_aux_preds___TargetMutableName_119, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_41, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_65_65);
              }
#line 338 "add_mutable_aux_preds.m"
            }
#line 333 "add_mutable_aux_preds.m"
        }
#line 345 "add_mutable_aux_preds.m"
        break;
#line 345 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 346 "add_mutable_aux_preds.m"
        {
#line 346 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__Pieces_26;
#line 346 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__Msg_27;
#line 346 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__Spec_28;
#line 346 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_45_45;
#line 346 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_48_48;
#line 346 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_49_49;
#line 346 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__V_50_50;
#line 346 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_57_57;
#line 346 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_58_58;
#line 346 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_62_62;

#line 349 "add_mutable_aux_preds.m"
          {
#line 349 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_50_50 = libs__globals__compilation_target_string_1_f_0(hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_21);
          }
#line 349 "add_mutable_aux_preds.m"
          {
#line 349 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_49_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 349 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__V_49_49, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_50_50));
#line 349 "add_mutable_aux_preds.m"
          }
#line 349 "add_mutable_aux_preds.m"
          {
#line 349 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 349 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_48_48, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_49_49));
#line 349 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[9])));
#line 349 "add_mutable_aux_preds.m"
          }
#line 348 "add_mutable_aux_preds.m"
          {
#line 348 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 348 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_45_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[36])));
#line 348 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_45_45, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_48_48));
#line 348 "add_mutable_aux_preds.m"
          }
#line 347 "add_mutable_aux_preds.m"
          {
#line 347 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__Pieces_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 347 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__Pieces_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[35])));
#line 347 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__Pieces_26, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_45_45));
#line 347 "add_mutable_aux_preds.m"
          }
#line 351 "add_mutable_aux_preds.m"
          {
#line 351 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 351 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_58_58, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Pieces_26));
#line 351 "add_mutable_aux_preds.m"
          }
#line 351 "add_mutable_aux_preds.m"
          {
#line 351 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 351 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_57_57, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_58_58));
#line 351 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 351 "add_mutable_aux_preds.m"
          }
#line 351 "add_mutable_aux_preds.m"
          {
#line 351 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__Msg_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 351 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Msg_27, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_18));
#line 351 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Msg_27, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_57_57));
#line 351 "add_mutable_aux_preds.m"
          }
#line 352 "add_mutable_aux_preds.m"
          {
#line 352 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_62_62, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Msg_27));
#line 352 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 352 "add_mutable_aux_preds.m"
          }
#line 352 "add_mutable_aux_preds.m"
          {
#line 352 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__Spec_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 352 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Spec_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 352 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Spec_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 352 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Spec_28, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_62_62));
#line 352 "add_mutable_aux_preds.m"
          }
#line 353 "add_mutable_aux_preds.m"
          {
#line 353 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 353 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_65_65, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Spec_28));
#line 353 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_65_65, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_41));
#line 353 "add_mutable_aux_preds.m"
          }
#line 346 "add_mutable_aux_preds.m"
        }
#line 345 "add_mutable_aux_preds.m"
        break;
#line 345 "add_mutable_aux_preds.m"
      case (MR_Integer) 3:
#line 333 "add_mutable_aux_preds.m"
        {
#line 333 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_134;

#line 334 "add_mutable_aux_preds.m"
          {
#line 334 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_134 = parse_tree__prog_item__mutable_var_maybe_foreign_names_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_16);
          }
#line 337 "add_mutable_aux_preds.m"
          if ((hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_134 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 336 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_65_65 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_41;
#line 337 "add_mutable_aux_preds.m"
          else
#line 338 "add_mutable_aux_preds.m"
            {
#line 338 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignNames_129 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_134, (MR_Integer) 0)));
#line 341 "add_mutable_aux_preds.m"
              MR_String hlds__make_hlds__add_mutable_aux_preds___TargetMutableName_128;

#line 341 "add_mutable_aux_preds.m"
              {
#line 341 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__get_global_name_from_foreign_names_9_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39, hlds__make_hlds__add_mutable_aux_preds__Context_18, hlds__make_hlds__add_mutable_aux_preds__ModuleName_11, hlds__make_hlds__add_mutable_aux_preds__Name_12, (MR_Integer) 2, hlds__make_hlds__add_mutable_aux_preds__ForeignNames_129, &hlds__make_hlds__add_mutable_aux_preds___TargetMutableName_128, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_41, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_65_65);
              }
#line 338 "add_mutable_aux_preds.m"
            }
#line 333 "add_mutable_aux_preds.m"
        }
#line 345 "add_mutable_aux_preds.m"
        break;
#line 345 "add_mutable_aux_preds.m"
    }
#line 357 "add_mutable_aux_preds.m"
    {
#line 357 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__TrailMutableUpdates_29 = parse_tree__prog_item__mutable_var_trailed_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_16);
    }
#line 358 "add_mutable_aux_preds.m"
    {
#line 358 "add_mutable_aux_preds.m"
      libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_20, (MR_Integer) 219, &hlds__make_hlds__add_mutable_aux_preds__UseTrail_30);
    }
#line 360 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__TrailMutableUpdates_29 == (MR_Integer) 1);
#line 360 "add_mutable_aux_preds.m"
    if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 361 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__UseTrail_30 == (MR_Integer) 0);
#line 369 "add_mutable_aux_preds.m"
    if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 364 "add_mutable_aux_preds.m"
      {
#line 364 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__TrailMsg_32;
#line 364 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__TrailSpec_33;
#line 364 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_83_83;

#line 365 "add_mutable_aux_preds.m"
        {
#line 365 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__TrailMsg_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 365 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TrailMsg_32, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_18));
#line 365 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TrailMsg_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[37])));
#line 365 "add_mutable_aux_preds.m"
        }
#line 367 "add_mutable_aux_preds.m"
        {
#line 367 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 367 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_83_83, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TrailMsg_32));
#line 367 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 367 "add_mutable_aux_preds.m"
        }
#line 366 "add_mutable_aux_preds.m"
        {
#line 366 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__TrailSpec_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 366 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TrailSpec_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 366 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TrailSpec_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 366 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TrailSpec_33, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_83_83));
#line 366 "add_mutable_aux_preds.m"
        }
#line 368 "add_mutable_aux_preds.m"
        {
#line 368 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 368 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_85_85, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TrailSpec_33));
#line 368 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_85_85, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_65_65));
#line 368 "add_mutable_aux_preds.m"
        }
#line 364 "add_mutable_aux_preds.m"
      }
#line 369 "add_mutable_aux_preds.m"
    else
#line 369 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_85_85 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_65_65;
#line 375 "add_mutable_aux_preds.m"
    {
#line 375 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__hlds_code_util__is_valid_mutable_inst_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39, hlds__make_hlds__add_mutable_aux_preds__Inst_15);
    }
#line 377 "add_mutable_aux_preds.m"
    if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 377 "add_mutable_aux_preds.m"
      *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_42 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_85_85;
#line 377 "add_mutable_aux_preds.m"
    else
#line 381 "add_mutable_aux_preds.m"
      {
#line 381 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__DummyInstVarset_34;
#line 381 "add_mutable_aux_preds.m"
        MR_String hlds__make_hlds__add_mutable_aux_preds__InstStr_35;
#line 381 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__InvalidInstPieces_36;
#line 381 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__InvalidInstMsg_37;
#line 381 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__InvalidInstSpec_38;
#line 381 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_89_89;
#line 381 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_90_90;
#line 381 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_101_101;
#line 381 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_102_102;
#line 381 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_106_106;

#line 381 "add_mutable_aux_preds.m"
        {
#line 381 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__DummyInstVarset_34 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
        }
#line 382 "add_mutable_aux_preds.m"
        {
#line 382 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__InstStr_35 = hlds__hlds_out__hlds_out_mode__mercury_expanded_inst_to_string_4_f_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39, hlds__make_hlds__add_mutable_aux_preds__DummyInstVarset_34, hlds__make_hlds__add_mutable_aux_preds__Inst_15);
        }
#line 384 "add_mutable_aux_preds.m"
        {
#line 384 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_90_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 384 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__V_90_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 384 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__V_90_90, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InstStr_35));
#line 384 "add_mutable_aux_preds.m"
        }
#line 384 "add_mutable_aux_preds.m"
        {
#line 384 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 384 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_89_89, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_90_90));
#line 384 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[20])));
#line 384 "add_mutable_aux_preds.m"
        }
#line 384 "add_mutable_aux_preds.m"
        {
#line 384 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__InvalidInstPieces_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 384 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__InvalidInstPieces_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[38])));
#line 384 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__InvalidInstPieces_36, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_89_89));
#line 384 "add_mutable_aux_preds.m"
        }
#line 389 "add_mutable_aux_preds.m"
        {
#line 389 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 389 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_102_102, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InvalidInstPieces_36));
#line 389 "add_mutable_aux_preds.m"
        }
#line 389 "add_mutable_aux_preds.m"
        {
#line 389 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 389 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_101_101, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_102_102));
#line 389 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 389 "add_mutable_aux_preds.m"
        }
#line 389 "add_mutable_aux_preds.m"
        {
#line 389 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__InvalidInstMsg_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 389 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__InvalidInstMsg_37, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_18));
#line 389 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__InvalidInstMsg_37, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_101_101));
#line 389 "add_mutable_aux_preds.m"
        }
#line 391 "add_mutable_aux_preds.m"
        {
#line 391 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 391 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_106_106, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InvalidInstMsg_37));
#line 391 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_106_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 391 "add_mutable_aux_preds.m"
        }
#line 390 "add_mutable_aux_preds.m"
        {
#line 390 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__InvalidInstSpec_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 390 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__InvalidInstSpec_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 390 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__InvalidInstSpec_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 390 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__InvalidInstSpec_38, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_106_106));
#line 390 "add_mutable_aux_preds.m"
        }
#line 392 "add_mutable_aux_preds.m"
        {
#line 392 "add_mutable_aux_preds.m"
          MR_Word base;
#line 392 "add_mutable_aux_preds.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 392 "add_mutable_aux_preds.m"
          *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_42 = base;
#line 392 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InvalidInstSpec_38));
#line 392 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_85_85));
#line 392 "add_mutable_aux_preds.m"
        }
#line 381 "add_mutable_aux_preds.m"
      }
#line 318 "add_mutable_aux_preds.m"
    *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_40 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39;
#line 318 "add_mutable_aux_preds.m"
  }
#line 28 "add_mutable_aux_preds.m"
}

#line 1033 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_main_get_set_preds__1033__1_2_p_0(
#line 1033 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__AttachToIO_37,
#line 1033 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_252)
#line 1033 "add_mutable_aux_preds.m"
{
#line 1033 "add_mutable_aux_preds.m"
  {
#line 1033 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__AttachToIO_37 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_252);

#line 1033 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1033 "add_mutable_aux_preds.m"
  }
#line 1033 "add_mutable_aux_preds.m"
}

#line 835 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_unsafe_get_set_preds__835__1_2_p_0(
#line 835 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_31,
#line 835 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_66)
#line 835 "add_mutable_aux_preds.m"
{
#line 835 "add_mutable_aux_preds.m"
  {
#line 835 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__IsConstant_31 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_66);

#line 835 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 835 "add_mutable_aux_preds.m"
  }
#line 835 "add_mutable_aux_preds.m"
}

#line 749 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_lock_unlock_preds__749__1_2_p_0(
#line 749 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_31,
#line 749 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_59)
#line 749 "add_mutable_aux_preds.m"
{
#line 749 "add_mutable_aux_preds.m"
  {
#line 749 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__IsConstant_31 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_59);

#line 749 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 749 "add_mutable_aux_preds.m"
  }
#line 749 "add_mutable_aux_preds.m"
}

#line 688 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_pre_init_pred__688__1_2_p_0(
#line 688 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_31,
#line 688 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_52)
#line 688 "add_mutable_aux_preds.m"
{
#line 688 "add_mutable_aux_preds.m"
  {
#line 688 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__IsConstant_31 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_52);

#line 688 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 688 "add_mutable_aux_preds.m"
  }
#line 688 "add_mutable_aux_preds.m"
}

#line 308 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__308__1_2_p_0(
#line 308 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Constraints_29,
#line 308 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_78)
#line 308 "add_mutable_aux_preds.m"
{
#line 308 "add_mutable_aux_preds.m"
  {
#line 308 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 308 "add_mutable_aux_preds.m"
    {
#line 308 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = parse_tree__prog_data____Unify____prog_constraints_0_0(hlds__make_hlds__add_mutable_aux_preds__Constraints_29, hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_78);
    }
#line 308 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 308 "add_mutable_aux_preds.m"
  }
#line 308 "add_mutable_aux_preds.m"
}

#line 306 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__306__1_2_p_0(
#line 306 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeDetism_23,
#line 306 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_72)
#line 306 "add_mutable_aux_preds.m"
{
#line 306 "add_mutable_aux_preds.m"
  {
#line 306 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 306 "add_mutable_aux_preds.m"
    {
#line 306 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[6], ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__MaybeDetism_23)), ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_72)));
    }
#line 306 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 306 "add_mutable_aux_preds.m"
  }
#line 306 "add_mutable_aux_preds.m"
}

#line 305 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__305__1_2_p_0(
#line 305 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__WithInst_22,
#line 305 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_67)
#line 305 "add_mutable_aux_preds.m"
{
#line 305 "add_mutable_aux_preds.m"
  {
#line 305 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 305 "add_mutable_aux_preds.m"
    {
#line 305 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[5], ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__WithInst_22)), ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_67)));
    }
#line 305 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 305 "add_mutable_aux_preds.m"
  }
#line 305 "add_mutable_aux_preds.m"
}

#line 304 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__304__1_2_p_0(
#line 304 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__WithType_21,
#line 304 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_62)
#line 304 "add_mutable_aux_preds.m"
{
#line 304 "add_mutable_aux_preds.m"
  {
#line 304 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 304 "add_mutable_aux_preds.m"
    {
#line 304 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[4], ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__WithType_21)), ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_62)));
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
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredOrFunc_19,
#line 302 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_57)
#line 302 "add_mutable_aux_preds.m"
{
#line 302 "add_mutable_aux_preds.m"
  {
#line 302 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__PredOrFunc_19 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_57);

#line 302 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 302 "add_mutable_aux_preds.m"
  }
#line 302 "add_mutable_aux_preds.m"
}

#line 301 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__301__1_2_p_0(
#line 301 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ExistQVars_27,
#line 301 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_52)
#line 301 "add_mutable_aux_preds.m"
{
#line 301 "add_mutable_aux_preds.m"
  {
#line 301 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 301 "add_mutable_aux_preds.m"
    {
#line 301 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[3], ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ExistQVars_27)), ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_52)));
    }
#line 301 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 301 "add_mutable_aux_preds.m"
  }
#line 301 "add_mutable_aux_preds.m"
}

#line 299 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__299__1_2_p_0(
#line 299 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__InstVarSet_26,
#line 299 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_47)
#line 299 "add_mutable_aux_preds.m"
{
#line 299 "add_mutable_aux_preds.m"
  {
#line 299 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 299 "add_mutable_aux_preds.m"
    {
#line 299 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[1], ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InstVarSet_26)), ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_47)));
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
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_25,
#line 297 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_42)
#line 297 "add_mutable_aux_preds.m"
{
#line 297 "add_mutable_aux_preds.m"
  {
#line 297 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 297 "add_mutable_aux_preds.m"
    {
#line 297 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[0], ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_25)), ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_42)));
    }
#line 297 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 297 "add_mutable_aux_preds.m"
  }
#line 297 "add_mutable_aux_preds.m"
}

#line 131 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_mutable_aux_pred_decls__131__1_2_p_0(
#line 131 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__AttachToIO_29,
#line 131 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_83)
#line 131 "add_mutable_aux_preds.m"
{
#line 131 "add_mutable_aux_preds.m"
  {
#line 131 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__AttachToIO_29 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_83);

#line 131 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 131 "add_mutable_aux_preds.m"
  }
#line 131 "add_mutable_aux_preds.m"
}

#line 129 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_mutable_aux_pred_decls__129__1_2_p_0(
#line 129 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_26,
#line 129 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_78)
#line 129 "add_mutable_aux_preds.m"
{
#line 129 "add_mutable_aux_preds.m"
  {
#line 129 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_26 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_78);

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
  MR_Word hlds__make_hlds__add_mutable_aux_preds__LockUnlock_25,
#line 127 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_73)
#line 127 "add_mutable_aux_preds.m"
{
#line 127 "add_mutable_aux_preds.m"
  {
#line 127 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__LockUnlock_25 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_73);

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
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInit_24,
#line 125 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_68)
#line 125 "add_mutable_aux_preds.m"
{
#line 125 "add_mutable_aux_preds.m"
  {
#line 125 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__PreInit_24 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_68);

#line 125 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 125 "add_mutable_aux_preds.m"
  }
#line 125 "add_mutable_aux_preds.m"
}

#line 1344 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_unsafe_get_set_preds_0_0(
#line 1344 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1344 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1344 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3)
#line 1344 "add_mutable_aux_preds.m"
{
#line 1344 "add_mutable_aux_preds.m"
  {
#line 1344 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1344 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar1_4 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2;
#line 1344 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar2_5 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3;

#line 1344 "add_mutable_aux_preds.m"
    {
#line 1344 "add_mutable_aux_preds.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar1_4, hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar2_5);
#line 1344 "add_mutable_aux_preds.m"
      return;
    }
#line 1344 "add_mutable_aux_preds.m"
  }
#line 1344 "add_mutable_aux_preds.m"
}

#line 1344 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_unsafe_get_set_preds_0_0(
#line 1344 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1,
#line 1344 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2)
#line 1344 "add_mutable_aux_preds.m"
{
#line 3074 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 3076 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);

#line 3079 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 3081 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 1344 "add_mutable_aux_preds.m"
}

#line 1336 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_pre_init_pred_0_0(
#line 1336 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1336 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1336 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3)
#line 1336 "add_mutable_aux_preds.m"
{
#line 1336 "add_mutable_aux_preds.m"
  {
#line 1336 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1336 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar1_4 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2;
#line 1336 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar2_5 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3;

#line 1336 "add_mutable_aux_preds.m"
    {
#line 1336 "add_mutable_aux_preds.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar1_4, hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar2_5);
#line 1336 "add_mutable_aux_preds.m"
      return;
    }
#line 1336 "add_mutable_aux_preds.m"
  }
#line 1336 "add_mutable_aux_preds.m"
}

#line 1336 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_pre_init_pred_0_0(
#line 1336 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1,
#line 1336 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2)
#line 1336 "add_mutable_aux_preds.m"
{
#line 3127 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 3129 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);

#line 3132 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 3134 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 1336 "add_mutable_aux_preds.m"
}

#line 1340 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_lock_unlock_preds_0_0(
#line 1340 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1340 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1340 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3)
#line 1340 "add_mutable_aux_preds.m"
{
#line 1340 "add_mutable_aux_preds.m"
  {
#line 1340 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1340 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar1_4 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2;
#line 1340 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar2_5 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3;

#line 1340 "add_mutable_aux_preds.m"
    {
#line 1340 "add_mutable_aux_preds.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar1_4, hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar2_5);
#line 1340 "add_mutable_aux_preds.m"
      return;
    }
#line 1340 "add_mutable_aux_preds.m"
  }
#line 1340 "add_mutable_aux_preds.m"
}

#line 1340 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_lock_unlock_preds_0_0(
#line 1340 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1,
#line 1340 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2)
#line 1340 "add_mutable_aux_preds.m"
{
#line 3180 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 3182 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);

#line 3185 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 3187 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 1340 "add_mutable_aux_preds.m"
}

#line 1348 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_target_params_0_0(
#line 1348 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1348 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1348 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3)
#line 1348 "add_mutable_aux_preds.m"
{
#line 1348 "add_mutable_aux_preds.m"
  {
#line 1348 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1348 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__CastX_21 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2;
#line 1348 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__CastY_22 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3;

#line 1348 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__CastX_21 == hlds__make_hlds__add_mutable_aux_preds__CastY_22);
#line 1348 "add_mutable_aux_preds.m"
    if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 3216 "hlds.make_hlds.add_mutable_aux_preds.c"
      *hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1 = (MR_Integer) 0;
#line 1348 "add_mutable_aux_preds.m"
    else
#line 1348 "add_mutable_aux_preds.m"
      {
#line 1348 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1348 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 1348 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1348 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1348 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1348 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 1348 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1348 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 1348 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1348 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1348 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1348 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 1348 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_16_16;
#line 1348 "add_mutable_aux_preds.m"
        MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_29_29 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_4_4;
#line 1348 "add_mutable_aux_preds.m"
        MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_30_30 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_10_10;

#line 1348 "add_mutable_aux_preds.m"
        {
#line 1348 "add_mutable_aux_preds.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__make_hlds__add_mutable_aux_preds__V_16_16, hlds__make_hlds__add_mutable_aux_preds__V_29_29, hlds__make_hlds__add_mutable_aux_preds__V_30_30);
        }
#line 3258 "hlds.make_hlds.add_mutable_aux_preds.c"
        hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_16_16 == (MR_Integer) 0);
#line 1348 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__succeeded = !(hlds__make_hlds__add_mutable_aux_preds__succeeded);
#line 1348 "add_mutable_aux_preds.m"
        if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1348 "add_mutable_aux_preds.m"
          *hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1 = hlds__make_hlds__add_mutable_aux_preds__V_16_16;
#line 1348 "add_mutable_aux_preds.m"
        else
#line 1348 "add_mutable_aux_preds.m"
          {
#line 1348 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_17_17;
#line 1348 "add_mutable_aux_preds.m"
            MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_31_31 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_5_5;
#line 1348 "add_mutable_aux_preds.m"
            MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_32_32 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_11_11;

#line 1348 "add_mutable_aux_preds.m"
            {
#line 1348 "add_mutable_aux_preds.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__make_hlds__add_mutable_aux_preds__V_17_17, hlds__make_hlds__add_mutable_aux_preds__V_31_31, hlds__make_hlds__add_mutable_aux_preds__V_32_32);
            }
#line 3282 "hlds.make_hlds.add_mutable_aux_preds.c"
            hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_17_17 == (MR_Integer) 0);
#line 1348 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__succeeded = !(hlds__make_hlds__add_mutable_aux_preds__succeeded);
#line 1348 "add_mutable_aux_preds.m"
            if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1348 "add_mutable_aux_preds.m"
              *hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1 = hlds__make_hlds__add_mutable_aux_preds__V_17_17;
#line 1348 "add_mutable_aux_preds.m"
            else
#line 1348 "add_mutable_aux_preds.m"
              {
#line 1348 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_18_18;
#line 1348 "add_mutable_aux_preds.m"
                MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_33_33 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_6_6;
#line 1348 "add_mutable_aux_preds.m"
                MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_34_34 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_12_12;

#line 1348 "add_mutable_aux_preds.m"
                {
#line 1348 "add_mutable_aux_preds.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__make_hlds__add_mutable_aux_preds__V_18_18, hlds__make_hlds__add_mutable_aux_preds__V_33_33, hlds__make_hlds__add_mutable_aux_preds__V_34_34);
                }
#line 3306 "hlds.make_hlds.add_mutable_aux_preds.c"
                hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_18_18 == (MR_Integer) 0);
#line 1348 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__succeeded = !(hlds__make_hlds__add_mutable_aux_preds__succeeded);
#line 1348 "add_mutable_aux_preds.m"
                if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1348 "add_mutable_aux_preds.m"
                  *hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1 = hlds__make_hlds__add_mutable_aux_preds__V_18_18;
#line 1348 "add_mutable_aux_preds.m"
                else
#line 1348 "add_mutable_aux_preds.m"
                  {
#line 1348 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_19_19;
#line 1348 "add_mutable_aux_preds.m"
                    MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_35_35 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_7_7;
#line 1348 "add_mutable_aux_preds.m"
                    MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_36_36 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_13_13;

#line 1348 "add_mutable_aux_preds.m"
                    {
#line 1348 "add_mutable_aux_preds.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__make_hlds__add_mutable_aux_preds__V_19_19, hlds__make_hlds__add_mutable_aux_preds__V_35_35, hlds__make_hlds__add_mutable_aux_preds__V_36_36);
                    }
#line 3330 "hlds.make_hlds.add_mutable_aux_preds.c"
                    hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_19_19 == (MR_Integer) 0);
#line 1348 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__succeeded = !(hlds__make_hlds__add_mutable_aux_preds__succeeded);
#line 1348 "add_mutable_aux_preds.m"
                    if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1348 "add_mutable_aux_preds.m"
                      *hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1 = hlds__make_hlds__add_mutable_aux_preds__V_19_19;
#line 1348 "add_mutable_aux_preds.m"
                    else
#line 1348 "add_mutable_aux_preds.m"
                      {
#line 1348 "add_mutable_aux_preds.m"
                        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_20_20;
#line 1348 "add_mutable_aux_preds.m"
                        MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_37_37 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_8_8;
#line 1348 "add_mutable_aux_preds.m"
                        MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_38_38 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_14_14;

#line 1348 "add_mutable_aux_preds.m"
                        {
#line 1348 "add_mutable_aux_preds.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__make_hlds__add_mutable_aux_preds__V_20_20, hlds__make_hlds__add_mutable_aux_preds__V_37_37, hlds__make_hlds__add_mutable_aux_preds__V_38_38);
                        }
#line 3354 "hlds.make_hlds.add_mutable_aux_preds.c"
                        hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_20_20 == (MR_Integer) 0);
#line 1348 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__succeeded = !(hlds__make_hlds__add_mutable_aux_preds__succeeded);
#line 1348 "add_mutable_aux_preds.m"
                        if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1348 "add_mutable_aux_preds.m"
                          *hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1 = hlds__make_hlds__add_mutable_aux_preds__V_20_20;
#line 1348 "add_mutable_aux_preds.m"
                        else
#line 1348 "add_mutable_aux_preds.m"
                          {
#line 1348 "add_mutable_aux_preds.m"
                            MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_39_39 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_9_9;
#line 1348 "add_mutable_aux_preds.m"
                            MR_Integer hlds__make_hlds__add_mutable_aux_preds__V_40_40 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__V_15_15;

#line 1348 "add_mutable_aux_preds.m"
                            {
#line 1348 "add_mutable_aux_preds.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, hlds__make_hlds__add_mutable_aux_preds__V_39_39, hlds__make_hlds__add_mutable_aux_preds__V_40_40);
#line 1348 "add_mutable_aux_preds.m"
                              return;
                            }
#line 1348 "add_mutable_aux_preds.m"
                          }
#line 1348 "add_mutable_aux_preds.m"
                      }
#line 1348 "add_mutable_aux_preds.m"
                  }
#line 1348 "add_mutable_aux_preds.m"
              }
#line 1348 "add_mutable_aux_preds.m"
          }
#line 1348 "add_mutable_aux_preds.m"
      }
#line 1348 "add_mutable_aux_preds.m"
  }
#line 1348 "add_mutable_aux_preds.m"
}

#line 1348 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_target_params_0_0(
#line 1348 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1348 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2)
#line 1348 "add_mutable_aux_preds.m"
{
#line 1348 "add_mutable_aux_preds.m"
  {
#line 1348 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1348 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__CastX_15 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1;
#line 1348 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__CastY_16 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2;

#line 1348 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__CastX_15 == hlds__make_hlds__add_mutable_aux_preds__CastY_16);
#line 1348 "add_mutable_aux_preds.m"
    if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1348 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = MR_TRUE;
#line 1348 "add_mutable_aux_preds.m"
    else
#line 1348 "add_mutable_aux_preds.m"
      {
#line 1348 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_3_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1348 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 1348 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1348 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1348 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1348 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 1348 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1348 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 1348 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1348 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1348 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1348 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);

#line 3448 "hlds.make_hlds.add_mutable_aux_preds.c"
        hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_3_3 == hlds__make_hlds__add_mutable_aux_preds__V_9_9);
#line 1348 "add_mutable_aux_preds.m"
        if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1348 "add_mutable_aux_preds.m"
          {
#line 3454 "hlds.make_hlds.add_mutable_aux_preds.c"
            hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_4_4 == hlds__make_hlds__add_mutable_aux_preds__V_10_10);
#line 1348 "add_mutable_aux_preds.m"
            if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1348 "add_mutable_aux_preds.m"
              {
#line 3460 "hlds.make_hlds.add_mutable_aux_preds.c"
                hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_5_5 == hlds__make_hlds__add_mutable_aux_preds__V_11_11);
#line 1348 "add_mutable_aux_preds.m"
                if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1348 "add_mutable_aux_preds.m"
                  {
#line 3466 "hlds.make_hlds.add_mutable_aux_preds.c"
                    hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_6_6 == hlds__make_hlds__add_mutable_aux_preds__V_12_12);
#line 1348 "add_mutable_aux_preds.m"
                    if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1348 "add_mutable_aux_preds.m"
                      {
#line 3472 "hlds.make_hlds.add_mutable_aux_preds.c"
                        hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_7_7 == hlds__make_hlds__add_mutable_aux_preds__V_13_13);
#line 1348 "add_mutable_aux_preds.m"
                        if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 3476 "hlds.make_hlds.add_mutable_aux_preds.c"
                          hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_8_8 == hlds__make_hlds__add_mutable_aux_preds__V_14_14);
#line 1348 "add_mutable_aux_preds.m"
                      }
#line 1348 "add_mutable_aux_preds.m"
                  }
#line 1348 "add_mutable_aux_preds.m"
              }
#line 1348 "add_mutable_aux_preds.m"
          }
#line 1348 "add_mutable_aux_preds.m"
      }
#line 1348 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1348 "add_mutable_aux_preds.m"
  }
#line 1348 "add_mutable_aux_preds.m"
}

#line 1330 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_impl_lang_0_0(
#line 1330 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1330 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1330 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3)
#line 1330 "add_mutable_aux_preds.m"
{
#line 1330 "add_mutable_aux_preds.m"
  {
#line 1330 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1330 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar1_4 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2;
#line 1330 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar2_5 = (MR_Integer) hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3;

#line 1330 "add_mutable_aux_preds.m"
    {
#line 1330 "add_mutable_aux_preds.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar1_4, hlds__make_hlds__add_mutable_aux_preds__Cast_HeadVar2_5);
#line 1330 "add_mutable_aux_preds.m"
      return;
    }
#line 1330 "add_mutable_aux_preds.m"
  }
#line 1330 "add_mutable_aux_preds.m"
}

#line 1330 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_impl_lang_0_0(
#line 1330 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1,
#line 1330 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2)
#line 1330 "add_mutable_aux_preds.m"
{
#line 3536 "hlds.make_hlds.add_mutable_aux_preds.c"
  {
#line 3538 "hlds.make_hlds.add_mutable_aux_preds.c"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_1 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);

#line 3541 "hlds.make_hlds.add_mutable_aux_preds.c"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 3543 "hlds.make_hlds.add_mutable_aux_preds.c"
  }
#line 1330 "add_mutable_aux_preds.m"
}

#line 1362 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__get_mutable_target_params_3_p_0(
#line 1362 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_4,
#line 1362 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_5,
#line 1362 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_6)
#line 1362 "add_mutable_aux_preds.m"
{
#line 1365 "add_mutable_aux_preds.m"
  {
#line 1365 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1365 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Globals_7;
#line 1365 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_8;

#line 1369 "add_mutable_aux_preds.m"
    {
#line 1369 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_4, &hlds__make_hlds__add_mutable_aux_preds__Globals_7);
    }
#line 1370 "add_mutable_aux_preds.m"
    {
#line 1370 "add_mutable_aux_preds.m"
      libs__globals__get_target_2_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_7, &hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_8);
    }
#line 1434 "add_mutable_aux_preds.m"
#line 1434 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_8) {
#line 1434 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1434 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 1418 "add_mutable_aux_preds.m"
        {
#line 1418 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__HighLevelCode_14;
#line 1418 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_15;
#line 1418 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_17;
#line 1418 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInit_18;
#line 1418 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__LockUnlock_19;
#line 1418 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_20;
#line 1418 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_21;

#line 1379 "add_mutable_aux_preds.m"
          {
#line 1379 "add_mutable_aux_preds.m"
            libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_7, (MR_Integer) 255, &hlds__make_hlds__add_mutable_aux_preds__HighLevelCode_14);
          }
#line 1383 "add_mutable_aux_preds.m"
#line 1383 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__HighLevelCode_14) {
#line 1383 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1383 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 1382 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_15 = (MR_Integer) 1;
#line 1383 "add_mutable_aux_preds.m"
              break;
#line 1383 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 1385 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_15 = (MR_Integer) 0;
#line 1383 "add_mutable_aux_preds.m"
              break;
#line 1383 "add_mutable_aux_preds.m"
          }
#line 1419 "add_mutable_aux_preds.m"
          {
#line 1419 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__IsConstant_17 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_5);
          }
#line 1425 "add_mutable_aux_preds.m"
#line 1425 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__IsConstant_17) {
#line 1425 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1425 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 1426 "add_mutable_aux_preds.m"
              {
#line 1427 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__PreInit_18 = (MR_Integer) 0;
#line 1428 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__LockUnlock_19 = (MR_Integer) 0;
#line 1429 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_20 = (MR_Integer) 0;
#line 1426 "add_mutable_aux_preds.m"
              }
#line 1425 "add_mutable_aux_preds.m"
              break;
#line 1425 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 1421 "add_mutable_aux_preds.m"
              {
#line 1422 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__PreInit_18 = (MR_Integer) 1;
#line 1423 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__LockUnlock_19 = (MR_Integer) 1;
#line 1424 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_20 = (MR_Integer) 1;
#line 1421 "add_mutable_aux_preds.m"
              }
#line 1425 "add_mutable_aux_preds.m"
              break;
#line 1425 "add_mutable_aux_preds.m"
          }
#line 1431 "add_mutable_aux_preds.m"
          {
#line 1431 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__TargetParams_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1431 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_21, 0) = ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 2)) | ((((hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_15 << (MR_Integer) 5)) | ((((hlds__make_hlds__add_mutable_aux_preds__PreInit_18 << (MR_Integer) 6)) | ((((hlds__make_hlds__add_mutable_aux_preds__LockUnlock_19 << (MR_Integer) 7)) | ((hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_20 << (MR_Integer) 8)))))))))))));
#line 1431 "add_mutable_aux_preds.m"
          }
#line 1433 "add_mutable_aux_preds.m"
          {
#line 1433 "add_mutable_aux_preds.m"
            MR_Word base;
#line 1433 "add_mutable_aux_preds.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1433 "add_mutable_aux_preds.m"
            *hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_6 = base;
#line 1433 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetParams_21));
#line 1433 "add_mutable_aux_preds.m"
          }
#line 1418 "add_mutable_aux_preds.m"
        }
#line 1434 "add_mutable_aux_preds.m"
        break;
#line 1434 "add_mutable_aux_preds.m"
      case (MR_Integer) 2:
#line 1418 "add_mutable_aux_preds.m"
        {
#line 1418 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_16;
#line 1418 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInit0_25;
#line 1418 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_29;
#line 1418 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInit_30;
#line 1418 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__LockUnlock_31;
#line 1418 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_32;
#line 1418 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_33;

#line 1391 "add_mutable_aux_preds.m"
          {
#line 1391 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_16 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_5);
          }
#line 1395 "add_mutable_aux_preds.m"
#line 1395 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_16) {
#line 1395 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1395 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 1397 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__PreInit0_25 = (MR_Integer) 0;
#line 1395 "add_mutable_aux_preds.m"
              break;
#line 1395 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 1394 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__PreInit0_25 = (MR_Integer) 1;
#line 1395 "add_mutable_aux_preds.m"
              break;
#line 1395 "add_mutable_aux_preds.m"
          }
#line 1419 "add_mutable_aux_preds.m"
          {
#line 1419 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__IsConstant_29 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_5);
          }
#line 1425 "add_mutable_aux_preds.m"
#line 1425 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__IsConstant_29) {
#line 1425 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1425 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 1426 "add_mutable_aux_preds.m"
              {
#line 1427 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__PreInit_30 = (MR_Integer) 0;
#line 1428 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__LockUnlock_31 = (MR_Integer) 0;
#line 1429 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_32 = (MR_Integer) 0;
#line 1426 "add_mutable_aux_preds.m"
              }
#line 1425 "add_mutable_aux_preds.m"
              break;
#line 1425 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 1421 "add_mutable_aux_preds.m"
              {
#line 1422 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__PreInit_30 = hlds__make_hlds__add_mutable_aux_preds__PreInit0_25;
#line 1423 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__LockUnlock_31 = (MR_Integer) 0;
#line 1424 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_32 = (MR_Integer) 1;
#line 1421 "add_mutable_aux_preds.m"
              }
#line 1425 "add_mutable_aux_preds.m"
              break;
#line 1425 "add_mutable_aux_preds.m"
          }
#line 1431 "add_mutable_aux_preds.m"
          {
#line 1431 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__TargetParams_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1431 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_33, 0) = ((MR_Box) (((MR_Integer) 1 | (((((MR_Integer) 1 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 5)) | ((((hlds__make_hlds__add_mutable_aux_preds__PreInit_30 << (MR_Integer) 6)) | ((((hlds__make_hlds__add_mutable_aux_preds__LockUnlock_31 << (MR_Integer) 7)) | ((hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_32 << (MR_Integer) 8)))))))))))));
#line 1431 "add_mutable_aux_preds.m"
          }
#line 1433 "add_mutable_aux_preds.m"
          {
#line 1433 "add_mutable_aux_preds.m"
            MR_Word base;
#line 1433 "add_mutable_aux_preds.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1433 "add_mutable_aux_preds.m"
            *hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_6 = base;
#line 1433 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetParams_33));
#line 1433 "add_mutable_aux_preds.m"
          }
#line 1418 "add_mutable_aux_preds.m"
        }
#line 1434 "add_mutable_aux_preds.m"
        break;
#line 1434 "add_mutable_aux_preds.m"
      case (MR_Integer) 4:
#line 1418 "add_mutable_aux_preds.m"
        {
#line 1418 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_40;
#line 1418 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInit_41;
#line 1418 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__LockUnlock_42;
#line 1418 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_43;
#line 1418 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_44;

#line 1419 "add_mutable_aux_preds.m"
          {
#line 1419 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__IsConstant_40 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_5);
          }
#line 1425 "add_mutable_aux_preds.m"
#line 1425 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__IsConstant_40) {
#line 1425 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1425 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 1426 "add_mutable_aux_preds.m"
              {
#line 1427 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__PreInit_41 = (MR_Integer) 0;
#line 1428 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__LockUnlock_42 = (MR_Integer) 0;
#line 1429 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_43 = (MR_Integer) 0;
#line 1426 "add_mutable_aux_preds.m"
              }
#line 1425 "add_mutable_aux_preds.m"
              break;
#line 1425 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 1421 "add_mutable_aux_preds.m"
              {
#line 1422 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__PreInit_41 = (MR_Integer) 0;
#line 1423 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__LockUnlock_42 = (MR_Integer) 0;
#line 1424 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_43 = (MR_Integer) 0;
#line 1421 "add_mutable_aux_preds.m"
              }
#line 1425 "add_mutable_aux_preds.m"
              break;
#line 1425 "add_mutable_aux_preds.m"
          }
#line 1431 "add_mutable_aux_preds.m"
          {
#line 1431 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__TargetParams_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1431 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_44, 0) = ((MR_Box) (((MR_Integer) 3 | (((((MR_Integer) 4 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 5)) | ((((hlds__make_hlds__add_mutable_aux_preds__PreInit_41 << (MR_Integer) 6)) | ((((hlds__make_hlds__add_mutable_aux_preds__LockUnlock_42 << (MR_Integer) 7)) | ((hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_43 << (MR_Integer) 8)))))))))))));
#line 1431 "add_mutable_aux_preds.m"
          }
#line 1433 "add_mutable_aux_preds.m"
          {
#line 1433 "add_mutable_aux_preds.m"
            MR_Word base;
#line 1433 "add_mutable_aux_preds.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1433 "add_mutable_aux_preds.m"
            *hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_6 = base;
#line 1433 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetParams_44));
#line 1433 "add_mutable_aux_preds.m"
          }
#line 1418 "add_mutable_aux_preds.m"
        }
#line 1434 "add_mutable_aux_preds.m"
        break;
#line 1434 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 1437 "add_mutable_aux_preds.m"
        *hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1434 "add_mutable_aux_preds.m"
        break;
#line 1434 "add_mutable_aux_preds.m"
      case (MR_Integer) 3:
#line 1418 "add_mutable_aux_preds.m"
        {
#line 1418 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_51;
#line 1418 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInit_52;
#line 1418 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__LockUnlock_53;
#line 1418 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_54;
#line 1418 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_55;

#line 1419 "add_mutable_aux_preds.m"
          {
#line 1419 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__IsConstant_51 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_5);
          }
#line 1425 "add_mutable_aux_preds.m"
#line 1425 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__IsConstant_51) {
#line 1425 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1425 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 1426 "add_mutable_aux_preds.m"
              {
#line 1427 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__PreInit_52 = (MR_Integer) 0;
#line 1428 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__LockUnlock_53 = (MR_Integer) 0;
#line 1429 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_54 = (MR_Integer) 0;
#line 1426 "add_mutable_aux_preds.m"
              }
#line 1425 "add_mutable_aux_preds.m"
              break;
#line 1425 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 1421 "add_mutable_aux_preds.m"
              {
#line 1422 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__PreInit_52 = (MR_Integer) 0;
#line 1423 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__LockUnlock_53 = (MR_Integer) 0;
#line 1424 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_54 = (MR_Integer) 1;
#line 1421 "add_mutable_aux_preds.m"
              }
#line 1425 "add_mutable_aux_preds.m"
              break;
#line 1425 "add_mutable_aux_preds.m"
          }
#line 1431 "add_mutable_aux_preds.m"
          {
#line 1431 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__TargetParams_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1431 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_55, 0) = ((MR_Box) (((MR_Integer) 2 | (((((MR_Integer) 2 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 5)) | ((((hlds__make_hlds__add_mutable_aux_preds__PreInit_52 << (MR_Integer) 6)) | ((((hlds__make_hlds__add_mutable_aux_preds__LockUnlock_53 << (MR_Integer) 7)) | ((hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_54 << (MR_Integer) 8)))))))))))));
#line 1431 "add_mutable_aux_preds.m"
          }
#line 1433 "add_mutable_aux_preds.m"
          {
#line 1433 "add_mutable_aux_preds.m"
            MR_Word base;
#line 1433 "add_mutable_aux_preds.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1433 "add_mutable_aux_preds.m"
            *hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_6 = base;
#line 1433 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetParams_55));
#line 1433 "add_mutable_aux_preds.m"
          }
#line 1418 "add_mutable_aux_preds.m"
        }
#line 1434 "add_mutable_aux_preds.m"
        break;
#line 1434 "add_mutable_aux_preds.m"
    }
#line 1365 "add_mutable_aux_preds.m"
  }
#line 1362 "add_mutable_aux_preds.m"
}

#line 1321 "add_mutable_aux_preds.m"
static MR_String MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__global_foreign_type_name_4_f_0(
#line 1321 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1321 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_2,
#line 1321 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_3,
#line 1321 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_4)
#line 1321 "add_mutable_aux_preds.m"
{
#line 1324 "add_mutable_aux_preds.m"
  {
#line 1324 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1324 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__HeadVar__5_5;

#line 1324 "add_mutable_aux_preds.m"
#line 1324 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1) {
#line 1324 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1324 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 1324 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__HeadVar__5_5 = (MR_String) "MR_Word";
#line 1324 "add_mutable_aux_preds.m"
        break;
#line 1324 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 1326 "add_mutable_aux_preds.m"
        {
#line 1326 "add_mutable_aux_preds.m"
          return hlds__make_hlds__add_mutable_aux_preds__HeadVar__5_5 = backend_libs__foreign__mercury_exported_type_to_string_3_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_3, hlds__make_hlds__add_mutable_aux_preds__Lang_2, hlds__make_hlds__add_mutable_aux_preds__Type_4);
        }
#line 1324 "add_mutable_aux_preds.m"
        break;
#line 1324 "add_mutable_aux_preds.m"
    }
#line 1324 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__HeadVar__5_5;
#line 1324 "add_mutable_aux_preds.m"
  }
#line 1321 "add_mutable_aux_preds.m"
}

#line 1299 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__get_matching_foreign_names_3_p_0(
#line 1299 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 1299 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 1299 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3)
#line 1299 "add_mutable_aux_preds.m"
{
#line 1302 "add_mutable_aux_preds.m"
  {
#line 1302 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 1302 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1302 "add_mutable_aux_preds.m"
      *hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1302 "add_mutable_aux_preds.m"
    else
#line 1304 "add_mutable_aux_preds.m"
      {
#line 1304 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignName_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, (MR_Integer) 0)));
#line 1304 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignNames_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, (MR_Integer) 1)));
#line 1304 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__TailMatchingForeignNames_9;
#line 1304 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_10;
#line 1307 "add_mutable_aux_preds.m"
        MR_String hlds__make_hlds__add_mutable_aux_preds__V_11_11;

#line 1305 "add_mutable_aux_preds.m"
        {
#line 1305 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__get_matching_foreign_names_3_p_0(hlds__make_hlds__add_mutable_aux_preds__ForeignNames_6, hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, &hlds__make_hlds__add_mutable_aux_preds__TailMatchingForeignNames_9);
        }
#line 1307 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignName_5, (MR_Integer) 0)));
#line 1307 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignName_5, (MR_Integer) 1)));
#line 1308 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_10 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);
#line 1310 "add_mutable_aux_preds.m"
        if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1309 "add_mutable_aux_preds.m"
          {
#line 1309 "add_mutable_aux_preds.m"
            MR_Word base;
#line 1309 "add_mutable_aux_preds.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1309 "add_mutable_aux_preds.m"
            *hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3 = base;
#line 1309 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ForeignName_5));
#line 1309 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TailMatchingForeignNames_9));
#line 1309 "add_mutable_aux_preds.m"
          }
#line 1310 "add_mutable_aux_preds.m"
        else
#line 1311 "add_mutable_aux_preds.m"
          *hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3 = hlds__make_hlds__add_mutable_aux_preds__TailMatchingForeignNames_9;
#line 1304 "add_mutable_aux_preds.m"
      }
#line 1302 "add_mutable_aux_preds.m"
  }
#line 1299 "add_mutable_aux_preds.m"
}

#line 1265 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__get_global_name_from_foreign_names_9_p_0(
#line 1265 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_10,
#line 1265 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_11,
#line 1265 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_12,
#line 1265 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_13,
#line 1265 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_14,
#line 1265 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignNames_15,
#line 1265 "add_mutable_aux_preds.m"
  MR_String * hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_16,
#line 1265 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_28,
#line 1265 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_29)
#line 1265 "add_mutable_aux_preds.m"
{
#line 1272 "add_mutable_aux_preds.m"
  {
#line 1272 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1272 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetMutableNames_18;

#line 1273 "add_mutable_aux_preds.m"
    {
#line 1273 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__get_matching_foreign_names_3_p_0(hlds__make_hlds__add_mutable_aux_preds__ForeignNames_15, hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_14, &hlds__make_hlds__add_mutable_aux_preds__TargetMutableNames_18);
    }
#line 1279 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__TargetMutableNames_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1276 "add_mutable_aux_preds.m"
      {
#line 1278 "add_mutable_aux_preds.m"
        {
#line 1278 "add_mutable_aux_preds.m"
          *hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_16 = parse_tree__prog_mutable__mutable_c_var_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_12, hlds__make_hlds__add_mutable_aux_preds__MutableName_13);
        }
#line 1276 "add_mutable_aux_preds.m"
        *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_29 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_28;
#line 1276 "add_mutable_aux_preds.m"
      }
#line 1279 "add_mutable_aux_preds.m"
    else
#line 1279 "add_mutable_aux_preds.m"
      {
#line 1279 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__TargetMutableNames_18, (MR_Integer) 1)));
#line 1279 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__TargetMutableNames_18, (MR_Integer) 0)));

#line 1279 "add_mutable_aux_preds.m"
        if ((hlds__make_hlds__add_mutable_aux_preds__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1280 "add_mutable_aux_preds.m"
          {
#line 1280 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_56_56, (MR_Integer) 0)));

#line 1280 "add_mutable_aux_preds.m"
            *hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_16 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_56_56, (MR_Integer) 1)));
#line 1280 "add_mutable_aux_preds.m"
            *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_29 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_28;
#line 1280 "add_mutable_aux_preds.m"
          }
#line 1279 "add_mutable_aux_preds.m"
        else
#line 1284 "add_mutable_aux_preds.m"
          {
#line 1284 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__Globals_23;
#line 1284 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_24;
#line 1284 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__Pieces_25;
#line 1284 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__Msg_26;
#line 1284 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__Spec_27;
#line 1284 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_33_33;
#line 1284 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_36_36;
#line 1284 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_37_37;
#line 1284 "add_mutable_aux_preds.m"
            MR_String hlds__make_hlds__add_mutable_aux_preds__V_38_38;
#line 1284 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_45_45;
#line 1284 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_46_46;
#line 1284 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_50_50;

#line 1285 "add_mutable_aux_preds.m"
            {
#line 1285 "add_mutable_aux_preds.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_10, &hlds__make_hlds__add_mutable_aux_preds__Globals_23);
            }
#line 1286 "add_mutable_aux_preds.m"
            {
#line 1286 "add_mutable_aux_preds.m"
              libs__globals__get_target_2_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_23, &hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_24);
            }
#line 1289 "add_mutable_aux_preds.m"
            {
#line 1289 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_38_38 = libs__globals__compilation_target_string_1_f_0(hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_24);
            }
#line 1289 "add_mutable_aux_preds.m"
            {
#line 1289 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_37_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1289 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__V_37_37, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_38_38));
#line 1289 "add_mutable_aux_preds.m"
            }
#line 1289 "add_mutable_aux_preds.m"
            {
#line 1289 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1289 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_36_36, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_37_37));
#line 1289 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[9])));
#line 1289 "add_mutable_aux_preds.m"
            }
#line 1288 "add_mutable_aux_preds.m"
            {
#line 1288 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1288 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_33_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[34])));
#line 1288 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_33_33, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_36_36));
#line 1288 "add_mutable_aux_preds.m"
            }
#line 1287 "add_mutable_aux_preds.m"
            {
#line 1287 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__Pieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1287 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__Pieces_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[33])));
#line 1287 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__Pieces_25, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_33_33));
#line 1287 "add_mutable_aux_preds.m"
            }
#line 1291 "add_mutable_aux_preds.m"
            {
#line 1291 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1291 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_46_46, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Pieces_25));
#line 1291 "add_mutable_aux_preds.m"
            }
#line 1291 "add_mutable_aux_preds.m"
            {
#line 1291 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1291 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_45_45, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_46_46));
#line 1291 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1291 "add_mutable_aux_preds.m"
            }
#line 1291 "add_mutable_aux_preds.m"
            {
#line 1291 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__Msg_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1291 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Msg_26, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_11));
#line 1291 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Msg_26, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_45_45));
#line 1291 "add_mutable_aux_preds.m"
            }
#line 1292 "add_mutable_aux_preds.m"
            {
#line 1292 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1292 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_50_50, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Msg_26));
#line 1292 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1292 "add_mutable_aux_preds.m"
            }
#line 1292 "add_mutable_aux_preds.m"
            {
#line 1292 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__Spec_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1292 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Spec_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1292 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Spec_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1292 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Spec_27, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_50_50));
#line 1292 "add_mutable_aux_preds.m"
            }
#line 1293 "add_mutable_aux_preds.m"
            {
#line 1293 "add_mutable_aux_preds.m"
              MR_Word base;
#line 1293 "add_mutable_aux_preds.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1293 "add_mutable_aux_preds.m"
              *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_29 = base;
#line 1293 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Spec_27));
#line 1293 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_28));
#line 1293 "add_mutable_aux_preds.m"
            }
#line 1296 "add_mutable_aux_preds.m"
            {
#line 1296 "add_mutable_aux_preds.m"
              *hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_16 = parse_tree__prog_mutable__mutable_c_var_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_12, hlds__make_hlds__add_mutable_aux_preds__MutableName_13);
            }
#line 1284 "add_mutable_aux_preds.m"
          }
#line 1279 "add_mutable_aux_preds.m"
      }
#line 1272 "add_mutable_aux_preds.m"
  }
#line 1265 "add_mutable_aux_preds.m"
}

#line 1179 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_init_pred_11_p_0(
#line 1179 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12,
#line 1179 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_13,
#line 1179 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_14,
#line 1179 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_15,
#line 1179 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_16,
#line 1179 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39,
#line 1179 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_40,
#line 1179 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_41,
#line 1179 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_42,
#line 1179 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_43,
#line 1179 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_44)
#line 1179 "add_mutable_aux_preds.m"
{
#line 1185 "add_mutable_aux_preds.m"
  {
#line 1185 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1185 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_20;
#line 1185 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_21;
#line 1185 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InitTerm_23;
#line 1185 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__VarSetMutable_26;
#line 1185 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_27;
#line 1185 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__X_29;
#line 1185 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__VarSetMutableX_30;
#line 1185 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__VarX_31;
#line 1185 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_32;
#line 1185 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__CallSetExpr_33;
#line 1185 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnifyCallSetExpr_34;
#line 1185 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_35;
#line 1185 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InitPredName_37;
#line 1185 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_47_47;
#line 1185 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_54_54;
#line 1185 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_56_56;
#line 1185 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__CName_71;
#line 1185 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_72;
#line 1185 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__FPEInfo_73;
#line 1185 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_26_76;
#line 1187 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Type_22;
#line 1187 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Inst_24;
#line 1187 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___MutAttrs_25;
#line 1187 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_28;

#line 1186 "add_mutable_aux_preds.m"
    {
#line 1186 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_20);
    }
#line 1187 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutableName_21 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12, (MR_Integer) 0)));
#line 1187 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Type_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12, (MR_Integer) 1)));
#line 1187 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__InitTerm_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12, (MR_Integer) 2)));
#line 1187 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Inst_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12, (MR_Integer) 3)));
#line 1187 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___MutAttrs_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12, (MR_Integer) 4)));
#line 1187 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__VarSetMutable_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12, (MR_Integer) 5)));
#line 1187 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Context_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12, (MR_Integer) 6)));
#line 1187 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___SeqNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_12, (MR_Integer) 7)));
#line 1189 "add_mutable_aux_preds.m"
    {
#line 1189 "add_mutable_aux_preds.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "X", &hlds__make_hlds__add_mutable_aux_preds__X_29, hlds__make_hlds__add_mutable_aux_preds__VarSetMutable_26, &hlds__make_hlds__add_mutable_aux_preds__VarSetMutableX_30);
    }
#line 1190 "add_mutable_aux_preds.m"
    {
#line 1190 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__VarX_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1190 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__VarX_31, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_29));
#line 1190 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__VarX_31, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_27));
#line 1190 "add_mutable_aux_preds.m"
    }
#line 1192 "add_mutable_aux_preds.m"
    {
#line 1192 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1192 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
#line 1192 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_32, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_27));
#line 1192 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_32, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarX_31));
#line 1192 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_32, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InitTerm_23));
#line 1192 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_32, 4) = ((MR_Box) ((MR_Integer) 2));
#line 1192 "add_mutable_aux_preds.m"
    }
#line 1193 "add_mutable_aux_preds.m"
    {
#line 1193 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1193 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_47_47, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarX_31));
#line 1193 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1193 "add_mutable_aux_preds.m"
    }
#line 1193 "add_mutable_aux_preds.m"
    {
#line 1193 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__CallSetExpr_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1193 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallSetExpr_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 1193 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallSetExpr_33, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_27));
#line 1193 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallSetExpr_33, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_14));
#line 1193 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallSetExpr_33, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_47_47));
#line 1193 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallSetExpr_33, 4) = ((MR_Box) ((MR_Integer) 2));
#line 1193 "add_mutable_aux_preds.m"
    }
#line 1194 "add_mutable_aux_preds.m"
    {
#line 1194 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__UnifyCallSetExpr_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1194 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnifyCallSetExpr_34, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_27));
#line 1194 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnifyCallSetExpr_34, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_32));
#line 1194 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnifyCallSetExpr_34, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallSetExpr_33));
#line 1194 "add_mutable_aux_preds.m"
    }
#line 1198 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1197 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_35 = hlds__make_hlds__add_mutable_aux_preds__UnifyCallSetExpr_34;
#line 1198 "add_mutable_aux_preds.m"
    else
#line 1199 "add_mutable_aux_preds.m"
      {
#line 1199 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_13, (MR_Integer) 0)));

#line 1200 "add_mutable_aux_preds.m"
        {
#line 1200 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1200 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_35, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_27));
#line 1200 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_35, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_36));
#line 1200 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_35, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnifyCallSetExpr_34));
#line 1200 "add_mutable_aux_preds.m"
        }
#line 1199 "add_mutable_aux_preds.m"
      }
#line 1202 "add_mutable_aux_preds.m"
    {
#line 1202 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__InitPredName_37 = parse_tree__prog_mutable__mutable_init_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_20, hlds__make_hlds__add_mutable_aux_preds__MutableName_21);
    }
#line 1205 "add_mutable_aux_preds.m"
    {
#line 1205 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__add_mutable_aux_preds__VarSetMutableX_30, (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__InitPredName_37, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_35, hlds__make_hlds__add_mutable_aux_preds__Status_16, hlds__make_hlds__add_mutable_aux_preds__Context_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_54_54, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_41, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_42, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_43, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_56_56);
    }
#line 1227 "add_mutable_aux_preds.m"
    {
#line 1227 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_new_user_init_pred_5_p_0(hlds__make_hlds__add_mutable_aux_preds__InitPredName_37, (MR_Integer) 0, &hlds__make_hlds__add_mutable_aux_preds__CName_71, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_54_54, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_26_76);
    }
#line 1228 "add_mutable_aux_preds.m"
    {
#line 1228 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1228 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_72, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InitPredName_37));
#line 1228 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1228 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_72, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1228 "add_mutable_aux_preds.m"
    }
#line 1229 "add_mutable_aux_preds.m"
    {
#line 1229 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__FPEInfo_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1229 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_73, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Lang_15));
#line 1229 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_73, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_72));
#line 1229 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_73, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CName_71));
#line 1229 "add_mutable_aux_preds.m"
    }
#line 1232 "add_mutable_aux_preds.m"
    {
#line 1232 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0((MR_Word) MR_mkword(MR_mktag(1), ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[32]))), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_73, hlds__make_hlds__add_mutable_aux_preds__Context_27, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_26_76, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_40, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_56_56, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_44);
#line 1232 "add_mutable_aux_preds.m"
      return;
    }
#line 1185 "add_mutable_aux_preds.m"
  }
#line 1179 "add_mutable_aux_preds.m"
}

#line 1033 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_main_get_set_preds_14_p_0_1(
#line 1033 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 1033 "add_mutable_aux_preds.m"
{
#line 1033 "add_mutable_aux_preds.m"
  {
#line 1033 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1033 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 1033 "add_mutable_aux_preds.m"
    {
#line 1033 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_main_get_set_preds__1033__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 1033 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1033 "add_mutable_aux_preds.m"
  }
#line 1033 "add_mutable_aux_preds.m"
}

#line 955 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_main_get_set_preds_14_p_0(
#line 955 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15,
#line 955 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_16,
#line 955 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17,
#line 955 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_18,
#line 955 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_19,
#line 955 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_20,
#line 955 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21,
#line 955 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_22,
#line 955 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_85,
#line 955 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_86,
#line 955 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_87,
#line 955 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_88,
#line 955 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_89,
#line 955 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_90)
#line 955 "add_mutable_aux_preds.m"
{
#line 964 "add_mutable_aux_preds.m"
  {
#line 964 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 964 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_253_253;
#line 964 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_26;
#line 964 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_27;
#line 964 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_30;
#line 964 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_31;
#line 964 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_33;
#line 964 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_35;
#line 964 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_36;
#line 964 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__AttachToIO_37;
#line 964 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ImplLang_38;
#line 964 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_40;
#line 964 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__X_44;
#line 964 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_45;
#line 964 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_92_92;
#line 966 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Type_28;
#line 966 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___InitTerm_29;
#line 966 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___VarSetMutable_32;
#line 966 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_34;
#line 971 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Lang_39;
#line 971 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___PreInit_41;
#line 971 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___LockUnlock_42;
#line 971 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_43;

#line 965 "add_mutable_aux_preds.m"
    {
#line 965 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_85, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_26);
    }
#line 966 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutableName_27 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15, (MR_Integer) 0)));
#line 966 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Type_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15, (MR_Integer) 1)));
#line 966 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___InitTerm_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15, (MR_Integer) 2)));
#line 966 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Inst_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15, (MR_Integer) 3)));
#line 966 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutAttrs_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15, (MR_Integer) 4)));
#line 966 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___VarSetMutable_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15, (MR_Integer) 5)));
#line 966 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Context_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15, (MR_Integer) 6)));
#line 966 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___SeqNum_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_15, (MR_Integer) 7)));
#line 968 "add_mutable_aux_preds.m"
    {
#line 968 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsConstant_35 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_31);
    }
#line 969 "add_mutable_aux_preds.m"
    {
#line 969 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_36 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_31);
    }
#line 970 "add_mutable_aux_preds.m"
    {
#line 970 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__AttachToIO_37 = parse_tree__prog_item__mutable_var_attach_to_io_state_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_31);
    }
#line 971 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__ImplLang_38 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_16, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 971 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Lang_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_16, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 971 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_16, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 971 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___PreInit_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_16, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 971 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___LockUnlock_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_16, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 971 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_16, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 4722 "hlds.make_hlds.add_mutable_aux_preds.c"
    hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_253_253 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 973 "add_mutable_aux_preds.m"
    {
#line 973 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_92_92 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_253_253);
    }
#line 973 "add_mutable_aux_preds.m"
    {
#line 973 "add_mutable_aux_preds.m"
      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_253_253, (MR_String) "X", &hlds__make_hlds__add_mutable_aux_preds__X_44, hlds__make_hlds__add_mutable_aux_preds__V_92_92, &hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_45);
    }
#line 1035 "add_mutable_aux_preds.m"
#line 1035 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__IsConstant_35) {
#line 1035 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1035 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 976 "add_mutable_aux_preds.m"
        {
#line 976 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_254_254;
#line 976 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__ConstantGetPredName_46;
#line 976 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__ConstantGetAttrs0_48;
#line 976 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__ConstantGetAttrs_49;
#line 976 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__ConstantGetCode_51;
#line 976 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__ConstantSetCode_52;
#line 976 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_53;
#line 976 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_54;
#line 976 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_225_225;
#line 976 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_226_226;
#line 976 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_228_228;
#line 976 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_230_230;
#line 976 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_231_231;
#line 976 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_232_232;
#line 976 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_234_234;
#line 976 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_235_235;
#line 976 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_237_237;
#line 976 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_239_239;
#line 976 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_240_240;
#line 976 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_243_243;
#line 976 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_244_244;
#line 976 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_248_248;

#line 977 "add_mutable_aux_preds.m"
          {
#line 977 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__ConstantGetPredName_46 = parse_tree__prog_mutable__mutable_get_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_26, hlds__make_hlds__add_mutable_aux_preds__MutableName_27);
          }
#line 979 "add_mutable_aux_preds.m"
          {
#line 979 "add_mutable_aux_preds.m"
            *hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21 = parse_tree__prog_mutable__mutable_secret_set_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_26, hlds__make_hlds__add_mutable_aux_preds__MutableName_27);
          }
#line 983 "add_mutable_aux_preds.m"
          {
#line 983 "add_mutable_aux_preds.m"
            parse_tree__prog_data__set_purity_3_p_0((MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__Attrs_18, &hlds__make_hlds__add_mutable_aux_preds__ConstantGetAttrs0_48);
          }
#line 984 "add_mutable_aux_preds.m"
          {
#line 984 "add_mutable_aux_preds.m"
            parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__ConstantGetAttrs0_48, &hlds__make_hlds__add_mutable_aux_preds__ConstantGetAttrs_49);
          }
#line 993 "add_mutable_aux_preds.m"
#line 993 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__ImplLang_38) {
#line 993 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 993 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 993 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 993 "add_mutable_aux_preds.m"
            case (MR_Integer) 2:
#line 990 "add_mutable_aux_preds.m"
              {
#line 990 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_221_221;

#line 991 "add_mutable_aux_preds.m"
                {
#line 991 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_221_221 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17, (MR_String) ";\n");
                }
#line 991 "add_mutable_aux_preds.m"
                {
#line 991 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__ConstantGetCode_51 = mercury__string__f_43_43_2_f_0((MR_String) "X = ", hlds__make_hlds__add_mutable_aux_preds__V_221_221);
                }
#line 992 "add_mutable_aux_preds.m"
                {
#line 992 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__ConstantSetCode_52 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17, (MR_String) " = X;\n");
                }
#line 990 "add_mutable_aux_preds.m"
              }
#line 993 "add_mutable_aux_preds.m"
              break;
#line 993 "add_mutable_aux_preds.m"
            case (MR_Integer) 3:
#line 994 "add_mutable_aux_preds.m"
              {
#line 994 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_203_203;
#line 994 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_205_205;
#line 994 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_218_218;

#line 1000 "add_mutable_aux_preds.m"
                {
#line 1000 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_205_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1000 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_205_205, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17));
#line 1000 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_205_205, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[28])));
#line 1000 "add_mutable_aux_preds.m"
                }
#line 999 "add_mutable_aux_preds.m"
                {
#line 999 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_203_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 999 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_203_203, 0) = ((MR_Box) ((MR_String) "\'ML_erlang_global_server\' ! {get_mutable, "));
#line 999 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_203_203, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_205_205));
#line 999 "add_mutable_aux_preds.m"
                }
#line 998 "add_mutable_aux_preds.m"
                {
#line 998 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__ConstantGetCode_51 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_203_203);
                }
#line 1008 "add_mutable_aux_preds.m"
                {
#line 1008 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_218_218 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17, (MR_String) ", X}");
                }
#line 1007 "add_mutable_aux_preds.m"
                {
#line 1007 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__ConstantSetCode_52 = mercury__string__f_43_43_2_f_0((MR_String) "\'ML_erlang_global_server\' ! {set_mutable, ", hlds__make_hlds__add_mutable_aux_preds__V_218_218);
                }
#line 994 "add_mutable_aux_preds.m"
              }
#line 993 "add_mutable_aux_preds.m"
              break;
#line 993 "add_mutable_aux_preds.m"
          }
#line 1013 "add_mutable_aux_preds.m"
          {
#line 1013 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_228_228 = parse_tree__prog_mode__out_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_30);
          }
#line 1013 "add_mutable_aux_preds.m"
          {
#line 1013 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_226_226 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1013 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_226_226, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_44));
#line 1013 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_226_226, 1) = ((MR_Box) ((MR_String) "X"));
#line 1013 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_226_226, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_228_228));
#line 1013 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_226_226, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_40));
#line 1013 "add_mutable_aux_preds.m"
          }
#line 1013 "add_mutable_aux_preds.m"
          {
#line 1013 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_225_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1013 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_225_225, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_226_226));
#line 1013 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_225_225, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1013 "add_mutable_aux_preds.m"
          }
#line 4924 "hlds.make_hlds.add_mutable_aux_preds.c"
          hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_254_254 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
#line 1015 "add_mutable_aux_preds.m"
          {
#line 1015 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_230_230 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_254_254);
          }
#line 1016 "add_mutable_aux_preds.m"
          {
#line 1016 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_232_232 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1016 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_232_232, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1016 "add_mutable_aux_preds.m"
          }
#line 1016 "add_mutable_aux_preds.m"
          {
#line 1016 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_231_231 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1016 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_231_231, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ConstantGetCode_51));
#line 1016 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_231_231, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_232_232));
#line 1016 "add_mutable_aux_preds.m"
          }
#line 1010 "add_mutable_aux_preds.m"
          {
#line 1010 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1010 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_53, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ConstantGetAttrs_49));
#line 1010 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_53, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ConstantGetPredName_46));
#line 1010 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_53, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1010 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_53, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_225_225));
#line 1010 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_53, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_45));
#line 1010 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_53, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_230_230));
#line 1010 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_53, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_231_231));
#line 1010 "add_mutable_aux_preds.m"
          }
#line 1023 "add_mutable_aux_preds.m"
          {
#line 1023 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_237_237 = parse_tree__prog_mode__in_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_30);
          }
#line 1023 "add_mutable_aux_preds.m"
          {
#line 1023 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_235_235 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1023 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_235_235, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_44));
#line 1023 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_235_235, 1) = ((MR_Box) ((MR_String) "X"));
#line 1023 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_235_235, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_237_237));
#line 1023 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_235_235, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_40));
#line 1023 "add_mutable_aux_preds.m"
          }
#line 1023 "add_mutable_aux_preds.m"
          {
#line 1023 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_234_234 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1023 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_234_234, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_235_235));
#line 1023 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_234_234, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1023 "add_mutable_aux_preds.m"
          }
#line 1025 "add_mutable_aux_preds.m"
          {
#line 1025 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_239_239 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_254_254);
          }
#line 1026 "add_mutable_aux_preds.m"
          {
#line 1026 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_240_240 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1026 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_240_240, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ConstantSetCode_52));
#line 1026 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_240_240, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_232_232));
#line 1026 "add_mutable_aux_preds.m"
          }
#line 1020 "add_mutable_aux_preds.m"
          {
#line 1020 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1020 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_54, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Attrs_18));
#line 1020 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_54, 1) = ((MR_Box) (*hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21));
#line 1020 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_54, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1020 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_54, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_234_234));
#line 1020 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_54, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_45));
#line 1020 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_54, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_239_239));
#line 1020 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_54, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_240_240));
#line 1020 "add_mutable_aux_preds.m"
          }
#line 1028 "add_mutable_aux_preds.m"
          {
#line 1028 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_53, hlds__make_hlds__add_mutable_aux_preds__Status_22, hlds__make_hlds__add_mutable_aux_preds__Context_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_85, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_243_243, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_89, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_244_244);
          }
#line 1030 "add_mutable_aux_preds.m"
          {
#line 1030 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_54, hlds__make_hlds__add_mutable_aux_preds__Status_22, hlds__make_hlds__add_mutable_aux_preds__Context_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_243_243, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_86, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_244_244, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_90);
          }
#line 1033 "add_mutable_aux_preds.m"
          {
#line 1033 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_248_248 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1033 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_248_248, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[3]));
#line 1033 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_248_248, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__define_main_get_set_preds_14_p_0_1));
#line 1033 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_248_248, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1033 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_248_248, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__AttachToIO_37));
#line 1033 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_248_248, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1033 "add_mutable_aux_preds.m"
          }
#line 1033 "add_mutable_aux_preds.m"
          {
#line 1033 "add_mutable_aux_preds.m"
            mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_248_248, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_main_get_set_preds\'/14", (MR_String) "AttachToIO = mutable_attach_to_io_state");
          }
#line 976 "add_mutable_aux_preds.m"
          *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_88 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_87;
#line 976 "add_mutable_aux_preds.m"
        }
#line 1035 "add_mutable_aux_preds.m"
        break;
#line 1035 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 1036 "add_mutable_aux_preds.m"
        {
#line 1036 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__StdGetPredName_55;
#line 1036 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59;
#line 1036 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60;
#line 1036 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_170_170;
#line 1036 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_171_171;
#line 1036 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_172_172;

#line 1037 "add_mutable_aux_preds.m"
          {
#line 1037 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__StdGetPredName_55 = parse_tree__prog_mutable__mutable_get_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_26, hlds__make_hlds__add_mutable_aux_preds__MutableName_27);
          }
#line 1038 "add_mutable_aux_preds.m"
          {
#line 1038 "add_mutable_aux_preds.m"
            *hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21 = parse_tree__prog_mutable__mutable_set_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_26, hlds__make_hlds__add_mutable_aux_preds__MutableName_27);
          }
#line 1075 "add_mutable_aux_preds.m"
#line 1075 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__ImplLang_38) {
#line 1075 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1075 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 1075 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 1075 "add_mutable_aux_preds.m"
            case (MR_Integer) 2:
#line 1044 "add_mutable_aux_preds.m"
              {
#line 1044 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr_57;
#line 1044 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr_58;
#line 1044 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__StdPredArgs_63;
#line 1044 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__StdGetPredExpr_64;
#line 1044 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_158_158;
#line 1044 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_164_164;
#line 1044 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_165_165;
#line 1044 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_166_166;

#line 1048 "add_mutable_aux_preds.m"
                if ((hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1049 "add_mutable_aux_preds.m"
                  {
#line 1050 "add_mutable_aux_preds.m"
                    {
#line 1050 "add_mutable_aux_preds.m"
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_main_get_set_preds\'/14", (MR_String) "mutable_not_constant but MaybeUnsafeGetSetExprs = no");
#line 1050 "add_mutable_aux_preds.m"
                      return;
                    }
#line 1049 "add_mutable_aux_preds.m"
                  }
#line 1048 "add_mutable_aux_preds.m"
                else
#line 1046 "add_mutable_aux_preds.m"
                  {
#line 1046 "add_mutable_aux_preds.m"
                    MR_Tuple hlds__make_hlds__add_mutable_aux_preds__V_154_154 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_20, (MR_Integer) 0)));

#line 1047 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_154_154, (MR_Integer) 0)));
#line 1047 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_154_154, (MR_Integer) 1)));
#line 1046 "add_mutable_aux_preds.m"
                  }
#line 1057 "add_mutable_aux_preds.m"
                if ((hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1054 "add_mutable_aux_preds.m"
                  {
#line 1055 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59 = hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr_57;
#line 1056 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60 = hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr_58;
#line 1054 "add_mutable_aux_preds.m"
                  }
#line 1057 "add_mutable_aux_preds.m"
                else
#line 1058 "add_mutable_aux_preds.m"
                  {
#line 1058 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__CallLockExpr_61;
#line 1058 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr_62;
#line 1058 "add_mutable_aux_preds.m"
                    MR_Tuple hlds__make_hlds__add_mutable_aux_preds__V_155_155 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_19, (MR_Integer) 0)));
#line 1058 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_156_156;
#line 1058 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_157_157;

#line 1058 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__CallLockExpr_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_155_155, (MR_Integer) 0)));
#line 1058 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_155_155, (MR_Integer) 1)));
#line 1060 "add_mutable_aux_preds.m"
                    {
#line 1060 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__V_156_156 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1060 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_156_156, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1060 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_156_156, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr_57));
#line 1060 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_156_156, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr_62));
#line 1060 "add_mutable_aux_preds.m"
                    }
#line 1059 "add_mutable_aux_preds.m"
                    {
#line 1059 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1059 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1059 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallLockExpr_61));
#line 1059 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_156_156));
#line 1059 "add_mutable_aux_preds.m"
                    }
#line 1062 "add_mutable_aux_preds.m"
                    {
#line 1062 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__V_157_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1062 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_157_157, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1062 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_157_157, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr_58));
#line 1062 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_157_157, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr_62));
#line 1062 "add_mutable_aux_preds.m"
                    }
#line 1061 "add_mutable_aux_preds.m"
                    {
#line 1061 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1061 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1061 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallLockExpr_61));
#line 1061 "add_mutable_aux_preds.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_157_157));
#line 1061 "add_mutable_aux_preds.m"
                    }
#line 1058 "add_mutable_aux_preds.m"
                  }
#line 1065 "add_mutable_aux_preds.m"
                {
#line 1065 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1065 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_158_158, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_44));
#line 1065 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_158_158, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1065 "add_mutable_aux_preds.m"
                }
#line 1065 "add_mutable_aux_preds.m"
                {
#line 1065 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__StdPredArgs_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1065 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__StdPredArgs_63, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_158_158));
#line 1065 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__StdPredArgs_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1065 "add_mutable_aux_preds.m"
                }
#line 1066 "add_mutable_aux_preds.m"
                {
#line 1066 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__StdGetPredExpr_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1066 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__StdGetPredExpr_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1066 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__StdGetPredExpr_64, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1066 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__StdGetPredExpr_64, 2) = ((MR_Box) ((MR_Integer) 1));
#line 1066 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__StdGetPredExpr_64, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59));
#line 1066 "add_mutable_aux_preds.m"
                }
#line 1069 "add_mutable_aux_preds.m"
                {
#line 1069 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_45, (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__StdGetPredName_55, hlds__make_hlds__add_mutable_aux_preds__StdPredArgs_63, hlds__make_hlds__add_mutable_aux_preds__StdGetPredExpr_64, hlds__make_hlds__add_mutable_aux_preds__Status_22, hlds__make_hlds__add_mutable_aux_preds__Context_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_85, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_164_164, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_87, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_165_165, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_89, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_166_166);
                }
#line 1072 "add_mutable_aux_preds.m"
                {
#line 1072 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_45, (MR_Integer) 0, *hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21, hlds__make_hlds__add_mutable_aux_preds__StdPredArgs_63, hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60, hlds__make_hlds__add_mutable_aux_preds__Status_22, hlds__make_hlds__add_mutable_aux_preds__Context_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_164_164, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_170_170, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_165_165, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_171_171, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_166_166, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_172_172);
                }
#line 1044 "add_mutable_aux_preds.m"
              }
#line 1075 "add_mutable_aux_preds.m"
              break;
#line 1075 "add_mutable_aux_preds.m"
            case (MR_Integer) 3:
#line 1076 "add_mutable_aux_preds.m"
              {
#line 1076 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_256_256;
#line 1076 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__ThreadSafeAttrs_66;
#line 1076 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__ErlangGetAttrs_67;
#line 1076 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__ErlangSetAttrs_68;
#line 1076 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__StdGetCode_69;
#line 1076 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__StdSetCode_70;
#line 1076 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_71;
#line 1076 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_72;
#line 1076 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_120_120;
#line 1076 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_121_121;
#line 1076 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_123_123;
#line 1076 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_125_125;
#line 1076 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_126_126;
#line 1076 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_127_127;
#line 1076 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_129_129;
#line 1076 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_130_130;
#line 1076 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_132_132;
#line 1076 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_134_134;
#line 1076 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_135_135;
#line 1076 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_138_138;
#line 1076 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_139_139;
#line 1076 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_143_143;
#line 1076 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_144_144;

#line 1084 "add_mutable_aux_preds.m"
                {
#line 1084 "add_mutable_aux_preds.m"
                  parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__Attrs_18, &hlds__make_hlds__add_mutable_aux_preds__ThreadSafeAttrs_66);
                }
#line 1085 "add_mutable_aux_preds.m"
                {
#line 1085 "add_mutable_aux_preds.m"
                  parse_tree__prog_data__set_purity_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__ThreadSafeAttrs_66, &hlds__make_hlds__add_mutable_aux_preds__ErlangGetAttrs_67);
                }
#line 1086 "add_mutable_aux_preds.m"
                {
#line 1086 "add_mutable_aux_preds.m"
                  parse_tree__prog_data__set_purity_3_p_0((MR_Integer) 2, hlds__make_hlds__add_mutable_aux_preds__ThreadSafeAttrs_66, &hlds__make_hlds__add_mutable_aux_preds__ErlangSetAttrs_68);
                }
#line 1093 "add_mutable_aux_preds.m"
#line 1093 "add_mutable_aux_preds.m"
                switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_36) {
#line 1093 "add_mutable_aux_preds.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1093 "add_mutable_aux_preds.m"
                  case (MR_Integer) 0:
#line 1094 "add_mutable_aux_preds.m"
                    {
#line 1094 "add_mutable_aux_preds.m"
                      MR_Word hlds__make_hlds__add_mutable_aux_preds__V_96_96;
#line 1094 "add_mutable_aux_preds.m"
                      MR_Word hlds__make_hlds__add_mutable_aux_preds__V_98_98;
#line 1094 "add_mutable_aux_preds.m"
                      MR_String hlds__make_hlds__add_mutable_aux_preds__V_111_111;

#line 1100 "add_mutable_aux_preds.m"
                      {
#line 1100 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1100 "add_mutable_aux_preds.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_98_98, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17));
#line 1100 "add_mutable_aux_preds.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[28])));
#line 1100 "add_mutable_aux_preds.m"
                      }
#line 1099 "add_mutable_aux_preds.m"
                      {
#line 1099 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1099 "add_mutable_aux_preds.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_96_96, 0) = ((MR_Box) ((MR_String) "\'ML_erlang_global_server\' ! {get_mutable, "));
#line 1099 "add_mutable_aux_preds.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_96_96, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_98_98));
#line 1099 "add_mutable_aux_preds.m"
                      }
#line 1098 "add_mutable_aux_preds.m"
                      {
#line 1098 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__StdGetCode_69 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_96_96);
                      }
#line 1108 "add_mutable_aux_preds.m"
                      {
#line 1108 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__V_111_111 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17, (MR_String) ", X}");
                      }
#line 1107 "add_mutable_aux_preds.m"
                      {
#line 1107 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__StdSetCode_70 = mercury__string__f_43_43_2_f_0((MR_String) "\'ML_erlang_global_server\' ! {set_mutable, ", hlds__make_hlds__add_mutable_aux_preds__V_111_111);
                      }
#line 1094 "add_mutable_aux_preds.m"
                    }
#line 1093 "add_mutable_aux_preds.m"
                    break;
#line 1093 "add_mutable_aux_preds.m"
                  case (MR_Integer) 1:
#line 1088 "add_mutable_aux_preds.m"
                    {
#line 1088 "add_mutable_aux_preds.m"
                      MR_String hlds__make_hlds__add_mutable_aux_preds__V_114_114;
#line 1088 "add_mutable_aux_preds.m"
                      MR_String hlds__make_hlds__add_mutable_aux_preds__V_117_117;

#line 1090 "add_mutable_aux_preds.m"
                      {
#line 1090 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__V_114_114 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17, (MR_String) "})");
                      }
#line 1089 "add_mutable_aux_preds.m"
                      {
#line 1089 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__StdGetCode_69 = mercury__string__f_43_43_2_f_0((MR_String) "X = get({\'MR_thread_local_mutable\', ", hlds__make_hlds__add_mutable_aux_preds__V_114_114);
                      }
#line 1092 "add_mutable_aux_preds.m"
                      {
#line 1092 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__V_117_117 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17, (MR_String) "}, X)");
                      }
#line 1091 "add_mutable_aux_preds.m"
                      {
#line 1091 "add_mutable_aux_preds.m"
                        hlds__make_hlds__add_mutable_aux_preds__StdSetCode_70 = mercury__string__f_43_43_2_f_0((MR_String) "put({\'MR_thread_local_mutable\', ", hlds__make_hlds__add_mutable_aux_preds__V_117_117);
                      }
#line 1088 "add_mutable_aux_preds.m"
                    }
#line 1093 "add_mutable_aux_preds.m"
                    break;
#line 1093 "add_mutable_aux_preds.m"
                }
#line 1113 "add_mutable_aux_preds.m"
                {
#line 1113 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_123_123 = parse_tree__prog_mode__out_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_30);
                }
#line 1113 "add_mutable_aux_preds.m"
                {
#line 1113 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1113 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_121_121, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_44));
#line 1113 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_121_121, 1) = ((MR_Box) ((MR_String) "X"));
#line 1113 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_121_121, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_123_123));
#line 1113 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_121_121, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_40));
#line 1113 "add_mutable_aux_preds.m"
                }
#line 1113 "add_mutable_aux_preds.m"
                {
#line 1113 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1113 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_120_120, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_121_121));
#line 1113 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_120_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1113 "add_mutable_aux_preds.m"
                }
#line 5465 "hlds.make_hlds.add_mutable_aux_preds.c"
                hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_256_256 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
#line 1115 "add_mutable_aux_preds.m"
                {
#line 1115 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_125_125 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_256_256);
                }
#line 1116 "add_mutable_aux_preds.m"
                {
#line 1116 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1116 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_127_127, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1116 "add_mutable_aux_preds.m"
                }
#line 1116 "add_mutable_aux_preds.m"
                {
#line 1116 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_126_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1116 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_126_126, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__StdGetCode_69));
#line 1116 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_126_126, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_127_127));
#line 1116 "add_mutable_aux_preds.m"
                }
#line 1110 "add_mutable_aux_preds.m"
                {
#line 1110 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1110 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_71, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ErlangGetAttrs_67));
#line 1110 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_71, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__StdGetPredName_55));
#line 1110 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_71, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1110 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_71, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_120_120));
#line 1110 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_71, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_45));
#line 1110 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_71, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_125_125));
#line 1110 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_71, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_126_126));
#line 1110 "add_mutable_aux_preds.m"
                }
#line 1121 "add_mutable_aux_preds.m"
                {
#line 1121 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_132_132 = parse_tree__prog_mode__in_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_30);
                }
#line 1121 "add_mutable_aux_preds.m"
                {
#line 1121 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_130_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1121 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_130_130, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_44));
#line 1121 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_130_130, 1) = ((MR_Box) ((MR_String) "X"));
#line 1121 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_130_130, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_132_132));
#line 1121 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_130_130, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_40));
#line 1121 "add_mutable_aux_preds.m"
                }
#line 1121 "add_mutable_aux_preds.m"
                {
#line 1121 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1121 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_129_129, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_130_130));
#line 1121 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_129_129, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1121 "add_mutable_aux_preds.m"
                }
#line 1123 "add_mutable_aux_preds.m"
                {
#line 1123 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_134_134 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_256_256);
                }
#line 1124 "add_mutable_aux_preds.m"
                {
#line 1124 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_135_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1124 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_135_135, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__StdSetCode_70));
#line 1124 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_135_135, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_127_127));
#line 1124 "add_mutable_aux_preds.m"
                }
#line 1118 "add_mutable_aux_preds.m"
                {
#line 1118 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1118 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_72, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ErlangSetAttrs_68));
#line 1118 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_72, 1) = ((MR_Box) (*hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21));
#line 1118 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_72, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1118 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_72, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_129_129));
#line 1118 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_72, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_45));
#line 1118 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_72, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_134_134));
#line 1118 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_72, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_135_135));
#line 1118 "add_mutable_aux_preds.m"
                }
#line 1126 "add_mutable_aux_preds.m"
                {
#line 1126 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__StdGetFCInfo_71, hlds__make_hlds__add_mutable_aux_preds__Status_22, hlds__make_hlds__add_mutable_aux_preds__Context_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_85, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_138_138, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_89, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_139_139);
                }
#line 1128 "add_mutable_aux_preds.m"
                {
#line 1128 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__StdSetFCInfo_72, hlds__make_hlds__add_mutable_aux_preds__Status_22, hlds__make_hlds__add_mutable_aux_preds__Context_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_138_138, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_170_170, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_139_139, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_172_172);
                }
#line 1132 "add_mutable_aux_preds.m"
                {
#line 1132 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_144_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1132 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_144_144, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_44));
#line 1132 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_144_144, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1132 "add_mutable_aux_preds.m"
                }
#line 1132 "add_mutable_aux_preds.m"
                {
#line 1132 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1132 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_143_143, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_144_144));
#line 1132 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_143_143, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1132 "add_mutable_aux_preds.m"
                }
#line 1131 "add_mutable_aux_preds.m"
                {
#line 1131 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1131 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 1131 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1131 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__StdGetPredName_55));
#line 1131 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_143_143));
#line 1131 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59, 4) = ((MR_Box) ((MR_Integer) 1));
#line 1131 "add_mutable_aux_preds.m"
                }
#line 1133 "add_mutable_aux_preds.m"
                {
#line 1133 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1133 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 1133 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1133 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60, 2) = ((MR_Box) (*hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21));
#line 1133 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_143_143));
#line 1133 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60, 4) = ((MR_Box) ((MR_Integer) 2));
#line 1133 "add_mutable_aux_preds.m"
                }
#line 1076 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_171_171 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_87;
#line 1076 "add_mutable_aux_preds.m"
              }
#line 1075 "add_mutable_aux_preds.m"
              break;
#line 1075 "add_mutable_aux_preds.m"
          }
#line 1138 "add_mutable_aux_preds.m"
#line 1138 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__AttachToIO_37) {
#line 1138 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1138 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 1139 "add_mutable_aux_preds.m"
              {
#line 1139 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__IO0_74;
#line 1139 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__IO_75;
#line 1139 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__VarSetXandIOs_76;
#line 1139 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__IOPredArgs_79;
#line 1139 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_80;
#line 1139 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__IOGetPredExpr_81;
#line 1139 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__IOSetPredExpr_82;
#line 1139 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__PureIOGetPredExpr_83;
#line 1139 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__PureIOSetPredExpr_84;
#line 1139 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_VarSet_175_175;
#line 1139 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_178_178;
#line 1139 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_179_179;
#line 1139 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_180_180;
#line 1139 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_181_181;
#line 1139 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_182_182;
#line 1139 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_192_192;
#line 1139 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_193_193;
#line 1139 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_194_194;

#line 1142 "add_mutable_aux_preds.m"
                {
#line 1142 "add_mutable_aux_preds.m"
                  mercury__varset__new_named_var_4_p_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_253_253, (MR_String) "IO0", &hlds__make_hlds__add_mutable_aux_preds__IO0_74, hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_45, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_VarSet_175_175);
                }
#line 1143 "add_mutable_aux_preds.m"
                {
#line 1143 "add_mutable_aux_preds.m"
                  mercury__varset__new_named_var_4_p_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_253_253, (MR_String) "IO", &hlds__make_hlds__add_mutable_aux_preds__IO_75, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_VarSet_175_175, &hlds__make_hlds__add_mutable_aux_preds__VarSetXandIOs_76);
                }
#line 1148 "add_mutable_aux_preds.m"
                {
#line 1148 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_178_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1148 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_178_178, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_44));
#line 1148 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_178_178, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1148 "add_mutable_aux_preds.m"
                }
#line 1149 "add_mutable_aux_preds.m"
                {
#line 1149 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_180_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1149 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_180_180, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__IO0_74));
#line 1149 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_180_180, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1149 "add_mutable_aux_preds.m"
                }
#line 1149 "add_mutable_aux_preds.m"
                {
#line 1149 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_182_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1149 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_182_182, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__IO_75));
#line 1149 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_182_182, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1149 "add_mutable_aux_preds.m"
                }
#line 1149 "add_mutable_aux_preds.m"
                {
#line 1149 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_181_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1149 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_181_181, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_182_182));
#line 1149 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_181_181, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1149 "add_mutable_aux_preds.m"
                }
#line 1149 "add_mutable_aux_preds.m"
                {
#line 1149 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_179_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1149 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_179_179, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_180_180));
#line 1149 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_179_179, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_181_181));
#line 1149 "add_mutable_aux_preds.m"
                }
#line 1148 "add_mutable_aux_preds.m"
                {
#line 1148 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__IOPredArgs_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1148 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__IOPredArgs_79, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_178_178));
#line 1148 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__IOPredArgs_79, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_179_179));
#line 1148 "add_mutable_aux_preds.m"
                }
#line 1157 "add_mutable_aux_preds.m"
                {
#line 1157 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1157 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
#line 1157 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_80, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1157 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_80, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_180_180));
#line 1157 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_80, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_182_182));
#line 1157 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_80, 4) = ((MR_Box) ((MR_Integer) 2));
#line 1157 "add_mutable_aux_preds.m"
                }
#line 1160 "add_mutable_aux_preds.m"
                {
#line 1160 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__IOGetPredExpr_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1160 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__IOGetPredExpr_81, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1160 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__IOGetPredExpr_81, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_59));
#line 1160 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__IOGetPredExpr_81, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_80));
#line 1160 "add_mutable_aux_preds.m"
                }
#line 1161 "add_mutable_aux_preds.m"
                {
#line 1161 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__IOSetPredExpr_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1161 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__IOSetPredExpr_82, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1161 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__IOSetPredExpr_82, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ImpureSetExpr_60));
#line 1161 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__IOSetPredExpr_82, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_80));
#line 1161 "add_mutable_aux_preds.m"
                }
#line 1163 "add_mutable_aux_preds.m"
                {
#line 1163 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__PureIOGetPredExpr_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1163 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOGetPredExpr_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1163 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOGetPredExpr_83, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1163 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOGetPredExpr_83, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1163 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOGetPredExpr_83, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__IOGetPredExpr_81));
#line 1163 "add_mutable_aux_preds.m"
                }
#line 1165 "add_mutable_aux_preds.m"
                {
#line 1165 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__PureIOSetPredExpr_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1165 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOSetPredExpr_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1165 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOSetPredExpr_84, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_33));
#line 1165 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOSetPredExpr_84, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1165 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOSetPredExpr_84, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__IOSetPredExpr_82));
#line 1165 "add_mutable_aux_preds.m"
                }
#line 1167 "add_mutable_aux_preds.m"
                {
#line 1167 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__add_mutable_aux_preds__VarSetXandIOs_76, (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__StdGetPredName_55, hlds__make_hlds__add_mutable_aux_preds__IOPredArgs_79, hlds__make_hlds__add_mutable_aux_preds__PureIOGetPredExpr_83, hlds__make_hlds__add_mutable_aux_preds__Status_22, hlds__make_hlds__add_mutable_aux_preds__Context_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_170_170, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_192_192, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_171_171, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_193_193, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_172_172, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_194_194);
                }
#line 1170 "add_mutable_aux_preds.m"
                {
#line 1170 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__add_mutable_aux_preds__VarSetXandIOs_76, (MR_Integer) 0, *hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_21, hlds__make_hlds__add_mutable_aux_preds__IOPredArgs_79, hlds__make_hlds__add_mutable_aux_preds__PureIOSetPredExpr_84, hlds__make_hlds__add_mutable_aux_preds__Status_22, hlds__make_hlds__add_mutable_aux_preds__Context_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_192_192, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_86, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_193_193, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_88, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_194_194, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_90);
#line 1170 "add_mutable_aux_preds.m"
                  return;
                }
#line 1139 "add_mutable_aux_preds.m"
              }
#line 1138 "add_mutable_aux_preds.m"
              break;
#line 1138 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 1137 "add_mutable_aux_preds.m"
              {
#line 1137 "add_mutable_aux_preds.m"
                *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_86 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_170_170;
#line 1137 "add_mutable_aux_preds.m"
                *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_88 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_171_171;
#line 1137 "add_mutable_aux_preds.m"
                *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_90 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_172_172;
#line 1137 "add_mutable_aux_preds.m"
              }
#line 1138 "add_mutable_aux_preds.m"
              break;
#line 1138 "add_mutable_aux_preds.m"
          }
#line 1036 "add_mutable_aux_preds.m"
        }
#line 1035 "add_mutable_aux_preds.m"
        break;
#line 1035 "add_mutable_aux_preds.m"
    }
#line 964 "add_mutable_aux_preds.m"
  }
#line 955 "add_mutable_aux_preds.m"
}

#line 835 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_unsafe_get_set_preds_12_p_0_1(
#line 835 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 835 "add_mutable_aux_preds.m"
{
#line 835 "add_mutable_aux_preds.m"
  {
#line 835 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 835 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 835 "add_mutable_aux_preds.m"
    {
#line 835 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_unsafe_get_set_preds__835__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 835 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 835 "add_mutable_aux_preds.m"
  }
#line 835 "add_mutable_aux_preds.m"
}

#line 820 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_unsafe_get_set_preds_12_p_0(
#line 820 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13,
#line 820 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_14,
#line 820 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15,
#line 820 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_16,
#line 820 "add_mutable_aux_preds.m"
  MR_Tuple * hlds__make_hlds__add_mutable_aux_preds__UnsafeGetSetExprs_17,
#line 820 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_18,
#line 820 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_56,
#line 820 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_57,
#line 820 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_58,
#line 820 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_59,
#line 820 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_60,
#line 820 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_61)
#line 820 "add_mutable_aux_preds.m"
{
#line 827 "add_mutable_aux_preds.m"
  {
#line 827 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 827 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_154_154;
#line 827 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_155_155;
#line 827 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_22;
#line 827 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_23;
#line 827 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_24;
#line 827 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_26;
#line 827 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27;
#line 827 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_29;
#line 827 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_31;
#line 827 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32;
#line 827 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ImplLang_33;
#line 827 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_34;
#line 827 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_35;
#line 827 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__X_39;
#line 827 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_40;
#line 827 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeGetAttrs_42;
#line 827 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeSetAttrs_43;
#line 827 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TrailedMutable_44;
#line 827 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__TrailCode_45;
#line 827 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_46;
#line 827 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__UnsafeSetCode_47;
#line 827 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeGetPredName_50;
#line 827 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeSetPredName_51;
#line 827 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_52;
#line 827 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_53;
#line 827 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr0_54;
#line 827 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr0_55;
#line 827 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_62_62;
#line 827 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_68_68;
#line 827 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_121_121;
#line 827 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_122_122;
#line 827 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_124_124;
#line 827 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_126_126;
#line 827 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_127_127;
#line 827 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_128_128;
#line 827 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_130_130;
#line 827 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_131_131;
#line 827 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_133_133;
#line 827 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_135_135;
#line 827 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_136_136;
#line 827 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__V_137_137;
#line 827 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_140_140;
#line 827 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_141_141;
#line 827 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_145_145;
#line 827 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_146_146;
#line 829 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___InitTerm_25;
#line 829 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___VarSetMutable_28;
#line 829 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_30;
#line 833 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___PreInit_36;
#line 833 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___LockUnlock_37;
#line 833 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_38;

#line 828 "add_mutable_aux_preds.m"
    {
#line 828 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_56, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_22);
    }
#line 829 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutableName_23 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 0)));
#line 829 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Type_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 1)));
#line 829 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___InitTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 2)));
#line 829 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Inst_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 3)));
#line 829 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 4)));
#line 829 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___VarSetMutable_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 5)));
#line 829 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Context_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 6)));
#line 829 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___SeqNum_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 7)));
#line 831 "add_mutable_aux_preds.m"
    {
#line 831 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsConstant_31 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27);
    }
#line 832 "add_mutable_aux_preds.m"
    {
#line 832 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27);
    }
#line 833 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__ImplLang_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 833 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Lang_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 833 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 833 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___PreInit_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 833 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___LockUnlock_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 833 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 835 "add_mutable_aux_preds.m"
    {
#line 835 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 835 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_62_62, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[12]));
#line 835 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_62_62, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__define_unsafe_get_set_preds_12_p_0_1));
#line 835 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_62_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 835 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_62_62, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__IsConstant_31));
#line 835 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_62_62, 4) = ((MR_Box) ((MR_Integer) 0));
#line 835 "add_mutable_aux_preds.m"
    }
#line 835 "add_mutable_aux_preds.m"
    {
#line 835 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_62_62, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_unsafe_get_set_preds\'/12", (MR_String) "need_unsafe_get_set_preds, but IsConstant = mutable_constant");
    }
#line 6097 "hlds.make_hlds.add_mutable_aux_preds.c"
    hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_154_154 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 837 "add_mutable_aux_preds.m"
    {
#line 837 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_68_68 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_154_154);
    }
#line 837 "add_mutable_aux_preds.m"
    {
#line 837 "add_mutable_aux_preds.m"
      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_154_154, (MR_String) "X", &hlds__make_hlds__add_mutable_aux_preds__X_39, hlds__make_hlds__add_mutable_aux_preds__V_68_68, &hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_40);
    }
#line 839 "add_mutable_aux_preds.m"
    {
#line 839 "add_mutable_aux_preds.m"
      parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__Attrs_16, &hlds__make_hlds__add_mutable_aux_preds__UnsafeSetAttrs_43);
    }
#line 840 "add_mutable_aux_preds.m"
    {
#line 840 "add_mutable_aux_preds.m"
      parse_tree__prog_data__set_purity_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__UnsafeSetAttrs_43, &hlds__make_hlds__add_mutable_aux_preds__UnsafeGetAttrs_42);
    }
#line 843 "add_mutable_aux_preds.m"
    {
#line 843 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__TrailedMutable_44 = parse_tree__prog_item__mutable_var_trailed_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27);
    }
#line 869 "add_mutable_aux_preds.m"
#line 869 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__ImplLang_33) {
#line 869 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 869 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 845 "add_mutable_aux_preds.m"
        {
#line 849 "add_mutable_aux_preds.m"
#line 849 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__TrailedMutable_44) {
#line 849 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 849 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 850 "add_mutable_aux_preds.m"
              {
#line 850 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_102_102;

#line 854 "add_mutable_aux_preds.m"
                {
#line 854 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_102_102 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ");\n");
                }
#line 853 "add_mutable_aux_preds.m"
                {
#line 853 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__TrailCode_45 = mercury__string__f_43_43_2_f_0((MR_String) "MR_trail_current_value(&", hlds__make_hlds__add_mutable_aux_preds__V_102_102);
                }
#line 850 "add_mutable_aux_preds.m"
              }
#line 849 "add_mutable_aux_preds.m"
              break;
#line 849 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 848 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__TrailCode_45 = (MR_String) "";
#line 849 "add_mutable_aux_preds.m"
              break;
#line 849 "add_mutable_aux_preds.m"
          }
#line 860 "add_mutable_aux_preds.m"
#line 860 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32) {
#line 860 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 860 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 857 "add_mutable_aux_preds.m"
              {
#line 857 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_117_117;

#line 858 "add_mutable_aux_preds.m"
                {
#line 858 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_117_117 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ";\n");
                }
#line 858 "add_mutable_aux_preds.m"
                {
#line 858 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_46 = mercury__string__f_43_43_2_f_0((MR_String) "X = ", hlds__make_hlds__add_mutable_aux_preds__V_117_117);
                }
#line 859 "add_mutable_aux_preds.m"
                {
#line 859 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeSetCode_47 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) " = X;\n");
                }
#line 857 "add_mutable_aux_preds.m"
              }
#line 860 "add_mutable_aux_preds.m"
              break;
#line 860 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 861 "add_mutable_aux_preds.m"
              {
#line 861 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__TypeName_48;
#line 861 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_105_105;
#line 861 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_106_106;
#line 861 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_108_108;
#line 861 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_111_111;
#line 861 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_112_112;
#line 861 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_114_114;

#line 862 "add_mutable_aux_preds.m"
                {
#line 862 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__TypeName_48 = hlds__make_hlds__add_mutable_aux_preds__global_foreign_type_name_4_f_0(hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_35, hlds__make_hlds__add_mutable_aux_preds__Lang_34, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_56, hlds__make_hlds__add_mutable_aux_preds__Type_24);
                }
#line 865 "add_mutable_aux_preds.m"
                {
#line 865 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_108_108 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ");\n");
                }
#line 865 "add_mutable_aux_preds.m"
                {
#line 865 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_106_106 = mercury__string__f_43_43_2_f_0((MR_String) ", X, ", hlds__make_hlds__add_mutable_aux_preds__V_108_108);
                }
#line 865 "add_mutable_aux_preds.m"
                {
#line 865 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_105_105 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeName_48, hlds__make_hlds__add_mutable_aux_preds__V_106_106);
                }
#line 864 "add_mutable_aux_preds.m"
                {
#line 864 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_46 = mercury__string__f_43_43_2_f_0((MR_String) "MR_get_thread_local_mutable(", hlds__make_hlds__add_mutable_aux_preds__V_105_105);
                }
#line 867 "add_mutable_aux_preds.m"
                {
#line 867 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_114_114 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ");\n");
                }
#line 867 "add_mutable_aux_preds.m"
                {
#line 867 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_112_112 = mercury__string__f_43_43_2_f_0((MR_String) ", X, ", hlds__make_hlds__add_mutable_aux_preds__V_114_114);
                }
#line 867 "add_mutable_aux_preds.m"
                {
#line 867 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_111_111 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeName_48, hlds__make_hlds__add_mutable_aux_preds__V_112_112);
                }
#line 866 "add_mutable_aux_preds.m"
                {
#line 866 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeSetCode_47 = mercury__string__f_43_43_2_f_0((MR_String) "MR_set_thread_local_mutable(", hlds__make_hlds__add_mutable_aux_preds__V_111_111);
                }
#line 861 "add_mutable_aux_preds.m"
              }
#line 860 "add_mutable_aux_preds.m"
              break;
#line 860 "add_mutable_aux_preds.m"
          }
#line 845 "add_mutable_aux_preds.m"
        }
#line 869 "add_mutable_aux_preds.m"
        break;
#line 869 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 870 "add_mutable_aux_preds.m"
        {
#line 873 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__TrailCode_45 = (MR_String) "";
#line 878 "add_mutable_aux_preds.m"
#line 878 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32) {
#line 878 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 878 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 875 "add_mutable_aux_preds.m"
              {
#line 875 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_96_96;
#line 875 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_99_99;

#line 876 "add_mutable_aux_preds.m"
                {
#line 876 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_96_96 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ";\n");
                }
#line 876 "add_mutable_aux_preds.m"
                {
#line 876 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_46 = mercury__string__f_43_43_2_f_0((MR_String) "\tX = ", hlds__make_hlds__add_mutable_aux_preds__V_96_96);
                }
#line 877 "add_mutable_aux_preds.m"
                {
#line 877 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_99_99 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) " = X;\n");
                }
#line 877 "add_mutable_aux_preds.m"
                {
#line 877 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeSetCode_47 = mercury__string__f_43_43_2_f_0((MR_String) "\t", hlds__make_hlds__add_mutable_aux_preds__V_99_99);
                }
#line 875 "add_mutable_aux_preds.m"
              }
#line 878 "add_mutable_aux_preds.m"
              break;
#line 878 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 879 "add_mutable_aux_preds.m"
              {
#line 879 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__Cast_49;
#line 879 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_87_87;
#line 879 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_88_88;
#line 879 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_90_90;
#line 879 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_93_93;
#line 880 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_156_156;

#line 880 "add_mutable_aux_preds.m"
                {
#line 880 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_156_156 = parse_tree__builtin_lib_types__int_type_0_f_0();
                }
#line 880 "add_mutable_aux_preds.m"
                {
#line 880 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__make_hlds__add_mutable_aux_preds__Type_24, hlds__make_hlds__add_mutable_aux_preds__V_156_156);
                }
#line 882 "add_mutable_aux_preds.m"
                if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 881 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__Cast_49 = (MR_String) "(int) ";
#line 882 "add_mutable_aux_preds.m"
                else
#line 883 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__Cast_49 = (MR_String) "";
#line 887 "add_mutable_aux_preds.m"
                {
#line 887 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_90_90 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ");\n");
                }
#line 886 "add_mutable_aux_preds.m"
                {
#line 886 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_88_88 = mercury__string__f_43_43_2_f_0((MR_String) "runtime.ThreadLocalMutables.get(", hlds__make_hlds__add_mutable_aux_preds__V_90_90);
                }
#line 885 "add_mutable_aux_preds.m"
                {
#line 885 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_87_87 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__Cast_49, hlds__make_hlds__add_mutable_aux_preds__V_88_88);
                }
#line 885 "add_mutable_aux_preds.m"
                {
#line 885 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_46 = mercury__string__f_43_43_2_f_0((MR_String) "\tX = ", hlds__make_hlds__add_mutable_aux_preds__V_87_87);
                }
#line 889 "add_mutable_aux_preds.m"
                {
#line 889 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_93_93 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ", X);\n");
                }
#line 888 "add_mutable_aux_preds.m"
                {
#line 888 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeSetCode_47 = mercury__string__f_43_43_2_f_0((MR_String) "\truntime.ThreadLocalMutables.set(", hlds__make_hlds__add_mutable_aux_preds__V_93_93);
                }
#line 879 "add_mutable_aux_preds.m"
              }
#line 878 "add_mutable_aux_preds.m"
              break;
#line 878 "add_mutable_aux_preds.m"
          }
#line 870 "add_mutable_aux_preds.m"
        }
#line 869 "add_mutable_aux_preds.m"
        break;
#line 869 "add_mutable_aux_preds.m"
      case (MR_Integer) 3:
#line 906 "add_mutable_aux_preds.m"
        {
#line 907 "add_mutable_aux_preds.m"
          {
#line 907 "add_mutable_aux_preds.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_unsafe_get_set_preds\'/12", (MR_String) "unsafe_get_set for erlang");
#line 907 "add_mutable_aux_preds.m"
            return;
          }
#line 906 "add_mutable_aux_preds.m"
        }
#line 869 "add_mutable_aux_preds.m"
        break;
#line 869 "add_mutable_aux_preds.m"
      case (MR_Integer) 2:
#line 892 "add_mutable_aux_preds.m"
        {
#line 895 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__TrailCode_45 = (MR_String) "";
#line 900 "add_mutable_aux_preds.m"
#line 900 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32) {
#line 900 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 900 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 897 "add_mutable_aux_preds.m"
              {
#line 897 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_81_81;
#line 897 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_84_84;

#line 898 "add_mutable_aux_preds.m"
                {
#line 898 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_81_81 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ";\n");
                }
#line 898 "add_mutable_aux_preds.m"
                {
#line 898 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_46 = mercury__string__f_43_43_2_f_0((MR_String) "\tX = ", hlds__make_hlds__add_mutable_aux_preds__V_81_81);
                }
#line 899 "add_mutable_aux_preds.m"
                {
#line 899 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_84_84 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) " = X;\n");
                }
#line 899 "add_mutable_aux_preds.m"
                {
#line 899 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeSetCode_47 = mercury__string__f_43_43_2_f_0((MR_String) "\t", hlds__make_hlds__add_mutable_aux_preds__V_84_84);
                }
#line 897 "add_mutable_aux_preds.m"
              }
#line 900 "add_mutable_aux_preds.m"
              break;
#line 900 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 901 "add_mutable_aux_preds.m"
              {
#line 901 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_75_75;
#line 901 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_78_78;

#line 902 "add_mutable_aux_preds.m"
                {
#line 902 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_75_75 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ".get();\n");
                }
#line 902 "add_mutable_aux_preds.m"
                {
#line 902 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_46 = mercury__string__f_43_43_2_f_0((MR_String) "\tX = ", hlds__make_hlds__add_mutable_aux_preds__V_75_75);
                }
#line 903 "add_mutable_aux_preds.m"
                {
#line 903 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_78_78 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ".set(X);\n");
                }
#line 903 "add_mutable_aux_preds.m"
                {
#line 903 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnsafeSetCode_47 = mercury__string__f_43_43_2_f_0((MR_String) "\t", hlds__make_hlds__add_mutable_aux_preds__V_78_78);
                }
#line 901 "add_mutable_aux_preds.m"
              }
#line 900 "add_mutable_aux_preds.m"
              break;
#line 900 "add_mutable_aux_preds.m"
          }
#line 892 "add_mutable_aux_preds.m"
        }
#line 869 "add_mutable_aux_preds.m"
        break;
#line 869 "add_mutable_aux_preds.m"
    }
#line 910 "add_mutable_aux_preds.m"
    {
#line 910 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__UnsafeGetPredName_50 = parse_tree__prog_mutable__mutable_unsafe_get_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_22, hlds__make_hlds__add_mutable_aux_preds__MutableName_23);
    }
#line 912 "add_mutable_aux_preds.m"
    {
#line 912 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__UnsafeSetPredName_51 = parse_tree__prog_mutable__mutable_unsafe_set_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_22, hlds__make_hlds__add_mutable_aux_preds__MutableName_23);
    }
#line 917 "add_mutable_aux_preds.m"
    {
#line 917 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_124_124 = parse_tree__prog_mode__out_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_26);
    }
#line 917 "add_mutable_aux_preds.m"
    {
#line 917 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 917 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_122_122, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_39));
#line 917 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_122_122, 1) = ((MR_Box) ((MR_String) "X"));
#line 917 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_122_122, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_124_124));
#line 917 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_122_122, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_35));
#line 917 "add_mutable_aux_preds.m"
    }
#line 917 "add_mutable_aux_preds.m"
    {
#line 917 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 917 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_121_121, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_122_122));
#line 917 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_121_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 917 "add_mutable_aux_preds.m"
    }
#line 6530 "hlds.make_hlds.add_mutable_aux_preds.c"
    hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_155_155 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
#line 919 "add_mutable_aux_preds.m"
    {
#line 919 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_126_126 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_155_155);
    }
#line 920 "add_mutable_aux_preds.m"
    {
#line 920 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 920 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_128_128, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_29));
#line 920 "add_mutable_aux_preds.m"
    }
#line 920 "add_mutable_aux_preds.m"
    {
#line 920 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_127_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 920 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_127_127, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_46));
#line 920 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_127_127, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_128_128));
#line 920 "add_mutable_aux_preds.m"
    }
#line 914 "add_mutable_aux_preds.m"
    {
#line 914 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 914 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_52, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeGetAttrs_42));
#line 914 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_52, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeGetPredName_50));
#line 914 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_52, 2) = ((MR_Box) ((MR_Integer) 0));
#line 914 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_52, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_121_121));
#line 914 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_52, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_40));
#line 914 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_52, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_126_126));
#line 914 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_52, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_127_127));
#line 914 "add_mutable_aux_preds.m"
    }
#line 925 "add_mutable_aux_preds.m"
    {
#line 925 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_133_133 = parse_tree__prog_mode__in_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_26);
    }
#line 925 "add_mutable_aux_preds.m"
    {
#line 925 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_131_131 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 925 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_131_131, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_39));
#line 925 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_131_131, 1) = ((MR_Box) ((MR_String) "X"));
#line 925 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_131_131, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_133_133));
#line 925 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_131_131, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_35));
#line 925 "add_mutable_aux_preds.m"
    }
#line 925 "add_mutable_aux_preds.m"
    {
#line 925 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 925 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_130_130, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_131_131));
#line 925 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_130_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 925 "add_mutable_aux_preds.m"
    }
#line 927 "add_mutable_aux_preds.m"
    {
#line 927 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_135_135 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_155_155);
    }
#line 928 "add_mutable_aux_preds.m"
    {
#line 928 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_137_137 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TrailCode_45, hlds__make_hlds__add_mutable_aux_preds__UnsafeSetCode_47);
    }
#line 928 "add_mutable_aux_preds.m"
    {
#line 928 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_136_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 928 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_136_136, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_137_137));
#line 928 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_136_136, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_128_128));
#line 928 "add_mutable_aux_preds.m"
    }
#line 922 "add_mutable_aux_preds.m"
    {
#line 922 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 922 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_53, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeSetAttrs_43));
#line 922 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_53, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeSetPredName_51));
#line 922 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_53, 2) = ((MR_Box) ((MR_Integer) 0));
#line 922 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_53, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_130_130));
#line 922 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_53, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarSetOnlyX_40));
#line 922 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_53, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_135_135));
#line 922 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_53, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_136_136));
#line 922 "add_mutable_aux_preds.m"
    }
#line 930 "add_mutable_aux_preds.m"
    {
#line 930 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_52, hlds__make_hlds__add_mutable_aux_preds__Status_18, hlds__make_hlds__add_mutable_aux_preds__Context_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_56, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_140_140, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_60, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_141_141);
    }
#line 932 "add_mutable_aux_preds.m"
    {
#line 932 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_53, hlds__make_hlds__add_mutable_aux_preds__Status_18, hlds__make_hlds__add_mutable_aux_preds__Context_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_140_140, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_57, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_141_141, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_61);
    }
#line 936 "add_mutable_aux_preds.m"
    {
#line 936 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 936 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_146_146, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_39));
#line 936 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_146_146, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_29));
#line 936 "add_mutable_aux_preds.m"
    }
#line 936 "add_mutable_aux_preds.m"
    {
#line 936 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_145_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 936 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_145_145, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_146_146));
#line 936 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_145_145, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 936 "add_mutable_aux_preds.m"
    }
#line 935 "add_mutable_aux_preds.m"
    {
#line 935 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr0_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 935 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr0_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 935 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr0_54, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_29));
#line 935 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr0_54, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeGetPredName_50));
#line 935 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr0_54, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_145_145));
#line 935 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr0_54, 4) = ((MR_Box) ((MR_Integer) 1));
#line 935 "add_mutable_aux_preds.m"
    }
#line 937 "add_mutable_aux_preds.m"
    {
#line 937 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr0_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 937 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr0_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 937 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr0_55, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_29));
#line 937 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr0_55, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeSetPredName_51));
#line 937 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr0_55, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_145_145));
#line 937 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr0_55, 4) = ((MR_Box) ((MR_Integer) 2));
#line 937 "add_mutable_aux_preds.m"
    }
#line 939 "add_mutable_aux_preds.m"
    {
#line 939 "add_mutable_aux_preds.m"
      MR_Tuple base;
#line 939 "add_mutable_aux_preds.m"
      base = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 939 "add_mutable_aux_preds.m"
      *hlds__make_hlds__add_mutable_aux_preds__UnsafeGetSetExprs_17 = base;
#line 939 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallUnsafeGetExpr0_54));
#line 939 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallUnsafeSetExpr0_55));
#line 939 "add_mutable_aux_preds.m"
    }
#line 827 "add_mutable_aux_preds.m"
    *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_59 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_58;
#line 827 "add_mutable_aux_preds.m"
  }
#line 820 "add_mutable_aux_preds.m"
}

#line 749 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_lock_unlock_preds_12_p_0_1(
#line 749 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 749 "add_mutable_aux_preds.m"
{
#line 749 "add_mutable_aux_preds.m"
  {
#line 749 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 749 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 749 "add_mutable_aux_preds.m"
    {
#line 749 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_lock_unlock_preds__749__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 749 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 749 "add_mutable_aux_preds.m"
  }
#line 749 "add_mutable_aux_preds.m"
}

#line 734 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_lock_unlock_preds_12_p_0(
#line 734 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13,
#line 734 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_14,
#line 734 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15,
#line 734 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_16,
#line 734 "add_mutable_aux_preds.m"
  MR_Tuple * hlds__make_hlds__add_mutable_aux_preds__LockUnlockExprs_17,
#line 734 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_18,
#line 734 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_49,
#line 734 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_50,
#line 734 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_51,
#line 734 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_52,
#line 734 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_53,
#line 734 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_54)
#line 734 "add_mutable_aux_preds.m"
{
#line 741 "add_mutable_aux_preds.m"
  {
#line 741 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 741 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_22;
#line 741 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_23;
#line 741 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27;
#line 741 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_29;
#line 741 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_31;
#line 741 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32;
#line 741 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ImplLang_33;
#line 741 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_55_55;
#line 743 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Type_24;
#line 743 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___InitTerm_25;
#line 743 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Inst_26;
#line 743 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___VarSetMutable_28;
#line 743 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_30;
#line 747 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Lang_34;
#line 747 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_35;
#line 747 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___PreInit_36;
#line 747 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___LockUnlock_37;
#line 747 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_38;

#line 742 "add_mutable_aux_preds.m"
    {
#line 742 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_49, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_22);
    }
#line 743 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutableName_23 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 0)));
#line 743 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Type_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 1)));
#line 743 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___InitTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 2)));
#line 743 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Inst_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 3)));
#line 743 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 4)));
#line 743 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___VarSetMutable_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 5)));
#line 743 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Context_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 6)));
#line 743 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___SeqNum_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 7)));
#line 745 "add_mutable_aux_preds.m"
    {
#line 745 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsConstant_31 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27);
    }
#line 746 "add_mutable_aux_preds.m"
    {
#line 746 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27);
    }
#line 747 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__ImplLang_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 747 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Lang_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 747 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 747 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___PreInit_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 747 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___LockUnlock_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 747 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 749 "add_mutable_aux_preds.m"
    {
#line 749 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 749 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[12]));
#line 749 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__define_lock_unlock_preds_12_p_0_1));
#line 749 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 749 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__IsConstant_31));
#line 749 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 4) = ((MR_Box) ((MR_Integer) 0));
#line 749 "add_mutable_aux_preds.m"
    }
#line 749 "add_mutable_aux_preds.m"
    {
#line 749 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_55_55, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_lock_unlock_preds\'/12", (MR_String) "need_lock_unlock_preds, but IsConstant = mutable_constant");
    }
#line 807 "add_mutable_aux_preds.m"
#line 807 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__ImplLang_33) {
#line 807 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 807 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 753 "add_mutable_aux_preds.m"
        {
#line 753 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_119_119;
#line 753 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_120_120;
#line 753 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__LockAndUnlockAttrs_39;
#line 753 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__MutableMutexVarName_40;
#line 753 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__LockForeignProcBody_41;
#line 753 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__UnlockForeignProcBody_42;
#line 753 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__LockPredName_43;
#line 753 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__UnlockPredName_44;
#line 753 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_45;
#line 753 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_46;
#line 753 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__CallLockExpr0_47;
#line 753 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr0_48;
#line 753 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_98_98;
#line 753 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_99_99;
#line 753 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_100_100;
#line 753 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_101_101;
#line 753 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_104_104;
#line 753 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_105_105;
#line 753 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_106_106;
#line 753 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_109_109;
#line 753 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_110_110;

#line 754 "add_mutable_aux_preds.m"
          {
#line 754 "add_mutable_aux_preds.m"
            parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__Attrs_16, &hlds__make_hlds__add_mutable_aux_preds__LockAndUnlockAttrs_39);
          }
#line 755 "add_mutable_aux_preds.m"
          {
#line 755 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__MutableMutexVarName_40 = parse_tree__prog_mutable__mutable_mutex_var_name_1_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15);
          }
#line 773 "add_mutable_aux_preds.m"
#line 773 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32) {
#line 773 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 773 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 758 "add_mutable_aux_preds.m"
              {
#line 758 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_70_70;
#line 758 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_72_72;
#line 758 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_73_73;
#line 758 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_75_75;
#line 758 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_76_76;
#line 758 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_78_78;
#line 758 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_83_83;
#line 758 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__V_85_85;
#line 758 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_86_86;
#line 758 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_88_88;
#line 758 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_89_89;
#line 758 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds__V_91_91;

#line 764 "add_mutable_aux_preds.m"
                {
#line 764 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_78_78 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__MutableMutexVarName_40, (MR_String) "\");\n#endif\n");
                }
#line 764 "add_mutable_aux_preds.m"
                {
#line 764 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_76_76 = mercury__string__f_43_43_2_f_0((MR_String) ",\n                    \"", hlds__make_hlds__add_mutable_aux_preds__V_78_78);
                }
#line 763 "add_mutable_aux_preds.m"
                {
#line 763 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_75_75 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__MutableMutexVarName_40, hlds__make_hlds__add_mutable_aux_preds__V_76_76);
                }
#line 763 "add_mutable_aux_preds.m"
                {
#line 763 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_73_73 = mercury__string__f_43_43_2_f_0((MR_String) "  MR_LOCK(&", hlds__make_hlds__add_mutable_aux_preds__V_75_75);
                }
#line 766 "add_mutable_aux_preds.m"
                {
#line 766 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 766 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_72_72, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_73_73));
#line 766 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 766 "add_mutable_aux_preds.m"
                }
#line 762 "add_mutable_aux_preds.m"
                {
#line 762 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 762 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_70_70, 0) = ((MR_Box) ((MR_String) "#ifdef MR_THREAD_SAFE\n"));
#line 762 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_70_70, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_72_72));
#line 762 "add_mutable_aux_preds.m"
                }
#line 761 "add_mutable_aux_preds.m"
                {
#line 761 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__LockForeignProcBody_41 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_70_70);
                }
#line 770 "add_mutable_aux_preds.m"
                {
#line 770 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_91_91 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__MutableMutexVarName_40, (MR_String) "\");\n#endif\n");
                }
#line 770 "add_mutable_aux_preds.m"
                {
#line 770 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_89_89 = mercury__string__f_43_43_2_f_0((MR_String) ",\n                    \"", hlds__make_hlds__add_mutable_aux_preds__V_91_91);
                }
#line 769 "add_mutable_aux_preds.m"
                {
#line 769 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_88_88 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__MutableMutexVarName_40, hlds__make_hlds__add_mutable_aux_preds__V_89_89);
                }
#line 769 "add_mutable_aux_preds.m"
                {
#line 769 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_86_86 = mercury__string__f_43_43_2_f_0((MR_String) "  MR_UNLOCK(&", hlds__make_hlds__add_mutable_aux_preds__V_88_88);
                }
#line 772 "add_mutable_aux_preds.m"
                {
#line 772 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 772 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_85_85, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_86_86));
#line 772 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 772 "add_mutable_aux_preds.m"
                }
#line 768 "add_mutable_aux_preds.m"
                {
#line 768 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 768 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_83_83, 0) = ((MR_Box) ((MR_String) "#ifdef MR_THREAD_SAFE\n"));
#line 768 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_83_83, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_85_85));
#line 768 "add_mutable_aux_preds.m"
                }
#line 767 "add_mutable_aux_preds.m"
                {
#line 767 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__UnlockForeignProcBody_42 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_83_83);
                }
#line 758 "add_mutable_aux_preds.m"
              }
#line 773 "add_mutable_aux_preds.m"
              break;
#line 773 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 774 "add_mutable_aux_preds.m"
              {
#line 775 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__LockForeignProcBody_41 = (MR_String) "";
#line 776 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__UnlockForeignProcBody_42 = (MR_String) "";
#line 774 "add_mutable_aux_preds.m"
              }
#line 773 "add_mutable_aux_preds.m"
              break;
#line 773 "add_mutable_aux_preds.m"
          }
#line 778 "add_mutable_aux_preds.m"
          {
#line 778 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__LockPredName_43 = parse_tree__prog_mutable__mutable_lock_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_22, hlds__make_hlds__add_mutable_aux_preds__MutableName_23);
          }
#line 780 "add_mutable_aux_preds.m"
          {
#line 780 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__UnlockPredName_44 = parse_tree__prog_mutable__mutable_unlock_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_22, hlds__make_hlds__add_mutable_aux_preds__MutableName_23);
          }
#line 7101 "hlds.make_hlds.add_mutable_aux_preds.c"
          hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_119_119 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 786 "add_mutable_aux_preds.m"
          {
#line 786 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_98_98 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_119_119);
          }
#line 7108 "hlds.make_hlds.add_mutable_aux_preds.c"
          hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_120_120 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
#line 787 "add_mutable_aux_preds.m"
          {
#line 787 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_99_99 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_120_120);
          }
#line 788 "add_mutable_aux_preds.m"
          {
#line 788 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 788 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_101_101, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_29));
#line 788 "add_mutable_aux_preds.m"
          }
#line 788 "add_mutable_aux_preds.m"
          {
#line 788 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 788 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_100_100, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockForeignProcBody_41));
#line 788 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_100_100, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_101_101));
#line 788 "add_mutable_aux_preds.m"
          }
#line 782 "add_mutable_aux_preds.m"
          {
#line 782 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 782 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_45, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockAndUnlockAttrs_39));
#line 782 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_45, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockPredName_43));
#line 782 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_45, 2) = ((MR_Box) ((MR_Integer) 0));
#line 782 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_45, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 782 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_45, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_98_98));
#line 782 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_45, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_99_99));
#line 782 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_45, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_100_100));
#line 782 "add_mutable_aux_preds.m"
          }
#line 794 "add_mutable_aux_preds.m"
          {
#line 794 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_104_104 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_119_119);
          }
#line 795 "add_mutable_aux_preds.m"
          {
#line 795 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_105_105 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_120_120);
          }
#line 796 "add_mutable_aux_preds.m"
          {
#line 796 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 796 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_106_106, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnlockForeignProcBody_42));
#line 796 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_106_106, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_101_101));
#line 796 "add_mutable_aux_preds.m"
          }
#line 790 "add_mutable_aux_preds.m"
          {
#line 790 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 790 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_46, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockAndUnlockAttrs_39));
#line 790 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_46, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnlockPredName_44));
#line 790 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_46, 2) = ((MR_Box) ((MR_Integer) 0));
#line 790 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_46, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 790 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_46, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_104_104));
#line 790 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_46, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_105_105));
#line 790 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_46, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_106_106));
#line 790 "add_mutable_aux_preds.m"
          }
#line 798 "add_mutable_aux_preds.m"
          {
#line 798 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_45, hlds__make_hlds__add_mutable_aux_preds__Status_18, hlds__make_hlds__add_mutable_aux_preds__Context_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_49, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_109_109, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_53, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_110_110);
          }
#line 800 "add_mutable_aux_preds.m"
          {
#line 800 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_46, hlds__make_hlds__add_mutable_aux_preds__Status_18, hlds__make_hlds__add_mutable_aux_preds__Context_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_109_109, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_50, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_110_110, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_54);
          }
#line 803 "add_mutable_aux_preds.m"
          {
#line 803 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__CallLockExpr0_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 803 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallLockExpr0_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 803 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallLockExpr0_47, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_29));
#line 803 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallLockExpr0_47, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockPredName_43));
#line 803 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallLockExpr0_47, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 803 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallLockExpr0_47, 4) = ((MR_Box) ((MR_Integer) 2));
#line 803 "add_mutable_aux_preds.m"
          }
#line 805 "add_mutable_aux_preds.m"
          {
#line 805 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr0_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 805 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr0_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 805 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr0_48, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_29));
#line 805 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr0_48, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnlockPredName_44));
#line 805 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr0_48, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 805 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr0_48, 4) = ((MR_Box) ((MR_Integer) 2));
#line 805 "add_mutable_aux_preds.m"
          }
#line 806 "add_mutable_aux_preds.m"
          {
#line 806 "add_mutable_aux_preds.m"
            MR_Tuple base;
#line 806 "add_mutable_aux_preds.m"
            base = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 806 "add_mutable_aux_preds.m"
            *hlds__make_hlds__add_mutable_aux_preds__LockUnlockExprs_17 = base;
#line 806 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallLockExpr0_47));
#line 806 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr0_48));
#line 806 "add_mutable_aux_preds.m"
          }
#line 753 "add_mutable_aux_preds.m"
        }
#line 807 "add_mutable_aux_preds.m"
        break;
#line 807 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 808 "add_mutable_aux_preds.m"
        {
#line 809 "add_mutable_aux_preds.m"
          {
#line 809 "add_mutable_aux_preds.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_lock_unlock_preds\'/12", (MR_String) "lock_unlock for csharp");
#line 809 "add_mutable_aux_preds.m"
            return;
          }
#line 808 "add_mutable_aux_preds.m"
        }
#line 807 "add_mutable_aux_preds.m"
        break;
#line 807 "add_mutable_aux_preds.m"
      case (MR_Integer) 3:
#line 814 "add_mutable_aux_preds.m"
        {
#line 815 "add_mutable_aux_preds.m"
          {
#line 815 "add_mutable_aux_preds.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_lock_unlock_preds\'/12", (MR_String) "lock_unlock for erlang");
#line 815 "add_mutable_aux_preds.m"
            return;
          }
#line 814 "add_mutable_aux_preds.m"
        }
#line 807 "add_mutable_aux_preds.m"
        break;
#line 807 "add_mutable_aux_preds.m"
      case (MR_Integer) 2:
#line 811 "add_mutable_aux_preds.m"
        {
#line 812 "add_mutable_aux_preds.m"
          {
#line 812 "add_mutable_aux_preds.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_lock_unlock_preds\'/12", (MR_String) "lock_unlock for java");
#line 812 "add_mutable_aux_preds.m"
            return;
          }
#line 811 "add_mutable_aux_preds.m"
        }
#line 807 "add_mutable_aux_preds.m"
        break;
#line 807 "add_mutable_aux_preds.m"
    }
#line 741 "add_mutable_aux_preds.m"
    *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_52 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_51;
#line 741 "add_mutable_aux_preds.m"
  }
#line 734 "add_mutable_aux_preds.m"
}

#line 688 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_pre_init_pred_12_p_0_1(
#line 688 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 688 "add_mutable_aux_preds.m"
{
#line 688 "add_mutable_aux_preds.m"
  {
#line 688 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 688 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 688 "add_mutable_aux_preds.m"
    {
#line 688 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_pre_init_pred__688__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 688 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 688 "add_mutable_aux_preds.m"
  }
#line 688 "add_mutable_aux_preds.m"
}

#line 672 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_pre_init_pred_12_p_0(
#line 672 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13,
#line 672 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_14,
#line 672 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15,
#line 672 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_16,
#line 672 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_17,
#line 672 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_18,
#line 672 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_42,
#line 672 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_43,
#line 672 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_44,
#line 672 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_45,
#line 672 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_46,
#line 672 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_47)
#line 672 "add_mutable_aux_preds.m"
{
#line 679 "add_mutable_aux_preds.m"
  {
#line 679 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 679 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_22;
#line 679 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_23;
#line 679 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27;
#line 679 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_29;
#line 679 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_31;
#line 679 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32;
#line 679 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ImplLang_33;
#line 679 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInitPredName_39;
#line 679 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__PreInitCode_40;
#line 679 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41;
#line 679 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_48_48;
#line 679 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_74_74;
#line 679 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_75_75;
#line 679 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_76_76;
#line 679 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_77_77;
#line 681 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Type_24;
#line 681 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___InitTerm_25;
#line 681 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Inst_26;
#line 681 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___VarSetMutable_28;
#line 681 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_30;
#line 685 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Lang_34;
#line 685 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_35;
#line 685 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___PreInit_36;
#line 685 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___LockUnlock_37;
#line 685 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_38;

#line 680 "add_mutable_aux_preds.m"
    {
#line 680 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_42, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_22);
    }
#line 681 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutableName_23 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 0)));
#line 681 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Type_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 1)));
#line 681 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___InitTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 2)));
#line 681 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Inst_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 3)));
#line 681 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 4)));
#line 681 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___VarSetMutable_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 5)));
#line 681 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Context_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 6)));
#line 681 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___SeqNum_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_13, (MR_Integer) 7)));
#line 683 "add_mutable_aux_preds.m"
    {
#line 683 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsConstant_31 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27);
    }
#line 684 "add_mutable_aux_preds.m"
    {
#line 684 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_27);
    }
#line 685 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__ImplLang_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 685 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Lang_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 685 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 685 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___PreInit_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 685 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___LockUnlock_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 685 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_14, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 688 "add_mutable_aux_preds.m"
    {
#line 688 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 688 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_48_48, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[12]));
#line 688 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_48_48, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__define_pre_init_pred_12_p_0_1));
#line 688 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 688 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_48_48, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__IsConstant_31));
#line 688 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_48_48, 4) = ((MR_Box) ((MR_Integer) 0));
#line 688 "add_mutable_aux_preds.m"
    }
#line 688 "add_mutable_aux_preds.m"
    {
#line 688 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_48_48, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_pre_init_pred\'/12", (MR_String) "need_pre_init_pred, but IsConstant = mutable_constant");
    }
#line 690 "add_mutable_aux_preds.m"
    {
#line 690 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PreInitPredName_39 = parse_tree__prog_mutable__mutable_pre_init_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_22, hlds__make_hlds__add_mutable_aux_preds__MutableName_23);
    }
#line 708 "add_mutable_aux_preds.m"
#line 708 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__ImplLang_33) {
#line 708 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 708 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 703 "add_mutable_aux_preds.m"
#line 703 "add_mutable_aux_preds.m"
        switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32) {
#line 703 "add_mutable_aux_preds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 703 "add_mutable_aux_preds.m"
          case (MR_Integer) 0:
#line 695 "add_mutable_aux_preds.m"
            {
#line 695 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__V_61_61;
#line 695 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__V_63_63;
#line 695 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__V_65_65;
#line 695 "add_mutable_aux_preds.m"
              MR_String hlds__make_hlds__add_mutable_aux_preds__V_66_66;

#line 699 "add_mutable_aux_preds.m"
              {
#line 699 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_66_66 = parse_tree__prog_mutable__mutable_mutex_var_name_1_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15);
              }
#line 699 "add_mutable_aux_preds.m"
              {
#line 699 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 699 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_65_65, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_66_66));
#line 699 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[23])));
#line 699 "add_mutable_aux_preds.m"
              }
#line 698 "add_mutable_aux_preds.m"
              {
#line 698 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 698 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_63_63, 0) = ((MR_Box) ((MR_String) "   pthread_mutex_init(&"));
#line 698 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_63_63, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_65_65));
#line 698 "add_mutable_aux_preds.m"
              }
#line 697 "add_mutable_aux_preds.m"
              {
#line 697 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_61_61, 0) = ((MR_Box) ((MR_String) "#ifdef MR_THREAD_SAFE\n"));
#line 697 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_61_61, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_63_63));
#line 697 "add_mutable_aux_preds.m"
              }
#line 696 "add_mutable_aux_preds.m"
              {
#line 696 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__PreInitCode_40 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_61_61);
              }
#line 695 "add_mutable_aux_preds.m"
            }
#line 703 "add_mutable_aux_preds.m"
            break;
#line 703 "add_mutable_aux_preds.m"
          case (MR_Integer) 1:
#line 704 "add_mutable_aux_preds.m"
            {
#line 705 "add_mutable_aux_preds.m"
              {
#line 705 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__PreInitCode_40 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) " = MR_new_thread_local_mutable_index();\n");
              }
#line 704 "add_mutable_aux_preds.m"
            }
#line 703 "add_mutable_aux_preds.m"
            break;
#line 703 "add_mutable_aux_preds.m"
        }
#line 708 "add_mutable_aux_preds.m"
        break;
#line 708 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 709 "add_mutable_aux_preds.m"
        {
#line 710 "add_mutable_aux_preds.m"
          {
#line 710 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__PreInitCode_40 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) " = runtime.ThreadLocalMutables.new_index();\n");
          }
#line 709 "add_mutable_aux_preds.m"
        }
#line 708 "add_mutable_aux_preds.m"
        break;
#line 708 "add_mutable_aux_preds.m"
      case (MR_Integer) 3:
#line 716 "add_mutable_aux_preds.m"
        {
#line 717 "add_mutable_aux_preds.m"
          {
#line 717 "add_mutable_aux_preds.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_pre_init_pred\'/12", (MR_String) "preinit for erlang");
#line 717 "add_mutable_aux_preds.m"
            return;
          }
#line 716 "add_mutable_aux_preds.m"
        }
#line 708 "add_mutable_aux_preds.m"
        break;
#line 708 "add_mutable_aux_preds.m"
      case (MR_Integer) 2:
#line 713 "add_mutable_aux_preds.m"
        {
#line 714 "add_mutable_aux_preds.m"
          {
#line 714 "add_mutable_aux_preds.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_pre_init_pred\'/12", (MR_String) "preinit for java");
#line 714 "add_mutable_aux_preds.m"
            return;
          }
#line 713 "add_mutable_aux_preds.m"
        }
#line 708 "add_mutable_aux_preds.m"
        break;
#line 708 "add_mutable_aux_preds.m"
    }
#line 723 "add_mutable_aux_preds.m"
    {
#line 723 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_74_74 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 724 "add_mutable_aux_preds.m"
    {
#line 724 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_75_75 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
#line 725 "add_mutable_aux_preds.m"
    {
#line 725 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 725 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_77_77, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_29));
#line 725 "add_mutable_aux_preds.m"
    }
#line 725 "add_mutable_aux_preds.m"
    {
#line 725 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 725 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_76_76, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PreInitCode_40));
#line 725 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_76_76, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_77_77));
#line 725 "add_mutable_aux_preds.m"
    }
#line 719 "add_mutable_aux_preds.m"
    {
#line 719 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 719 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Attrs_16));
#line 719 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PreInitPredName_39));
#line 719 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41, 2) = ((MR_Box) ((MR_Integer) 0));
#line 719 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 719 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_74_74));
#line 719 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_75_75));
#line 719 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_76_76));
#line 719 "add_mutable_aux_preds.m"
    }
#line 727 "add_mutable_aux_preds.m"
    {
#line 727 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41, hlds__make_hlds__add_mutable_aux_preds__Status_18, hlds__make_hlds__add_mutable_aux_preds__Context_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_42, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_43, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_46, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_47);
    }
#line 730 "add_mutable_aux_preds.m"
    {
#line 730 "add_mutable_aux_preds.m"
      MR_Word base;
#line 730 "add_mutable_aux_preds.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 730 "add_mutable_aux_preds.m"
      *hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_17 = base;
#line 730 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 730 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_29));
#line 730 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PreInitPredName_39));
#line 730 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 730 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) ((MR_Integer) 2));
#line 730 "add_mutable_aux_preds.m"
    }
#line 679 "add_mutable_aux_preds.m"
    *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_45 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_44;
#line 679 "add_mutable_aux_preds.m"
  }
#line 672 "add_mutable_aux_preds.m"
}

#line 590 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_aux_preds_10_p_0(
#line 590 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11,
#line 590 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_12,
#line 590 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_13,
#line 590 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_14,
#line 590 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34,
#line 590 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_35,
#line 590 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_36,
#line 590 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_37,
#line 590 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38,
#line 590 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39)
#line 590 "add_mutable_aux_preds.m"
{
#line 596 "add_mutable_aux_preds.m"
  {
#line 596 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 596 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ImplLang_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 596 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 596 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 596 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInit_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 596 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__LockUnlock_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 596 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 596 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs0_24;
#line 596 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_26;
#line 596 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_27;
#line 596 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_29;
#line 596 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_31;
#line 596 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_33;
#line 596 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_43_43;
#line 596 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_44_44;
#line 596 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_45_45;
#line 596 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46;
#line 596 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_47_47;
#line 596 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_48_48;
#line 596 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_49_49;
#line 596 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_50_50;
#line 596 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51;
#line 596 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_52_52;
#line 596 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_53_53;
#line 596 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_54_54;

#line 602 "add_mutable_aux_preds.m"
    {
#line 602 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__Attrs0_24 = parse_tree__prog_data__default_attributes_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Lang_19);
    }
#line 607 "add_mutable_aux_preds.m"
#line 607 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__ImplLang_18) {
#line 607 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 607 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 604 "add_mutable_aux_preds.m"
        {
#line 604 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs1_25;

#line 605 "add_mutable_aux_preds.m"
          {
#line 605 "add_mutable_aux_preds.m"
            parse_tree__prog_data__set_box_policy_3_p_0(hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_20, hlds__make_hlds__add_mutable_aux_preds__Attrs0_24, &hlds__make_hlds__add_mutable_aux_preds__Attrs1_25);
          }
#line 606 "add_mutable_aux_preds.m"
          {
#line 606 "add_mutable_aux_preds.m"
            parse_tree__prog_data__set_may_call_mercury_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__Attrs1_25, &hlds__make_hlds__add_mutable_aux_preds__Attrs_26);
          }
#line 604 "add_mutable_aux_preds.m"
        }
#line 607 "add_mutable_aux_preds.m"
        break;
#line 607 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 607 "add_mutable_aux_preds.m"
      case (MR_Integer) 2:
#line 610 "add_mutable_aux_preds.m"
        {
#line 615 "add_mutable_aux_preds.m"
          {
#line 615 "add_mutable_aux_preds.m"
            parse_tree__prog_data__set_may_duplicate_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[1]), hlds__make_hlds__add_mutable_aux_preds__Attrs0_24, &hlds__make_hlds__add_mutable_aux_preds__Attrs_26);
          }
#line 610 "add_mutable_aux_preds.m"
        }
#line 607 "add_mutable_aux_preds.m"
        break;
#line 607 "add_mutable_aux_preds.m"
      case (MR_Integer) 3:
#line 618 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__Attrs_26 = hlds__make_hlds__add_mutable_aux_preds__Attrs0_24;
#line 607 "add_mutable_aux_preds.m"
        break;
#line 607 "add_mutable_aux_preds.m"
    }
#line 631 "add_mutable_aux_preds.m"
#line 631 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__PreInit_21) {
#line 631 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 631 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 629 "add_mutable_aux_preds.m"
        {
#line 630 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 629 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_43_43 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34;
#line 629 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_44_44 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_36;
#line 629 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_45_45 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38;
#line 629 "add_mutable_aux_preds.m"
        }
#line 631 "add_mutable_aux_preds.m"
        break;
#line 631 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 632 "add_mutable_aux_preds.m"
        {
#line 632 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_28;

#line 633 "add_mutable_aux_preds.m"
          {
#line 633 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__define_pre_init_pred_12_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11, hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_13, hlds__make_hlds__add_mutable_aux_preds__Attrs_26, &hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_28, hlds__make_hlds__add_mutable_aux_preds__Status_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_43_43, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_36, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_44_44, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_45_45);
          }
#line 635 "add_mutable_aux_preds.m"
          {
#line 635 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 635 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_27, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_28));
#line 635 "add_mutable_aux_preds.m"
          }
#line 632 "add_mutable_aux_preds.m"
        }
#line 631 "add_mutable_aux_preds.m"
        break;
#line 631 "add_mutable_aux_preds.m"
    }
#line 640 "add_mutable_aux_preds.m"
#line 640 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__LockUnlock_22) {
#line 640 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 640 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 638 "add_mutable_aux_preds.m"
        {
#line 639 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 638 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_43_43;
#line 638 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_47_47 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_44_44;
#line 638 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_48_48 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_45_45;
#line 638 "add_mutable_aux_preds.m"
        }
#line 640 "add_mutable_aux_preds.m"
        break;
#line 640 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 641 "add_mutable_aux_preds.m"
        {
#line 641 "add_mutable_aux_preds.m"
          MR_Tuple hlds__make_hlds__add_mutable_aux_preds__LockUnlockExprs_30;

#line 642 "add_mutable_aux_preds.m"
          {
#line 642 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__define_lock_unlock_preds_12_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11, hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_13, hlds__make_hlds__add_mutable_aux_preds__Attrs_26, &hlds__make_hlds__add_mutable_aux_preds__LockUnlockExprs_30, hlds__make_hlds__add_mutable_aux_preds__Status_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_43_43, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_44_44, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_47_47, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_45_45, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_48_48);
          }
#line 644 "add_mutable_aux_preds.m"
          {
#line 644 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 644 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_29, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockUnlockExprs_30));
#line 644 "add_mutable_aux_preds.m"
          }
#line 641 "add_mutable_aux_preds.m"
        }
#line 640 "add_mutable_aux_preds.m"
        break;
#line 640 "add_mutable_aux_preds.m"
    }
#line 649 "add_mutable_aux_preds.m"
#line 649 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_23) {
#line 649 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 649 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 647 "add_mutable_aux_preds.m"
        {
#line 648 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 647 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_49_49 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46;
#line 647 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_50_50 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_47_47;
#line 647 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_48_48;
#line 647 "add_mutable_aux_preds.m"
        }
#line 649 "add_mutable_aux_preds.m"
        break;
#line 649 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 650 "add_mutable_aux_preds.m"
        {
#line 650 "add_mutable_aux_preds.m"
          MR_Tuple hlds__make_hlds__add_mutable_aux_preds__UnsafeGetSetExprs_32;

#line 651 "add_mutable_aux_preds.m"
          {
#line 651 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__define_unsafe_get_set_preds_12_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11, hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_13, hlds__make_hlds__add_mutable_aux_preds__Attrs_26, &hlds__make_hlds__add_mutable_aux_preds__UnsafeGetSetExprs_32, hlds__make_hlds__add_mutable_aux_preds__Status_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_49_49, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_47_47, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_50_50, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_48_48, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51);
          }
#line 654 "add_mutable_aux_preds.m"
          {
#line 654 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 654 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_31, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeGetSetExprs_32));
#line 654 "add_mutable_aux_preds.m"
          }
#line 650 "add_mutable_aux_preds.m"
        }
#line 649 "add_mutable_aux_preds.m"
        break;
#line 649 "add_mutable_aux_preds.m"
    }
#line 660 "add_mutable_aux_preds.m"
    {
#line 660 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__define_main_get_set_preds_14_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11, hlds__make_hlds__add_mutable_aux_preds__TargetParams_12, hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_13, hlds__make_hlds__add_mutable_aux_preds__Attrs_26, hlds__make_hlds__add_mutable_aux_preds__MaybeLockUnlockExprs_29, hlds__make_hlds__add_mutable_aux_preds__MaybeUnsafeGetSetExprs_31, &hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_33, hlds__make_hlds__add_mutable_aux_preds__Status_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_49_49, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_52_52, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_50_50, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_53_53, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_54_54);
    }
#line 667 "add_mutable_aux_preds.m"
    {
#line 667 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__define_init_pred_11_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11, hlds__make_hlds__add_mutable_aux_preds__MaybeCallPreInitExpr_27, hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_33, hlds__make_hlds__add_mutable_aux_preds__Lang_19, hlds__make_hlds__add_mutable_aux_preds__Status_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_52_52, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_35, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_53_53, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_37, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_54_54, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39);
#line 667 "add_mutable_aux_preds.m"
      return;
    }
#line 596 "add_mutable_aux_preds.m"
  }
#line 590 "add_mutable_aux_preds.m"
}

#line 554 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_global_var_java_6_p_0(
#line 554 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_7,
#line 554 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_8,
#line 554 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_9,
#line 554 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_10,
#line 554 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_15,
#line 554 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_16)
#line 554 "add_mutable_aux_preds.m"
{
#line 559 "add_mutable_aux_preds.m"
  {
#line 559 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 559 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__DefnBody_13;
#line 559 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_14;
#line 559 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_36_36;

#line 571 "add_mutable_aux_preds.m"
#line 571 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_9) {
#line 571 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 571 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 561 "add_mutable_aux_preds.m"
        {
#line 561 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__TypeStr_12;
#line 561 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__V_30_30;
#line 561 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__V_31_31;
#line 561 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__V_33_33;
#line 565 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_39_39;

#line 565 "add_mutable_aux_preds.m"
          {
#line 565 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_39_39 = parse_tree__builtin_lib_types__int_type_0_f_0();
          }
#line 565 "add_mutable_aux_preds.m"
          {
#line 565 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__make_hlds__add_mutable_aux_preds__Type_8, hlds__make_hlds__add_mutable_aux_preds__V_39_39);
          }
#line 567 "add_mutable_aux_preds.m"
          if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 566 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__TypeStr_12 = (MR_String) "int";
#line 567 "add_mutable_aux_preds.m"
          else
#line 568 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__TypeStr_12 = (MR_String) "java.lang.Object";
#line 570 "add_mutable_aux_preds.m"
          {
#line 570 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_33_33 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_7, (MR_String) ";\n");
          }
#line 570 "add_mutable_aux_preds.m"
          {
#line 570 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_31_31 = mercury__string__f_43_43_2_f_0((MR_String) " ", hlds__make_hlds__add_mutable_aux_preds__V_33_33);
          }
#line 570 "add_mutable_aux_preds.m"
          {
#line 570 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_30_30 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeStr_12, hlds__make_hlds__add_mutable_aux_preds__V_31_31);
          }
#line 570 "add_mutable_aux_preds.m"
          {
#line 570 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__DefnBody_13 = mercury__string__f_43_43_2_f_0((MR_String) "static ", hlds__make_hlds__add_mutable_aux_preds__V_30_30);
          }
#line 561 "add_mutable_aux_preds.m"
        }
#line 571 "add_mutable_aux_preds.m"
        break;
#line 571 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 572 "add_mutable_aux_preds.m"
        {
#line 572 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_17_17;
#line 572 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_19_19;
#line 572 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_20_20;
#line 572 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_22_22;
#line 572 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_23_23;
#line 572 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_25_25;
#line 572 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__TypeStr_38;
#line 573 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_40_40;

#line 573 "add_mutable_aux_preds.m"
          {
#line 573 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_40_40 = parse_tree__builtin_lib_types__int_type_0_f_0();
          }
#line 573 "add_mutable_aux_preds.m"
          {
#line 573 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__make_hlds__add_mutable_aux_preds__Type_8, hlds__make_hlds__add_mutable_aux_preds__V_40_40);
          }
#line 575 "add_mutable_aux_preds.m"
          if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 574 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__TypeStr_38 = (MR_String) "java.lang.Integer";
#line 575 "add_mutable_aux_preds.m"
          else
#line 576 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__TypeStr_38 = (MR_String) "java.lang.Object";
#line 581 "add_mutable_aux_preds.m"
          {
#line 581 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 581 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_25_25, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TypeStr_38));
#line 581 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[31])));
#line 581 "add_mutable_aux_preds.m"
          }
#line 581 "add_mutable_aux_preds.m"
          {
#line 581 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 581 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_23_23, 0) = ((MR_Box) ((MR_String) " = new java.lang.InheritableThreadLocal<"));
#line 581 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_23_23, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_25_25));
#line 581 "add_mutable_aux_preds.m"
          }
#line 580 "add_mutable_aux_preds.m"
          {
#line 580 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 580 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_22_22, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_7));
#line 580 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_22_22, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_23_23));
#line 580 "add_mutable_aux_preds.m"
          }
#line 579 "add_mutable_aux_preds.m"
          {
#line 579 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 579 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_20_20, 0) = ((MR_Box) ((MR_String) "> "));
#line 579 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_20_20, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_22_22));
#line 579 "add_mutable_aux_preds.m"
          }
#line 579 "add_mutable_aux_preds.m"
          {
#line 579 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 579 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_19_19, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TypeStr_38));
#line 579 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_19_19, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_20_20));
#line 579 "add_mutable_aux_preds.m"
          }
#line 579 "add_mutable_aux_preds.m"
          {
#line 579 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 579 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_17_17, 0) = ((MR_Box) ((MR_String) "static java.lang.ThreadLocal<"));
#line 579 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_17_17, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_19_19));
#line 579 "add_mutable_aux_preds.m"
          }
#line 578 "add_mutable_aux_preds.m"
          {
#line 578 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__DefnBody_13 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_17_17);
          }
#line 572 "add_mutable_aux_preds.m"
        }
#line 571 "add_mutable_aux_preds.m"
        break;
#line 571 "add_mutable_aux_preds.m"
    }
#line 585 "add_mutable_aux_preds.m"
    {
#line 585 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 585 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_36_36, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__DefnBody_13));
#line 585 "add_mutable_aux_preds.m"
    }
#line 585 "add_mutable_aux_preds.m"
    {
#line 585 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 585 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_14, 0) = ((MR_Box) ((MR_Integer) 2));
#line 585 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_14, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_36_36));
#line 585 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_14, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_10));
#line 585 "add_mutable_aux_preds.m"
    }
#line 586 "add_mutable_aux_preds.m"
    {
#line 586 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_add_foreign_body_code_3_p_0(hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_15, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_16);
#line 586 "add_mutable_aux_preds.m"
      return;
    }
#line 559 "add_mutable_aux_preds.m"
  }
#line 554 "add_mutable_aux_preds.m"
}

#line 453 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_global_var_c_7_p_0(
#line 453 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_8,
#line 453 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_9,
#line 453 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_10,
#line 453 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_11,
#line 453 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_12,
#line 453 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_26,
#line 453 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_27)
#line 453 "add_mutable_aux_preds.m"
{
#line 458 "add_mutable_aux_preds.m"
  {
#line 458 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 458 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__HighLevelTypeName_14;
#line 458 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__LowLevelTypeName_15;
#line 458 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__TypeName_18;
#line 458 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__LockDeclStrs_19;
#line 458 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__LockDefnStrs_20;
#line 458 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__DeclBody_22;
#line 458 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignDeclCode_23;
#line 458 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__DefnBody_24;
#line 458 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignBodyCode_25;
#line 458 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_51_51;
#line 458 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_53_53;
#line 458 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_55_55;
#line 458 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_56_56;
#line 458 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_58_58;
#line 458 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_59_59;
#line 458 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_61_61;
#line 458 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_63_63;
#line 458 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_65_65;
#line 458 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_66_66;
#line 458 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_68_68;
#line 458 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_69_69;
#line 458 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_71_71;
#line 458 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_75_75;
#line 458 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_76_76;
#line 458 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_77_77;
#line 458 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_78_78;
#line 458 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_80_80;
#line 458 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_81_81;
#line 458 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_84_84;

#line 481 "add_mutable_aux_preds.m"
#line 481 "add_mutable_aux_preds.m"
    switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_11) {
#line 481 "add_mutable_aux_preds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 481 "add_mutable_aux_preds.m"
      case (MR_Integer) 0:
#line 464 "add_mutable_aux_preds.m"
        {
#line 464 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__Globals_16;
#line 464 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__HighLevelCode_17;

#line 1326 "add_mutable_aux_preds.m"
          {
#line 1326 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__HighLevelTypeName_14 = backend_libs__foreign__mercury_exported_type_to_string_3_f_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_26, (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__Type_9);
          }
#line 1324 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LowLevelTypeName_15 = (MR_String) "MR_Word";
#line 472 "add_mutable_aux_preds.m"
          {
#line 472 "add_mutable_aux_preds.m"
            hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_26, &hlds__make_hlds__add_mutable_aux_preds__Globals_16);
          }
#line 473 "add_mutable_aux_preds.m"
          {
#line 473 "add_mutable_aux_preds.m"
            libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_16, (MR_Integer) 255, &hlds__make_hlds__add_mutable_aux_preds__HighLevelCode_17);
          }
#line 477 "add_mutable_aux_preds.m"
#line 477 "add_mutable_aux_preds.m"
          switch (hlds__make_hlds__add_mutable_aux_preds__HighLevelCode_17) {
#line 477 "add_mutable_aux_preds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 477 "add_mutable_aux_preds.m"
            case (MR_Integer) 0:
#line 476 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__TypeName_18 = hlds__make_hlds__add_mutable_aux_preds__LowLevelTypeName_15;
#line 477 "add_mutable_aux_preds.m"
              break;
#line 477 "add_mutable_aux_preds.m"
            case (MR_Integer) 1:
#line 479 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__TypeName_18 = hlds__make_hlds__add_mutable_aux_preds__HighLevelTypeName_14;
#line 477 "add_mutable_aux_preds.m"
              break;
#line 477 "add_mutable_aux_preds.m"
          }
#line 464 "add_mutable_aux_preds.m"
        }
#line 481 "add_mutable_aux_preds.m"
        break;
#line 481 "add_mutable_aux_preds.m"
      case (MR_Integer) 1:
#line 482 "add_mutable_aux_preds.m"
        {
#line 485 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__TypeName_18 = (MR_String) "MR_Unsigned";
#line 486 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__HighLevelTypeName_14 = hlds__make_hlds__add_mutable_aux_preds__TypeName_18;
#line 487 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LowLevelTypeName_15 = hlds__make_hlds__add_mutable_aux_preds__TypeName_18;
#line 482 "add_mutable_aux_preds.m"
        }
#line 481 "add_mutable_aux_preds.m"
        break;
#line 481 "add_mutable_aux_preds.m"
    }
#line 493 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__IsConstant_10 == (MR_Integer) 1);
#line 494 "add_mutable_aux_preds.m"
    if (!(hlds__make_hlds__add_mutable_aux_preds__succeeded))
#line 494 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_11 == (MR_Integer) 1);
#line 499 "add_mutable_aux_preds.m"
    if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 497 "add_mutable_aux_preds.m"
      {
#line 497 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__LockDeclStrs_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 498 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__LockDefnStrs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 497 "add_mutable_aux_preds.m"
      }
#line 499 "add_mutable_aux_preds.m"
    else
#line 500 "add_mutable_aux_preds.m"
      {
#line 500 "add_mutable_aux_preds.m"
        MR_String hlds__make_hlds__add_mutable_aux_preds__MutexVarName_21;
#line 500 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_34_34;
#line 500 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_36_36;
#line 500 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_43_43;

#line 500 "add_mutable_aux_preds.m"
        {
#line 500 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__MutexVarName_21 = parse_tree__prog_mutable__mutable_mutex_var_name_1_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_8);
        }
#line 503 "add_mutable_aux_preds.m"
        {
#line 503 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_36_36, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__MutexVarName_21));
#line 503 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[22])));
#line 503 "add_mutable_aux_preds.m"
        }
#line 503 "add_mutable_aux_preds.m"
        {
#line 503 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_34_34, 0) = ((MR_Box) ((MR_String) "    extern MercuryLock "));
#line 503 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_34_34, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_36_36));
#line 503 "add_mutable_aux_preds.m"
        }
#line 502 "add_mutable_aux_preds.m"
        {
#line 502 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LockDeclStrs_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 502 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__LockDeclStrs_19, 0) = ((MR_Box) ((MR_String) "#ifdef MR_THREAD_SAFE\n"));
#line 502 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__LockDeclStrs_19, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_34_34));
#line 502 "add_mutable_aux_preds.m"
        }
#line 508 "add_mutable_aux_preds.m"
        {
#line 508 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 508 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_43_43, 0) = ((MR_Box) ((MR_String) "    MercuryLock "));
#line 508 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_43_43, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_36_36));
#line 508 "add_mutable_aux_preds.m"
        }
#line 507 "add_mutable_aux_preds.m"
        {
#line 507 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LockDefnStrs_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 507 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__LockDefnStrs_20, 0) = ((MR_Box) ((MR_String) "#ifdef MR_THREAD_SAFE\n"));
#line 507 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__LockDefnStrs_20, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_43_43));
#line 507 "add_mutable_aux_preds.m"
        }
#line 500 "add_mutable_aux_preds.m"
      }
#line 518 "add_mutable_aux_preds.m"
    {
#line 518 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 518 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_71_71, 0) = ((MR_Box) ((MR_String) "#endif\n"));
#line 518 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_71_71, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockDeclStrs_19));
#line 518 "add_mutable_aux_preds.m"
    }
#line 517 "add_mutable_aux_preds.m"
    {
#line 517 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 517 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_69_69, 0) = ((MR_Box) ((MR_String) ";\n"));
#line 517 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_69_69, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_71_71));
#line 517 "add_mutable_aux_preds.m"
    }
#line 517 "add_mutable_aux_preds.m"
    {
#line 517 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 517 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_68_68, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_8));
#line 517 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_68_68, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_69_69));
#line 517 "add_mutable_aux_preds.m"
    }
#line 517 "add_mutable_aux_preds.m"
    {
#line 517 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 517 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_66_66, 0) = ((MR_Box) ((MR_String) " "));
#line 517 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_66_66, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_68_68));
#line 517 "add_mutable_aux_preds.m"
    }
#line 517 "add_mutable_aux_preds.m"
    {
#line 517 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 517 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_65_65, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LowLevelTypeName_15));
#line 517 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_65_65, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_66_66));
#line 517 "add_mutable_aux_preds.m"
    }
#line 517 "add_mutable_aux_preds.m"
    {
#line 517 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 517 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_63_63, 0) = ((MR_Box) ((MR_String) "    extern "));
#line 517 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_63_63, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_65_65));
#line 517 "add_mutable_aux_preds.m"
    }
#line 516 "add_mutable_aux_preds.m"
    {
#line 516 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 516 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_61_61, 0) = ((MR_Box) ((MR_String) "#else\n"));
#line 516 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_61_61, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_63_63));
#line 516 "add_mutable_aux_preds.m"
    }
#line 515 "add_mutable_aux_preds.m"
    {
#line 515 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 515 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_59_59, 0) = ((MR_Box) ((MR_String) ";\n"));
#line 515 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_59_59, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_61_61));
#line 515 "add_mutable_aux_preds.m"
    }
#line 515 "add_mutable_aux_preds.m"
    {
#line 515 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 515 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_58_58, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_8));
#line 515 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_58_58, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_59_59));
#line 515 "add_mutable_aux_preds.m"
    }
#line 515 "add_mutable_aux_preds.m"
    {
#line 515 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 515 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_56_56, 0) = ((MR_Box) ((MR_String) " "));
#line 515 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_56_56, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_58_58));
#line 515 "add_mutable_aux_preds.m"
    }
#line 515 "add_mutable_aux_preds.m"
    {
#line 515 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 515 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__HighLevelTypeName_14));
#line 515 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_56_56));
#line 515 "add_mutable_aux_preds.m"
    }
#line 515 "add_mutable_aux_preds.m"
    {
#line 515 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 515 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_53_53, 0) = ((MR_Box) ((MR_String) "    extern "));
#line 515 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_53_53, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_55_55));
#line 515 "add_mutable_aux_preds.m"
    }
#line 514 "add_mutable_aux_preds.m"
    {
#line 514 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 514 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_51_51, 0) = ((MR_Box) ((MR_String) "#ifdef MR_HIGHLEVEL_CODE\n"));
#line 514 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_51_51, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_53_53));
#line 514 "add_mutable_aux_preds.m"
    }
#line 513 "add_mutable_aux_preds.m"
    {
#line 513 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__DeclBody_22 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_51_51);
    }
#line 520 "add_mutable_aux_preds.m"
    {
#line 520 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 520 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_75_75, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__DeclBody_22));
#line 520 "add_mutable_aux_preds.m"
    }
#line 519 "add_mutable_aux_preds.m"
    {
#line 519 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__ForeignDeclCode_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 519 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignDeclCode_23, 0) = ((MR_Box) ((MR_Integer) 0));
#line 519 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignDeclCode_23, 1) = ((MR_Box) ((MR_Integer) 1));
#line 519 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignDeclCode_23, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_75_75));
#line 519 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignDeclCode_23, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_12));
#line 519 "add_mutable_aux_preds.m"
    }
#line 521 "add_mutable_aux_preds.m"
    {
#line 521 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_add_foreign_decl_code_3_p_0(hlds__make_hlds__add_mutable_aux_preds__ForeignDeclCode_23, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_26, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_76_76);
    }
#line 524 "add_mutable_aux_preds.m"
    {
#line 524 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 524 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_81_81, 0) = ((MR_Box) ((MR_String) ";\n"));
#line 524 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_81_81, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockDefnStrs_20));
#line 524 "add_mutable_aux_preds.m"
    }
#line 524 "add_mutable_aux_preds.m"
    {
#line 524 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 524 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_80_80, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_8));
#line 524 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_80_80, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_81_81));
#line 524 "add_mutable_aux_preds.m"
    }
#line 524 "add_mutable_aux_preds.m"
    {
#line 524 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 524 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_78_78, 0) = ((MR_Box) ((MR_String) " "));
#line 524 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_78_78, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_80_80));
#line 524 "add_mutable_aux_preds.m"
    }
#line 524 "add_mutable_aux_preds.m"
    {
#line 524 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 524 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_77_77, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TypeName_18));
#line 524 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_77_77, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_78_78));
#line 524 "add_mutable_aux_preds.m"
    }
#line 523 "add_mutable_aux_preds.m"
    {
#line 523 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__DefnBody_24 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_77_77);
    }
#line 525 "add_mutable_aux_preds.m"
    {
#line 525 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 525 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_84_84, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__DefnBody_24));
#line 525 "add_mutable_aux_preds.m"
    }
#line 525 "add_mutable_aux_preds.m"
    {
#line 525 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__ForeignBodyCode_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 525 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignBodyCode_25, 0) = ((MR_Box) ((MR_Integer) 0));
#line 525 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignBodyCode_25, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_84_84));
#line 525 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignBodyCode_25, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_12));
#line 525 "add_mutable_aux_preds.m"
    }
#line 526 "add_mutable_aux_preds.m"
    {
#line 526 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_add_foreign_body_code_3_p_0(hlds__make_hlds__add_mutable_aux_preds__ForeignBodyCode_25, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_76_76, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_27);
#line 526 "add_mutable_aux_preds.m"
      return;
    }
#line 458 "add_mutable_aux_preds.m"
  }
#line 453 "add_mutable_aux_preds.m"
}

#line 308 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_8(
#line 308 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 308 "add_mutable_aux_preds.m"
{
#line 308 "add_mutable_aux_preds.m"
  {
#line 308 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 308 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 308 "add_mutable_aux_preds.m"
    {
#line 308 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__308__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 308 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 308 "add_mutable_aux_preds.m"
  }
#line 308 "add_mutable_aux_preds.m"
}

#line 306 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_7(
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

#line 305 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_6(
#line 305 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 305 "add_mutable_aux_preds.m"
{
#line 305 "add_mutable_aux_preds.m"
  {
#line 305 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 305 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 305 "add_mutable_aux_preds.m"
    {
#line 305 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__305__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 305 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 305 "add_mutable_aux_preds.m"
  }
#line 305 "add_mutable_aux_preds.m"
}

#line 304 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_5(
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
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_4(
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

#line 301 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_3(
#line 301 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 301 "add_mutable_aux_preds.m"
{
#line 301 "add_mutable_aux_preds.m"
  {
#line 301 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 301 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 301 "add_mutable_aux_preds.m"
    {
#line 301 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__301__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 301 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 301 "add_mutable_aux_preds.m"
  }
#line 301 "add_mutable_aux_preds.m"
}

#line 299 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_2(
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
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_1(
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

#line 286 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0(
#line 286 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_10,
#line 286 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_11,
#line 286 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_12,
#line 286 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Kind_13,
#line 286 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_14,
#line 286 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34,
#line 286 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_35,
#line 286 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_36,
#line 286 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_37)
#line 286 "add_mutable_aux_preds.m"
{
#line 292 "add_mutable_aux_preds.m"
  {
#line 292 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 292 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredOrigin_17;
#line 292 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_18;
#line 292 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredOrFunc_19;
#line 292 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TypesAndModes_20;
#line 292 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__WithType_21;
#line 292 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__WithInst_22;
#line 292 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeDetism_23;
#line 292 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_25;
#line 292 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InstVarSet_26;
#line 292 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ExistQVars_27;
#line 292 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Purity_28;
#line 292 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Constraints_29;
#line 292 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_30;
#line 292 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Markers_32;
#line 292 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_38_38;
#line 292 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_42_42;
#line 292 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_43_43;
#line 292 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_47_47;
#line 292 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_48_48;
#line 292 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_53_53;
#line 292 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_58_58;
#line 292 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_63_63;
#line 292 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_68_68;
#line 292 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_74_74;
#line 294 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Origin_24;
#line 294 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_31;
#line 311 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_33_33;

#line 293 "add_mutable_aux_preds.m"
    {
#line 293 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredOrigin_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 293 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PredOrigin_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 293 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PredOrigin_17, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ModuleName_11));
#line 293 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PredOrigin_17, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Name_12));
#line 293 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PredOrigin_17, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Kind_13));
#line 293 "add_mutable_aux_preds.m"
    }
#line 294 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__PredName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_10, (MR_Integer) 0)));
#line 294 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__PredOrFunc_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_10, (MR_Integer) 1)));
#line 294 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__TypesAndModes_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_10, (MR_Integer) 2)));
#line 294 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__WithType_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_10, (MR_Integer) 3)));
#line 294 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__WithInst_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_10, (MR_Integer) 4)));
#line 294 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MaybeDetism_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_10, (MR_Integer) 5)));
#line 294 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Origin_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_10, (MR_Integer) 6)));
#line 294 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_10, (MR_Integer) 7)));
#line 294 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__InstVarSet_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_10, (MR_Integer) 8)));
#line 294 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__ExistQVars_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_10, (MR_Integer) 9)));
#line 294 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Purity_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_10, (MR_Integer) 10)));
#line 294 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Constraints_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_10, (MR_Integer) 11)));
#line 294 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Context_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_10, (MR_Integer) 12)));
#line 294 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___SeqNum_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_10, (MR_Integer) 13)));
#line 297 "add_mutable_aux_preds.m"
    {
#line 297 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_42_42 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
    }
#line 297 "add_mutable_aux_preds.m"
    {
#line 297 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 297 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_38_38, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[4]));
#line 297 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_38_38, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_1));
#line 297 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 297 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_38_38, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_25));
#line 297 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_38_38, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_42_42));
#line 297 "add_mutable_aux_preds.m"
    }
#line 297 "add_mutable_aux_preds.m"
    {
#line 297 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_38_38, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/9", (MR_String) "TypeVarSet != varset.init");
    }
#line 299 "add_mutable_aux_preds.m"
    {
#line 299 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_47_47 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
#line 299 "add_mutable_aux_preds.m"
    {
#line 299 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 299 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_43_43, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[5]));
#line 299 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_43_43, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_2));
#line 299 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 299 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_43_43, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InstVarSet_26));
#line 299 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_43_43, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_47_47));
#line 299 "add_mutable_aux_preds.m"
    }
#line 299 "add_mutable_aux_preds.m"
    {
#line 299 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_43_43, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/9", (MR_String) "InstVarSet != varset.init");
    }
#line 301 "add_mutable_aux_preds.m"
    {
#line 301 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 301 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_48_48, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[6]));
#line 301 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_48_48, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_3));
#line 301 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 301 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_48_48, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ExistQVars_27));
#line 301 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_48_48, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 301 "add_mutable_aux_preds.m"
    }
#line 301 "add_mutable_aux_preds.m"
    {
#line 301 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_48_48, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/9", (MR_String) "ExistQVars != []");
    }
#line 302 "add_mutable_aux_preds.m"
    {
#line 302 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 302 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_53_53, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[7]));
#line 302 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_53_53, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_4));
#line 302 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 302 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_53_53, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PredOrFunc_19));
#line 302 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_53_53, 4) = ((MR_Box) ((MR_Integer) 0));
#line 302 "add_mutable_aux_preds.m"
    }
#line 302 "add_mutable_aux_preds.m"
    {
#line 302 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_53_53, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/9", (MR_String) "PredOrFunc != pf_predicate");
    }
#line 304 "add_mutable_aux_preds.m"
    {
#line 304 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 304 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_58_58, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[8]));
#line 304 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_58_58, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_5));
#line 304 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 304 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_58_58, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__WithType_21));
#line 304 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_58_58, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 304 "add_mutable_aux_preds.m"
    }
#line 304 "add_mutable_aux_preds.m"
    {
#line 304 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_58_58, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/9", (MR_String) "WithType != no");
    }
#line 305 "add_mutable_aux_preds.m"
    {
#line 305 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 305 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_63_63, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[9]));
#line 305 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_63_63, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_6));
#line 305 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 305 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_63_63, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__WithInst_22));
#line 305 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_63_63, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 305 "add_mutable_aux_preds.m"
    }
#line 305 "add_mutable_aux_preds.m"
    {
#line 305 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_63_63, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/9", (MR_String) "WithInst != no");
    }
#line 306 "add_mutable_aux_preds.m"
    {
#line 306 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 306 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_68_68, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[10]));
#line 306 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_68_68, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_7));
#line 306 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_68_68, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 306 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_68_68, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__MaybeDetism_23));
#line 306 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_68_68, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[0])));
#line 306 "add_mutable_aux_preds.m"
    }
#line 306 "add_mutable_aux_preds.m"
    {
#line 306 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_68_68, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/9", (MR_String) "MaybeDet != yes(detism_det)");
    }
#line 308 "add_mutable_aux_preds.m"
    {
#line 308 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 308 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_74_74, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[11]));
#line 308 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_74_74, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_8));
#line 308 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_74_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 308 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_74_74, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Constraints_29));
#line 308 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_74_74, 4) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[29]));
#line 308 "add_mutable_aux_preds.m"
    }
#line 308 "add_mutable_aux_preds.m"
    {
#line 308 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_74_74, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/9", (MR_String) "Constraints != constraints([], [])");
    }
#line 310 "add_mutable_aux_preds.m"
    {
#line 310 "add_mutable_aux_preds.m"
      hlds__hlds_pred__marker_list_to_markers_2_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[30]), &hlds__make_hlds__add_mutable_aux_preds__Markers_32);
    }
#line 311 "add_mutable_aux_preds.m"
    {
#line 311 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_pred__module_add_pred_or_func_18_p_0(hlds__make_hlds__add_mutable_aux_preds__PredOrigin_17, hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_25, hlds__make_hlds__add_mutable_aux_preds__InstVarSet_26, hlds__make_hlds__add_mutable_aux_preds__ExistQVars_27, hlds__make_hlds__add_mutable_aux_preds__PredOrFunc_19, hlds__make_hlds__add_mutable_aux_preds__PredName_18, hlds__make_hlds__add_mutable_aux_preds__TypesAndModes_20, hlds__make_hlds__add_mutable_aux_preds__MaybeDetism_23, hlds__make_hlds__add_mutable_aux_preds__Purity_28, hlds__make_hlds__add_mutable_aux_preds__Constraints_29, hlds__make_hlds__add_mutable_aux_preds__Markers_32, hlds__make_hlds__add_mutable_aux_preds__Context_30, hlds__make_hlds__add_mutable_aux_preds__Status_14, &hlds__make_hlds__add_mutable_aux_preds__V_33_33, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_35, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_36, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_37);
    }
#line 292 "add_mutable_aux_preds.m"
  }
#line 286 "add_mutable_aux_preds.m"
}

#line 267 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_12_p_0(
#line 267 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_13,
#line 267 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_14,
#line 267 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Kind_15,
#line 267 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_16,
#line 267 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_17,
#line 267 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Purity_18,
#line 267 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_19,
#line 267 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_20,
#line 267 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_30,
#line 267 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_31,
#line 267 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_32,
#line 267 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_33)
#line 267 "add_mutable_aux_preds.m"
{
#line 273 "add_mutable_aux_preds.m"
  {
#line 273 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 273 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredOrigin_23;
#line 273 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_24;
#line 273 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InstVarSet_25;
#line 273 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Markers_28;
#line 280 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_29_29;

#line 274 "add_mutable_aux_preds.m"
    {
#line 274 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredOrigin_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 274 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PredOrigin_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 274 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PredOrigin_23, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ModuleName_13));
#line 274 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PredOrigin_23, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Name_14));
#line 274 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PredOrigin_23, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Kind_15));
#line 274 "add_mutable_aux_preds.m"
    }
#line 275 "add_mutable_aux_preds.m"
    {
#line 275 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_24 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
    }
#line 276 "add_mutable_aux_preds.m"
    {
#line 276 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__InstVarSet_25 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
#line 279 "add_mutable_aux_preds.m"
    {
#line 279 "add_mutable_aux_preds.m"
      hlds__hlds_pred__marker_list_to_markers_2_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[30]), &hlds__make_hlds__add_mutable_aux_preds__Markers_28);
    }
#line 280 "add_mutable_aux_preds.m"
    {
#line 280 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_pred__module_add_pred_or_func_18_p_0(hlds__make_hlds__add_mutable_aux_preds__PredOrigin_23, hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_24, hlds__make_hlds__add_mutable_aux_preds__InstVarSet_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__PredName_16, hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_17, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[0]), hlds__make_hlds__add_mutable_aux_preds__Purity_18, (MR_Word) &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[29], hlds__make_hlds__add_mutable_aux_preds__Markers_28, hlds__make_hlds__add_mutable_aux_preds__Context_20, hlds__make_hlds__add_mutable_aux_preds__Status_19, &hlds__make_hlds__add_mutable_aux_preds__V_29_29, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_30, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_31, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_32, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_33);
    }
#line 273 "add_mutable_aux_preds.m"
  }
#line 267 "add_mutable_aux_preds.m"
}

#line 253 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_pre_init_pred_decl_8_p_0(
#line 253 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_9,
#line 253 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_10,
#line 253 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_11,
#line 253 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_12,
#line 253 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_17,
#line 253 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_18,
#line 253 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_19,
#line 253 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_20)
#line 253 "add_mutable_aux_preds.m"
{
#line 258 "add_mutable_aux_preds.m"
  {
#line 258 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 258 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_15;

#line 259 "add_mutable_aux_preds.m"
    {
#line 259 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredName_15 = parse_tree__prog_mutable__mutable_pre_init_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_9, hlds__make_hlds__add_mutable_aux_preds__Name_10);
    }
#line 261 "add_mutable_aux_preds.m"
    {
#line 261 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_12_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_9, hlds__make_hlds__add_mutable_aux_preds__Name_10, (MR_Integer) 10, hlds__make_hlds__add_mutable_aux_preds__PredName_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 2, hlds__make_hlds__add_mutable_aux_preds__Status_11, hlds__make_hlds__add_mutable_aux_preds__Context_12, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_17, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_18, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_19, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_20);
#line 261 "add_mutable_aux_preds.m"
      return;
    }
#line 258 "add_mutable_aux_preds.m"
  }
#line 253 "add_mutable_aux_preds.m"
}

#line 236 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_init_pred_decl_8_p_0(
#line 236 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_9,
#line 236 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_10,
#line 236 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_11,
#line 236 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_12,
#line 236 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_17,
#line 236 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_18,
#line 236 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_19,
#line 236 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_20)
#line 236 "add_mutable_aux_preds.m"
{
#line 241 "add_mutable_aux_preds.m"
  {
#line 241 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 241 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_15;

#line 242 "add_mutable_aux_preds.m"
    {
#line 242 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredName_15 = parse_tree__prog_mutable__mutable_init_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_9, hlds__make_hlds__add_mutable_aux_preds__Name_10);
    }
#line 244 "add_mutable_aux_preds.m"
    {
#line 244 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_12_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_9, hlds__make_hlds__add_mutable_aux_preds__Name_10, (MR_Integer) 10, hlds__make_hlds__add_mutable_aux_preds__PredName_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 2, hlds__make_hlds__add_mutable_aux_preds__Status_11, hlds__make_hlds__add_mutable_aux_preds__Context_12, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_17, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_18, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_19, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_20);
#line 244 "add_mutable_aux_preds.m"
      return;
    }
#line 241 "add_mutable_aux_preds.m"
  }
#line 236 "add_mutable_aux_preds.m"
}

#line 198 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_unlock_pred_decl_8_p_0(
#line 198 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_9,
#line 198 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_10,
#line 198 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_11,
#line 198 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_12,
#line 198 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_17,
#line 198 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_18,
#line 198 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_19,
#line 198 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_20)
#line 198 "add_mutable_aux_preds.m"
{
#line 227 "add_mutable_aux_preds.m"
  {
#line 227 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 227 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_15;

#line 228 "add_mutable_aux_preds.m"
    {
#line 228 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredName_15 = parse_tree__prog_mutable__mutable_unlock_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_9, hlds__make_hlds__add_mutable_aux_preds__Name_10);
    }
#line 230 "add_mutable_aux_preds.m"
    {
#line 230 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_12_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_9, hlds__make_hlds__add_mutable_aux_preds__Name_10, (MR_Integer) 9, hlds__make_hlds__add_mutable_aux_preds__PredName_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 2, hlds__make_hlds__add_mutable_aux_preds__Status_11, hlds__make_hlds__add_mutable_aux_preds__Context_12, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_17, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_18, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_19, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_20);
#line 230 "add_mutable_aux_preds.m"
      return;
    }
#line 227 "add_mutable_aux_preds.m"
  }
#line 198 "add_mutable_aux_preds.m"
}

#line 195 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_lock_pred_decl_8_p_0(
#line 195 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_9,
#line 195 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_10,
#line 195 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_11,
#line 195 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_12,
#line 195 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_17,
#line 195 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_18,
#line 195 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_19,
#line 195 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_20)
#line 195 "add_mutable_aux_preds.m"
{
#line 219 "add_mutable_aux_preds.m"
  {
#line 219 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 219 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_15;

#line 220 "add_mutable_aux_preds.m"
    {
#line 220 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredName_15 = parse_tree__prog_mutable__mutable_lock_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_9, hlds__make_hlds__add_mutable_aux_preds__Name_10);
    }
#line 222 "add_mutable_aux_preds.m"
    {
#line 222 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_12_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_9, hlds__make_hlds__add_mutable_aux_preds__Name_10, (MR_Integer) 8, hlds__make_hlds__add_mutable_aux_preds__PredName_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 2, hlds__make_hlds__add_mutable_aux_preds__Status_11, hlds__make_hlds__add_mutable_aux_preds__Context_12, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_17, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_18, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_19, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_20);
#line 222 "add_mutable_aux_preds.m"
      return;
    }
#line 219 "add_mutable_aux_preds.m"
  }
#line 195 "add_mutable_aux_preds.m"
}

#line 191 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_unsafe_set_pred_decl_10_p_0(
#line 191 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_11,
#line 191 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_12,
#line 191 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_13,
#line 191 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_14,
#line 191 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_15,
#line 191 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_16,
#line 191 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_21,
#line 191 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_22,
#line 191 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_23,
#line 191 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_24)
#line 191 "add_mutable_aux_preds.m"
{
#line 211 "add_mutable_aux_preds.m"
  {
#line 211 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 211 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_19;
#line 211 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_20;
#line 211 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_25_25;
#line 211 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_26_26;

#line 212 "add_mutable_aux_preds.m"
    {
#line 212 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredName_19 = parse_tree__prog_mutable__mutable_unsafe_set_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_11, hlds__make_hlds__add_mutable_aux_preds__Name_12);
    }
#line 213 "add_mutable_aux_preds.m"
    {
#line 213 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_26_26 = parse_tree__prog_mode__in_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_14);
    }
#line 213 "add_mutable_aux_preds.m"
    {
#line 213 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 213 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_25_25, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Type_13));
#line 213 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_25_25, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_26_26));
#line 213 "add_mutable_aux_preds.m"
    }
#line 213 "add_mutable_aux_preds.m"
    {
#line 213 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 213 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_20, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_25_25));
#line 213 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 213 "add_mutable_aux_preds.m"
    }
#line 214 "add_mutable_aux_preds.m"
    {
#line 214 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_12_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_11, hlds__make_hlds__add_mutable_aux_preds__Name_12, (MR_Integer) 5, hlds__make_hlds__add_mutable_aux_preds__PredName_19, hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_20, (MR_Integer) 2, hlds__make_hlds__add_mutable_aux_preds__Status_15, hlds__make_hlds__add_mutable_aux_preds__Context_16, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_21, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_22, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_23, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_24);
#line 214 "add_mutable_aux_preds.m"
      return;
    }
#line 211 "add_mutable_aux_preds.m"
  }
#line 191 "add_mutable_aux_preds.m"
}

#line 187 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_unsafe_get_pred_decl_10_p_0(
#line 187 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_11,
#line 187 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_12,
#line 187 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_13,
#line 187 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_14,
#line 187 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_15,
#line 187 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_16,
#line 187 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_21,
#line 187 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_22,
#line 187 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_23,
#line 187 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_24)
#line 187 "add_mutable_aux_preds.m"
{
#line 203 "add_mutable_aux_preds.m"
  {
#line 203 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 203 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_19;
#line 203 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_20;
#line 203 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_25_25;
#line 203 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_26_26;

#line 204 "add_mutable_aux_preds.m"
    {
#line 204 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredName_19 = parse_tree__prog_mutable__mutable_unsafe_get_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_11, hlds__make_hlds__add_mutable_aux_preds__Name_12);
    }
#line 205 "add_mutable_aux_preds.m"
    {
#line 205 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_26_26 = parse_tree__prog_mode__out_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_14);
    }
#line 205 "add_mutable_aux_preds.m"
    {
#line 205 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 205 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_25_25, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Type_13));
#line 205 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_25_25, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_26_26));
#line 205 "add_mutable_aux_preds.m"
    }
#line 205 "add_mutable_aux_preds.m"
    {
#line 205 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 205 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_20, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_25_25));
#line 205 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 205 "add_mutable_aux_preds.m"
    }
#line 206 "add_mutable_aux_preds.m"
    {
#line 206 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_12_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_11, hlds__make_hlds__add_mutable_aux_preds__Name_12, (MR_Integer) 4, hlds__make_hlds__add_mutable_aux_preds__PredName_19, hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_20, (MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__Status_15, hlds__make_hlds__add_mutable_aux_preds__Context_16, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_21, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_22, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_23, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_24);
#line 206 "add_mutable_aux_preds.m"
      return;
    }
#line 203 "add_mutable_aux_preds.m"
  }
#line 187 "add_mutable_aux_preds.m"
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
#line 399 "add_mutable_aux_preds.m"
  {
#line 399 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 399 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_14 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 0)));
#line 399 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 1)));
#line 399 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 4)));
#line 399 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 6)));
#line 399 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_22;
#line 400 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___InitTerm_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 2)));
#line 400 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Inst_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 3)));
#line 400 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___VarSet_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 5)));
#line 400 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 7)));

#line 402 "add_mutable_aux_preds.m"
    {
#line 402 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__get_mutable_target_params_3_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34, hlds__make_hlds__add_mutable_aux_preds__MutAttrs_18, &hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_22);
    }
#line 405 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 404 "add_mutable_aux_preds.m"
      {
#line 404 "add_mutable_aux_preds.m"
        *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_35 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34;
#line 404 "add_mutable_aux_preds.m"
        *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_37 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_36;
#line 404 "add_mutable_aux_preds.m"
        *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38;
#line 404 "add_mutable_aux_preds.m"
      }
#line 405 "add_mutable_aux_preds.m"
    else
#line 406 "add_mutable_aux_preds.m"
      {
#line 406 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_22, (MR_Integer) 0)));
#line 406 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__ImplLang_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_23, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 406 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_23, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 406 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_30;
#line 406 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_31;
#line 406 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_32;
#line 406 "add_mutable_aux_preds.m"
        MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_33;
#line 406 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_42_42;
#line 406 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_53;
#line 407 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_23, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 407 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds___PreInit_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_23, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 407 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds___LockUnlock_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_23, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 407 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds___UnsafeAccess_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_23, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);

#line 409 "add_mutable_aux_preds.m"
        {
#line 409 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__IsConstant_30 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_18);
        }
#line 410 "add_mutable_aux_preds.m"
        {
#line 410 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_31 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_18);
        }
#line 413 "add_mutable_aux_preds.m"
        {
#line 413 "add_mutable_aux_preds.m"
          hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_32);
        }
#line 1247 "add_mutable_aux_preds.m"
        {
#line 1247 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_53 = parse_tree__prog_item__mutable_var_maybe_foreign_names_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_18);
        }
#line 1252 "add_mutable_aux_preds.m"
        if ((hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1251 "add_mutable_aux_preds.m"
          {
#line 1251 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_33 = parse_tree__prog_mutable__mutable_c_var_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_32, hlds__make_hlds__add_mutable_aux_preds__MutableName_14);
          }
#line 1252 "add_mutable_aux_preds.m"
        else
#line 1253 "add_mutable_aux_preds.m"
          {
#line 1253 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignNames_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_53, (MR_Integer) 0)));
#line 1255 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds___Specs_55;

#line 1255 "add_mutable_aux_preds.m"
            {
#line 1255 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__get_global_name_from_foreign_names_9_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34, hlds__make_hlds__add_mutable_aux_preds__Context_20, hlds__make_hlds__add_mutable_aux_preds__ModuleName_32, hlds__make_hlds__add_mutable_aux_preds__MutableName_14, hlds__make_hlds__add_mutable_aux_preds__Lang_25, hlds__make_hlds__add_mutable_aux_preds__ForeignNames_54, &hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__add_mutable_aux_preds___Specs_55);
            }
#line 1253 "add_mutable_aux_preds.m"
          }
#line 425 "add_mutable_aux_preds.m"
#line 425 "add_mutable_aux_preds.m"
        switch (hlds__make_hlds__add_mutable_aux_preds__ImplLang_24) {
#line 425 "add_mutable_aux_preds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 425 "add_mutable_aux_preds.m"
          case (MR_Integer) 0:
#line 423 "add_mutable_aux_preds.m"
            {
#line 423 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__define_global_var_c_7_p_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_33, hlds__make_hlds__add_mutable_aux_preds__Type_15, hlds__make_hlds__add_mutable_aux_preds__IsConstant_30, hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_31, hlds__make_hlds__add_mutable_aux_preds__Context_20, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_42_42);
            }
#line 425 "add_mutable_aux_preds.m"
            break;
#line 425 "add_mutable_aux_preds.m"
          case (MR_Integer) 1:
#line 535 "add_mutable_aux_preds.m"
            {
#line 535 "add_mutable_aux_preds.m"
              MR_String hlds__make_hlds__add_mutable_aux_preds__TypeStr_64;
#line 535 "add_mutable_aux_preds.m"
              MR_String hlds__make_hlds__add_mutable_aux_preds__DefnBody_65;
#line 535 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_66;
#line 535 "add_mutable_aux_preds.m"
              MR_String hlds__make_hlds__add_mutable_aux_preds__V_68_68;
#line 535 "add_mutable_aux_preds.m"
              MR_String hlds__make_hlds__add_mutable_aux_preds__V_69_69;
#line 535 "add_mutable_aux_preds.m"
              MR_String hlds__make_hlds__add_mutable_aux_preds__V_71_71;
#line 535 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__V_74_74;

#line 543 "add_mutable_aux_preds.m"
#line 543 "add_mutable_aux_preds.m"
              switch (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_31) {
#line 543 "add_mutable_aux_preds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 543 "add_mutable_aux_preds.m"
                case (MR_Integer) 0:
#line 540 "add_mutable_aux_preds.m"
                  {
#line 538 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_76_76;

#line 538 "add_mutable_aux_preds.m"
                    {
#line 538 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__V_76_76 = parse_tree__builtin_lib_types__int_type_0_f_0();
                    }
#line 538 "add_mutable_aux_preds.m"
                    {
#line 538 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__make_hlds__add_mutable_aux_preds__Type_15, hlds__make_hlds__add_mutable_aux_preds__V_76_76);
                    }
#line 540 "add_mutable_aux_preds.m"
                    if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 539 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__TypeStr_64 = (MR_String) "int";
#line 540 "add_mutable_aux_preds.m"
                    else
#line 541 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__TypeStr_64 = (MR_String) "object";
#line 540 "add_mutable_aux_preds.m"
                  }
#line 543 "add_mutable_aux_preds.m"
                  break;
#line 543 "add_mutable_aux_preds.m"
                case (MR_Integer) 1:
#line 545 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__TypeStr_64 = (MR_String) "int";
#line 543 "add_mutable_aux_preds.m"
                  break;
#line 543 "add_mutable_aux_preds.m"
              }
#line 547 "add_mutable_aux_preds.m"
              {
#line 547 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_71_71 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_33, (MR_String) ";\n");
              }
#line 547 "add_mutable_aux_preds.m"
              {
#line 547 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_69_69 = mercury__string__f_43_43_2_f_0((MR_String) " ", hlds__make_hlds__add_mutable_aux_preds__V_71_71);
              }
#line 547 "add_mutable_aux_preds.m"
              {
#line 547 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_68_68 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeStr_64, hlds__make_hlds__add_mutable_aux_preds__V_69_69);
              }
#line 547 "add_mutable_aux_preds.m"
              {
#line 547 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__DefnBody_65 = mercury__string__f_43_43_2_f_0((MR_String) "static ", hlds__make_hlds__add_mutable_aux_preds__V_68_68);
              }
#line 549 "add_mutable_aux_preds.m"
              {
#line 549 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 549 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_74_74, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__DefnBody_65));
#line 549 "add_mutable_aux_preds.m"
              }
#line 549 "add_mutable_aux_preds.m"
              {
#line 549 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 549 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_66, 0) = ((MR_Box) ((MR_Integer) 1));
#line 549 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_66, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_74_74));
#line 549 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_66, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_20));
#line 549 "add_mutable_aux_preds.m"
              }
#line 550 "add_mutable_aux_preds.m"
              {
#line 550 "add_mutable_aux_preds.m"
                hlds__hlds_module__module_add_foreign_body_code_3_p_0(hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_66, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_42_42);
              }
#line 535 "add_mutable_aux_preds.m"
            }
#line 425 "add_mutable_aux_preds.m"
            break;
#line 425 "add_mutable_aux_preds.m"
          case (MR_Integer) 3:
#line 434 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_42_42 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34;
#line 425 "add_mutable_aux_preds.m"
            break;
#line 425 "add_mutable_aux_preds.m"
          case (MR_Integer) 2:
#line 431 "add_mutable_aux_preds.m"
            {
#line 431 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__define_global_var_java_6_p_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_33, hlds__make_hlds__add_mutable_aux_preds__Type_15, hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_31, hlds__make_hlds__add_mutable_aux_preds__Context_20, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_42_42);
            }
#line 425 "add_mutable_aux_preds.m"
            break;
#line 425 "add_mutable_aux_preds.m"
        }
#line 441 "add_mutable_aux_preds.m"
        {
#line 441 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__define_aux_preds_10_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, hlds__make_hlds__add_mutable_aux_preds__TargetParams_23, hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_33, hlds__make_hlds__add_mutable_aux_preds__Status_10, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_42_42, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_35, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_36, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_37, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39);
#line 441 "add_mutable_aux_preds.m"
          return;
        }
#line 406 "add_mutable_aux_preds.m"
      }
#line 399 "add_mutable_aux_preds.m"
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
#line 318 "add_mutable_aux_preds.m"
  {
#line 318 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 318 "add_mutable_aux_preds.m"
    {
#line 318 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_109_117_116_97_98_108_101_95_99_104_101_99_107_115_95_95_91_50_93_95_48_6_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_40, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_41, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_42);
#line 318 "add_mutable_aux_preds.m"
      return;
    }
#line 318 "add_mutable_aux_preds.m"
  }
#line 28 "add_mutable_aux_preds.m"
}

#line 131 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decls_6_p_0_4(
#line 131 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 131 "add_mutable_aux_preds.m"
{
#line 131 "add_mutable_aux_preds.m"
  {
#line 131 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 131 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 131 "add_mutable_aux_preds.m"
    {
#line 131 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_mutable_aux_pred_decls__131__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 131 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 131 "add_mutable_aux_preds.m"
  }
#line 131 "add_mutable_aux_preds.m"
}

#line 129 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decls_6_p_0_3(
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
hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decls_6_p_0_2(
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
hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decls_6_p_0_1(
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
#line 71 "add_mutable_aux_preds.m"
  {
#line 71 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 71 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7, (MR_Integer) 0)));
#line 71 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7, (MR_Integer) 1)));
#line 71 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7, (MR_Integer) 3)));
#line 71 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7, (MR_Integer) 4)));
#line 71 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7, (MR_Integer) 6)));
#line 71 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_19;
#line 72 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___InitValue_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7, (MR_Integer) 2)));
#line 72 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___VarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7, (MR_Integer) 5)));
#line 72 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7, (MR_Integer) 7)));

#line 74 "add_mutable_aux_preds.m"
    {
#line 74 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__get_mutable_target_params_3_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_36, hlds__make_hlds__add_mutable_aux_preds__MutAttrs_15, &hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_19);
    }
#line 77 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 76 "add_mutable_aux_preds.m"
      {
#line 76 "add_mutable_aux_preds.m"
        *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_37 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_36;
#line 76 "add_mutable_aux_preds.m"
        *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38;
#line 76 "add_mutable_aux_preds.m"
      }
#line 77 "add_mutable_aux_preds.m"
    else
#line 78 "add_mutable_aux_preds.m"
      {
#line 78 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetParams_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeTargetParams_19, (MR_Integer) 0)));
#line 78 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInit_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_20, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 78 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__LockUnlock_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_20, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 78 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_20, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 78 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_27;
#line 78 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_28;
#line 78 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__AttachToIO_29;
#line 78 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_40_40;
#line 78 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_41_41;
#line 78 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_42_42;
#line 78 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_43_43;
#line 78 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46;
#line 78 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_47_47;
#line 78 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_50_50;
#line 78 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51;
#line 79 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds___ImplLang_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_20, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 79 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds___Lang_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_20, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
#line 79 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds___BoxPolicy_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__TargetParams_20, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);

#line 81 "add_mutable_aux_preds.m"
        {
#line 81 "add_mutable_aux_preds.m"
          hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_36, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_27);
        }
#line 91 "add_mutable_aux_preds.m"
#line 91 "add_mutable_aux_preds.m"
        switch (hlds__make_hlds__add_mutable_aux_preds__PreInit_24) {
#line 91 "add_mutable_aux_preds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 91 "add_mutable_aux_preds.m"
          case (MR_Integer) 0:
#line 90 "add_mutable_aux_preds.m"
            {
#line 90 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_40_40 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_36;
#line 90 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_41_41 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38;
#line 90 "add_mutable_aux_preds.m"
            }
#line 91 "add_mutable_aux_preds.m"
            break;
#line 91 "add_mutable_aux_preds.m"
          case (MR_Integer) 1:
#line 93 "add_mutable_aux_preds.m"
            {
#line 93 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__add_mutable_pre_init_pred_decl_8_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_27, hlds__make_hlds__add_mutable_aux_preds__Name_11, hlds__make_hlds__add_mutable_aux_preds__Status_8, hlds__make_hlds__add_mutable_aux_preds__Context_17, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_36, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_40_40, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_38, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_41_41);
            }
#line 91 "add_mutable_aux_preds.m"
            break;
#line 91 "add_mutable_aux_preds.m"
        }
#line 98 "add_mutable_aux_preds.m"
        {
#line 98 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__add_mutable_init_pred_decl_8_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_27, hlds__make_hlds__add_mutable_aux_preds__Name_11, hlds__make_hlds__add_mutable_aux_preds__Status_8, hlds__make_hlds__add_mutable_aux_preds__Context_17, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_40_40, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_42_42, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_41_41, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_43_43);
        }
#line 104 "add_mutable_aux_preds.m"
#line 104 "add_mutable_aux_preds.m"
        switch (hlds__make_hlds__add_mutable_aux_preds__LockUnlock_25) {
#line 104 "add_mutable_aux_preds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 104 "add_mutable_aux_preds.m"
          case (MR_Integer) 0:
#line 103 "add_mutable_aux_preds.m"
            {
#line 103 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_42_42;
#line 103 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_47_47 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_43_43;
#line 103 "add_mutable_aux_preds.m"
            }
#line 104 "add_mutable_aux_preds.m"
            break;
#line 104 "add_mutable_aux_preds.m"
          case (MR_Integer) 1:
#line 105 "add_mutable_aux_preds.m"
            {
#line 105 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_44_44;
#line 105 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_45_45;

#line 106 "add_mutable_aux_preds.m"
              {
#line 106 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__add_mutable_lock_pred_decl_8_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_27, hlds__make_hlds__add_mutable_aux_preds__Name_11, hlds__make_hlds__add_mutable_aux_preds__Status_8, hlds__make_hlds__add_mutable_aux_preds__Context_17, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_42_42, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_44_44, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_43_43, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_45_45);
              }
#line 108 "add_mutable_aux_preds.m"
              {
#line 108 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__add_mutable_unlock_pred_decl_8_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_27, hlds__make_hlds__add_mutable_aux_preds__Name_11, hlds__make_hlds__add_mutable_aux_preds__Status_8, hlds__make_hlds__add_mutable_aux_preds__Context_17, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_44_44, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_45_45, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_47_47);
              }
#line 105 "add_mutable_aux_preds.m"
            }
#line 104 "add_mutable_aux_preds.m"
            break;
#line 104 "add_mutable_aux_preds.m"
        }
#line 113 "add_mutable_aux_preds.m"
#line 113 "add_mutable_aux_preds.m"
        switch (hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_26) {
#line 113 "add_mutable_aux_preds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 113 "add_mutable_aux_preds.m"
          case (MR_Integer) 0:
#line 112 "add_mutable_aux_preds.m"
            {
#line 112 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_50_50 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46;
#line 112 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_47_47;
#line 112 "add_mutable_aux_preds.m"
            }
#line 113 "add_mutable_aux_preds.m"
            break;
#line 113 "add_mutable_aux_preds.m"
          case (MR_Integer) 1:
#line 114 "add_mutable_aux_preds.m"
            {
#line 114 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_48_48;
#line 114 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_49_49;

#line 115 "add_mutable_aux_preds.m"
              {
#line 115 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__add_mutable_unsafe_get_pred_decl_10_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_27, hlds__make_hlds__add_mutable_aux_preds__Name_11, hlds__make_hlds__add_mutable_aux_preds__Type_12, hlds__make_hlds__add_mutable_aux_preds__Inst_14, hlds__make_hlds__add_mutable_aux_preds__Status_8, hlds__make_hlds__add_mutable_aux_preds__Context_17, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_48_48, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_47_47, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_49_49);
              }
#line 117 "add_mutable_aux_preds.m"
              {
#line 117 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__add_mutable_unsafe_set_pred_decl_10_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_27, hlds__make_hlds__add_mutable_aux_preds__Name_11, hlds__make_hlds__add_mutable_aux_preds__Type_12, hlds__make_hlds__add_mutable_aux_preds__Inst_14, hlds__make_hlds__add_mutable_aux_preds__Status_8, hlds__make_hlds__add_mutable_aux_preds__Context_17, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_48_48, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_50_50, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_49_49, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51);
              }
#line 114 "add_mutable_aux_preds.m"
            }
#line 113 "add_mutable_aux_preds.m"
            break;
#line 113 "add_mutable_aux_preds.m"
        }
#line 121 "add_mutable_aux_preds.m"
        {
#line 121 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__IsConstant_28 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_15);
        }
#line 122 "add_mutable_aux_preds.m"
        {
#line 122 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__AttachToIO_29 = parse_tree__prog_item__mutable_var_attach_to_io_state_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_15);
        }
#line 147 "add_mutable_aux_preds.m"
#line 147 "add_mutable_aux_preds.m"
        switch (hlds__make_hlds__add_mutable_aux_preds__IsConstant_28) {
#line 147 "add_mutable_aux_preds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 147 "add_mutable_aux_preds.m"
          case (MR_Integer) 1:
#line 124 "add_mutable_aux_preds.m"
            {
#line 124 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__ConstantGetPredDecl_30;
#line 124 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__ConstantSetPredDecl_31;
#line 124 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__V_64_64;
#line 124 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__V_69_69;
#line 124 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__V_74_74;
#line 124 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__V_79_79;
#line 124 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_85_85;
#line 124 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_86_86;

#line 125 "add_mutable_aux_preds.m"
              {
#line 125 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 125 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_64_64, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[0]));
#line 125 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_64_64, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decls_6_p_0_1));
#line 125 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 125 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_64_64, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PreInit_24));
#line 125 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_64_64, 4) = ((MR_Box) ((MR_Integer) 0));
#line 125 "add_mutable_aux_preds.m"
              }
#line 125 "add_mutable_aux_preds.m"
              {
#line 125 "add_mutable_aux_preds.m"
                mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_64_64, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_mutable_aux_pred_decls\'/6", (MR_String) "PreInit = need_pre_init_pred");
              }
#line 127 "add_mutable_aux_preds.m"
              {
#line 127 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 127 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_69_69, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[1]));
#line 127 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_69_69, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decls_6_p_0_2));
#line 127 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_69_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 127 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_69_69, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockUnlock_25));
#line 127 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_69_69, 4) = ((MR_Box) ((MR_Integer) 0));
#line 127 "add_mutable_aux_preds.m"
              }
#line 127 "add_mutable_aux_preds.m"
              {
#line 127 "add_mutable_aux_preds.m"
                mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_69_69, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_mutable_aux_pred_decls\'/6", (MR_String) "LockUnlock = need_lock_unlock_preds");
              }
#line 129 "add_mutable_aux_preds.m"
              {
#line 129 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 129 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_74_74, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[2]));
#line 129 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_74_74, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decls_6_p_0_3));
#line 129 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_74_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 129 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_74_74, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeAccess_26));
#line 129 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_74_74, 4) = ((MR_Box) ((MR_Integer) 0));
#line 129 "add_mutable_aux_preds.m"
              }
#line 129 "add_mutable_aux_preds.m"
              {
#line 129 "add_mutable_aux_preds.m"
                mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_74_74, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_mutable_aux_pred_decls\'/6", (MR_String) "UnsafeAccess = need_unsafe_get_set_preds");
              }
#line 131 "add_mutable_aux_preds.m"
              {
#line 131 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 131 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_79_79, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[3]));
#line 131 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_79_79, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decls_6_p_0_4));
#line 131 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_79_79, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 131 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_79_79, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__AttachToIO_29));
#line 131 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_79_79, 4) = ((MR_Box) ((MR_Integer) 0));
#line 131 "add_mutable_aux_preds.m"
              }
#line 131 "add_mutable_aux_preds.m"
              {
#line 131 "add_mutable_aux_preds.m"
                mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_79_79, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_mutable_aux_pred_decls\'/6", (MR_String) "AttachToIO = mutable_attach_to_io_state");
              }
#line 137 "add_mutable_aux_preds.m"
              {
#line 137 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__ConstantGetPredDecl_30 = parse_tree__prog_mutable__constant_get_pred_decl_5_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_27, hlds__make_hlds__add_mutable_aux_preds__Name_11, hlds__make_hlds__add_mutable_aux_preds__Type_12, hlds__make_hlds__add_mutable_aux_preds__Inst_14, hlds__make_hlds__add_mutable_aux_preds__Context_17);
              }
#line 139 "add_mutable_aux_preds.m"
              {
#line 139 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__ConstantSetPredDecl_31 = parse_tree__prog_mutable__constant_set_pred_decl_5_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_27, hlds__make_hlds__add_mutable_aux_preds__Name_11, hlds__make_hlds__add_mutable_aux_preds__Type_12, hlds__make_hlds__add_mutable_aux_preds__Inst_14, hlds__make_hlds__add_mutable_aux_preds__Context_17);
              }
#line 141 "add_mutable_aux_preds.m"
              {
#line 141 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0(hlds__make_hlds__add_mutable_aux_preds__ConstantGetPredDecl_30, hlds__make_hlds__add_mutable_aux_preds__ModuleName_27, hlds__make_hlds__add_mutable_aux_preds__Name_11, (MR_Integer) 6, hlds__make_hlds__add_mutable_aux_preds__Status_8, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_50_50, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_85_85, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_86_86);
              }
#line 144 "add_mutable_aux_preds.m"
              {
#line 144 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0(hlds__make_hlds__add_mutable_aux_preds__ConstantSetPredDecl_31, hlds__make_hlds__add_mutable_aux_preds__ModuleName_27, hlds__make_hlds__add_mutable_aux_preds__Name_11, (MR_Integer) 7, hlds__make_hlds__add_mutable_aux_preds__Status_8, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_85_85, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_37, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_86_86, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39);
#line 144 "add_mutable_aux_preds.m"
                return;
              }
#line 124 "add_mutable_aux_preds.m"
            }
#line 147 "add_mutable_aux_preds.m"
            break;
#line 147 "add_mutable_aux_preds.m"
          case (MR_Integer) 0:
#line 148 "add_mutable_aux_preds.m"
            {
#line 148 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__StdGetPredDecl_32;
#line 148 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__StdSetPredDecl_33;
#line 148 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_53_53;
#line 148 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_54_54;
#line 148 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_56_56;
#line 148 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_57_57;

#line 152 "add_mutable_aux_preds.m"
              {
#line 152 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__StdGetPredDecl_32 = parse_tree__prog_mutable__std_get_pred_decl_5_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_27, hlds__make_hlds__add_mutable_aux_preds__Name_11, hlds__make_hlds__add_mutable_aux_preds__Type_12, hlds__make_hlds__add_mutable_aux_preds__Inst_14, hlds__make_hlds__add_mutable_aux_preds__Context_17);
              }
#line 154 "add_mutable_aux_preds.m"
              {
#line 154 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__StdSetPredDecl_33 = parse_tree__prog_mutable__std_set_pred_decl_5_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_27, hlds__make_hlds__add_mutable_aux_preds__Name_11, hlds__make_hlds__add_mutable_aux_preds__Type_12, hlds__make_hlds__add_mutable_aux_preds__Inst_14, hlds__make_hlds__add_mutable_aux_preds__Context_17);
              }
#line 156 "add_mutable_aux_preds.m"
              {
#line 156 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0(hlds__make_hlds__add_mutable_aux_preds__StdGetPredDecl_32, hlds__make_hlds__add_mutable_aux_preds__ModuleName_27, hlds__make_hlds__add_mutable_aux_preds__Name_11, (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__Status_8, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_50_50, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_53_53, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_54_54);
              }
#line 159 "add_mutable_aux_preds.m"
              {
#line 159 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0(hlds__make_hlds__add_mutable_aux_preds__StdSetPredDecl_33, hlds__make_hlds__add_mutable_aux_preds__ModuleName_27, hlds__make_hlds__add_mutable_aux_preds__Name_11, (MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__Status_8, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_53_53, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_56_56, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_54_54, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_57_57);
              }
#line 167 "add_mutable_aux_preds.m"
#line 167 "add_mutable_aux_preds.m"
              switch (hlds__make_hlds__add_mutable_aux_preds__AttachToIO_29) {
#line 167 "add_mutable_aux_preds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 167 "add_mutable_aux_preds.m"
                case (MR_Integer) 1:
#line 168 "add_mutable_aux_preds.m"
                  {
#line 168 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__IOGetPredDecl_34;
#line 168 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__IOSetPredDecl_35;
#line 168 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_59_59;
#line 168 "add_mutable_aux_preds.m"
                    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_60_60;

#line 169 "add_mutable_aux_preds.m"
                    {
#line 169 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__IOGetPredDecl_34 = parse_tree__prog_mutable__io_get_pred_decl_5_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_27, hlds__make_hlds__add_mutable_aux_preds__Name_11, hlds__make_hlds__add_mutable_aux_preds__Type_12, hlds__make_hlds__add_mutable_aux_preds__Inst_14, hlds__make_hlds__add_mutable_aux_preds__Context_17);
                    }
#line 171 "add_mutable_aux_preds.m"
                    {
#line 171 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__IOSetPredDecl_35 = parse_tree__prog_mutable__io_set_pred_decl_5_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_27, hlds__make_hlds__add_mutable_aux_preds__Name_11, hlds__make_hlds__add_mutable_aux_preds__Type_12, hlds__make_hlds__add_mutable_aux_preds__Inst_14, hlds__make_hlds__add_mutable_aux_preds__Context_17);
                    }
#line 173 "add_mutable_aux_preds.m"
                    {
#line 173 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0(hlds__make_hlds__add_mutable_aux_preds__IOGetPredDecl_34, hlds__make_hlds__add_mutable_aux_preds__ModuleName_27, hlds__make_hlds__add_mutable_aux_preds__Name_11, (MR_Integer) 2, hlds__make_hlds__add_mutable_aux_preds__Status_8, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_56_56, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_59_59, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_57_57, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_60_60);
                    }
#line 176 "add_mutable_aux_preds.m"
                    {
#line 176 "add_mutable_aux_preds.m"
                      hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0(hlds__make_hlds__add_mutable_aux_preds__IOSetPredDecl_35, hlds__make_hlds__add_mutable_aux_preds__ModuleName_27, hlds__make_hlds__add_mutable_aux_preds__Name_11, (MR_Integer) 3, hlds__make_hlds__add_mutable_aux_preds__Status_8, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_59_59, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_37, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_60_60, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39);
#line 176 "add_mutable_aux_preds.m"
                      return;
                    }
#line 168 "add_mutable_aux_preds.m"
                  }
#line 167 "add_mutable_aux_preds.m"
                  break;
#line 167 "add_mutable_aux_preds.m"
                case (MR_Integer) 0:
#line 166 "add_mutable_aux_preds.m"
                  {
#line 166 "add_mutable_aux_preds.m"
                    *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_37 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_56_56;
#line 166 "add_mutable_aux_preds.m"
                    *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_57_57;
#line 166 "add_mutable_aux_preds.m"
                  }
#line 167 "add_mutable_aux_preds.m"
                  break;
#line 167 "add_mutable_aux_preds.m"
              }
#line 148 "add_mutable_aux_preds.m"
            }
#line 147 "add_mutable_aux_preds.m"
            break;
#line 147 "add_mutable_aux_preds.m"
        }
#line 78 "add_mutable_aux_preds.m"
      }
#line 71 "add_mutable_aux_preds.m"
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
