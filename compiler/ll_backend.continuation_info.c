/*
** Automatically generated from `continuation_info.m'
** by the Mercury compiler,
** version 2015-10-27
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


/* :- module ll_backend.continuation_info. */
/* :- implementation. */

/*
INIT mercury__ll_backend__continuation_info__init
ENDINIT
*/

#include "ll_backend.continuation_info.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
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
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.code_util.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.trace_gen.mih"
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
#include "counter.mih"
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
#include "parse_tree.builtin_lib_types.mih"
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



#line 375 "continuation_info.m"
struct ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0_s {
#line 594 "continuation_info.m"
  MR_bool ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__succeeded;
#line 589 "continuation_info.m"
  MR_Word ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__ArgTypes_14;
#line 609 "continuation_info.m"
  jmp_buf ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__commit_0;
#line 609 "continuation_info.m"
  MR_Word ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__Type_16;
#line 609 "continuation_info.m"
  MR_Box ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__conv0_Type_16;
#line 375 "continuation_info.m"
};


#line 171 "ll_backend.continuation_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__continuation_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 174 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 177 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

#line 180 "ll_backend.continuation_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__continuation_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

#line 183 "ll_backend.continuation_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__continuation_info__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 186 "ll_backend.continuation_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__continuation_info__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_layout_locn_0;

#line 189 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__continuation_info__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0;

#line 192 "ll_backend.continuation_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__continuation_info__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0;

#line 195 "ll_backend.continuation_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__continuation_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__continuation_info__type_ctor_info_internal_layout_info_0;

#line 198 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 201 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0;

#line 204 "ll_backend.continuation_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__continuation_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0;

#line 207 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__list__ti_list_1ll_backend__llds__type_ctor_info_liveinfo_0;

#line 210 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1mdbcomp__goal_path__type_ctor_info_forward_goal_path_0;

#line 213 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_call_info_0_0[5];

#line 216 "ll_backend.continuation_info.c"
static const MR_ConstString ll_backend__continuation_info__ll_backend__continuation_info__field_names_call_info_0_0[5];

#line 219 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_call_info_0_0;

#line 222 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_call_info_0_0[1];

#line 225 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_call_info_0[1];

#line 228 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_call_info_0[1];

#line 231 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_call_info_0[1];

#line 234 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_closure_arg_info_0_0[2];

#line 237 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_closure_arg_info_0_0;

#line 240 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_closure_arg_info_0_0[1];

#line 243 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_closure_arg_info_0[1];

#line 246 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_closure_arg_info_0[1];

#line 249 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_closure_arg_info_0[1];

#line 252 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__list__ti_list_1ll_backend__continuation_info__type_ctor_info_closure_arg_info_0;

#line 255 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__continuation_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0;

#line 258 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_closure_layout_info_0_0[2];

#line 261 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_closure_layout_info_0_0;

#line 264 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_closure_layout_info_0_0[1];

#line 267 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_closure_layout_info_0[1];

#line 270 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_closure_layout_info_0[1];

#line 273 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_closure_layout_info_0[1];

#line 276 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_trace_port_layout_info_0;

#line 279 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_layout_label_info_0;

#line 282 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_return_layout_info_0;

#line 285 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_internal_layout_info_0_0[3];

#line 288 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_internal_layout_info_0_0;

#line 291 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_internal_layout_info_0_0[1];

#line 294 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_internal_layout_info_0[1];

#line 297 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_internal_layout_info_0[1];

#line 300 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_internal_layout_info_0[1];

#line 303 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__set_ordlist__ti_set_ordlist_1ll_backend__continuation_info__type_ctor_info_layout_var_info_0;

#line 306 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_layout_label_info_0_0[2];

#line 309 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_layout_label_info_0_0;

#line 312 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_layout_label_info_0_0[1];

#line 315 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_layout_label_info_0[1];

#line 318 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_layout_label_info_0[1];

#line 321 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_layout_label_info_0[1];

#line 324 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_layout_var_info_0_0[3];

#line 327 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_layout_var_info_0_0;

#line 330 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_layout_var_info_0_0[1];

#line 333 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_layout_var_info_0[1];

#line 336 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_layout_var_info_0[1];

#line 339 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_layout_var_info_0[1];

#line 342 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_proc_deep_prof_info_0_0[3];

#line 345 "ll_backend.continuation_info.c"
static const MR_ConstString ll_backend__continuation_info__ll_backend__continuation_info__field_names_proc_deep_prof_info_0_0[3];

#line 348 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_proc_deep_prof_info_0_0;

#line 351 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_proc_deep_prof_info_0_0[1];

#line 354 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_proc_deep_prof_info_0[1];

#line 357 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_proc_deep_prof_info_0[1];

#line 360 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_proc_deep_prof_info_0[1];

#line 363 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__continuation_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__continuation_info__type_ctor_info_internal_layout_info_0;

#line 366 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

#line 369 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0;

#line 372 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 375 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0;

#line 378 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 381 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__continuation_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 384 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_proc_layout_table_info_0;

#line 387 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0;

#line 390 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_proc_deep_prof_info_0;

#line 393 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_proc_layout_info_0_0[24];

#line 396 "ll_backend.continuation_info.c"
static const MR_ConstString ll_backend__continuation_info__ll_backend__continuation_info__field_names_proc_layout_info_0_0[24];

#line 399 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_proc_layout_info_0_0;

#line 402 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_proc_layout_info_0_0[1];

#line 405 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_proc_layout_info_0[1];

#line 408 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_proc_layout_info_0[1];

#line 411 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_proc_layout_info_0[1];

#line 414 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_proc_layout_table_info_0_0[1];

#line 417 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_proc_layout_table_info_0_0;

#line 420 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_proc_layout_table_info_0_1[1];

#line 423 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_proc_layout_table_info_0_1;

#line 426 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_proc_layout_table_info_0_0[1];

#line 429 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_proc_layout_table_info_0_1[1];

#line 432 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_proc_layout_table_info_0[2];

#line 435 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_proc_layout_table_info_0[2];

#line 438 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_proc_layout_table_info_0[2];

#line 441 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__continuation_info__pair__ti_pair_2term__type_ctor_info_context_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0;

#line 444 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__continuation_info__pair__ti_pair_2ll_backend__llds__type_ctor_info_code_addr_0pair__ti_pair_2term__type_ctor_info_context_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0;

#line 447 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__list__ti_list_1pair__ti_pair_2ll_backend__llds__type_ctor_info_code_addr_0pair__ti_pair_2term__type_ctor_info_context_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0;

#line 450 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_return_layout_info_0_0[2];

#line 453 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_return_layout_info_0_0;

#line 456 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_return_layout_info_0_0[1];

#line 459 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_return_layout_info_0[1];

#line 462 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_return_layout_info_0[1];

#line 465 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_return_layout_info_0[1];

#line 468 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_0;

#line 471 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_1;

#line 474 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_2;

#line 477 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_3;

#line 480 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_4;

#line 483 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_5;

#line 486 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_6;

#line 489 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_7;

#line 492 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_8;

#line 495 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_9;

#line 498 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_10;

#line 501 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_slot_contents_0_11[1];

#line 504 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_11;

#line 507 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_slot_contents_0_0[11];

#line 510 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_slot_contents_0_1[1];

#line 513 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_slot_contents_0[2];

#line 516 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_slot_contents_0[12];

#line 519 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_slot_contents_0[12];

#line 522 "ll_backend.continuation_info.c"
static const MR_EnumFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__enum_functor_desc_trace_needs_body_rep_0_0;

#line 525 "ll_backend.continuation_info.c"
static const MR_EnumFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__enum_functor_desc_trace_needs_body_rep_0_1;

#line 528 "ll_backend.continuation_info.c"
static const MR_EnumFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__enum_value_ordered_trace_needs_body_rep_0[2];

#line 531 "ll_backend.continuation_info.c"
static const MR_EnumFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__enum_name_ordered_trace_needs_body_rep_0[2];

#line 534 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_trace_needs_body_rep_0[2];

#line 537 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_user_event_info_0;

#line 540 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_trace_port_layout_info_0_0[6];

#line 543 "ll_backend.continuation_info.c"
static const MR_ConstString ll_backend__continuation_info__ll_backend__continuation_info__field_names_trace_port_layout_info_0_0[6];

#line 546 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_trace_port_layout_info_0_0;

#line 549 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_trace_port_layout_info_0_0[1];

#line 552 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_trace_port_layout_info_0[1];

#line 555 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_trace_port_layout_info_0[1];

#line 558 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_trace_port_layout_info_0[1];

#line 561 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_user_attribute_0_0[2];

#line 564 "ll_backend.continuation_info.c"
static const MR_ConstString ll_backend__continuation_info__ll_backend__continuation_info__field_names_user_attribute_0_0[2];

#line 567 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_user_attribute_0_0;

#line 570 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_user_attribute_0_0[1];

#line 573 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_user_attribute_0[1];

#line 576 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_user_attribute_0[1];

#line 579 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_user_attribute_0[1];

#line 582 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_user_attribute_0;

#line 585 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__list__ti_list_1maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_user_attribute_0;

#line 588 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_user_event_info_0_0[2];

#line 591 "ll_backend.continuation_info.c"
static const MR_ConstString ll_backend__continuation_info__ll_backend__continuation_info__field_names_user_event_info_0_0[2];

#line 594 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_user_event_info_0_0;

#line 597 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_user_event_info_0_0[1];

#line 600 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_user_event_info_0[1];

#line 603 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_user_event_info_0[1];

#line 606 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_user_event_info_0[1];

#line 609 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____call_info_0_0_10001(
#line 612 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 614 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2);

#line 617 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____call_info_0_0_10001(
#line 620 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 622 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 624 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3);

#line 627 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____closure_arg_info_0_0_10001(
#line 630 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 632 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2);

#line 635 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____closure_arg_info_0_0_10001(
#line 638 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 640 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 642 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3);

#line 645 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____closure_layout_info_0_0_10001(
#line 648 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 650 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2);

#line 653 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____closure_layout_info_0_0_10001(
#line 656 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 658 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 660 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3);

#line 663 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____internal_layout_info_0_0_10001(
#line 666 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 668 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2);

#line 671 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____internal_layout_info_0_0_10001(
#line 674 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 676 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 678 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3);

#line 681 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____layout_label_info_0_0_10001(
#line 684 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 686 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2);

#line 689 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____layout_label_info_0_0_10001(
#line 692 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 694 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 696 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3);

#line 699 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____layout_var_info_0_0_10001(
#line 702 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 704 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2);

#line 707 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____layout_var_info_0_0_10001(
#line 710 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 712 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 714 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3);

#line 717 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____proc_deep_prof_info_0_0_10001(
#line 720 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 722 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2);

#line 725 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____proc_deep_prof_info_0_0_10001(
#line 728 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 730 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 732 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3);

#line 735 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____proc_label_layout_info_0_0_10001(
#line 738 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 740 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2);

#line 743 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____proc_label_layout_info_0_0_10001(
#line 746 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 748 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 750 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3);

#line 753 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____proc_layout_info_0_0_10001(
#line 756 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 758 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2);

#line 761 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____proc_layout_info_0_0_10001(
#line 764 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 766 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 768 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3);

#line 771 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____proc_layout_table_info_0_0_10001(
#line 774 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 776 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2);

#line 779 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____proc_layout_table_info_0_0_10001(
#line 782 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 784 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 786 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3);

#line 789 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____return_layout_info_0_0_10001(
#line 792 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 794 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2);

#line 797 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____return_layout_info_0_0_10001(
#line 800 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 802 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 804 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3);

#line 807 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____slot_contents_0_0_10001(
#line 810 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 812 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2);

#line 815 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____slot_contents_0_0_10001(
#line 818 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 820 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 822 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3);

#line 825 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____trace_needs_body_rep_0_0_10001(
#line 828 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 830 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2);

#line 833 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____trace_needs_body_rep_0_0_10001(
#line 836 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 838 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 840 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3);

#line 843 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____trace_port_layout_info_0_0_10001(
#line 846 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 848 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2);

#line 851 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____trace_port_layout_info_0_0_10001(
#line 854 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 856 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 858 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3);

#line 861 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____user_attribute_0_0_10001(
#line 864 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 866 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2);

#line 869 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____user_attribute_0_0_10001(
#line 872 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 874 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 876 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3);

#line 879 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____user_event_info_0_0_10001(
#line 882 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 884 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2);

#line 887 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____user_event_info_0_0_10001(
#line 890 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 892 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 894 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3);

#line 741 "continuation_info.m"
static MR_bool MR_CALL 
ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_117_109_101_95_108_97_121_111_117_116_95_102_111_114_95_118_97_114_115_95_95_91_50_93_95_48_9_p_0_3(
#line 741 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg);

#line 739 "continuation_info.m"
static MR_bool MR_CALL 
ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_117_109_101_95_108_97_121_111_117_116_95_102_111_114_95_118_97_114_115_95_95_91_50_93_95_48_9_p_0_2(
#line 739 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg);

#line 737 "continuation_info.m"
static MR_bool MR_CALL 
ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_117_109_101_95_108_97_121_111_117_116_95_102_111_114_95_118_97_114_115_95_95_91_50_93_95_48_9_p_0_1(
#line 737 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg);

#line 701 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_117_109_101_95_108_97_121_111_117_116_95_102_111_114_95_118_97_114_115_95_95_91_50_93_95_48_9_p_0(
#line 701 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 701 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarTypes_3,
#line 701 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ProcInfo_4,
#line 701 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ModuleInfo_5,
#line 701 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_VarInfos_0_6,
#line 701 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_VarInfos_7,
#line 701 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_TVars_0_8,
#line 701 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_TVars_9);

#line 663 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_118_97_114_95_108_105_118_101_95_108_118_97_108_117_101_115_95_95_91_50_44_32_53_93_95_48_7_p_0(
#line 663 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 663 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarLocs_3,
#line 663 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ProcInfo_4,
#line 663 "continuation_info.m"
  MR_Word ll_backend__continuation_info__WantReturnVarLayout_6,
#line 663 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__7_7);

#line 944 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars_table__944__1_4_p_0(
#line 944 "continuation_info.m"
  MR_Word ll_backend__continuation_info__NumberedVars_6,
#line 944 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarSet_9,
#line 944 "continuation_info.m"
  MR_Word ll_backend__continuation_info__LambdaHeadVar__1_22,
#line 944 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__LambdaHeadVar__2_23);

#line 565 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__564__1_3_p_0_1(
#line 565 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 565 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 565 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 565 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_3);

#line 564 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__564__1_3_p_0(
#line 564 "continuation_info.m"
  MR_Word ll_backend__continuation_info__LambdaHeadVar__1_29,
#line 564 "continuation_info.m"
  MR_Word ll_backend__continuation_info__LambdaHeadVar__2_30,
#line 564 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__LambdaHeadVar__3_31);

#line 565 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__565__1_3_p_0(
#line 565 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_45,
#line 565 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_46,
#line 565 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__3_47);

#line 560 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__560__1_2_p_0(
#line 560 "continuation_info.m"
  MR_Word ll_backend__continuation_info__LambdaHeadVar__1_26,
#line 560 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__LambdaHeadVar__2_27);

#line 554 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__554__1_2_p_0(
#line 554 "continuation_info.m"
  MR_Word ll_backend__continuation_info__LambdaHeadVar__1_23,
#line 554 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__LambdaHeadVar__2_24);

#line 535 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__collect_continuation__535__1_3_p_0(
#line 535 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_54,
#line 535 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_55,
#line 535 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__3_56);

#line 870 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars__867__1_4_p_0_1(
#line 870 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 870 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 870 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 870 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_3);

#line 867 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars__867__1_4_p_0(
#line 867 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarLocs_6,
#line 867 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarSet_9,
#line 867 "continuation_info.m"
  MR_Word ll_backend__continuation_info__LambdaHeadVar__1_28,
#line 867 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__LambdaHeadVar__2_29);

#line 870 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars__870__1_4_p_0(
#line 870 "continuation_info.m"
  MR_Word ll_backend__continuation_info__LambdaHeadVar__1_28,
#line 870 "continuation_info.m"
  MR_Word ll_backend__continuation_info__LambdaHeadVar__1_30,
#line 870 "continuation_info.m"
  MR_Word ll_backend__continuation_info__LambdaHeadVar__2_31,
#line 870 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__LambdaHeadVar__3_32);

#line 448 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info____Compare____call_info_0_0(
#line 448 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 448 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 448 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3);

#line 448 "continuation_info.m"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____call_info_0_0(
#line 448 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 448 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2);

#line 903 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__build_table_arg_info_6_p_0(
#line 903 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarSet_1,
#line 903 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarTypes_2,
#line 903 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3,
#line 903 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__4_4,
#line 903 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_TypeVars_0_5,
#line 903 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_TypeVars_6);

#line 827 "continuation_info.m"
static MR_bool MR_CALL 
ll_backend__continuation_info__build_closure_info_10_p_0(
#line 827 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 827 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 827 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3,
#line 827 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__4_4,
#line 827 "continuation_info.m"
  MR_Word ll_backend__continuation_info__InstMap_5,
#line 827 "continuation_info.m"
  MR_Word ll_backend__continuation_info__UseFloatRegs_6,
#line 827 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_VarLocs_0_7,
#line 827 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_VarLocs_8,
#line 827 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_TypeVars_0_9,
#line 827 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_TypeVars_10);

#line 750 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__generate_temp_var_infos_2_p_0(
#line 750 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 750 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__2_2);

#line 652 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__generate_temp_live_lvalues_2_p_0(
#line 652 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 652 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__2_2);

#line 626 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__find_return_var_lvals_5_p_0(
#line 626 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 626 "continuation_info.m"
  MR_Word ll_backend__continuation_info__StackSlots_2,
#line 626 "continuation_info.m"
  MR_Word ll_backend__continuation_info__OkToDeleteAny_3,
#line 626 "continuation_info.m"
  MR_Word ll_backend__continuation_info__OutputArgLocs_4,
#line 626 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__5_5);

#line 564 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__convert_return_data_3_p_0_3(
#line 564 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 564 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 564 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 564 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_3);

#line 559 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__convert_return_data_3_p_0_2(
#line 559 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 559 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 559 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_2);

#line 554 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__convert_return_data_3_p_0_1(
#line 554 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 554 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 554 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_2);

#line 550 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__convert_return_data_3_p_0(
#line 550 "continuation_info.m"
  MR_Word ll_backend__continuation_info__LiveInfos_4,
#line 550 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__VarInfoSet_5,
#line 550 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__TypeInfoMap_6);

#line 535 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__collect_continuation_4_p_0_1(
#line 535 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 535 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 535 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 535 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_3);

#line 489 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__collect_continuation_4_p_0(
#line 489 "continuation_info.m"
  MR_Word ll_backend__continuation_info__WantReturnInfo_5,
#line 489 "continuation_info.m"
  MR_Word ll_backend__continuation_info__CallInfo_6,
#line 489 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_Internals_0_36,
#line 489 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_Internals_37);

#line 476 "continuation_info.m"
static MR_bool MR_CALL 
ll_backend__continuation_info__get_call_info_2_p_0(
#line 476 "continuation_info.m"
  MR_Word ll_backend__continuation_info__Instr_3,
#line 476 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__CallInfo_4);

#line 471 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__collect_call_continuations_in_cproc_4_p_0_2(
#line 471 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 471 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 471 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 471 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_3);

#line 470 "continuation_info.m"
static MR_bool MR_CALL 
ll_backend__continuation_info__collect_call_continuations_in_cproc_4_p_0_1(
#line 470 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 470 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 470 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_2);

#line 462 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__collect_call_continuations_in_cproc_4_p_0(
#line 462 "continuation_info.m"
  MR_Word ll_backend__continuation_info__WantReturnInfo_5,
#line 462 "continuation_info.m"
  MR_Word ll_backend__continuation_info__CProc_6,
#line 462 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_GlobalData_0_15,
#line 462 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_GlobalData_16);

#line 931 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__generate_table_arg_type_info_3_p_0_2(
#line 931 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 931 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 931 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_2);

#line 929 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__generate_table_arg_type_info_3_p_0_1(
#line 929 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 929 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 929 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_2);

#line 867 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__find_typeinfos_for_tvars_4_p_0_2(
#line 867 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 867 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 867 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_2);

#line 865 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__find_typeinfos_for_tvars_4_p_0_1(
#line 865 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 865 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 865 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_2);

#line 609 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_1(
#line 609 "continuation_info.m"
  void * ll_backend__continuation_info__env_ptr_arg);

#line 609 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_3(
#line 609 "continuation_info.m"
  void * ll_backend__continuation_info__env_ptr_arg);

#line 609 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_2(
#line 609 "continuation_info.m"
  void * ll_backend__continuation_info__env_ptr_arg);

#line 609 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_4(
#line 609 "continuation_info.m"
  void * ll_backend__continuation_info__env_ptr_arg);


static /* final */ const MR_Box ll_backend__continuation_info_scalar_common_1[23][2];

static /* final */ const MR_Box ll_backend__continuation_info_scalar_common_2[11][3];

static /* final */ const MR_Box ll_backend__continuation_info_scalar_common_3[3][6];

static /* final */ const MR_Box ll_backend__continuation_info_scalar_common_4[4][7];

static /* final */ const MR_Box ll_backend__continuation_info_scalar_common_5[4][5];




static /* final */ const MR_Box ll_backend__continuation_info_scalar_common_1[23][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_liveinfo_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_closure_arg_info_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_trace_port_layout_info_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_label_info_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_return_layout_info_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__continuation_info_scalar_common_1[0]))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 15 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 16 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_layout_table_info_0))
  },
  /* row 17 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0))
  },
  /* row 18 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_deep_prof_info_0))
  },
  /* row 19 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__continuation_info_scalar_common_2[4]))
  },
  /* row 20 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_user_event_info_0))
  },
  /* row 21 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_user_attribute_0))
  },
  /* row 22 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__continuation_info_scalar_common_1[21]))
  },
};

static /* final */ const MR_Box ll_backend__continuation_info_scalar_common_2[11][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__continuation_info_scalar_common_1[2])),
    ((MR_Box) (&ll_backend__continuation_info_scalar_common_1[3]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__continuation_info_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0)),
    ((MR_Box) (&ll_backend__continuation_info_scalar_common_2[3]))
  },
  /* row 5 */
  {
    ((MR_Box) (&ll_backend__continuation_info_scalar_common_5[0])),
    ((MR_Box) (ll_backend__continuation_info__collect_call_continuations_in_cproc_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ll_backend__continuation_info_scalar_common_3[1])),
    ((MR_Box) (ll_backend__continuation_info__collect_continuation_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ll_backend__continuation_info_scalar_common_5[1])),
    ((MR_Box) (ll_backend__continuation_info__convert_return_data_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ll_backend__continuation_info_scalar_common_5[2])),
    ((MR_Box) (ll_backend__continuation_info__convert_return_data_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ll_backend__continuation_info_scalar_common_3[2])),
    ((MR_Box) (ll_backend__continuation_info__convert_return_data_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&ll_backend__continuation_info_scalar_common_3[1])),
    ((MR_Box) (ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__564__1_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__continuation_info_scalar_common_3[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&ll_backend__continuation_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__continuation_info__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_layout_locn_0)),
    ((MR_Box) (&ll_backend__continuation_info__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_layout_locn_0)),
    ((MR_Box) (&ll_backend__continuation_info__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_layout_locn_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__continuation_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0)),
    ((MR_Box) (&ll_backend__continuation_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0)),
    ((MR_Box) (&ll_backend__continuation_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0))
  },
};

static /* final */ const MR_Box ll_backend__continuation_info_scalar_common_4[4][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__continuation_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__continuation_info__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0)),
    ((MR_Box) (&ll_backend__continuation_info__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_layout_locn_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__continuation_info__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__continuation_info__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_locn_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_call_info_0)),
    ((MR_Box) (&ll_backend__continuation_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__continuation_info__type_ctor_info_internal_layout_info_0)),
    ((MR_Box) (&ll_backend__continuation_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__continuation_info__type_ctor_info_internal_layout_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__continuation_info__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_layout_locn_0)),
    ((MR_Box) (&ll_backend__continuation_info__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_layout_locn_0))
  },
};

static /* final */ const MR_Box ll_backend__continuation_info_scalar_common_5[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0)),
    ((MR_Box) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_call_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_liveinfo_0)),
    ((MR_Box) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_liveinfo_0)),
    ((MR_Box) (&ll_backend__continuation_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1633 "ll_backend.continuation_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__continuation_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1641 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1649 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 1657 "ll_backend.continuation_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__continuation_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__continuation_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &ll_backend__continuation_info__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 1666 "ll_backend.continuation_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__continuation_info__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1674 "ll_backend.continuation_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__continuation_info__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_layout_locn_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0
  }
};

#line 1682 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__continuation_info__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1691 "ll_backend.continuation_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__continuation_info__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__continuation_info__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0
  }
};

#line 1699 "ll_backend.continuation_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__continuation_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__continuation_info__type_ctor_info_internal_layout_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0
  }
};

#line 1708 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1716 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0
  }
};

#line 1724 "ll_backend.continuation_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__continuation_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__continuation_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &ll_backend__continuation_info__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0
  }
};

#line 1733 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__list__ti_list_1ll_backend__llds__type_ctor_info_liveinfo_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_liveinfo_0
  }
};

#line 1741 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
  }
};

#line 1749 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_call_info_0_0[5] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__list__ti_list_1ll_backend__llds__type_ctor_info_liveinfo_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__maybe__ti_maybe_1mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
};

#line 1758 "ll_backend.continuation_info.c"
static const MR_ConstString ll_backend__continuation_info__ll_backend__continuation_info__field_names_call_info_0_0[5] = {
  (MR_String) "call_return_label",
  (MR_String) "call_target",
  (MR_String) "call_live_on_return",
  (MR_String) "call_context",
  (MR_String) "call_goal_path"
};

#line 1767 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_call_info_0_0 = {
  (MR_String) "call_info",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__continuation_info__ll_backend__continuation_info__field_types_call_info_0_0,
  ll_backend__continuation_info__ll_backend__continuation_info__field_names_call_info_0_0,
  NULL,
  NULL
};

#line 1782 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_call_info_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_call_info_0_0
};

#line 1787 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_call_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_call_info_0_0
  }
};

#line 1796 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_call_info_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_call_info_0_0
};

#line 1801 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_call_info_0[1] = {
  (MR_Integer) 0
};

#line 1806 "ll_backend.continuation_info.c"
const MR_TypeCtorInfo_Struct ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_call_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__continuation_info____Unify____call_info_0_0_10001)),
  ((MR_Box) (ll_backend__continuation_info____Compare____call_info_0_0_10001)),
  (MR_String) "ll_backend.continuation_info",
  (MR_String) "call_info",
  {     ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_call_info_0 },
  {     ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_call_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_call_info_0
};

#line 1823 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_closure_arg_info_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
};

#line 1829 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_closure_arg_info_0_0 = {
  (MR_String) "closure_arg_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__continuation_info__ll_backend__continuation_info__field_types_closure_arg_info_0_0,
  NULL,
  NULL,
  NULL
};

#line 1844 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_closure_arg_info_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_closure_arg_info_0_0
};

#line 1849 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_closure_arg_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_closure_arg_info_0_0
  }
};

#line 1858 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_closure_arg_info_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_closure_arg_info_0_0
};

#line 1863 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_closure_arg_info_0[1] = {
  (MR_Integer) 0
};

#line 1868 "ll_backend.continuation_info.c"
const MR_TypeCtorInfo_Struct ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_closure_arg_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__continuation_info____Unify____closure_arg_info_0_0_10001)),
  ((MR_Box) (ll_backend__continuation_info____Compare____closure_arg_info_0_0_10001)),
  (MR_String) "ll_backend.continuation_info",
  (MR_String) "closure_arg_info",
  {     ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_closure_arg_info_0 },
  {     ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_closure_arg_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_closure_arg_info_0
};

#line 1885 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__list__ti_list_1ll_backend__continuation_info__type_ctor_info_closure_arg_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_closure_arg_info_0
  }
};

#line 1893 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__continuation_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_TypeInfo) &ll_backend__continuation_info__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0
  }
};

#line 1902 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_closure_layout_info_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__list__ti_list_1ll_backend__continuation_info__type_ctor_info_closure_arg_info_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0
};

#line 1908 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_closure_layout_info_0_0 = {
  (MR_String) "closure_layout_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__continuation_info__ll_backend__continuation_info__field_types_closure_layout_info_0_0,
  NULL,
  NULL,
  NULL
};

#line 1923 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_closure_layout_info_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_closure_layout_info_0_0
};

#line 1928 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_closure_layout_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_closure_layout_info_0_0
  }
};

#line 1937 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_closure_layout_info_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_closure_layout_info_0_0
};

#line 1942 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_closure_layout_info_0[1] = {
  (MR_Integer) 0
};

#line 1947 "ll_backend.continuation_info.c"
const MR_TypeCtorInfo_Struct ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_closure_layout_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__continuation_info____Unify____closure_layout_info_0_0_10001)),
  ((MR_Box) (ll_backend__continuation_info____Compare____closure_layout_info_0_0_10001)),
  (MR_String) "ll_backend.continuation_info",
  (MR_String) "closure_layout_info",
  {     ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_closure_layout_info_0 },
  {     ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_closure_layout_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_closure_layout_info_0
};

#line 1964 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_trace_port_layout_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_trace_port_layout_info_0
  }
};

#line 1972 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_layout_label_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_label_info_0
  }
};

#line 1980 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_return_layout_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_return_layout_info_0
  }
};

#line 1988 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_internal_layout_info_0_0[3] = {
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_trace_port_layout_info_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_layout_label_info_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_return_layout_info_0
};

#line 1995 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_internal_layout_info_0_0 = {
  (MR_String) "internal_layout_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__continuation_info__ll_backend__continuation_info__field_types_internal_layout_info_0_0,
  NULL,
  NULL,
  NULL
};

#line 2010 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_internal_layout_info_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_internal_layout_info_0_0
};

#line 2015 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_internal_layout_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_internal_layout_info_0_0
  }
};

#line 2024 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_internal_layout_info_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_internal_layout_info_0_0
};

#line 2029 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_internal_layout_info_0[1] = {
  (MR_Integer) 0
};

#line 2034 "ll_backend.continuation_info.c"
const MR_TypeCtorInfo_Struct ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__continuation_info____Unify____internal_layout_info_0_0_10001)),
  ((MR_Box) (ll_backend__continuation_info____Compare____internal_layout_info_0_0_10001)),
  (MR_String) "ll_backend.continuation_info",
  (MR_String) "internal_layout_info",
  {     ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_internal_layout_info_0 },
  {     ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_internal_layout_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_internal_layout_info_0
};

#line 2051 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__set_ordlist__ti_set_ordlist_1ll_backend__continuation_info__type_ctor_info_layout_var_info_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0
  }
};

#line 2059 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_layout_label_info_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__set_ordlist__ti_set_ordlist_1ll_backend__continuation_info__type_ctor_info_layout_var_info_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0
};

#line 2065 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_layout_label_info_0_0 = {
  (MR_String) "layout_label_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__continuation_info__ll_backend__continuation_info__field_types_layout_label_info_0_0,
  NULL,
  NULL,
  NULL
};

#line 2080 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_layout_label_info_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_layout_label_info_0_0
};

#line 2085 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_layout_label_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_layout_label_info_0_0
  }
};

#line 2094 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_layout_label_info_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_layout_label_info_0_0
};

#line 2099 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_layout_label_info_0[1] = {
  (MR_Integer) 0
};

#line 2104 "ll_backend.continuation_info.c"
const MR_TypeCtorInfo_Struct ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_label_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__continuation_info____Unify____layout_label_info_0_0_10001)),
  ((MR_Box) (ll_backend__continuation_info____Compare____layout_label_info_0_0_10001)),
  (MR_String) "ll_backend.continuation_info",
  (MR_String) "layout_label_info",
  {     ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_layout_label_info_0 },
  {     ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_layout_label_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_layout_label_info_0
};

#line 2121 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_layout_var_info_0_0[3] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_live_value_type_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2128 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_layout_var_info_0_0 = {
  (MR_String) "layout_var_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__continuation_info__ll_backend__continuation_info__field_types_layout_var_info_0_0,
  NULL,
  NULL,
  NULL
};

#line 2143 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_layout_var_info_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_layout_var_info_0_0
};

#line 2148 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_layout_var_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_layout_var_info_0_0
  }
};

#line 2157 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_layout_var_info_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_layout_var_info_0_0
};

#line 2162 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_layout_var_info_0[1] = {
  (MR_Integer) 0
};

#line 2167 "ll_backend.continuation_info.c"
const MR_TypeCtorInfo_Struct ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__continuation_info____Unify____layout_var_info_0_0_10001)),
  ((MR_Box) (ll_backend__continuation_info____Compare____layout_var_info_0_0_10001)),
  (MR_String) "ll_backend.continuation_info",
  (MR_String) "layout_var_info",
  {     ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_layout_var_info_0 },
  {     ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_layout_var_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_layout_var_info_0
};

#line 2184 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_proc_deep_prof_info_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_hlds_proc_static_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_deep_excp_slots_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_deep_original_body_0
};

#line 2191 "ll_backend.continuation_info.c"
static const MR_ConstString ll_backend__continuation_info__ll_backend__continuation_info__field_names_proc_deep_prof_info_0_0[3] = {
  (MR_String) "pdpi_proc_static",
  (MR_String) "pdpi_excp_slots",
  (MR_String) "pdpi_orig_body"
};

#line 2198 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_proc_deep_prof_info_0_0 = {
  (MR_String) "proc_deep_prof_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__continuation_info__ll_backend__continuation_info__field_types_proc_deep_prof_info_0_0,
  ll_backend__continuation_info__ll_backend__continuation_info__field_names_proc_deep_prof_info_0_0,
  NULL,
  NULL
};

#line 2213 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_proc_deep_prof_info_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_proc_deep_prof_info_0_0
};

#line 2218 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_proc_deep_prof_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_proc_deep_prof_info_0_0
  }
};

#line 2227 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_proc_deep_prof_info_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_proc_deep_prof_info_0_0
};

#line 2232 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_proc_deep_prof_info_0[1] = {
  (MR_Integer) 0
};

#line 2237 "ll_backend.continuation_info.c"
const MR_TypeCtorInfo_Struct ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_deep_prof_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__continuation_info____Unify____proc_deep_prof_info_0_0_10001)),
  ((MR_Box) (ll_backend__continuation_info____Compare____proc_deep_prof_info_0_0_10001)),
  (MR_String) "ll_backend.continuation_info",
  (MR_String) "proc_deep_prof_info",
  {     ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_proc_deep_prof_info_0 },
  {     ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_proc_deep_prof_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_proc_deep_prof_info_0
};

#line 2254 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__continuation_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__continuation_info__type_ctor_info_internal_layout_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0
  }
};

#line 2263 "ll_backend.continuation_info.c"
const MR_TypeCtorInfo_Struct ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_label_layout_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__continuation_info____Unify____proc_label_layout_info_0_0_10001)),
  ((MR_Box) (ll_backend__continuation_info____Compare____proc_label_layout_info_0_0_10001)),
  (MR_String) "ll_backend.continuation_info",
  (MR_String) "proc_label_layout_info",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ll_backend__continuation_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__continuation_info__type_ctor_info_internal_layout_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2280 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2288 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 2296 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2304 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

#line 2312 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2320 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__continuation_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2329 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_proc_layout_table_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_layout_table_info_0
  }
};

#line 2337 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0
  }
};

#line 2345 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_proc_deep_prof_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_deep_prof_info_0
  }
};

#line 2353 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_proc_layout_info_0_0[24] = {
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_eval_method_0,
  (MR_PseudoTypeInfo) &libs__trace_params__libs__trace_params__type_ctor_info_trace_level_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0,
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_trace_needs_body_rep_0,
  (MR_PseudoTypeInfo) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__ll_backend__trace_gen__type_ctor_info_trace_slot_info_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__continuation_info__type_ctor_info_internal_layout_info_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_proc_layout_table_info_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_proc_deep_prof_info_0
};

#line 2381 "ll_backend.continuation_info.c"
static const MR_ConstString ll_backend__continuation_info__ll_backend__continuation_info__field_names_proc_layout_info_0_0[24] = {
  (MR_String) "pli_rtti_proc_label",
  (MR_String) "pli_entry_label",
  (MR_String) "pli_detism",
  (MR_String) "pli_stack_slot_count",
  (MR_String) "pli_succip_slot",
  (MR_String) "pli_eval_method",
  (MR_String) "pli_eff_trace_level",
  (MR_String) "pli_call_label",
  (MR_String) "pli_max_trace_reg_r",
  (MR_String) "pli_max_trace_reg_f",
  (MR_String) "pli_head_vars",
  (MR_String) "pli_arg_modes",
  (MR_String) "pli_proc_body",
  (MR_String) "pli_trace_body_rep",
  (MR_String) "pli_initial_instmap",
  (MR_String) "pli_trace_slot_info",
  (MR_String) "pli_need_proc_id",
  (MR_String) "pli_varset",
  (MR_String) "pli_vartypes",
  (MR_String) "pli_internal_map",
  (MR_String) "pli_maybe_table_info",
  (MR_String) "pli_need_all_names",
  (MR_String) "pli_oisu_kind_fors",
  (MR_String) "pli_deep_prof"
};

#line 2409 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_proc_layout_info_0_0 = {
  (MR_String) "proc_layout_info",
  (MR_Integer) 24,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__continuation_info__ll_backend__continuation_info__field_types_proc_layout_info_0_0,
  ll_backend__continuation_info__ll_backend__continuation_info__field_names_proc_layout_info_0_0,
  NULL,
  NULL
};

#line 2424 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_proc_layout_info_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_proc_layout_info_0_0
};

#line 2429 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_proc_layout_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_proc_layout_info_0_0
  }
};

#line 2438 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_proc_layout_info_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_proc_layout_info_0_0
};

#line 2443 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_proc_layout_info_0[1] = {
  (MR_Integer) 0
};

#line 2448 "ll_backend.continuation_info.c"
const MR_TypeCtorInfo_Struct ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_layout_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__continuation_info____Unify____proc_layout_info_0_0_10001)),
  ((MR_Box) (ll_backend__continuation_info____Compare____proc_layout_info_0_0_10001)),
  (MR_String) "ll_backend.continuation_info",
  (MR_String) "proc_layout_info",
  {     ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_proc_layout_info_0 },
  {     ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_proc_layout_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_proc_layout_info_0
};

#line 2465 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_proc_layout_table_info_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_table_io_info_0
};

#line 2470 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_proc_layout_table_info_0_0 = {
  (MR_String) "proc_table_io_entry",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__continuation_info__ll_backend__continuation_info__field_types_proc_layout_table_info_0_0,
  NULL,
  NULL,
  NULL
};

#line 2485 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_proc_layout_table_info_0_1[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_table_struct_info_0
};

#line 2490 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_proc_layout_table_info_0_1 = {
  (MR_String) "proc_table_struct",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  ll_backend__continuation_info__ll_backend__continuation_info__field_types_proc_layout_table_info_0_1,
  NULL,
  NULL,
  NULL
};

#line 2505 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_proc_layout_table_info_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_proc_layout_table_info_0_0
};

#line 2510 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_proc_layout_table_info_0_1[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_proc_layout_table_info_0_1
};

#line 2515 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_proc_layout_table_info_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_proc_layout_table_info_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_proc_layout_table_info_0_1
  }
};

#line 2529 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_proc_layout_table_info_0[2] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_proc_layout_table_info_0_0,
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_proc_layout_table_info_0_1
};

#line 2535 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_proc_layout_table_info_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2541 "ll_backend.continuation_info.c"
const MR_TypeCtorInfo_Struct ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_layout_table_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__continuation_info____Unify____proc_layout_table_info_0_0_10001)),
  ((MR_Box) (ll_backend__continuation_info____Compare____proc_layout_table_info_0_0_10001)),
  (MR_String) "ll_backend.continuation_info",
  (MR_String) "proc_layout_table_info",
  {     ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_proc_layout_table_info_0 },
  {     ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_proc_layout_table_info_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_proc_layout_table_info_0
};

#line 2558 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__continuation_info__pair__ti_pair_2term__type_ctor_info_context_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0,
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
  }
};

#line 2567 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__continuation_info__pair__ti_pair_2ll_backend__llds__type_ctor_info_code_addr_0pair__ti_pair_2term__type_ctor_info_context_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0,
    (MR_TypeInfo) &ll_backend__continuation_info__pair__ti_pair_2term__type_ctor_info_context_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
  }
};

#line 2576 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__list__ti_list_1pair__ti_pair_2ll_backend__llds__type_ctor_info_code_addr_0pair__ti_pair_2term__type_ctor_info_context_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__pair__ti_pair_2ll_backend__llds__type_ctor_info_code_addr_0pair__ti_pair_2term__type_ctor_info_context_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
  }
};

#line 2584 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_return_layout_info_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__list__ti_list_1pair__ti_pair_2ll_backend__llds__type_ctor_info_code_addr_0pair__ti_pair_2term__type_ctor_info_context_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_label_info_0
};

#line 2590 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_return_layout_info_0_0 = {
  (MR_String) "return_layout_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__continuation_info__ll_backend__continuation_info__field_types_return_layout_info_0_0,
  NULL,
  NULL,
  NULL
};

#line 2605 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_return_layout_info_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_return_layout_info_0_0
};

#line 2610 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_return_layout_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_return_layout_info_0_0
  }
};

#line 2619 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_return_layout_info_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_return_layout_info_0_0
};

#line 2624 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_return_layout_info_0[1] = {
  (MR_Integer) 0
};

#line 2629 "ll_backend.continuation_info.c"
const MR_TypeCtorInfo_Struct ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_return_layout_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__continuation_info____Unify____return_layout_info_0_0_10001)),
  ((MR_Box) (ll_backend__continuation_info____Compare____return_layout_info_0_0_10001)),
  (MR_String) "ll_backend.continuation_info",
  (MR_String) "return_layout_info",
  {     ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_return_layout_info_0 },
  {     ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_return_layout_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_return_layout_info_0
};

#line 2646 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_0 = {
  (MR_String) "slot_ticket",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2661 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_1 = {
  (MR_String) "slot_ticket_counter",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2676 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_2 = {
  (MR_String) "slot_trace_data",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2691 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_3 = {
  (MR_String) "slot_lookup_disj_cur",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2706 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_4 = {
  (MR_String) "slot_lookup_switch_cur",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 4,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2721 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_5 = {
  (MR_String) "slot_lookup_switch_max",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 5,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2736 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_6 = {
  (MR_String) "slot_sync_term",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 6,
  (MR_Integer) 6,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2751 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_7 = {
  (MR_String) "slot_region_ite",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 7,
  (MR_Integer) 7,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2766 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_8 = {
  (MR_String) "slot_region_disj",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 8,
  (MR_Integer) 8,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2781 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_9 = {
  (MR_String) "slot_region_commit",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 9,
  (MR_Integer) 9,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2796 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_10 = {
  (MR_String) "slot_success_record",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 10,
  (MR_Integer) 10,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2811 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_slot_contents_0_11[1] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
};

#line 2816 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_11 = {
  (MR_String) "slot_lval",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 11,
  ll_backend__continuation_info__ll_backend__continuation_info__field_types_slot_contents_0_11,
  NULL,
  NULL,
  NULL
};

#line 2831 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_slot_contents_0_0[11] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_0,
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_1,
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_2,
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_3,
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_4,
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_5,
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_6,
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_7,
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_8,
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_9,
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_10
};

#line 2846 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_slot_contents_0_1[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_11
};

#line 2851 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_slot_contents_0[2] = {
  {
    (MR_Integer) 11,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_slot_contents_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_slot_contents_0_1
  }
};

#line 2865 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_slot_contents_0[12] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_3,
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_4,
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_5,
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_11,
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_9,
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_8,
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_7,
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_10,
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_6,
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_0,
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_1,
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_2
};

#line 2881 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_slot_contents_0[12] = {
  (MR_Integer) 9,
  (MR_Integer) 10,
  (MR_Integer) 11,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 8,
  (MR_Integer) 6,
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 7,
  (MR_Integer) 3
};

#line 2897 "ll_backend.continuation_info.c"
const MR_TypeCtorInfo_Struct ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_slot_contents_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__continuation_info____Unify____slot_contents_0_0_10001)),
  ((MR_Box) (ll_backend__continuation_info____Compare____slot_contents_0_0_10001)),
  (MR_String) "ll_backend.continuation_info",
  (MR_String) "slot_contents",
  {     ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_slot_contents_0 },
  {     ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_slot_contents_0 },
  (MR_Integer) 12,
  (MR_Integer) 4,
  ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_slot_contents_0
};

#line 2914 "ll_backend.continuation_info.c"
static const MR_EnumFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__enum_functor_desc_trace_needs_body_rep_0_0 = {
  (MR_String) "trace_needs_body_rep",
  (MR_Integer) 0
};

#line 2920 "ll_backend.continuation_info.c"
static const MR_EnumFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__enum_functor_desc_trace_needs_body_rep_0_1 = {
  (MR_String) "trace_does_not_need_body_rep",
  (MR_Integer) 1
};

#line 2926 "ll_backend.continuation_info.c"
static const MR_EnumFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__enum_value_ordered_trace_needs_body_rep_0[2] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__enum_functor_desc_trace_needs_body_rep_0_0,
  &ll_backend__continuation_info__ll_backend__continuation_info__enum_functor_desc_trace_needs_body_rep_0_1
};

#line 2932 "ll_backend.continuation_info.c"
static const MR_EnumFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__enum_name_ordered_trace_needs_body_rep_0[2] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__enum_functor_desc_trace_needs_body_rep_0_1,
  &ll_backend__continuation_info__ll_backend__continuation_info__enum_functor_desc_trace_needs_body_rep_0_0
};

#line 2938 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_trace_needs_body_rep_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2944 "ll_backend.continuation_info.c"
const MR_TypeCtorInfo_Struct ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_trace_needs_body_rep_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__continuation_info____Unify____trace_needs_body_rep_0_0_10001)),
  ((MR_Box) (ll_backend__continuation_info____Compare____trace_needs_body_rep_0_0_10001)),
  (MR_String) "ll_backend.continuation_info",
  (MR_String) "trace_needs_body_rep",
  {     ll_backend__continuation_info__ll_backend__continuation_info__enum_name_ordered_trace_needs_body_rep_0 },
  {     ll_backend__continuation_info__ll_backend__continuation_info__enum_value_ordered_trace_needs_body_rep_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_trace_needs_body_rep_0
};

#line 2961 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_user_event_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_user_event_info_0
  }
};

#line 2969 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_trace_port_layout_info_0_0[6] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_user_event_info_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_label_info_0
};

#line 2979 "ll_backend.continuation_info.c"
static const MR_ConstString ll_backend__continuation_info__ll_backend__continuation_info__field_names_trace_port_layout_info_0_0[6] = {
  (MR_String) "port_context",
  (MR_String) "port_type",
  (MR_String) "port_is_hidden",
  (MR_String) "port_path",
  (MR_String) "port_user",
  (MR_String) "port_label"
};

#line 2989 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_trace_port_layout_info_0_0 = {
  (MR_String) "trace_port_layout_info",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__continuation_info__ll_backend__continuation_info__field_types_trace_port_layout_info_0_0,
  ll_backend__continuation_info__ll_backend__continuation_info__field_names_trace_port_layout_info_0_0,
  NULL,
  NULL
};

#line 3004 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_trace_port_layout_info_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_trace_port_layout_info_0_0
};

#line 3009 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_trace_port_layout_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_trace_port_layout_info_0_0
  }
};

#line 3018 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_trace_port_layout_info_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_trace_port_layout_info_0_0
};

#line 3023 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_trace_port_layout_info_0[1] = {
  (MR_Integer) 0
};

#line 3028 "ll_backend.continuation_info.c"
const MR_TypeCtorInfo_Struct ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_trace_port_layout_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__continuation_info____Unify____trace_port_layout_info_0_0_10001)),
  ((MR_Box) (ll_backend__continuation_info____Compare____trace_port_layout_info_0_0_10001)),
  (MR_String) "ll_backend.continuation_info",
  (MR_String) "trace_port_layout_info",
  {     ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_trace_port_layout_info_0 },
  {     ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_trace_port_layout_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_trace_port_layout_info_0
};

#line 3045 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_user_attribute_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 3051 "ll_backend.continuation_info.c"
static const MR_ConstString ll_backend__continuation_info__ll_backend__continuation_info__field_names_user_attribute_0_0[2] = {
  (MR_String) "attr_locn",
  (MR_String) "attr_var"
};

#line 3057 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_user_attribute_0_0 = {
  (MR_String) "user_attribute",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__continuation_info__ll_backend__continuation_info__field_types_user_attribute_0_0,
  ll_backend__continuation_info__ll_backend__continuation_info__field_names_user_attribute_0_0,
  NULL,
  NULL
};

#line 3072 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_user_attribute_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_user_attribute_0_0
};

#line 3077 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_user_attribute_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_user_attribute_0_0
  }
};

#line 3086 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_user_attribute_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_user_attribute_0_0
};

#line 3091 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_user_attribute_0[1] = {
  (MR_Integer) 0
};

#line 3096 "ll_backend.continuation_info.c"
const MR_TypeCtorInfo_Struct ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_user_attribute_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__continuation_info____Unify____user_attribute_0_0_10001)),
  ((MR_Box) (ll_backend__continuation_info____Compare____user_attribute_0_0_10001)),
  (MR_String) "ll_backend.continuation_info",
  (MR_String) "user_attribute",
  {     ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_user_attribute_0 },
  {     ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_user_attribute_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_user_attribute_0
};

#line 3113 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_user_attribute_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_user_attribute_0
  }
};

#line 3121 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__list__ti_list_1maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_user_attribute_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_user_attribute_0
  }
};

#line 3129 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_user_event_info_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__list__ti_list_1maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_user_attribute_0
};

#line 3135 "ll_backend.continuation_info.c"
static const MR_ConstString ll_backend__continuation_info__ll_backend__continuation_info__field_names_user_event_info_0_0[2] = {
  (MR_String) "user_port_number",
  (MR_String) "user_attributes"
};

#line 3141 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_user_event_info_0_0 = {
  (MR_String) "user_event_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__continuation_info__ll_backend__continuation_info__field_types_user_event_info_0_0,
  ll_backend__continuation_info__ll_backend__continuation_info__field_names_user_event_info_0_0,
  NULL,
  NULL
};

#line 3156 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_user_event_info_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_user_event_info_0_0
};

#line 3161 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_user_event_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_user_event_info_0_0
  }
};

#line 3170 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_user_event_info_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_user_event_info_0_0
};

#line 3175 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_user_event_info_0[1] = {
  (MR_Integer) 0
};

#line 3180 "ll_backend.continuation_info.c"
const MR_TypeCtorInfo_Struct ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_user_event_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__continuation_info____Unify____user_event_info_0_0_10001)),
  ((MR_Box) (ll_backend__continuation_info____Compare____user_event_info_0_0_10001)),
  (MR_String) "ll_backend.continuation_info",
  (MR_String) "user_event_info",
  {     ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_user_event_info_0 },
  {     ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_user_event_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_user_event_info_0
};

#line 3197 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____call_info_0_0_10001(
#line 3200 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3202 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3204 "ll_backend.continuation_info.c"
{
#line 3206 "ll_backend.continuation_info.c"
  {
#line 3208 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3211 "ll_backend.continuation_info.c"
    {
#line 3213 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____call_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3216 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3218 "ll_backend.continuation_info.c"
  }
#line 3220 "ll_backend.continuation_info.c"
}

#line 3223 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____call_info_0_0_10001(
#line 3226 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3228 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3230 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3232 "ll_backend.continuation_info.c"
{
#line 3234 "ll_backend.continuation_info.c"
  {
#line 3236 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3239 "ll_backend.continuation_info.c"
    {
#line 3241 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____call_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3244 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3246 "ll_backend.continuation_info.c"
  }
#line 3248 "ll_backend.continuation_info.c"
}

#line 3251 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____closure_arg_info_0_0_10001(
#line 3254 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3256 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3258 "ll_backend.continuation_info.c"
{
#line 3260 "ll_backend.continuation_info.c"
  {
#line 3262 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3265 "ll_backend.continuation_info.c"
    {
#line 3267 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____closure_arg_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3270 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3272 "ll_backend.continuation_info.c"
  }
#line 3274 "ll_backend.continuation_info.c"
}

#line 3277 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____closure_arg_info_0_0_10001(
#line 3280 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3282 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3284 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3286 "ll_backend.continuation_info.c"
{
#line 3288 "ll_backend.continuation_info.c"
  {
#line 3290 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3293 "ll_backend.continuation_info.c"
    {
#line 3295 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____closure_arg_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3298 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3300 "ll_backend.continuation_info.c"
  }
#line 3302 "ll_backend.continuation_info.c"
}

#line 3305 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____closure_layout_info_0_0_10001(
#line 3308 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3310 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3312 "ll_backend.continuation_info.c"
{
#line 3314 "ll_backend.continuation_info.c"
  {
#line 3316 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3319 "ll_backend.continuation_info.c"
    {
#line 3321 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____closure_layout_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3324 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3326 "ll_backend.continuation_info.c"
  }
#line 3328 "ll_backend.continuation_info.c"
}

#line 3331 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____closure_layout_info_0_0_10001(
#line 3334 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3336 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3338 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3340 "ll_backend.continuation_info.c"
{
#line 3342 "ll_backend.continuation_info.c"
  {
#line 3344 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3347 "ll_backend.continuation_info.c"
    {
#line 3349 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____closure_layout_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3352 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3354 "ll_backend.continuation_info.c"
  }
#line 3356 "ll_backend.continuation_info.c"
}

#line 3359 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____internal_layout_info_0_0_10001(
#line 3362 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3364 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3366 "ll_backend.continuation_info.c"
{
#line 3368 "ll_backend.continuation_info.c"
  {
#line 3370 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3373 "ll_backend.continuation_info.c"
    {
#line 3375 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____internal_layout_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3378 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3380 "ll_backend.continuation_info.c"
  }
#line 3382 "ll_backend.continuation_info.c"
}

#line 3385 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____internal_layout_info_0_0_10001(
#line 3388 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3390 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3392 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3394 "ll_backend.continuation_info.c"
{
#line 3396 "ll_backend.continuation_info.c"
  {
#line 3398 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3401 "ll_backend.continuation_info.c"
    {
#line 3403 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____internal_layout_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3406 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3408 "ll_backend.continuation_info.c"
  }
#line 3410 "ll_backend.continuation_info.c"
}

#line 3413 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____layout_label_info_0_0_10001(
#line 3416 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3418 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3420 "ll_backend.continuation_info.c"
{
#line 3422 "ll_backend.continuation_info.c"
  {
#line 3424 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3427 "ll_backend.continuation_info.c"
    {
#line 3429 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____layout_label_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3432 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3434 "ll_backend.continuation_info.c"
  }
#line 3436 "ll_backend.continuation_info.c"
}

#line 3439 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____layout_label_info_0_0_10001(
#line 3442 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3444 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3446 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3448 "ll_backend.continuation_info.c"
{
#line 3450 "ll_backend.continuation_info.c"
  {
#line 3452 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3455 "ll_backend.continuation_info.c"
    {
#line 3457 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____layout_label_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3460 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3462 "ll_backend.continuation_info.c"
  }
#line 3464 "ll_backend.continuation_info.c"
}

#line 3467 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____layout_var_info_0_0_10001(
#line 3470 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3472 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3474 "ll_backend.continuation_info.c"
{
#line 3476 "ll_backend.continuation_info.c"
  {
#line 3478 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3481 "ll_backend.continuation_info.c"
    {
#line 3483 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____layout_var_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3486 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3488 "ll_backend.continuation_info.c"
  }
#line 3490 "ll_backend.continuation_info.c"
}

#line 3493 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____layout_var_info_0_0_10001(
#line 3496 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3498 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3500 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3502 "ll_backend.continuation_info.c"
{
#line 3504 "ll_backend.continuation_info.c"
  {
#line 3506 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3509 "ll_backend.continuation_info.c"
    {
#line 3511 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____layout_var_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3514 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3516 "ll_backend.continuation_info.c"
  }
#line 3518 "ll_backend.continuation_info.c"
}

#line 3521 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____proc_deep_prof_info_0_0_10001(
#line 3524 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3526 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3528 "ll_backend.continuation_info.c"
{
#line 3530 "ll_backend.continuation_info.c"
  {
#line 3532 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3535 "ll_backend.continuation_info.c"
    {
#line 3537 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____proc_deep_prof_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3540 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3542 "ll_backend.continuation_info.c"
  }
#line 3544 "ll_backend.continuation_info.c"
}

#line 3547 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____proc_deep_prof_info_0_0_10001(
#line 3550 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3552 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3554 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3556 "ll_backend.continuation_info.c"
{
#line 3558 "ll_backend.continuation_info.c"
  {
#line 3560 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3563 "ll_backend.continuation_info.c"
    {
#line 3565 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____proc_deep_prof_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3568 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3570 "ll_backend.continuation_info.c"
  }
#line 3572 "ll_backend.continuation_info.c"
}

#line 3575 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____proc_label_layout_info_0_0_10001(
#line 3578 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3580 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3582 "ll_backend.continuation_info.c"
{
#line 3584 "ll_backend.continuation_info.c"
  {
#line 3586 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3589 "ll_backend.continuation_info.c"
    {
#line 3591 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____proc_label_layout_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3594 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3596 "ll_backend.continuation_info.c"
  }
#line 3598 "ll_backend.continuation_info.c"
}

#line 3601 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____proc_label_layout_info_0_0_10001(
#line 3604 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3606 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3608 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3610 "ll_backend.continuation_info.c"
{
#line 3612 "ll_backend.continuation_info.c"
  {
#line 3614 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3617 "ll_backend.continuation_info.c"
    {
#line 3619 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____proc_label_layout_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3622 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3624 "ll_backend.continuation_info.c"
  }
#line 3626 "ll_backend.continuation_info.c"
}

#line 3629 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____proc_layout_info_0_0_10001(
#line 3632 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3634 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3636 "ll_backend.continuation_info.c"
{
#line 3638 "ll_backend.continuation_info.c"
  {
#line 3640 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3643 "ll_backend.continuation_info.c"
    {
#line 3645 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____proc_layout_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3648 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3650 "ll_backend.continuation_info.c"
  }
#line 3652 "ll_backend.continuation_info.c"
}

#line 3655 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____proc_layout_info_0_0_10001(
#line 3658 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3660 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3662 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3664 "ll_backend.continuation_info.c"
{
#line 3666 "ll_backend.continuation_info.c"
  {
#line 3668 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3671 "ll_backend.continuation_info.c"
    {
#line 3673 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____proc_layout_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3676 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3678 "ll_backend.continuation_info.c"
  }
#line 3680 "ll_backend.continuation_info.c"
}

#line 3683 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____proc_layout_table_info_0_0_10001(
#line 3686 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3688 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3690 "ll_backend.continuation_info.c"
{
#line 3692 "ll_backend.continuation_info.c"
  {
#line 3694 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3697 "ll_backend.continuation_info.c"
    {
#line 3699 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____proc_layout_table_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3702 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3704 "ll_backend.continuation_info.c"
  }
#line 3706 "ll_backend.continuation_info.c"
}

#line 3709 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____proc_layout_table_info_0_0_10001(
#line 3712 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3714 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3716 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3718 "ll_backend.continuation_info.c"
{
#line 3720 "ll_backend.continuation_info.c"
  {
#line 3722 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3725 "ll_backend.continuation_info.c"
    {
#line 3727 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____proc_layout_table_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3730 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3732 "ll_backend.continuation_info.c"
  }
#line 3734 "ll_backend.continuation_info.c"
}

#line 3737 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____return_layout_info_0_0_10001(
#line 3740 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3742 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3744 "ll_backend.continuation_info.c"
{
#line 3746 "ll_backend.continuation_info.c"
  {
#line 3748 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3751 "ll_backend.continuation_info.c"
    {
#line 3753 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____return_layout_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3756 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3758 "ll_backend.continuation_info.c"
  }
#line 3760 "ll_backend.continuation_info.c"
}

#line 3763 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____return_layout_info_0_0_10001(
#line 3766 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3768 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3770 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3772 "ll_backend.continuation_info.c"
{
#line 3774 "ll_backend.continuation_info.c"
  {
#line 3776 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3779 "ll_backend.continuation_info.c"
    {
#line 3781 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____return_layout_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3784 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3786 "ll_backend.continuation_info.c"
  }
#line 3788 "ll_backend.continuation_info.c"
}

#line 3791 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____slot_contents_0_0_10001(
#line 3794 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3796 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3798 "ll_backend.continuation_info.c"
{
#line 3800 "ll_backend.continuation_info.c"
  {
#line 3802 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3805 "ll_backend.continuation_info.c"
    {
#line 3807 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____slot_contents_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3810 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3812 "ll_backend.continuation_info.c"
  }
#line 3814 "ll_backend.continuation_info.c"
}

#line 3817 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____slot_contents_0_0_10001(
#line 3820 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3822 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3824 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3826 "ll_backend.continuation_info.c"
{
#line 3828 "ll_backend.continuation_info.c"
  {
#line 3830 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3833 "ll_backend.continuation_info.c"
    {
#line 3835 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____slot_contents_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3838 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3840 "ll_backend.continuation_info.c"
  }
#line 3842 "ll_backend.continuation_info.c"
}

#line 3845 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____trace_needs_body_rep_0_0_10001(
#line 3848 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3850 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3852 "ll_backend.continuation_info.c"
{
#line 3854 "ll_backend.continuation_info.c"
  {
#line 3856 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3859 "ll_backend.continuation_info.c"
    {
#line 3861 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____trace_needs_body_rep_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3864 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3866 "ll_backend.continuation_info.c"
  }
#line 3868 "ll_backend.continuation_info.c"
}

#line 3871 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____trace_needs_body_rep_0_0_10001(
#line 3874 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3876 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3878 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3880 "ll_backend.continuation_info.c"
{
#line 3882 "ll_backend.continuation_info.c"
  {
#line 3884 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3887 "ll_backend.continuation_info.c"
    {
#line 3889 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____trace_needs_body_rep_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3892 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3894 "ll_backend.continuation_info.c"
  }
#line 3896 "ll_backend.continuation_info.c"
}

#line 3899 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____trace_port_layout_info_0_0_10001(
#line 3902 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3904 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3906 "ll_backend.continuation_info.c"
{
#line 3908 "ll_backend.continuation_info.c"
  {
#line 3910 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3913 "ll_backend.continuation_info.c"
    {
#line 3915 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____trace_port_layout_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3918 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3920 "ll_backend.continuation_info.c"
  }
#line 3922 "ll_backend.continuation_info.c"
}

#line 3925 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____trace_port_layout_info_0_0_10001(
#line 3928 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3930 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3932 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3934 "ll_backend.continuation_info.c"
{
#line 3936 "ll_backend.continuation_info.c"
  {
#line 3938 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3941 "ll_backend.continuation_info.c"
    {
#line 3943 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____trace_port_layout_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3946 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3948 "ll_backend.continuation_info.c"
  }
#line 3950 "ll_backend.continuation_info.c"
}

#line 3953 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____user_attribute_0_0_10001(
#line 3956 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3958 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3960 "ll_backend.continuation_info.c"
{
#line 3962 "ll_backend.continuation_info.c"
  {
#line 3964 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3967 "ll_backend.continuation_info.c"
    {
#line 3969 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____user_attribute_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3972 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3974 "ll_backend.continuation_info.c"
  }
#line 3976 "ll_backend.continuation_info.c"
}

#line 3979 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____user_attribute_0_0_10001(
#line 3982 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3984 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3986 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3988 "ll_backend.continuation_info.c"
{
#line 3990 "ll_backend.continuation_info.c"
  {
#line 3992 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3995 "ll_backend.continuation_info.c"
    {
#line 3997 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____user_attribute_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 4000 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 4002 "ll_backend.continuation_info.c"
  }
#line 4004 "ll_backend.continuation_info.c"
}

#line 4007 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____user_event_info_0_0_10001(
#line 4010 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 4012 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 4014 "ll_backend.continuation_info.c"
{
#line 4016 "ll_backend.continuation_info.c"
  {
#line 4018 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 4021 "ll_backend.continuation_info.c"
    {
#line 4023 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____user_event_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 4026 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 4028 "ll_backend.continuation_info.c"
  }
#line 4030 "ll_backend.continuation_info.c"
}

#line 4033 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____user_event_info_0_0_10001(
#line 4036 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 4038 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 4040 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 4042 "ll_backend.continuation_info.c"
{
#line 4044 "ll_backend.continuation_info.c"
  {
#line 4046 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 4049 "ll_backend.continuation_info.c"
    {
#line 4051 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____user_event_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 4054 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 4056 "ll_backend.continuation_info.c"
  }
#line 4058 "ll_backend.continuation_info.c"
}

#line 741 "continuation_info.m"
static MR_bool MR_CALL 
ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_117_109_101_95_108_97_121_111_117_116_95_102_111_114_95_118_97_114_115_95_95_91_50_93_95_48_9_p_0_3(
#line 741 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg)
#line 741 "continuation_info.m"
{
#line 741 "continuation_info.m"
  {
#line 741 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 741 "continuation_info.m"
    MR_Box ll_backend__continuation_info__closure = ll_backend__continuation_info__closure_arg;

#line 741 "continuation_info.m"
    {
#line 741 "continuation_info.m"
      return ll_backend__continuation_info__succeeded = mercury__int__f_greater_than_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__closure, (MR_Integer) 4))));
    }
#line 741 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 741 "continuation_info.m"
  }
#line 741 "continuation_info.m"
}

#line 739 "continuation_info.m"
static MR_bool MR_CALL 
ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_117_109_101_95_108_97_121_111_117_116_95_102_111_114_95_118_97_114_115_95_95_91_50_93_95_48_9_p_0_2(
#line 739 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg)
#line 739 "continuation_info.m"
{
#line 739 "continuation_info.m"
  {
#line 739 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 739 "continuation_info.m"
    MR_Box ll_backend__continuation_info__closure = ll_backend__continuation_info__closure_arg;

#line 739 "continuation_info.m"
    {
#line 739 "continuation_info.m"
      return ll_backend__continuation_info__succeeded = mercury__int__f_greater_than_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__closure, (MR_Integer) 4))));
    }
#line 739 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 739 "continuation_info.m"
  }
#line 739 "continuation_info.m"
}

#line 737 "continuation_info.m"
static MR_bool MR_CALL 
ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_117_109_101_95_108_97_121_111_117_116_95_102_111_114_95_118_97_114_115_95_95_91_50_93_95_48_9_p_0_1(
#line 737 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg)
#line 737 "continuation_info.m"
{
#line 737 "continuation_info.m"
  {
#line 737 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 737 "continuation_info.m"
    MR_Box ll_backend__continuation_info__closure = ll_backend__continuation_info__closure_arg;

#line 737 "continuation_info.m"
    {
#line 737 "continuation_info.m"
      return ll_backend__continuation_info__succeeded = mercury__int__f_greater_than_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__closure, (MR_Integer) 4))));
    }
#line 737 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 737 "continuation_info.m"
  }
#line 737 "continuation_info.m"
}

#line 701 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_117_109_101_95_108_97_121_111_117_116_95_102_111_114_95_118_97_114_115_95_95_91_50_93_95_48_9_p_0(
#line 701 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 701 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarTypes_3,
#line 701 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ProcInfo_4,
#line 701 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ModuleInfo_5,
#line 701 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_VarInfos_0_6,
#line 701 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_VarInfos_7,
#line 701 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_TVars_0_8,
#line 701 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_TVars_9)
#line 701 "continuation_info.m"
{
#line 706 "continuation_info.m"
  while (MR_TRUE)
#line 706 "continuation_info.m"
    {
#line 706 "continuation_info.m"
      /* tailcall optimized into a loop */
#line 706 "continuation_info.m"
      {
#line 706 "continuation_info.m"
        MR_bool ll_backend__continuation_info__succeeded;

#line 706 "continuation_info.m"
        if ((ll_backend__continuation_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 706 "continuation_info.m"
          {
#line 706 "continuation_info.m"
            *ll_backend__continuation_info__STATE_VARIABLE_TVars_9 = ll_backend__continuation_info__STATE_VARIABLE_TVars_0_8;
#line 706 "continuation_info.m"
            *ll_backend__continuation_info__STATE_VARIABLE_VarInfos_7 = ll_backend__continuation_info__STATE_VARIABLE_VarInfos_0_6;
#line 706 "continuation_info.m"
          }
#line 706 "continuation_info.m"
        else
#line 708 "continuation_info.m"
          {
#line 708 "continuation_info.m"
            MR_Word ll_backend__continuation_info__Var_20;
#line 708 "continuation_info.m"
            MR_Word ll_backend__continuation_info__LvalSet_21;
#line 708 "continuation_info.m"
            MR_Word ll_backend__continuation_info__VarLvals_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 708 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 708 "continuation_info.m"
            MR_Word ll_backend__continuation_info__STATE_VARIABLE_TVars_38_38;
#line 708 "continuation_info.m"
            MR_Word ll_backend__continuation_info__STATE_VARIABLE_VarInfos_39_39;
#line 710 "continuation_info.m"
            MR_Word ll_backend__continuation_info__Type_29;
#line 710 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_37_37;

#line 707 "continuation_info.m"
            ll_backend__continuation_info__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_36_36, (MR_Integer) 0)));
#line 707 "continuation_info.m"
            ll_backend__continuation_info__LvalSet_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_36_36, (MR_Integer) 1)));
#line 710 "continuation_info.m"
            {
#line 710 "continuation_info.m"
              hlds__vartypes__lookup_var_type_3_p_0(ll_backend__continuation_info__VarTypes_3, ll_backend__continuation_info__Var_20, &ll_backend__continuation_info__Type_29);
            }
#line 711 "continuation_info.m"
            {
#line 711 "continuation_info.m"
              ll_backend__continuation_info__V_37_37 = check_hlds__type_util__check_dummy_type_2_f_0(ll_backend__continuation_info__ModuleInfo_5, ll_backend__continuation_info__Type_29);
            }
#line 711 "continuation_info.m"
            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_37_37 == (MR_Integer) 0);
#line 714 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 713 "continuation_info.m"
              {
#line 713 "continuation_info.m"
                ll_backend__continuation_info__STATE_VARIABLE_TVars_38_38 = ll_backend__continuation_info__STATE_VARIABLE_TVars_0_8;
#line 713 "continuation_info.m"
                ll_backend__continuation_info__STATE_VARIABLE_VarInfos_39_39 = ll_backend__continuation_info__STATE_VARIABLE_VarInfos_0_6;
#line 713 "continuation_info.m"
              }
#line 714 "continuation_info.m"
            else
#line 716 "continuation_info.m"
              {
#line 716 "continuation_info.m"
                MR_Word ll_backend__continuation_info__VarInfo_30;
#line 716 "continuation_info.m"
                MR_Word ll_backend__continuation_info__TypeVars_31;
#line 716 "continuation_info.m"
                MR_Word ll_backend__continuation_info__LvalList_50;
#line 716 "continuation_info.m"
                MR_Word ll_backend__continuation_info__Lval_52;
#line 716 "continuation_info.m"
                MR_Word ll_backend__continuation_info__LiveValueType_55;
#line 716 "continuation_info.m"
                MR_Word ll_backend__continuation_info__V_75_75;
#line 716 "continuation_info.m"
                MR_Word ll_backend__continuation_info__VarSet_86;
#line 716 "continuation_info.m"
                MR_Word ll_backend__continuation_info__VarTypes_87;
#line 716 "continuation_info.m"
                MR_String ll_backend__continuation_info__Name_89;
#line 716 "continuation_info.m"
                MR_Word ll_backend__continuation_info__Type_90;
#line 732 "continuation_info.m"
                MR_Word ll_backend__continuation_info__LvalPrime_51;
#line 730 "continuation_info.m"
                MR_Word ll_backend__continuation_info__V_56_56;
#line 738 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__N_53;
#line 772 "continuation_info.m"
                MR_String ll_backend__continuation_info__GivenName_88;

#line 729 "continuation_info.m"
                {
#line 729 "continuation_info.m"
                  mercury__set__to_sorted_list_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__continuation_info__LvalSet_21, &ll_backend__continuation_info__LvalList_50);
                }
#line 730 "continuation_info.m"
                ll_backend__continuation_info__succeeded = ((MR_tag((MR_Word) ll_backend__continuation_info__LvalList_50)) == (MR_mktag((MR_Integer) 1)));
#line 730 "continuation_info.m"
                if (ll_backend__continuation_info__succeeded)
#line 730 "continuation_info.m"
                  {
#line 730 "continuation_info.m"
                    ll_backend__continuation_info__LvalPrime_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__LvalList_50, (MR_Integer) 0)));
#line 730 "continuation_info.m"
                    ll_backend__continuation_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__LvalList_50, (MR_Integer) 1)));
#line 730 "continuation_info.m"
                    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_56_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 730 "continuation_info.m"
                  }
#line 732 "continuation_info.m"
                if (ll_backend__continuation_info__succeeded)
#line 731 "continuation_info.m"
                  ll_backend__continuation_info__Lval_52 = ll_backend__continuation_info__LvalPrime_51;
#line 732 "continuation_info.m"
                else
#line 733 "continuation_info.m"
                  {
#line 733 "continuation_info.m"
                    {
#line 733 "continuation_info.m"
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.continuation_info", (MR_String) "predicate \140ll_backend.continuation_info.generate_resume_layout_for_var\'/7", (MR_String) "var has more than one lval in stack resume map");
#line 733 "continuation_info.m"
                      return;
                    }
#line 733 "continuation_info.m"
                  }
#line 736 "continuation_info.m"
                ll_backend__continuation_info__succeeded = ((((MR_tag((MR_Word) ll_backend__continuation_info__Lval_52)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__continuation_info__Lval_52, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 736 "continuation_info.m"
                if (ll_backend__continuation_info__succeeded)
#line 736 "continuation_info.m"
                  {
#line 736 "continuation_info.m"
                    ll_backend__continuation_info__N_53 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__continuation_info__Lval_52, (MR_Integer) 1)));
#line 737 "continuation_info.m"
                    {
#line 737 "continuation_info.m"
                      MR_Word ll_backend__continuation_info__V_60_60;

#line 737 "continuation_info.m"
                      {
#line 737 "continuation_info.m"
                        ll_backend__continuation_info__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 737 "continuation_info.m"
                        MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_60_60, 0) = ((MR_Box) (&ll_backend__continuation_info_scalar_common_5[3]));
#line 737 "continuation_info.m"
                        MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_60_60, 1) = ((MR_Box) (ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_117_109_101_95_108_97_121_111_117_116_95_102_111_114_95_118_97_114_115_95_95_91_50_93_95_48_9_p_0_1));
#line 737 "continuation_info.m"
                        MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 737 "continuation_info.m"
                        MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_60_60, 3) = ((MR_Box) (ll_backend__continuation_info__N_53));
#line 737 "continuation_info.m"
                        MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_60_60, 4) = ((MR_Box) ((MR_Integer) 0));
#line 737 "continuation_info.m"
                      }
#line 737 "continuation_info.m"
                      {
#line 737 "continuation_info.m"
                        mercury__require__expect_4_p_0(ll_backend__continuation_info__V_60_60, (MR_String) "ll_backend.continuation_info", (MR_String) "predicate \140ll_backend.continuation_info.generate_resume_layout_for_var\'/7", (MR_String) "bad stackvar");
                      }
#line 737 "continuation_info.m"
                    }
#line 736 "continuation_info.m"
                  }
#line 736 "continuation_info.m"
                else
#line 740 "continuation_info.m"
                  {
#line 740 "continuation_info.m"
                    MR_Integer ll_backend__continuation_info__N_78;

#line 738 "continuation_info.m"
                    ll_backend__continuation_info__succeeded = ((((MR_tag((MR_Word) ll_backend__continuation_info__Lval_52)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__continuation_info__Lval_52, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 738 "continuation_info.m"
                    if (ll_backend__continuation_info__succeeded)
#line 738 "continuation_info.m"
                      {
#line 738 "continuation_info.m"
                        ll_backend__continuation_info__N_78 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__continuation_info__Lval_52, (MR_Integer) 1)));
#line 739 "continuation_info.m"
                        {
#line 739 "continuation_info.m"
                          MR_Word ll_backend__continuation_info__V_65_65;

#line 739 "continuation_info.m"
                          {
#line 739 "continuation_info.m"
                            ll_backend__continuation_info__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 739 "continuation_info.m"
                            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_65_65, 0) = ((MR_Box) (&ll_backend__continuation_info_scalar_common_5[3]));
#line 739 "continuation_info.m"
                            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_65_65, 1) = ((MR_Box) (ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_117_109_101_95_108_97_121_111_117_116_95_102_111_114_95_118_97_114_115_95_95_91_50_93_95_48_9_p_0_2));
#line 739 "continuation_info.m"
                            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_65_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 739 "continuation_info.m"
                            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_65_65, 3) = ((MR_Box) (ll_backend__continuation_info__N_78));
#line 739 "continuation_info.m"
                            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_65_65, 4) = ((MR_Box) ((MR_Integer) 0));
#line 739 "continuation_info.m"
                          }
#line 739 "continuation_info.m"
                          {
#line 739 "continuation_info.m"
                            mercury__require__expect_4_p_0(ll_backend__continuation_info__V_65_65, (MR_String) "ll_backend.continuation_info", (MR_String) "predicate \140ll_backend.continuation_info.generate_resume_layout_for_var\'/7", (MR_String) "bad framevar");
                          }
#line 739 "continuation_info.m"
                        }
#line 738 "continuation_info.m"
                      }
#line 738 "continuation_info.m"
                    else
#line 742 "continuation_info.m"
                      {
#line 742 "continuation_info.m"
                        MR_Integer ll_backend__continuation_info__N_77;
#line 740 "continuation_info.m"
                        MR_Word ll_backend__continuation_info__V_54_54;

#line 740 "continuation_info.m"
                        ll_backend__continuation_info__succeeded = ((((MR_tag((MR_Word) ll_backend__continuation_info__Lval_52)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__continuation_info__Lval_52, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 740 "continuation_info.m"
                        if (ll_backend__continuation_info__succeeded)
#line 740 "continuation_info.m"
                          {
#line 740 "continuation_info.m"
                            ll_backend__continuation_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__continuation_info__Lval_52, (MR_Integer) 1)));
#line 740 "continuation_info.m"
                            ll_backend__continuation_info__N_77 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__continuation_info__Lval_52, (MR_Integer) 2)));
#line 741 "continuation_info.m"
                            {
#line 741 "continuation_info.m"
                              MR_Word ll_backend__continuation_info__V_70_70;

#line 741 "continuation_info.m"
                              {
#line 741 "continuation_info.m"
                                ll_backend__continuation_info__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 741 "continuation_info.m"
                                MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_70_70, 0) = ((MR_Box) (&ll_backend__continuation_info_scalar_common_5[3]));
#line 741 "continuation_info.m"
                                MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_70_70, 1) = ((MR_Box) (ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_117_109_101_95_108_97_121_111_117_116_95_102_111_114_95_118_97_114_115_95_95_91_50_93_95_48_9_p_0_3));
#line 741 "continuation_info.m"
                                MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_70_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 741 "continuation_info.m"
                                MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_70_70, 3) = ((MR_Box) (ll_backend__continuation_info__N_77));
#line 741 "continuation_info.m"
                                MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_70_70, 4) = ((MR_Box) ((MR_Integer) 0));
#line 741 "continuation_info.m"
                              }
#line 741 "continuation_info.m"
                              {
#line 741 "continuation_info.m"
                                mercury__require__expect_4_p_0(ll_backend__continuation_info__V_70_70, (MR_String) "ll_backend.continuation_info", (MR_String) "predicate \140ll_backend.continuation_info.generate_resume_layout_for_var\'/7", (MR_String) "bad stackvar");
                              }
#line 741 "continuation_info.m"
                            }
#line 740 "continuation_info.m"
                          }
#line 740 "continuation_info.m"
                        else
#line 743 "continuation_info.m"
                          {
#line 743 "continuation_info.m"
                          }
#line 742 "continuation_info.m"
                      }
#line 740 "continuation_info.m"
                  }
#line 768 "continuation_info.m"
                {
#line 768 "continuation_info.m"
                  hlds__hlds_pred__proc_info_get_varset_2_p_0(ll_backend__continuation_info__ProcInfo_4, &ll_backend__continuation_info__VarSet_86);
                }
#line 769 "continuation_info.m"
                {
#line 769 "continuation_info.m"
                  hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__continuation_info__ProcInfo_4, &ll_backend__continuation_info__VarTypes_87);
                }
#line 770 "continuation_info.m"
                {
#line 770 "continuation_info.m"
                  ll_backend__continuation_info__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__continuation_info__VarSet_86, ll_backend__continuation_info__Var_20, &ll_backend__continuation_info__GivenName_88);
                }
#line 772 "continuation_info.m"
                if (ll_backend__continuation_info__succeeded)
#line 771 "continuation_info.m"
                  ll_backend__continuation_info__Name_89 = ll_backend__continuation_info__GivenName_88;
#line 772 "continuation_info.m"
                else
#line 773 "continuation_info.m"
                  ll_backend__continuation_info__Name_89 = (MR_String) "";
#line 775 "continuation_info.m"
                {
#line 775 "continuation_info.m"
                  hlds__vartypes__lookup_var_type_3_p_0(ll_backend__continuation_info__VarTypes_87, ll_backend__continuation_info__Var_20, &ll_backend__continuation_info__Type_90);
                }
#line 798 "continuation_info.m"
                mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 799 "continuation_info.m"
                {
#line 799 "continuation_info.m"
                  ll_backend__continuation_info__LiveValueType_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 799 "continuation_info.m"
                  MR_hl_field(MR_mktag(1), ll_backend__continuation_info__LiveValueType_55, 0) = ((MR_Box) (ll_backend__continuation_info__Var_20));
#line 799 "continuation_info.m"
                  MR_hl_field(MR_mktag(1), ll_backend__continuation_info__LiveValueType_55, 1) = ((MR_Box) (ll_backend__continuation_info__Name_89));
#line 799 "continuation_info.m"
                  MR_hl_field(MR_mktag(1), ll_backend__continuation_info__LiveValueType_55, 2) = ((MR_Box) (ll_backend__continuation_info__Type_90));
#line 799 "continuation_info.m"
                  MR_hl_field(MR_mktag(1), ll_backend__continuation_info__LiveValueType_55, 3) = NULL;
#line 799 "continuation_info.m"
                }
#line 800 "continuation_info.m"
                {
#line 800 "continuation_info.m"
                  parse_tree__prog_type__type_vars_2_p_0(ll_backend__continuation_info__Type_90, &ll_backend__continuation_info__TypeVars_31);
                }
#line 747 "continuation_info.m"
                {
#line 747 "continuation_info.m"
                  ll_backend__continuation_info__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 747 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_75_75, 0) = ((MR_Box) (ll_backend__continuation_info__Lval_52));
#line 747 "continuation_info.m"
                }
#line 747 "continuation_info.m"
                {
#line 747 "continuation_info.m"
                  ll_backend__continuation_info__VarInfo_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 747 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__VarInfo_30, 0) = ((MR_Box) (ll_backend__continuation_info__V_75_75));
#line 747 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__VarInfo_30, 1) = ((MR_Box) (ll_backend__continuation_info__LiveValueType_55));
#line 747 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__VarInfo_30, 2) = ((MR_Box) ((MR_String) "generate_result_layout_for_var"));
#line 747 "continuation_info.m"
                }
#line 717 "continuation_info.m"
                {
#line 717 "continuation_info.m"
                  mercury__set__insert_list_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[2], ll_backend__continuation_info__TypeVars_31, ll_backend__continuation_info__STATE_VARIABLE_TVars_0_8, &ll_backend__continuation_info__STATE_VARIABLE_TVars_38_38);
                }
#line 718 "continuation_info.m"
                {
#line 718 "continuation_info.m"
                  ll_backend__continuation_info__STATE_VARIABLE_VarInfos_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 718 "continuation_info.m"
                  MR_hl_field(MR_mktag(1), ll_backend__continuation_info__STATE_VARIABLE_VarInfos_39_39, 0) = ((MR_Box) (ll_backend__continuation_info__VarInfo_30));
#line 718 "continuation_info.m"
                  MR_hl_field(MR_mktag(1), ll_backend__continuation_info__STATE_VARIABLE_VarInfos_39_39, 1) = ((MR_Box) (ll_backend__continuation_info__STATE_VARIABLE_VarInfos_0_6));
#line 718 "continuation_info.m"
                }
#line 716 "continuation_info.m"
              }
#line 720 "continuation_info.m"
            /* direct tailcall eliminated */
#line 720 "continuation_info.m"
            {
#line 720 "continuation_info.m"
              MR_Word ll_backend__continuation_info__HeadVar__1__tmp_copy_1 = ll_backend__continuation_info__VarLvals_22;
#line 720 "continuation_info.m"
              MR_Word ll_backend__continuation_info__STATE_VARIABLE_VarInfos_0__tmp_copy_6 = ll_backend__continuation_info__STATE_VARIABLE_VarInfos_39_39;
#line 720 "continuation_info.m"
              MR_Word ll_backend__continuation_info__STATE_VARIABLE_TVars_0__tmp_copy_8 = ll_backend__continuation_info__STATE_VARIABLE_TVars_38_38;

#line 720 "continuation_info.m"
              ll_backend__continuation_info__STATE_VARIABLE_TVars_0_8 = ll_backend__continuation_info__STATE_VARIABLE_TVars_0__tmp_copy_8;
#line 720 "continuation_info.m"
              ll_backend__continuation_info__STATE_VARIABLE_VarInfos_0_6 = ll_backend__continuation_info__STATE_VARIABLE_VarInfos_0__tmp_copy_6;
#line 720 "continuation_info.m"
              ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__HeadVar__1__tmp_copy_1;
#line 720 "continuation_info.m"
            }
#line 720 "continuation_info.m"
            continue;
#line 708 "continuation_info.m"
          }
#line 706 "continuation_info.m"
      }
#line 706 "continuation_info.m"
      break;
#line 706 "continuation_info.m"
    }
#line 701 "continuation_info.m"
}

#line 663 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_118_97_114_95_108_105_118_101_95_108_118_97_108_117_101_115_95_95_91_50_44_32_53_93_95_48_7_p_0(
#line 663 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 663 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarLocs_3,
#line 663 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ProcInfo_4,
#line 663 "continuation_info.m"
  MR_Word ll_backend__continuation_info__WantReturnVarLayout_6,
#line 663 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__7_7)
#line 663 "continuation_info.m"
{
#line 667 "continuation_info.m"
  {
#line 667 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;

#line 667 "continuation_info.m"
    if ((ll_backend__continuation_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 667 "continuation_info.m"
      *ll_backend__continuation_info__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 667 "continuation_info.m"
    else
#line 669 "continuation_info.m"
      {
#line 669 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Var_13;
#line 669 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Lval_14;
#line 669 "continuation_info.m"
        MR_Word ll_backend__continuation_info__VarLvals_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 669 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Live_21;
#line 669 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Lives_22;
#line 669 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));

#line 668 "continuation_info.m"
        ll_backend__continuation_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_27_27, (MR_Integer) 0)));
#line 668 "continuation_info.m"
        ll_backend__continuation_info__Lval_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_27_27, (MR_Integer) 1)));
#line 676 "continuation_info.m"
#line 676 "continuation_info.m"
        switch (ll_backend__continuation_info__WantReturnVarLayout_6) {
#line 676 "continuation_info.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 676 "continuation_info.m"
          case (MR_Integer) 0:
#line 677 "continuation_info.m"
            {
#line 677 "continuation_info.m"
              MR_Word ll_backend__continuation_info__Empty_26;
#line 677 "continuation_info.m"
              MR_Word ll_backend__continuation_info__V_28_28;

#line 678 "continuation_info.m"
              {
#line 678 "continuation_info.m"
                mercury__map__init_1_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[2], (MR_Word) &ll_backend__continuation_info_scalar_common_1[3], &ll_backend__continuation_info__Empty_26);
              }
#line 679 "continuation_info.m"
              {
#line 679 "continuation_info.m"
                ll_backend__continuation_info__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 679 "continuation_info.m"
                MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_28_28, 0) = ((MR_Box) (ll_backend__continuation_info__Lval_14));
#line 679 "continuation_info.m"
              }
#line 679 "continuation_info.m"
              {
#line 679 "continuation_info.m"
                ll_backend__continuation_info__Live_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 679 "continuation_info.m"
                MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Live_21, 0) = ((MR_Box) (ll_backend__continuation_info__V_28_28));
#line 679 "continuation_info.m"
                MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Live_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
#line 679 "continuation_info.m"
                MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Live_21, 2) = ((MR_Box) (ll_backend__continuation_info__Empty_26));
#line 679 "continuation_info.m"
              }
#line 677 "continuation_info.m"
            }
#line 676 "continuation_info.m"
            break;
#line 676 "continuation_info.m"
          case (MR_Integer) 1:
#line 671 "continuation_info.m"
            {
#line 671 "continuation_info.m"
              MR_Word ll_backend__continuation_info__LiveValueType_23;
#line 671 "continuation_info.m"
              MR_Word ll_backend__continuation_info__TypeVars_24;
#line 671 "continuation_info.m"
              MR_Word ll_backend__continuation_info__TypeParams_25;
#line 671 "continuation_info.m"
              MR_Word ll_backend__continuation_info__V_30_30;
#line 671 "continuation_info.m"
              MR_Word ll_backend__continuation_info__VarSet_39;
#line 671 "continuation_info.m"
              MR_Word ll_backend__continuation_info__VarTypes_40;
#line 671 "continuation_info.m"
              MR_String ll_backend__continuation_info__Name_42;
#line 671 "continuation_info.m"
              MR_Word ll_backend__continuation_info__Type_43;
#line 772 "continuation_info.m"
              MR_String ll_backend__continuation_info__GivenName_41;

#line 768 "continuation_info.m"
              {
#line 768 "continuation_info.m"
                hlds__hlds_pred__proc_info_get_varset_2_p_0(ll_backend__continuation_info__ProcInfo_4, &ll_backend__continuation_info__VarSet_39);
              }
#line 769 "continuation_info.m"
              {
#line 769 "continuation_info.m"
                hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__continuation_info__ProcInfo_4, &ll_backend__continuation_info__VarTypes_40);
              }
#line 770 "continuation_info.m"
              {
#line 770 "continuation_info.m"
                ll_backend__continuation_info__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__continuation_info__VarSet_39, ll_backend__continuation_info__Var_13, &ll_backend__continuation_info__GivenName_41);
              }
#line 772 "continuation_info.m"
              if (ll_backend__continuation_info__succeeded)
#line 771 "continuation_info.m"
                ll_backend__continuation_info__Name_42 = ll_backend__continuation_info__GivenName_41;
#line 772 "continuation_info.m"
              else
#line 773 "continuation_info.m"
                ll_backend__continuation_info__Name_42 = (MR_String) "";
#line 775 "continuation_info.m"
              {
#line 775 "continuation_info.m"
                hlds__vartypes__lookup_var_type_3_p_0(ll_backend__continuation_info__VarTypes_40, ll_backend__continuation_info__Var_13, &ll_backend__continuation_info__Type_43);
              }
#line 798 "continuation_info.m"
              mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 799 "continuation_info.m"
              {
#line 799 "continuation_info.m"
                ll_backend__continuation_info__LiveValueType_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 799 "continuation_info.m"
                MR_hl_field(MR_mktag(1), ll_backend__continuation_info__LiveValueType_23, 0) = ((MR_Box) (ll_backend__continuation_info__Var_13));
#line 799 "continuation_info.m"
                MR_hl_field(MR_mktag(1), ll_backend__continuation_info__LiveValueType_23, 1) = ((MR_Box) (ll_backend__continuation_info__Name_42));
#line 799 "continuation_info.m"
                MR_hl_field(MR_mktag(1), ll_backend__continuation_info__LiveValueType_23, 2) = ((MR_Box) (ll_backend__continuation_info__Type_43));
#line 799 "continuation_info.m"
                MR_hl_field(MR_mktag(1), ll_backend__continuation_info__LiveValueType_23, 3) = NULL;
#line 799 "continuation_info.m"
              }
#line 800 "continuation_info.m"
              {
#line 800 "continuation_info.m"
                parse_tree__prog_type__type_vars_2_p_0(ll_backend__continuation_info__Type_43, &ll_backend__continuation_info__TypeVars_24);
              }
#line 674 "continuation_info.m"
              {
#line 674 "continuation_info.m"
                ll_backend__continuation_info__find_typeinfos_for_tvars_4_p_0(ll_backend__continuation_info__TypeVars_24, ll_backend__continuation_info__VarLocs_3, ll_backend__continuation_info__ProcInfo_4, &ll_backend__continuation_info__TypeParams_25);
              }
#line 675 "continuation_info.m"
              {
#line 675 "continuation_info.m"
                ll_backend__continuation_info__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 675 "continuation_info.m"
                MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_30_30, 0) = ((MR_Box) (ll_backend__continuation_info__Lval_14));
#line 675 "continuation_info.m"
              }
#line 675 "continuation_info.m"
              {
#line 675 "continuation_info.m"
                ll_backend__continuation_info__Live_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 675 "continuation_info.m"
                MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Live_21, 0) = ((MR_Box) (ll_backend__continuation_info__V_30_30));
#line 675 "continuation_info.m"
                MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Live_21, 1) = ((MR_Box) (ll_backend__continuation_info__LiveValueType_23));
#line 675 "continuation_info.m"
                MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Live_21, 2) = ((MR_Box) (ll_backend__continuation_info__TypeParams_25));
#line 675 "continuation_info.m"
              }
#line 671 "continuation_info.m"
            }
#line 676 "continuation_info.m"
            break;
#line 676 "continuation_info.m"
        }
#line 681 "continuation_info.m"
        {
#line 681 "continuation_info.m"
          ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_118_97_114_95_108_105_118_101_95_108_118_97_108_117_101_115_95_95_91_50_44_32_53_93_95_48_7_p_0(ll_backend__continuation_info__VarLvals_15, ll_backend__continuation_info__VarLocs_3, ll_backend__continuation_info__ProcInfo_4, ll_backend__continuation_info__WantReturnVarLayout_6, &ll_backend__continuation_info__Lives_22);
        }
#line 669 "continuation_info.m"
        {
#line 669 "continuation_info.m"
          MR_Word base;
#line 669 "continuation_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 669 "continuation_info.m"
          *ll_backend__continuation_info__HeadVar__7_7 = base;
#line 669 "continuation_info.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__continuation_info__Live_21));
#line 669 "continuation_info.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__continuation_info__Lives_22));
#line 669 "continuation_info.m"
        }
#line 669 "continuation_info.m"
      }
#line 667 "continuation_info.m"
  }
#line 663 "continuation_info.m"
}

#line 388 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_117_109_101_95_108_97_121_111_117_116_95_95_91_51_93_95_48_6_p_0(
#line 388 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ResumeMap_7,
#line 388 "continuation_info.m"
  MR_Word ll_backend__continuation_info__Temps_8,
#line 388 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ProcInfo_10,
#line 388 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ModuleInfo_11,
#line 388 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__Layout_12)
#line 388 "continuation_info.m"
{
#line 687 "continuation_info.m"
  {
#line 687 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 687 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeInfo_27_27;
#line 687 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeCtorInfo_28_28;
#line 687 "continuation_info.m"
    MR_Word ll_backend__continuation_info__ResumeList_13;
#line 687 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TVars0_14;
#line 687 "continuation_info.m"
    MR_Word ll_backend__continuation_info__VarTypes_15;
#line 687 "continuation_info.m"
    MR_Word ll_backend__continuation_info__VarInfos_16;
#line 687 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TVars_17;
#line 687 "continuation_info.m"
    MR_Word ll_backend__continuation_info__VarInfoSet_18;
#line 687 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TVarList_19;
#line 687 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TVarInfoMap_20;
#line 687 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TempInfos_21;
#line 687 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TempInfoSet_22;
#line 687 "continuation_info.m"
    MR_Word ll_backend__continuation_info__AllInfoSet_23;

#line 688 "continuation_info.m"
    {
#line 688 "continuation_info.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[0], (MR_Word) &ll_backend__continuation_info_scalar_common_1[1], ll_backend__continuation_info__ResumeMap_7, &ll_backend__continuation_info__ResumeList_13);
    }
#line 4825 "ll_backend.continuation_info.c"
    ll_backend__continuation_info__TypeInfo_27_27 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[2];
#line 689 "continuation_info.m"
    {
#line 689 "continuation_info.m"
      mercury__set__init_1_p_0(ll_backend__continuation_info__TypeInfo_27_27, &ll_backend__continuation_info__TVars0_14);
    }
#line 690 "continuation_info.m"
    {
#line 690 "continuation_info.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__continuation_info__ProcInfo_10, &ll_backend__continuation_info__VarTypes_15);
    }
#line 691 "continuation_info.m"
    {
#line 691 "continuation_info.m"
      ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_117_109_101_95_108_97_121_111_117_116_95_102_111_114_95_118_97_114_115_95_95_91_50_93_95_48_9_p_0(ll_backend__continuation_info__ResumeList_13, ll_backend__continuation_info__VarTypes_15, ll_backend__continuation_info__ProcInfo_10, ll_backend__continuation_info__ModuleInfo_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__continuation_info__VarInfos_16, ll_backend__continuation_info__TVars0_14, &ll_backend__continuation_info__TVars_17);
    }
#line 4842 "ll_backend.continuation_info.c"
    ll_backend__continuation_info__TypeCtorInfo_28_28 = (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0;
#line 693 "continuation_info.m"
    {
#line 693 "continuation_info.m"
      mercury__set__list_to_set_2_p_0(ll_backend__continuation_info__TypeCtorInfo_28_28, ll_backend__continuation_info__VarInfos_16, &ll_backend__continuation_info__VarInfoSet_18);
    }
#line 694 "continuation_info.m"
    {
#line 694 "continuation_info.m"
      mercury__set__to_sorted_list_2_p_0(ll_backend__continuation_info__TypeInfo_27_27, ll_backend__continuation_info__TVars_17, &ll_backend__continuation_info__TVarList_19);
    }
#line 695 "continuation_info.m"
    {
#line 695 "continuation_info.m"
      ll_backend__continuation_info__find_typeinfos_for_tvars_4_p_0(ll_backend__continuation_info__TVarList_19, ll_backend__continuation_info__ResumeMap_7, ll_backend__continuation_info__ProcInfo_10, &ll_backend__continuation_info__TVarInfoMap_20);
    }
#line 696 "continuation_info.m"
    {
#line 696 "continuation_info.m"
      ll_backend__continuation_info__generate_temp_var_infos_2_p_0(ll_backend__continuation_info__Temps_8, &ll_backend__continuation_info__TempInfos_21);
    }
#line 697 "continuation_info.m"
    {
#line 697 "continuation_info.m"
      mercury__set__list_to_set_2_p_0(ll_backend__continuation_info__TypeCtorInfo_28_28, ll_backend__continuation_info__TempInfos_21, &ll_backend__continuation_info__TempInfoSet_22);
    }
#line 698 "continuation_info.m"
    {
#line 698 "continuation_info.m"
      mercury__set__union_3_p_0(ll_backend__continuation_info__TypeCtorInfo_28_28, ll_backend__continuation_info__VarInfoSet_18, ll_backend__continuation_info__TempInfoSet_22, &ll_backend__continuation_info__AllInfoSet_23);
    }
#line 699 "continuation_info.m"
    {
#line 699 "continuation_info.m"
      MR_Word base;
#line 699 "continuation_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 699 "continuation_info.m"
      *ll_backend__continuation_info__Layout_12 = base;
#line 699 "continuation_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__continuation_info__AllInfoSet_23));
#line 699 "continuation_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__continuation_info__TVarInfoMap_20));
#line 699 "continuation_info.m"
    }
#line 687 "continuation_info.m"
  }
#line 388 "continuation_info.m"
}

#line 380 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_116_117_114_110_95_108_105_118_101_95_108_118_97_108_117_101_115_95_95_91_50_44_32_55_93_95_48_10_p_0(
#line 380 "continuation_info.m"
  MR_Word ll_backend__continuation_info__OutputArgLocs_11,
#line 380 "continuation_info.m"
  MR_Word ll_backend__continuation_info__Vars_13,
#line 380 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarLocs_14,
#line 380 "continuation_info.m"
  MR_Word ll_backend__continuation_info__Temps_15,
#line 380 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ProcInfo_16,
#line 380 "continuation_info.m"
  MR_Word ll_backend__continuation_info__Globals_18,
#line 380 "continuation_info.m"
  MR_Word ll_backend__continuation_info__OkToDeleteAny_19,
#line 380 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__LiveLvalues_20)
#line 380 "continuation_info.m"
{
#line 616 "continuation_info.m"
  {
#line 616 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 616 "continuation_info.m"
    MR_Word ll_backend__continuation_info__WantReturnVarLayout_21;
#line 616 "continuation_info.m"
    MR_Word ll_backend__continuation_info__StackSlots_22;
#line 616 "continuation_info.m"
    MR_Word ll_backend__continuation_info__VarLvals_23;
#line 616 "continuation_info.m"
    MR_Word ll_backend__continuation_info__VarLiveLvalues_24;
#line 616 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TempLiveLvalues_25;

#line 617 "continuation_info.m"
    {
#line 617 "continuation_info.m"
      libs__globals__want_return_var_layouts_2_p_0(ll_backend__continuation_info__Globals_18, &ll_backend__continuation_info__WantReturnVarLayout_21);
    }
#line 618 "continuation_info.m"
    {
#line 618 "continuation_info.m"
      hlds__hlds_pred__proc_info_get_stack_slots_2_p_0(ll_backend__continuation_info__ProcInfo_16, &ll_backend__continuation_info__StackSlots_22);
    }
#line 619 "continuation_info.m"
    {
#line 619 "continuation_info.m"
      ll_backend__continuation_info__find_return_var_lvals_5_p_0(ll_backend__continuation_info__Vars_13, ll_backend__continuation_info__StackSlots_22, ll_backend__continuation_info__OkToDeleteAny_19, ll_backend__continuation_info__OutputArgLocs_11, &ll_backend__continuation_info__VarLvals_23);
    }
#line 621 "continuation_info.m"
    {
#line 621 "continuation_info.m"
      ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_118_97_114_95_108_105_118_101_95_108_118_97_108_117_101_115_95_95_91_50_44_32_53_93_95_48_7_p_0(ll_backend__continuation_info__VarLvals_23, ll_backend__continuation_info__VarLocs_14, ll_backend__continuation_info__ProcInfo_16, ll_backend__continuation_info__WantReturnVarLayout_21, &ll_backend__continuation_info__VarLiveLvalues_24);
    }
#line 623 "continuation_info.m"
    {
#line 623 "continuation_info.m"
      ll_backend__continuation_info__generate_temp_live_lvalues_2_p_0(ll_backend__continuation_info__Temps_15, &ll_backend__continuation_info__TempLiveLvalues_25);
    }
#line 624 "continuation_info.m"
    {
#line 624 "continuation_info.m"
      mercury__list__append_3_p_1((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_liveinfo_0, ll_backend__continuation_info__VarLiveLvalues_24, ll_backend__continuation_info__TempLiveLvalues_25, ll_backend__continuation_info__LiveLvalues_20);
#line 624 "continuation_info.m"
      return;
    }
#line 616 "continuation_info.m"
  }
#line 380 "continuation_info.m"
}

#line 944 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars_table__944__1_4_p_0(
#line 944 "continuation_info.m"
  MR_Word ll_backend__continuation_info__NumberedVars_6,
#line 944 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarSet_9,
#line 944 "continuation_info.m"
  MR_Word ll_backend__continuation_info__LambdaHeadVar__1_22,
#line 944 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__LambdaHeadVar__2_23)
#line 944 "continuation_info.m"
{
#line 944 "continuation_info.m"
  {
#line 944 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 944 "continuation_info.m"
    MR_Word ll_backend__continuation_info__LocnPrime_18;

#line 937 "continuation_info.m"
    if (((MR_tag((MR_Word) ll_backend__continuation_info__LambdaHeadVar__1_22)) == (MR_mktag((MR_Integer) 0))))
#line 938 "continuation_info.m"
      {
#line 938 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfoVar_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__LambdaHeadVar__1_22, (MR_Integer) 0)));
#line 938 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__Slot_29;
#line 939 "continuation_info.m"
        MR_Box ll_backend__continuation_info__conv0_Slot_29;

#line 939 "continuation_info.m"
        {
#line 939 "continuation_info.m"
          ll_backend__continuation_info__succeeded = mercury__assoc_list__search_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__continuation_info__NumberedVars_6, ((MR_Box) (ll_backend__continuation_info__TypeInfoVar_28)), &ll_backend__continuation_info__conv0_Slot_29);
        }
#line 939 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 939 "continuation_info.m"
          {
#line 939 "continuation_info.m"
            ll_backend__continuation_info__Slot_29 = ((MR_Integer) ll_backend__continuation_info__conv0_Slot_29);
#line 939 "continuation_info.m"
            ll_backend__continuation_info__succeeded = MR_TRUE;
#line 939 "continuation_info.m"
          }
#line 938 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 938 "continuation_info.m"
          {
#line 940 "continuation_info.m"
            {
#line 940 "continuation_info.m"
              ll_backend__continuation_info__LocnPrime_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 940 "continuation_info.m"
              MR_hl_field(MR_mktag(0), ll_backend__continuation_info__LocnPrime_18, 0) = ((MR_Box) (ll_backend__continuation_info__Slot_29));
#line 940 "continuation_info.m"
            }
#line 940 "continuation_info.m"
            ll_backend__continuation_info__succeeded = MR_TRUE;
#line 938 "continuation_info.m"
          }
#line 938 "continuation_info.m"
      }
#line 937 "continuation_info.m"
    else
#line 934 "continuation_info.m"
      {
#line 934 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfoVar_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__LambdaHeadVar__1_22, (MR_Integer) 0)));
#line 934 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__FieldNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__LambdaHeadVar__1_22, (MR_Integer) 1)));
#line 934 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__Slot_17;
#line 935 "continuation_info.m"
        MR_Box ll_backend__continuation_info__conv1_Slot_17;

#line 935 "continuation_info.m"
        {
#line 935 "continuation_info.m"
          ll_backend__continuation_info__succeeded = mercury__assoc_list__search_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__continuation_info__NumberedVars_6, ((MR_Box) (ll_backend__continuation_info__TypeInfoVar_15)), &ll_backend__continuation_info__conv1_Slot_17);
        }
#line 935 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 935 "continuation_info.m"
          {
#line 935 "continuation_info.m"
            ll_backend__continuation_info__Slot_17 = ((MR_Integer) ll_backend__continuation_info__conv1_Slot_17);
#line 935 "continuation_info.m"
            ll_backend__continuation_info__succeeded = MR_TRUE;
#line 935 "continuation_info.m"
          }
#line 934 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 934 "continuation_info.m"
          {
#line 936 "continuation_info.m"
            {
#line 936 "continuation_info.m"
              ll_backend__continuation_info__LocnPrime_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 936 "continuation_info.m"
              MR_hl_field(MR_mktag(1), ll_backend__continuation_info__LocnPrime_18, 0) = ((MR_Box) (ll_backend__continuation_info__Slot_17));
#line 936 "continuation_info.m"
              MR_hl_field(MR_mktag(1), ll_backend__continuation_info__LocnPrime_18, 1) = ((MR_Box) (ll_backend__continuation_info__FieldNum_16));
#line 936 "continuation_info.m"
            }
#line 936 "continuation_info.m"
            ll_backend__continuation_info__succeeded = MR_TRUE;
#line 934 "continuation_info.m"
          }
#line 934 "continuation_info.m"
      }
#line 944 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 943 "continuation_info.m"
      *ll_backend__continuation_info__LambdaHeadVar__2_23 = ll_backend__continuation_info__LocnPrime_18;
#line 944 "continuation_info.m"
    else
#line 945 "continuation_info.m"
      {
#line 945 "continuation_info.m"
        MR_String ll_backend__continuation_info__VarName_19;
#line 945 "continuation_info.m"
        MR_String ll_backend__continuation_info__V_26_26;
#line 945 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfoVar_30;

#line 945 "continuation_info.m"
        {
#line 945 "continuation_info.m"
          hlds__hlds_rtti__type_info_locn_var_2_p_0(ll_backend__continuation_info__LambdaHeadVar__1_22, &ll_backend__continuation_info__TypeInfoVar_30);
        }
#line 946 "continuation_info.m"
        {
#line 946 "continuation_info.m"
          mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__continuation_info__VarSet_9, ll_backend__continuation_info__TypeInfoVar_30, &ll_backend__continuation_info__VarName_19);
        }
#line 948 "continuation_info.m"
        {
#line 948 "continuation_info.m"
          ll_backend__continuation_info__V_26_26 = mercury__string__f_43_43_2_f_0((MR_String) "can\'t find slot for type_info var ", ll_backend__continuation_info__VarName_19);
        }
#line 947 "continuation_info.m"
        {
#line 947 "continuation_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.continuation_info", (MR_String) "predicate \140ll_backend.continuation_info.find_typeinfos_for_tvars_table\'/4", ll_backend__continuation_info__V_26_26);
#line 947 "continuation_info.m"
          return;
        }
#line 945 "continuation_info.m"
      }
#line 944 "continuation_info.m"
  }
#line 944 "continuation_info.m"
}

#line 565 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__564__1_3_p_0_1(
#line 565 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 565 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 565 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 565 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_3)
#line 565 "continuation_info.m"
{
#line 565 "continuation_info.m"
  {
#line 565 "continuation_info.m"
    MR_Box ll_backend__continuation_info__closure = ll_backend__continuation_info__closure_arg;
#line 565 "continuation_info.m"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__3_47;

#line 565 "continuation_info.m"
    {
#line 565 "continuation_info.m"
      ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__565__1_3_p_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), &ll_backend__continuation_info__conv0_HeadVar__3_47);
    }
#line 565 "continuation_info.m"
    *ll_backend__continuation_info__wrapper_arg_3 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__3_47));
#line 565 "continuation_info.m"
  }
#line 565 "continuation_info.m"
}

#line 564 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__564__1_3_p_0(
#line 564 "continuation_info.m"
  MR_Word ll_backend__continuation_info__LambdaHeadVar__1_29,
#line 564 "continuation_info.m"
  MR_Word ll_backend__continuation_info__LambdaHeadVar__2_30,
#line 564 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__LambdaHeadVar__3_31)
#line 564 "continuation_info.m"
{
#line 564 "continuation_info.m"
  {
#line 564 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;

#line 565 "continuation_info.m"
    {
#line 565 "continuation_info.m"
      mercury__map__union_4_p_1((MR_Word) &ll_backend__continuation_info_scalar_common_1[3], (MR_Word) &ll_backend__continuation_info_scalar_common_1[2], (MR_Word) &ll_backend__continuation_info_scalar_common_2[10], ll_backend__continuation_info__LambdaHeadVar__1_29, ll_backend__continuation_info__LambdaHeadVar__2_30, ll_backend__continuation_info__LambdaHeadVar__3_31);
#line 565 "continuation_info.m"
      return;
    }
#line 564 "continuation_info.m"
  }
#line 564 "continuation_info.m"
}

#line 565 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__565__1_3_p_0(
#line 565 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_45,
#line 565 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_46,
#line 565 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__3_47)
#line 565 "continuation_info.m"
{
#line 565 "continuation_info.m"
  {
#line 565 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;

#line 565 "continuation_info.m"
    {
#line 565 "continuation_info.m"
      mercury__set__intersect_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0, ll_backend__continuation_info__HeadVar__1_45, ll_backend__continuation_info__HeadVar__2_46, ll_backend__continuation_info__HeadVar__3_47);
#line 565 "continuation_info.m"
      return;
    }
#line 565 "continuation_info.m"
  }
#line 565 "continuation_info.m"
}

#line 560 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__560__1_2_p_0(
#line 560 "continuation_info.m"
  MR_Word ll_backend__continuation_info__LambdaHeadVar__1_26,
#line 560 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__LambdaHeadVar__2_27)
#line 560 "continuation_info.m"
{
#line 560 "continuation_info.m"
  {
#line 560 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 560 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__LambdaHeadVar__1_26, (MR_Integer) 0)));
#line 560 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__LambdaHeadVar__1_26, (MR_Integer) 1)));

#line 560 "continuation_info.m"
    *ll_backend__continuation_info__LambdaHeadVar__2_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__LambdaHeadVar__1_26, (MR_Integer) 2)));
#line 560 "continuation_info.m"
  }
#line 560 "continuation_info.m"
}

#line 554 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__554__1_2_p_0(
#line 554 "continuation_info.m"
  MR_Word ll_backend__continuation_info__LambdaHeadVar__1_23,
#line 554 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__LambdaHeadVar__2_24)
#line 554 "continuation_info.m"
{
#line 554 "continuation_info.m"
  {
#line 554 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 554 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Lval_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__LambdaHeadVar__1_23, (MR_Integer) 0)));
#line 554 "continuation_info.m"
    MR_Word ll_backend__continuation_info__LiveValueType_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__LambdaHeadVar__1_23, (MR_Integer) 1)));
#line 555 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__LambdaHeadVar__1_23, (MR_Integer) 2)));

#line 556 "continuation_info.m"
    {
#line 556 "continuation_info.m"
      MR_Word base;
#line 556 "continuation_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 556 "continuation_info.m"
      *ll_backend__continuation_info__LambdaHeadVar__2_24 = base;
#line 556 "continuation_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__continuation_info__Lval_10));
#line 556 "continuation_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__continuation_info__LiveValueType_11));
#line 556 "continuation_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_String) "convert_return_data"));
#line 556 "continuation_info.m"
    }
#line 554 "continuation_info.m"
  }
#line 554 "continuation_info.m"
}

#line 535 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__collect_continuation__535__1_3_p_0(
#line 535 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_54,
#line 535 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_55,
#line 535 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__3_56)
#line 535 "continuation_info.m"
{
#line 535 "continuation_info.m"
  {
#line 535 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;

#line 535 "continuation_info.m"
    {
#line 535 "continuation_info.m"
      mercury__set__intersect_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0, ll_backend__continuation_info__HeadVar__1_54, ll_backend__continuation_info__HeadVar__2_55, ll_backend__continuation_info__HeadVar__3_56);
#line 535 "continuation_info.m"
      return;
    }
#line 535 "continuation_info.m"
  }
#line 535 "continuation_info.m"
}

#line 870 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars__867__1_4_p_0_1(
#line 870 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 870 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 870 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 870 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_3)
#line 870 "continuation_info.m"
{
#line 870 "continuation_info.m"
  {
#line 870 "continuation_info.m"
    MR_Box ll_backend__continuation_info__closure = ll_backend__continuation_info__closure_arg;
#line 870 "continuation_info.m"
    MR_Word ll_backend__continuation_info__conv1_LambdaHeadVar__3_32;

#line 870 "continuation_info.m"
    {
#line 870 "continuation_info.m"
      ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars__870__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), &ll_backend__continuation_info__conv1_LambdaHeadVar__3_32);
    }
#line 870 "continuation_info.m"
    *ll_backend__continuation_info__wrapper_arg_3 = ((MR_Box) (ll_backend__continuation_info__conv1_LambdaHeadVar__3_32));
#line 870 "continuation_info.m"
  }
#line 870 "continuation_info.m"
}

#line 867 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars__867__1_4_p_0(
#line 867 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarLocs_6,
#line 867 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarSet_9,
#line 867 "continuation_info.m"
  MR_Word ll_backend__continuation_info__LambdaHeadVar__1_28,
#line 867 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__LambdaHeadVar__2_29)
#line 867 "continuation_info.m"
{
#line 867 "continuation_info.m"
  {
#line 867 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 867 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeInfoVar_15;
#line 881 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeInfoLvalSet_16;
#line 869 "continuation_info.m"
    MR_Box ll_backend__continuation_info__conv0_TypeInfoLvalSet_16;

#line 868 "continuation_info.m"
    {
#line 868 "continuation_info.m"
      hlds__hlds_rtti__type_info_locn_var_2_p_0(ll_backend__continuation_info__LambdaHeadVar__1_28, &ll_backend__continuation_info__TypeInfoVar_15);
    }
#line 869 "continuation_info.m"
    {
#line 869 "continuation_info.m"
      ll_backend__continuation_info__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[0], (MR_Word) &ll_backend__continuation_info_scalar_common_1[1], ll_backend__continuation_info__VarLocs_6, ((MR_Box) (ll_backend__continuation_info__TypeInfoVar_15)), &ll_backend__continuation_info__conv0_TypeInfoLvalSet_16);
    }
#line 869 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 869 "continuation_info.m"
      {
#line 869 "continuation_info.m"
        ll_backend__continuation_info__TypeInfoLvalSet_16 = ((MR_Word) ll_backend__continuation_info__conv0_TypeInfoLvalSet_16);
#line 869 "continuation_info.m"
        ll_backend__continuation_info__succeeded = MR_TRUE;
#line 869 "continuation_info.m"
      }
#line 881 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 879 "continuation_info.m"
      {
#line 879 "continuation_info.m"
        MR_Word ll_backend__continuation_info__AddLocn_17;
#line 879 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_33_33;
#line 880 "continuation_info.m"
        MR_Box ll_backend__continuation_info__conv2_LambdaHeadVar__2_29;

#line 870 "continuation_info.m"
        {
#line 870 "continuation_info.m"
          ll_backend__continuation_info__AddLocn_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 870 "continuation_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__continuation_info__AddLocn_17, 0) = ((MR_Box) (&ll_backend__continuation_info_scalar_common_4[3]));
#line 870 "continuation_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__continuation_info__AddLocn_17, 1) = ((MR_Box) (ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars__867__1_4_p_0_1));
#line 870 "continuation_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__continuation_info__AddLocn_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 870 "continuation_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__continuation_info__AddLocn_17, 3) = ((MR_Box) (ll_backend__continuation_info__LambdaHeadVar__1_28));
#line 870 "continuation_info.m"
        }
#line 880 "continuation_info.m"
        {
#line 880 "continuation_info.m"
          ll_backend__continuation_info__V_33_33 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0);
        }
#line 880 "continuation_info.m"
        {
#line 880 "continuation_info.m"
          mercury__set__fold_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__continuation_info_scalar_common_1[3], ll_backend__continuation_info__AddLocn_17, ll_backend__continuation_info__TypeInfoLvalSet_16, ((MR_Box) (ll_backend__continuation_info__V_33_33)), &ll_backend__continuation_info__conv2_LambdaHeadVar__2_29);
        }
#line 880 "continuation_info.m"
        *ll_backend__continuation_info__LambdaHeadVar__2_29 = ((MR_Word) ll_backend__continuation_info__conv2_LambdaHeadVar__2_29);
#line 879 "continuation_info.m"
      }
#line 881 "continuation_info.m"
    else
#line 882 "continuation_info.m"
      {
#line 882 "continuation_info.m"
        MR_String ll_backend__continuation_info__VarName_25;
#line 882 "continuation_info.m"
        MR_String ll_backend__continuation_info__V_36_36;

#line 882 "continuation_info.m"
        {
#line 882 "continuation_info.m"
          mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__continuation_info__VarSet_9, ll_backend__continuation_info__TypeInfoVar_15, &ll_backend__continuation_info__VarName_25);
        }
#line 884 "continuation_info.m"
        {
#line 884 "continuation_info.m"
          ll_backend__continuation_info__V_36_36 = mercury__string__f_43_43_2_f_0((MR_String) "can\'t find rval for type_info var ", ll_backend__continuation_info__VarName_25);
        }
#line 883 "continuation_info.m"
        {
#line 883 "continuation_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.continuation_info", (MR_String) "predicate \140ll_backend.continuation_info.find_typeinfos_for_tvars\'/4", ll_backend__continuation_info__V_36_36);
#line 883 "continuation_info.m"
          return;
        }
#line 882 "continuation_info.m"
      }
#line 867 "continuation_info.m"
  }
#line 867 "continuation_info.m"
}

#line 870 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars__870__1_4_p_0(
#line 870 "continuation_info.m"
  MR_Word ll_backend__continuation_info__LambdaHeadVar__1_28,
#line 870 "continuation_info.m"
  MR_Word ll_backend__continuation_info__LambdaHeadVar__1_30,
#line 870 "continuation_info.m"
  MR_Word ll_backend__continuation_info__LambdaHeadVar__2_31,
#line 870 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__LambdaHeadVar__3_32)
#line 870 "continuation_info.m"
{
#line 870 "continuation_info.m"
  {
#line 870 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 870 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Locn_23;

#line 874 "continuation_info.m"
    if (((MR_tag((MR_Word) ll_backend__continuation_info__LambdaHeadVar__1_28)) == (MR_mktag((MR_Integer) 0))))
#line 876 "continuation_info.m"
      {
#line 876 "continuation_info.m"
        ll_backend__continuation_info__Locn_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 876 "continuation_info.m"
        MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Locn_23, 0) = ((MR_Box) (ll_backend__continuation_info__LambdaHeadVar__1_30));
#line 876 "continuation_info.m"
      }
#line 874 "continuation_info.m"
    else
#line 872 "continuation_info.m"
      {
#line 872 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__FieldNum_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__LambdaHeadVar__1_28, (MR_Integer) 1)));
#line 872 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__LambdaHeadVar__1_28, (MR_Integer) 0)));

#line 873 "continuation_info.m"
        {
#line 873 "continuation_info.m"
          ll_backend__continuation_info__Locn_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 873 "continuation_info.m"
          MR_hl_field(MR_mktag(1), ll_backend__continuation_info__Locn_23, 0) = ((MR_Box) (ll_backend__continuation_info__LambdaHeadVar__1_30));
#line 873 "continuation_info.m"
          MR_hl_field(MR_mktag(1), ll_backend__continuation_info__Locn_23, 1) = ((MR_Box) (ll_backend__continuation_info__FieldNum_22));
#line 873 "continuation_info.m"
        }
#line 872 "continuation_info.m"
      }
#line 878 "continuation_info.m"
    {
#line 878 "continuation_info.m"
      mercury__set__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0, ((MR_Box) (ll_backend__continuation_info__Locn_23)), ll_backend__continuation_info__LambdaHeadVar__2_31, ll_backend__continuation_info__LambdaHeadVar__3_32);
#line 878 "continuation_info.m"
      return;
    }
#line 870 "continuation_info.m"
  }
#line 870 "continuation_info.m"
}

#line 307 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info____Compare____user_event_info_0_0(
#line 307 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 307 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 307 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3)
#line 307 "continuation_info.m"
{
#line 307 "continuation_info.m"
  {
#line 307 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 307 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_9 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;
#line 307 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_10 = (MR_Integer) ll_backend__continuation_info__HeadVar__3_3;

#line 307 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_9 == ll_backend__continuation_info__CastY_10);
#line 307 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 5539 "ll_backend.continuation_info.c"
      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 307 "continuation_info.m"
    else
#line 307 "continuation_info.m"
      {
#line 307 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 307 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 307 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));
#line 307 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 1)));
#line 307 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8;

#line 307 "continuation_info.m"
        {
#line 307 "continuation_info.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__continuation_info__V_8_8, ll_backend__continuation_info__V_4_4, ll_backend__continuation_info__V_6_6);
        }
#line 5561 "ll_backend.continuation_info.c"
        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_8_8 == (MR_Integer) 0);
#line 307 "continuation_info.m"
        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 307 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 307 "continuation_info.m"
          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_8_8;
#line 307 "continuation_info.m"
        else
#line 307 "continuation_info.m"
          {
#line 307 "continuation_info.m"
            {
#line 307 "continuation_info.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[22], ll_backend__continuation_info__HeadVar__1_1, ((MR_Box) (ll_backend__continuation_info__V_5_5)), ((MR_Box) (ll_backend__continuation_info__V_7_7)));
#line 307 "continuation_info.m"
              return;
            }
#line 307 "continuation_info.m"
          }
#line 307 "continuation_info.m"
      }
#line 307 "continuation_info.m"
  }
#line 307 "continuation_info.m"
}

#line 307 "continuation_info.m"
MR_bool MR_CALL 
ll_backend__continuation_info____Unify____user_event_info_0_0(
#line 307 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 307 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2)
#line 307 "continuation_info.m"
{
#line 307 "continuation_info.m"
  {
#line 307 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 307 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_7 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 307 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_8 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 307 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_7 == ll_backend__continuation_info__CastY_8);
#line 307 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 307 "continuation_info.m"
      ll_backend__continuation_info__succeeded = MR_TRUE;
#line 307 "continuation_info.m"
    else
#line 307 "continuation_info.m"
      {
#line 307 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_9_9;
#line 307 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 307 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 307 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 307 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));

#line 5628 "ll_backend.continuation_info.c"
        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_3_3 == ll_backend__continuation_info__V_5_5);
#line 307 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 307 "continuation_info.m"
          {
#line 5634 "ll_backend.continuation_info.c"
            ll_backend__continuation_info__TypeInfo_9_9 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[22];
#line 5636 "ll_backend.continuation_info.c"
            {
#line 5638 "ll_backend.continuation_info.c"
              return ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_9_9, ((MR_Box) (ll_backend__continuation_info__V_4_4)), ((MR_Box) (ll_backend__continuation_info__V_6_6)));
            }
#line 307 "continuation_info.m"
          }
#line 307 "continuation_info.m"
      }
#line 307 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 307 "continuation_info.m"
  }
#line 307 "continuation_info.m"
}

#line 301 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info____Compare____user_attribute_0_0(
#line 301 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 301 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 301 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3)
#line 301 "continuation_info.m"
{
#line 301 "continuation_info.m"
  {
#line 301 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 301 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_9 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;
#line 301 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_10 = (MR_Integer) ll_backend__continuation_info__HeadVar__3_3;

#line 301 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_9 == ll_backend__continuation_info__CastY_10);
#line 301 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 5676 "ll_backend.continuation_info.c"
      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 301 "continuation_info.m"
    else
#line 301 "continuation_info.m"
      {
#line 301 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 301 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 301 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));
#line 301 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 1)));
#line 301 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8;

#line 301 "continuation_info.m"
        {
#line 301 "continuation_info.m"
          ll_backend__llds____Compare____rval_0_0(&ll_backend__continuation_info__V_8_8, ll_backend__continuation_info__V_4_4, ll_backend__continuation_info__V_6_6);
        }
#line 5698 "ll_backend.continuation_info.c"
        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_8_8 == (MR_Integer) 0);
#line 301 "continuation_info.m"
        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 301 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 301 "continuation_info.m"
          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_8_8;
#line 301 "continuation_info.m"
        else
#line 301 "continuation_info.m"
          {
#line 301 "continuation_info.m"
            {
#line 301 "continuation_info.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[0], ll_backend__continuation_info__HeadVar__1_1, ((MR_Box) (ll_backend__continuation_info__V_5_5)), ((MR_Box) (ll_backend__continuation_info__V_7_7)));
#line 301 "continuation_info.m"
              return;
            }
#line 301 "continuation_info.m"
          }
#line 301 "continuation_info.m"
      }
#line 301 "continuation_info.m"
  }
#line 301 "continuation_info.m"
}

#line 301 "continuation_info.m"
MR_bool MR_CALL 
ll_backend__continuation_info____Unify____user_attribute_0_0(
#line 301 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 301 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2)
#line 301 "continuation_info.m"
{
#line 301 "continuation_info.m"
  {
#line 301 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 301 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_7 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 301 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_8 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 301 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_7 == ll_backend__continuation_info__CastY_8);
#line 301 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 301 "continuation_info.m"
      ll_backend__continuation_info__succeeded = MR_TRUE;
#line 301 "continuation_info.m"
    else
#line 301 "continuation_info.m"
      {
#line 301 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_10_10;
#line 301 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 301 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 301 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 301 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));

#line 5765 "ll_backend.continuation_info.c"
        {
#line 5767 "ll_backend.continuation_info.c"
          ll_backend__continuation_info__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__continuation_info__V_3_3, ll_backend__continuation_info__V_5_5);
        }
#line 301 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 301 "continuation_info.m"
          {
#line 5774 "ll_backend.continuation_info.c"
            ll_backend__continuation_info__TypeInfo_10_10 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[0];
#line 5776 "ll_backend.continuation_info.c"
            {
#line 5778 "ll_backend.continuation_info.c"
              return ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_10_10, ((MR_Box) (ll_backend__continuation_info__V_4_4)), ((MR_Box) (ll_backend__continuation_info__V_6_6)));
            }
#line 301 "continuation_info.m"
          }
#line 301 "continuation_info.m"
      }
#line 301 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 301 "continuation_info.m"
  }
#line 301 "continuation_info.m"
}

#line 266 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info____Compare____trace_port_layout_info_0_0(
#line 266 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 266 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 266 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3)
#line 266 "continuation_info.m"
{
#line 266 "continuation_info.m"
  {
#line 266 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 266 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_21 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;
#line 266 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_22 = (MR_Integer) ll_backend__continuation_info__HeadVar__3_3;

#line 266 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_21 == ll_backend__continuation_info__CastY_22);
#line 266 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 5816 "ll_backend.continuation_info.c"
      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 266 "continuation_info.m"
    else
#line 266 "continuation_info.m"
      {
#line 266 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 266 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 266 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 2)));
#line 266 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 3)));
#line 266 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 4)));
#line 266 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 5)));
#line 266 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));
#line 266 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 1)));
#line 266 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 2)));
#line 266 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 3)));
#line 266 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 4)));
#line 266 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 5)));
#line 266 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_16_16;

#line 266 "continuation_info.m"
        {
#line 266 "continuation_info.m"
          mercury__term____Compare____context_0_0(&ll_backend__continuation_info__V_16_16, ll_backend__continuation_info__V_4_4, ll_backend__continuation_info__V_10_10);
        }
#line 5854 "ll_backend.continuation_info.c"
        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_16_16 == (MR_Integer) 0);
#line 266 "continuation_info.m"
        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 266 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 266 "continuation_info.m"
          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_16_16;
#line 266 "continuation_info.m"
        else
#line 266 "continuation_info.m"
          {
#line 266 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_17_17;
#line 266 "continuation_info.m"
            MR_Integer ll_backend__continuation_info__V_29_29 = (MR_Integer) ll_backend__continuation_info__V_5_5;
#line 266 "continuation_info.m"
            MR_Integer ll_backend__continuation_info__V_30_30 = (MR_Integer) ll_backend__continuation_info__V_11_11;

#line 266 "continuation_info.m"
            {
#line 266 "continuation_info.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__continuation_info__V_17_17, ll_backend__continuation_info__V_29_29, ll_backend__continuation_info__V_30_30);
            }
#line 5878 "ll_backend.continuation_info.c"
            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_17_17 == (MR_Integer) 0);
#line 266 "continuation_info.m"
            ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 266 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 266 "continuation_info.m"
              *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_17_17;
#line 266 "continuation_info.m"
            else
#line 266 "continuation_info.m"
              {
#line 266 "continuation_info.m"
                MR_Word ll_backend__continuation_info__V_18_18;
#line 266 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__V_31_31 = (MR_Integer) ll_backend__continuation_info__V_6_6;
#line 266 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__V_32_32 = (MR_Integer) ll_backend__continuation_info__V_12_12;

#line 266 "continuation_info.m"
                {
#line 266 "continuation_info.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__continuation_info__V_18_18, ll_backend__continuation_info__V_31_31, ll_backend__continuation_info__V_32_32);
                }
#line 5902 "ll_backend.continuation_info.c"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_18_18 == (MR_Integer) 0);
#line 266 "continuation_info.m"
                ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 266 "continuation_info.m"
                if (ll_backend__continuation_info__succeeded)
#line 266 "continuation_info.m"
                  *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_18_18;
#line 266 "continuation_info.m"
                else
#line 266 "continuation_info.m"
                  {
#line 266 "continuation_info.m"
                    MR_Word ll_backend__continuation_info__V_19_19;

#line 266 "continuation_info.m"
                    {
#line 266 "continuation_info.m"
                      mdbcomp__goal_path____Compare____forward_goal_path_0_0(&ll_backend__continuation_info__V_19_19, ll_backend__continuation_info__V_7_7, ll_backend__continuation_info__V_13_13);
                    }
#line 5922 "ll_backend.continuation_info.c"
                    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_19_19 == (MR_Integer) 0);
#line 266 "continuation_info.m"
                    ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 266 "continuation_info.m"
                    if (ll_backend__continuation_info__succeeded)
#line 266 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_19_19;
#line 266 "continuation_info.m"
                    else
#line 266 "continuation_info.m"
                      {
#line 266 "continuation_info.m"
                        MR_Word ll_backend__continuation_info__V_20_20;

#line 266 "continuation_info.m"
                        {
#line 266 "continuation_info.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[20], &ll_backend__continuation_info__V_20_20, ((MR_Box) (ll_backend__continuation_info__V_8_8)), ((MR_Box) (ll_backend__continuation_info__V_14_14)));
                        }
#line 5942 "ll_backend.continuation_info.c"
                        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_20_20 == (MR_Integer) 0);
#line 266 "continuation_info.m"
                        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 266 "continuation_info.m"
                        if (ll_backend__continuation_info__succeeded)
#line 266 "continuation_info.m"
                          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_20_20;
#line 266 "continuation_info.m"
                        else
#line 266 "continuation_info.m"
                          {
#line 266 "continuation_info.m"
                            ll_backend__continuation_info____Compare____layout_label_info_0_0(ll_backend__continuation_info__HeadVar__1_1, ll_backend__continuation_info__V_9_9, ll_backend__continuation_info__V_15_15);
#line 266 "continuation_info.m"
                            return;
                          }
#line 266 "continuation_info.m"
                      }
#line 266 "continuation_info.m"
                  }
#line 266 "continuation_info.m"
              }
#line 266 "continuation_info.m"
          }
#line 266 "continuation_info.m"
      }
#line 266 "continuation_info.m"
  }
#line 266 "continuation_info.m"
}

#line 266 "continuation_info.m"
MR_bool MR_CALL 
ll_backend__continuation_info____Unify____trace_port_layout_info_0_0(
#line 266 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 266 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2)
#line 266 "continuation_info.m"
{
#line 266 "continuation_info.m"
  {
#line 266 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 266 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_15 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 266 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_16 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 266 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_15 == ll_backend__continuation_info__CastY_16);
#line 266 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 266 "continuation_info.m"
      ll_backend__continuation_info__succeeded = MR_TRUE;
#line 266 "continuation_info.m"
    else
#line 266 "continuation_info.m"
      {
#line 266 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_19_19;
#line 266 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 266 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 266 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 2)));
#line 266 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 3)));
#line 266 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 4)));
#line 266 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 5)));
#line 266 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 266 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 266 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 2)));
#line 266 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 3)));
#line 266 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 4)));
#line 266 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 5)));

#line 6029 "ll_backend.continuation_info.c"
        {
#line 6031 "ll_backend.continuation_info.c"
          ll_backend__continuation_info__succeeded = mercury__term____Unify____context_0_0(ll_backend__continuation_info__V_3_3, ll_backend__continuation_info__V_9_9);
        }
#line 266 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 266 "continuation_info.m"
          {
#line 6038 "ll_backend.continuation_info.c"
            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_4_4 == ll_backend__continuation_info__V_10_10);
#line 266 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 266 "continuation_info.m"
              {
#line 6044 "ll_backend.continuation_info.c"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_5_5 == ll_backend__continuation_info__V_11_11);
#line 266 "continuation_info.m"
                if (ll_backend__continuation_info__succeeded)
#line 266 "continuation_info.m"
                  {
#line 6050 "ll_backend.continuation_info.c"
                    {
#line 6052 "ll_backend.continuation_info.c"
                      ll_backend__continuation_info__succeeded = mdbcomp__goal_path____Unify____forward_goal_path_0_0(ll_backend__continuation_info__V_6_6, ll_backend__continuation_info__V_12_12);
                    }
#line 266 "continuation_info.m"
                    if (ll_backend__continuation_info__succeeded)
#line 266 "continuation_info.m"
                      {
#line 6059 "ll_backend.continuation_info.c"
                        ll_backend__continuation_info__TypeInfo_19_19 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[20];
#line 6061 "ll_backend.continuation_info.c"
                        {
#line 6063 "ll_backend.continuation_info.c"
                          ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_19_19, ((MR_Box) (ll_backend__continuation_info__V_7_7)), ((MR_Box) (ll_backend__continuation_info__V_13_13)));
                        }
#line 266 "continuation_info.m"
                        if (ll_backend__continuation_info__succeeded)
#line 6068 "ll_backend.continuation_info.c"
                          {
#line 6070 "ll_backend.continuation_info.c"
                            return ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____layout_label_info_0_0(ll_backend__continuation_info__V_8_8, ll_backend__continuation_info__V_14_14);
                          }
#line 266 "continuation_info.m"
                      }
#line 266 "continuation_info.m"
                  }
#line 266 "continuation_info.m"
              }
#line 266 "continuation_info.m"
          }
#line 266 "continuation_info.m"
      }
#line 266 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 266 "continuation_info.m"
  }
#line 266 "continuation_info.m"
}

#line 176 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info____Compare____trace_needs_body_rep_0_0(
#line 176 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 176 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 176 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3)
#line 176 "continuation_info.m"
{
#line 176 "continuation_info.m"
  {
#line 176 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 176 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__Cast_HeadVar1_4 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;
#line 176 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__Cast_HeadVar2_5 = (MR_Integer) ll_backend__continuation_info__HeadVar__3_3;

#line 176 "continuation_info.m"
    {
#line 176 "continuation_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__continuation_info__HeadVar__1_1, ll_backend__continuation_info__Cast_HeadVar1_4, ll_backend__continuation_info__Cast_HeadVar2_5);
#line 176 "continuation_info.m"
      return;
    }
#line 176 "continuation_info.m"
  }
#line 176 "continuation_info.m"
}

#line 176 "continuation_info.m"
MR_bool MR_CALL 
ll_backend__continuation_info____Unify____trace_needs_body_rep_0_0(
#line 176 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_1,
#line 176 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2)
#line 176 "continuation_info.m"
{
#line 6131 "ll_backend.continuation_info.c"
  {
#line 6133 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__HeadVar__2_1 == ll_backend__continuation_info__HeadVar__2_2);

#line 6136 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 6138 "ll_backend.continuation_info.c"
  }
#line 176 "continuation_info.m"
}

#line 339 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info____Compare____slot_contents_0_0(
#line 339 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 339 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 339 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3)
#line 339 "continuation_info.m"
{
#line 339 "continuation_info.m"
  {
#line 339 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 339 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_28 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;
#line 339 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_29 = (MR_Integer) ll_backend__continuation_info__HeadVar__3_3;

#line 339 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_28 == ll_backend__continuation_info__CastY_29);
#line 339 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 6167 "ll_backend.continuation_info.c"
      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 339 "continuation_info.m"
    else
#line 339 "continuation_info.m"
#line 339 "continuation_info.m"
      switch (MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__2_2)) {
#line 339 "continuation_info.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 339 "continuation_info.m"
        case (MR_Integer) 0:
#line 339 "continuation_info.m"
#line 339 "continuation_info.m"
          switch (MR_unmkbody(ll_backend__continuation_info__HeadVar__2_2)) {
#line 339 "continuation_info.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 339 "continuation_info.m"
            case (MR_Integer) 0:
#line 339 "continuation_info.m"
#line 339 "continuation_info.m"
              switch (MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__3_3)) {
#line 339 "continuation_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 339 "continuation_info.m"
                case (MR_Integer) 0:
#line 339 "continuation_info.m"
#line 339 "continuation_info.m"
                  switch (MR_unmkbody(ll_backend__continuation_info__HeadVar__3_3)) {
#line 339 "continuation_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 339 "continuation_info.m"
                    case (MR_Integer) 0:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 1:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 2:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 3:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 4:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 5:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 6:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 7:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 8:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 9:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 10:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                  }
#line 339 "continuation_info.m"
                  break;
#line 339 "continuation_info.m"
                case (MR_Integer) 1:
#line 6269 "ll_backend.continuation_info.c"
                  *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                  break;
#line 339 "continuation_info.m"
              }
#line 339 "continuation_info.m"
              break;
#line 339 "continuation_info.m"
            case (MR_Integer) 1:
#line 339 "continuation_info.m"
#line 339 "continuation_info.m"
              switch (MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__3_3)) {
#line 339 "continuation_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 339 "continuation_info.m"
                case (MR_Integer) 0:
#line 339 "continuation_info.m"
#line 339 "continuation_info.m"
                  switch (MR_unmkbody(ll_backend__continuation_info__HeadVar__3_3)) {
#line 339 "continuation_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 339 "continuation_info.m"
                    case (MR_Integer) 0:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 1:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 2:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 3:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 4:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 5:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 6:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 7:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 8:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 9:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 10:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                  }
#line 339 "continuation_info.m"
                  break;
#line 339 "continuation_info.m"
                case (MR_Integer) 1:
#line 6363 "ll_backend.continuation_info.c"
                  *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                  break;
#line 339 "continuation_info.m"
              }
#line 339 "continuation_info.m"
              break;
#line 339 "continuation_info.m"
            case (MR_Integer) 2:
#line 339 "continuation_info.m"
#line 339 "continuation_info.m"
              switch (MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__3_3)) {
#line 339 "continuation_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 339 "continuation_info.m"
                case (MR_Integer) 0:
#line 339 "continuation_info.m"
#line 339 "continuation_info.m"
                  switch (MR_unmkbody(ll_backend__continuation_info__HeadVar__3_3)) {
#line 339 "continuation_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 339 "continuation_info.m"
                    case (MR_Integer) 0:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 1:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 2:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 3:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 4:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 5:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 6:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 7:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 8:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 9:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 10:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                  }
#line 339 "continuation_info.m"
                  break;
#line 339 "continuation_info.m"
                case (MR_Integer) 1:
#line 6457 "ll_backend.continuation_info.c"
                  *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                  break;
#line 339 "continuation_info.m"
              }
#line 339 "continuation_info.m"
              break;
#line 339 "continuation_info.m"
            case (MR_Integer) 3:
#line 339 "continuation_info.m"
#line 339 "continuation_info.m"
              switch (MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__3_3)) {
#line 339 "continuation_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 339 "continuation_info.m"
                case (MR_Integer) 0:
#line 339 "continuation_info.m"
#line 339 "continuation_info.m"
                  switch (MR_unmkbody(ll_backend__continuation_info__HeadVar__3_3)) {
#line 339 "continuation_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 339 "continuation_info.m"
                    case (MR_Integer) 0:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 1:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 2:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 3:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 4:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 5:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 6:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 7:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 8:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 9:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 10:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                  }
#line 339 "continuation_info.m"
                  break;
#line 339 "continuation_info.m"
                case (MR_Integer) 1:
#line 6551 "ll_backend.continuation_info.c"
                  *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                  break;
#line 339 "continuation_info.m"
              }
#line 339 "continuation_info.m"
              break;
#line 339 "continuation_info.m"
            case (MR_Integer) 4:
#line 339 "continuation_info.m"
#line 339 "continuation_info.m"
              switch (MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__3_3)) {
#line 339 "continuation_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 339 "continuation_info.m"
                case (MR_Integer) 0:
#line 339 "continuation_info.m"
#line 339 "continuation_info.m"
                  switch (MR_unmkbody(ll_backend__continuation_info__HeadVar__3_3)) {
#line 339 "continuation_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 339 "continuation_info.m"
                    case (MR_Integer) 0:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 1:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 2:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 3:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 4:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 5:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 6:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 7:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 8:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 9:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 10:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                  }
#line 339 "continuation_info.m"
                  break;
#line 339 "continuation_info.m"
                case (MR_Integer) 1:
#line 6645 "ll_backend.continuation_info.c"
                  *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                  break;
#line 339 "continuation_info.m"
              }
#line 339 "continuation_info.m"
              break;
#line 339 "continuation_info.m"
            case (MR_Integer) 5:
#line 339 "continuation_info.m"
#line 339 "continuation_info.m"
              switch (MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__3_3)) {
#line 339 "continuation_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 339 "continuation_info.m"
                case (MR_Integer) 0:
#line 339 "continuation_info.m"
#line 339 "continuation_info.m"
                  switch (MR_unmkbody(ll_backend__continuation_info__HeadVar__3_3)) {
#line 339 "continuation_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 339 "continuation_info.m"
                    case (MR_Integer) 0:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 1:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 2:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 3:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 4:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 5:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 6:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 7:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 8:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 9:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 10:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                  }
#line 339 "continuation_info.m"
                  break;
#line 339 "continuation_info.m"
                case (MR_Integer) 1:
#line 6739 "ll_backend.continuation_info.c"
                  *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                  break;
#line 339 "continuation_info.m"
              }
#line 339 "continuation_info.m"
              break;
#line 339 "continuation_info.m"
            case (MR_Integer) 6:
#line 339 "continuation_info.m"
#line 339 "continuation_info.m"
              switch (MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__3_3)) {
#line 339 "continuation_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 339 "continuation_info.m"
                case (MR_Integer) 0:
#line 339 "continuation_info.m"
#line 339 "continuation_info.m"
                  switch (MR_unmkbody(ll_backend__continuation_info__HeadVar__3_3)) {
#line 339 "continuation_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 339 "continuation_info.m"
                    case (MR_Integer) 0:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 1:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 2:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 3:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 4:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 5:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 6:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 7:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 8:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 9:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 10:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                  }
#line 339 "continuation_info.m"
                  break;
#line 339 "continuation_info.m"
                case (MR_Integer) 1:
#line 6833 "ll_backend.continuation_info.c"
                  *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                  break;
#line 339 "continuation_info.m"
              }
#line 339 "continuation_info.m"
              break;
#line 339 "continuation_info.m"
            case (MR_Integer) 7:
#line 339 "continuation_info.m"
#line 339 "continuation_info.m"
              switch (MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__3_3)) {
#line 339 "continuation_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 339 "continuation_info.m"
                case (MR_Integer) 0:
#line 339 "continuation_info.m"
#line 339 "continuation_info.m"
                  switch (MR_unmkbody(ll_backend__continuation_info__HeadVar__3_3)) {
#line 339 "continuation_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 339 "continuation_info.m"
                    case (MR_Integer) 0:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 1:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 2:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 3:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 4:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 5:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 6:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 7:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 8:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 9:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 10:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                  }
#line 339 "continuation_info.m"
                  break;
#line 339 "continuation_info.m"
                case (MR_Integer) 1:
#line 6927 "ll_backend.continuation_info.c"
                  *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                  break;
#line 339 "continuation_info.m"
              }
#line 339 "continuation_info.m"
              break;
#line 339 "continuation_info.m"
            case (MR_Integer) 8:
#line 339 "continuation_info.m"
#line 339 "continuation_info.m"
              switch (MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__3_3)) {
#line 339 "continuation_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 339 "continuation_info.m"
                case (MR_Integer) 0:
#line 339 "continuation_info.m"
#line 339 "continuation_info.m"
                  switch (MR_unmkbody(ll_backend__continuation_info__HeadVar__3_3)) {
#line 339 "continuation_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 339 "continuation_info.m"
                    case (MR_Integer) 0:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 1:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 2:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 3:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 4:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 5:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 6:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 7:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 8:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 9:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 10:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                  }
#line 339 "continuation_info.m"
                  break;
#line 339 "continuation_info.m"
                case (MR_Integer) 1:
#line 7021 "ll_backend.continuation_info.c"
                  *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                  break;
#line 339 "continuation_info.m"
              }
#line 339 "continuation_info.m"
              break;
#line 339 "continuation_info.m"
            case (MR_Integer) 9:
#line 339 "continuation_info.m"
#line 339 "continuation_info.m"
              switch (MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__3_3)) {
#line 339 "continuation_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 339 "continuation_info.m"
                case (MR_Integer) 0:
#line 339 "continuation_info.m"
#line 339 "continuation_info.m"
                  switch (MR_unmkbody(ll_backend__continuation_info__HeadVar__3_3)) {
#line 339 "continuation_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 339 "continuation_info.m"
                    case (MR_Integer) 0:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 1:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 2:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 3:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 4:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 5:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 6:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 7:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 8:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 9:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 10:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                  }
#line 339 "continuation_info.m"
                  break;
#line 339 "continuation_info.m"
                case (MR_Integer) 1:
#line 7115 "ll_backend.continuation_info.c"
                  *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                  break;
#line 339 "continuation_info.m"
              }
#line 339 "continuation_info.m"
              break;
#line 339 "continuation_info.m"
            case (MR_Integer) 10:
#line 339 "continuation_info.m"
#line 339 "continuation_info.m"
              switch (MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__3_3)) {
#line 339 "continuation_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 339 "continuation_info.m"
                case (MR_Integer) 0:
#line 339 "continuation_info.m"
#line 339 "continuation_info.m"
                  switch (MR_unmkbody(ll_backend__continuation_info__HeadVar__3_3)) {
#line 339 "continuation_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 339 "continuation_info.m"
                    case (MR_Integer) 0:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 1:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 2:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 3:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 4:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 5:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 6:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 7:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 8:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 9:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                    case (MR_Integer) 10:
#line 339 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 339 "continuation_info.m"
                      break;
#line 339 "continuation_info.m"
                  }
#line 339 "continuation_info.m"
                  break;
#line 339 "continuation_info.m"
                case (MR_Integer) 1:
#line 7209 "ll_backend.continuation_info.c"
                  *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 339 "continuation_info.m"
                  break;
#line 339 "continuation_info.m"
              }
#line 339 "continuation_info.m"
              break;
#line 339 "continuation_info.m"
          }
#line 339 "continuation_info.m"
          break;
#line 339 "continuation_info.m"
        case (MR_Integer) 1:
#line 339 "continuation_info.m"
          {
#line 339 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));

#line 339 "continuation_info.m"
#line 339 "continuation_info.m"
            switch (MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__3_3)) {
#line 339 "continuation_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 339 "continuation_info.m"
              case (MR_Integer) 0:
#line 339 "continuation_info.m"
#line 339 "continuation_info.m"
                switch (MR_unmkbody(ll_backend__continuation_info__HeadVar__3_3)) {
#line 339 "continuation_info.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 339 "continuation_info.m"
                  case (MR_Integer) 0:
#line 7242 "ll_backend.continuation_info.c"
                    *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                    break;
#line 339 "continuation_info.m"
                  case (MR_Integer) 1:
#line 7248 "ll_backend.continuation_info.c"
                    *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                    break;
#line 339 "continuation_info.m"
                  case (MR_Integer) 2:
#line 7254 "ll_backend.continuation_info.c"
                    *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                    break;
#line 339 "continuation_info.m"
                  case (MR_Integer) 3:
#line 7260 "ll_backend.continuation_info.c"
                    *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                    break;
#line 339 "continuation_info.m"
                  case (MR_Integer) 4:
#line 7266 "ll_backend.continuation_info.c"
                    *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                    break;
#line 339 "continuation_info.m"
                  case (MR_Integer) 5:
#line 7272 "ll_backend.continuation_info.c"
                    *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                    break;
#line 339 "continuation_info.m"
                  case (MR_Integer) 6:
#line 7278 "ll_backend.continuation_info.c"
                    *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                    break;
#line 339 "continuation_info.m"
                  case (MR_Integer) 7:
#line 7284 "ll_backend.continuation_info.c"
                    *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                    break;
#line 339 "continuation_info.m"
                  case (MR_Integer) 8:
#line 7290 "ll_backend.continuation_info.c"
                    *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                    break;
#line 339 "continuation_info.m"
                  case (MR_Integer) 9:
#line 7296 "ll_backend.continuation_info.c"
                    *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                    break;
#line 339 "continuation_info.m"
                  case (MR_Integer) 10:
#line 7302 "ll_backend.continuation_info.c"
                    *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                    break;
#line 339 "continuation_info.m"
                }
#line 339 "continuation_info.m"
                break;
#line 339 "continuation_info.m"
              case (MR_Integer) 1:
#line 339 "continuation_info.m"
                {
#line 339 "continuation_info.m"
                  MR_Word ll_backend__continuation_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));

#line 339 "continuation_info.m"
                  {
#line 339 "continuation_info.m"
                    ll_backend__llds____Compare____lval_0_0(ll_backend__continuation_info__HeadVar__1_1, ll_backend__continuation_info__V_31_31, ll_backend__continuation_info__V_27_27);
#line 339 "continuation_info.m"
                    return;
                  }
#line 339 "continuation_info.m"
                }
#line 339 "continuation_info.m"
                break;
#line 339 "continuation_info.m"
            }
#line 339 "continuation_info.m"
          }
#line 339 "continuation_info.m"
          break;
#line 339 "continuation_info.m"
      }
#line 339 "continuation_info.m"
  }
#line 339 "continuation_info.m"
}

#line 339 "continuation_info.m"
MR_bool MR_CALL 
ll_backend__continuation_info____Unify____slot_contents_0_0(
#line 339 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 339 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2)
#line 339 "continuation_info.m"
{
#line 339 "continuation_info.m"
  {
#line 339 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 339 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_27 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 339 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_28 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 339 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_27 == ll_backend__continuation_info__CastY_28);
#line 339 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 339 "continuation_info.m"
      ll_backend__continuation_info__succeeded = MR_TRUE;
#line 339 "continuation_info.m"
    else
#line 339 "continuation_info.m"
#line 339 "continuation_info.m"
      switch (MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__1_1)) {
#line 339 "continuation_info.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 339 "continuation_info.m"
        case (MR_Integer) 0:
#line 339 "continuation_info.m"
#line 339 "continuation_info.m"
          switch (MR_unmkbody(ll_backend__continuation_info__HeadVar__1_1)) {
#line 339 "continuation_info.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 339 "continuation_info.m"
            case (MR_Integer) 0:
#line 339 "continuation_info.m"
              {
#line 339 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastX_3 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 339 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastY_4 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 339 "continuation_info.m"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastY_4 == ll_backend__continuation_info__CastX_3);
#line 339 "continuation_info.m"
              }
#line 339 "continuation_info.m"
              break;
#line 339 "continuation_info.m"
            case (MR_Integer) 1:
#line 339 "continuation_info.m"
              {
#line 339 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastX_5 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 339 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastY_6 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 339 "continuation_info.m"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastY_6 == ll_backend__continuation_info__CastX_5);
#line 339 "continuation_info.m"
              }
#line 339 "continuation_info.m"
              break;
#line 339 "continuation_info.m"
            case (MR_Integer) 2:
#line 339 "continuation_info.m"
              {
#line 339 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastX_7 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 339 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastY_8 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 339 "continuation_info.m"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastY_8 == ll_backend__continuation_info__CastX_7);
#line 339 "continuation_info.m"
              }
#line 339 "continuation_info.m"
              break;
#line 339 "continuation_info.m"
            case (MR_Integer) 3:
#line 339 "continuation_info.m"
              {
#line 339 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastX_9 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 339 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastY_10 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 339 "continuation_info.m"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastY_10 == ll_backend__continuation_info__CastX_9);
#line 339 "continuation_info.m"
              }
#line 339 "continuation_info.m"
              break;
#line 339 "continuation_info.m"
            case (MR_Integer) 4:
#line 339 "continuation_info.m"
              {
#line 339 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastX_11 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 339 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastY_12 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 339 "continuation_info.m"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastY_12 == ll_backend__continuation_info__CastX_11);
#line 339 "continuation_info.m"
              }
#line 339 "continuation_info.m"
              break;
#line 339 "continuation_info.m"
            case (MR_Integer) 5:
#line 339 "continuation_info.m"
              {
#line 339 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastX_13 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 339 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastY_14 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 339 "continuation_info.m"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastY_14 == ll_backend__continuation_info__CastX_13);
#line 339 "continuation_info.m"
              }
#line 339 "continuation_info.m"
              break;
#line 339 "continuation_info.m"
            case (MR_Integer) 6:
#line 339 "continuation_info.m"
              {
#line 339 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastX_15 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 339 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastY_16 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 339 "continuation_info.m"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastY_16 == ll_backend__continuation_info__CastX_15);
#line 339 "continuation_info.m"
              }
#line 339 "continuation_info.m"
              break;
#line 339 "continuation_info.m"
            case (MR_Integer) 7:
#line 339 "continuation_info.m"
              {
#line 339 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastX_17 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 339 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastY_18 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 339 "continuation_info.m"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastY_18 == ll_backend__continuation_info__CastX_17);
#line 339 "continuation_info.m"
              }
#line 339 "continuation_info.m"
              break;
#line 339 "continuation_info.m"
            case (MR_Integer) 8:
#line 339 "continuation_info.m"
              {
#line 339 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastX_19 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 339 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastY_20 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 339 "continuation_info.m"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastY_20 == ll_backend__continuation_info__CastX_19);
#line 339 "continuation_info.m"
              }
#line 339 "continuation_info.m"
              break;
#line 339 "continuation_info.m"
            case (MR_Integer) 9:
#line 339 "continuation_info.m"
              {
#line 339 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastX_21 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 339 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastY_22 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 339 "continuation_info.m"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastY_22 == ll_backend__continuation_info__CastX_21);
#line 339 "continuation_info.m"
              }
#line 339 "continuation_info.m"
              break;
#line 339 "continuation_info.m"
            case (MR_Integer) 10:
#line 339 "continuation_info.m"
              {
#line 339 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastX_23 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 339 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastY_24 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 339 "continuation_info.m"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastY_24 == ll_backend__continuation_info__CastX_23);
#line 339 "continuation_info.m"
              }
#line 339 "continuation_info.m"
              break;
#line 339 "continuation_info.m"
          }
#line 339 "continuation_info.m"
          break;
#line 339 "continuation_info.m"
        case (MR_Integer) 1:
#line 339 "continuation_info.m"
          {
#line 339 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 339 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_26_26;

#line 339 "continuation_info.m"
            ll_backend__continuation_info__succeeded = ((MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 339 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 339 "continuation_info.m"
              {
#line 339 "continuation_info.m"
                ll_backend__continuation_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 7565 "ll_backend.continuation_info.c"
                {
#line 7567 "ll_backend.continuation_info.c"
                  return ll_backend__continuation_info__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__continuation_info__V_25_25, ll_backend__continuation_info__V_26_26);
                }
#line 339 "continuation_info.m"
              }
#line 339 "continuation_info.m"
          }
#line 339 "continuation_info.m"
          break;
#line 339 "continuation_info.m"
      }
#line 339 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 339 "continuation_info.m"
  }
#line 339 "continuation_info.m"
}

#line 276 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info____Compare____return_layout_info_0_0(
#line 276 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 276 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 276 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3)
#line 276 "continuation_info.m"
{
#line 276 "continuation_info.m"
  {
#line 276 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 276 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_9 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;
#line 276 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_10 = (MR_Integer) ll_backend__continuation_info__HeadVar__3_3;

#line 276 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_9 == ll_backend__continuation_info__CastY_10);
#line 276 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 7609 "ll_backend.continuation_info.c"
      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 276 "continuation_info.m"
    else
#line 276 "continuation_info.m"
      {
#line 276 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 276 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 276 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));
#line 276 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 1)));
#line 276 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8;

#line 276 "continuation_info.m"
        {
#line 276 "continuation_info.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[19], &ll_backend__continuation_info__V_8_8, ((MR_Box) (ll_backend__continuation_info__V_4_4)), ((MR_Box) (ll_backend__continuation_info__V_6_6)));
        }
#line 7631 "ll_backend.continuation_info.c"
        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_8_8 == (MR_Integer) 0);
#line 276 "continuation_info.m"
        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 276 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 276 "continuation_info.m"
          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_8_8;
#line 276 "continuation_info.m"
        else
#line 276 "continuation_info.m"
          {
#line 276 "continuation_info.m"
            ll_backend__continuation_info____Compare____layout_label_info_0_0(ll_backend__continuation_info__HeadVar__1_1, ll_backend__continuation_info__V_5_5, ll_backend__continuation_info__V_7_7);
#line 276 "continuation_info.m"
            return;
          }
#line 276 "continuation_info.m"
      }
#line 276 "continuation_info.m"
  }
#line 276 "continuation_info.m"
}

#line 276 "continuation_info.m"
MR_bool MR_CALL 
ll_backend__continuation_info____Unify____return_layout_info_0_0(
#line 276 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 276 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2)
#line 276 "continuation_info.m"
{
#line 276 "continuation_info.m"
  {
#line 276 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 276 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_7 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 276 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_8 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 276 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_7 == ll_backend__continuation_info__CastY_8);
#line 276 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 276 "continuation_info.m"
      ll_backend__continuation_info__succeeded = MR_TRUE;
#line 276 "continuation_info.m"
    else
#line 276 "continuation_info.m"
      {
#line 276 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 276 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 276 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 276 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));

#line 7692 "ll_backend.continuation_info.c"
        {
#line 7694 "ll_backend.continuation_info.c"
          ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[19], ((MR_Box) (ll_backend__continuation_info__V_3_3)), ((MR_Box) (ll_backend__continuation_info__V_5_5)));
        }
#line 276 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 7699 "ll_backend.continuation_info.c"
          {
#line 7701 "ll_backend.continuation_info.c"
            return ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____layout_label_info_0_0(ll_backend__continuation_info__V_4_4, ll_backend__continuation_info__V_6_6);
          }
#line 276 "continuation_info.m"
      }
#line 276 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 276 "continuation_info.m"
  }
#line 276 "continuation_info.m"
}

#line 168 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info____Compare____proc_layout_table_info_0_0(
#line 168 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 168 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 168 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3)
#line 168 "continuation_info.m"
{
#line 168 "continuation_info.m"
  {
#line 168 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 168 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_12 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;
#line 168 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_13 = (MR_Integer) ll_backend__continuation_info__HeadVar__3_3;

#line 168 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_12 == ll_backend__continuation_info__CastY_13);
#line 168 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 7737 "ll_backend.continuation_info.c"
      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 168 "continuation_info.m"
    else
#line 168 "continuation_info.m"
    if (((MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 168 "continuation_info.m"
      {
#line 168 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));

#line 168 "continuation_info.m"
        if (((MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 168 "continuation_info.m"
          {
#line 168 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));

#line 168 "continuation_info.m"
            {
#line 168 "continuation_info.m"
              hlds__hlds_pred____Compare____proc_table_io_info_0_0(ll_backend__continuation_info__HeadVar__1_1, ll_backend__continuation_info__V_16_16, ll_backend__continuation_info__V_5_5);
#line 168 "continuation_info.m"
              return;
            }
#line 168 "continuation_info.m"
          }
#line 168 "continuation_info.m"
        else
#line 7766 "ll_backend.continuation_info.c"
          *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 168 "continuation_info.m"
      }
#line 168 "continuation_info.m"
    else
#line 168 "continuation_info.m"
      {
#line 168 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));

#line 168 "continuation_info.m"
        if (((MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 7779 "ll_backend.continuation_info.c"
          *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 168 "continuation_info.m"
        else
#line 168 "continuation_info.m"
          {
#line 168 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));

#line 168 "continuation_info.m"
            {
#line 168 "continuation_info.m"
              hlds__hlds_pred____Compare____proc_table_struct_info_0_0(ll_backend__continuation_info__HeadVar__1_1, ll_backend__continuation_info__V_17_17, ll_backend__continuation_info__V_11_11);
#line 168 "continuation_info.m"
              return;
            }
#line 168 "continuation_info.m"
          }
#line 168 "continuation_info.m"
      }
#line 168 "continuation_info.m"
  }
#line 168 "continuation_info.m"
}

#line 168 "continuation_info.m"
MR_bool MR_CALL 
ll_backend__continuation_info____Unify____proc_layout_table_info_0_0(
#line 168 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 168 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2)
#line 168 "continuation_info.m"
{
#line 168 "continuation_info.m"
  {
#line 168 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 168 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_7 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 168 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_8 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 168 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_7 == ll_backend__continuation_info__CastY_8);
#line 168 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 168 "continuation_info.m"
      ll_backend__continuation_info__succeeded = MR_TRUE;
#line 168 "continuation_info.m"
    else
#line 168 "continuation_info.m"
    if (((MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 168 "continuation_info.m"
      {
#line 168 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 168 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4;

#line 168 "continuation_info.m"
        ll_backend__continuation_info__succeeded = ((MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 168 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 168 "continuation_info.m"
          {
#line 168 "continuation_info.m"
            ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 7847 "ll_backend.continuation_info.c"
            {
#line 7849 "ll_backend.continuation_info.c"
              return ll_backend__continuation_info__succeeded = hlds__hlds_pred____Unify____proc_table_io_info_0_0(ll_backend__continuation_info__V_3_3, ll_backend__continuation_info__V_4_4);
            }
#line 168 "continuation_info.m"
          }
#line 168 "continuation_info.m"
      }
#line 168 "continuation_info.m"
    else
#line 168 "continuation_info.m"
      {
#line 168 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 168 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6;

#line 168 "continuation_info.m"
        ll_backend__continuation_info__succeeded = ((MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 168 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 168 "continuation_info.m"
          {
#line 168 "continuation_info.m"
            ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 7873 "ll_backend.continuation_info.c"
            {
#line 7875 "ll_backend.continuation_info.c"
              return ll_backend__continuation_info__succeeded = hlds__hlds_pred____Unify____proc_table_struct_info_0_0(ll_backend__continuation_info__V_5_5, ll_backend__continuation_info__V_6_6);
            }
#line 168 "continuation_info.m"
          }
#line 168 "continuation_info.m"
      }
#line 168 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 168 "continuation_info.m"
  }
#line 168 "continuation_info.m"
}

#line 84 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info____Compare____proc_layout_info_0_0(
#line 84 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 84 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 84 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3)
#line 84 "continuation_info.m"
{
#line 84 "continuation_info.m"
  {
#line 84 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 84 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_75 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;
#line 84 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_76 = (MR_Integer) ll_backend__continuation_info__HeadVar__3_3;

#line 84 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_75 == ll_backend__continuation_info__CastY_76);
#line 84 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 7913 "ll_backend.continuation_info.c"
      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 84 "continuation_info.m"
    else
#line 84 "continuation_info.m"
      {
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 2)));
#line 84 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 3)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 4)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 5)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 6)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 7)));
#line 84 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 8)));
#line 84 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 9)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 10)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 11)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 12)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 13)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 14)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 15)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 16)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 17)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 18)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 19)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 20)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 21)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 22)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 23)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 1)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 2)));
#line 84 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 3)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 4)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 5)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 6)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 7)));
#line 84 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 8)));
#line 84 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 9)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 10)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 11)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 12)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 13)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 14)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 15)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 16)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 17)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 18)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 19)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 20)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 21)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 22)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 23)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_52_52;

#line 84 "continuation_info.m"
        {
#line 84 "continuation_info.m"
          hlds__hlds_rtti____Compare____rtti_proc_label_0_0(&ll_backend__continuation_info__V_52_52, ll_backend__continuation_info__V_4_4, ll_backend__continuation_info__V_28_28);
        }
#line 8023 "ll_backend.continuation_info.c"
        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_52_52 == (MR_Integer) 0);
#line 84 "continuation_info.m"
        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 84 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_52_52;
#line 84 "continuation_info.m"
        else
#line 84 "continuation_info.m"
          {
#line 84 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_53_53;

#line 84 "continuation_info.m"
            {
#line 84 "continuation_info.m"
              ll_backend__llds____Compare____label_0_0(&ll_backend__continuation_info__V_53_53, ll_backend__continuation_info__V_5_5, ll_backend__continuation_info__V_29_29);
            }
#line 8043 "ll_backend.continuation_info.c"
            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_53_53 == (MR_Integer) 0);
#line 84 "continuation_info.m"
            ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 84 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
              *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_53_53;
#line 84 "continuation_info.m"
            else
#line 84 "continuation_info.m"
              {
#line 84 "continuation_info.m"
                MR_Word ll_backend__continuation_info__V_54_54;
#line 84 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__V_101_101 = (MR_Integer) ll_backend__continuation_info__V_6_6;
#line 84 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__V_102_102 = (MR_Integer) ll_backend__continuation_info__V_30_30;

#line 84 "continuation_info.m"
                {
#line 84 "continuation_info.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__continuation_info__V_54_54, ll_backend__continuation_info__V_101_101, ll_backend__continuation_info__V_102_102);
                }
#line 8067 "ll_backend.continuation_info.c"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_54_54 == (MR_Integer) 0);
#line 84 "continuation_info.m"
                ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 84 "continuation_info.m"
                if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                  *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_54_54;
#line 84 "continuation_info.m"
                else
#line 84 "continuation_info.m"
                  {
#line 84 "continuation_info.m"
                    MR_Word ll_backend__continuation_info__V_55_55;

#line 84 "continuation_info.m"
                    {
#line 84 "continuation_info.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__continuation_info__V_55_55, ll_backend__continuation_info__V_7_7, ll_backend__continuation_info__V_31_31);
                    }
#line 8087 "ll_backend.continuation_info.c"
                    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_55_55 == (MR_Integer) 0);
#line 84 "continuation_info.m"
                    ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 84 "continuation_info.m"
                    if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_55_55;
#line 84 "continuation_info.m"
                    else
#line 84 "continuation_info.m"
                      {
#line 84 "continuation_info.m"
                        MR_Word ll_backend__continuation_info__V_56_56;

#line 84 "continuation_info.m"
                        {
#line 84 "continuation_info.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[11], &ll_backend__continuation_info__V_56_56, ((MR_Box) (ll_backend__continuation_info__V_8_8)), ((MR_Box) (ll_backend__continuation_info__V_32_32)));
                        }
#line 8107 "ll_backend.continuation_info.c"
                        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_56_56 == (MR_Integer) 0);
#line 84 "continuation_info.m"
                        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 84 "continuation_info.m"
                        if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_56_56;
#line 84 "continuation_info.m"
                        else
#line 84 "continuation_info.m"
                          {
#line 84 "continuation_info.m"
                            MR_Word ll_backend__continuation_info__V_57_57;

#line 84 "continuation_info.m"
                            {
#line 84 "continuation_info.m"
                              parse_tree__prog_data____Compare____eval_method_0_0(&ll_backend__continuation_info__V_57_57, ll_backend__continuation_info__V_9_9, ll_backend__continuation_info__V_33_33);
                            }
#line 8127 "ll_backend.continuation_info.c"
                            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_57_57 == (MR_Integer) 0);
#line 84 "continuation_info.m"
                            ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 84 "continuation_info.m"
                            if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                              *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_57_57;
#line 84 "continuation_info.m"
                            else
#line 84 "continuation_info.m"
                              {
#line 84 "continuation_info.m"
                                MR_Word ll_backend__continuation_info__V_58_58;

#line 84 "continuation_info.m"
                                {
#line 84 "continuation_info.m"
                                  libs__trace_params____Compare____trace_level_0_0(&ll_backend__continuation_info__V_58_58, ll_backend__continuation_info__V_10_10, ll_backend__continuation_info__V_34_34);
                                }
#line 8147 "ll_backend.continuation_info.c"
                                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_58_58 == (MR_Integer) 0);
#line 84 "continuation_info.m"
                                ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 84 "continuation_info.m"
                                if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                  *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_58_58;
#line 84 "continuation_info.m"
                                else
#line 84 "continuation_info.m"
                                  {
#line 84 "continuation_info.m"
                                    MR_Word ll_backend__continuation_info__V_59_59;

#line 84 "continuation_info.m"
                                    {
#line 84 "continuation_info.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[12], &ll_backend__continuation_info__V_59_59, ((MR_Box) (ll_backend__continuation_info__V_11_11)), ((MR_Box) (ll_backend__continuation_info__V_35_35)));
                                    }
#line 8167 "ll_backend.continuation_info.c"
                                    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_59_59 == (MR_Integer) 0);
#line 84 "continuation_info.m"
                                    ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 84 "continuation_info.m"
                                    if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                      *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_59_59;
#line 84 "continuation_info.m"
                                    else
#line 84 "continuation_info.m"
                                      {
#line 84 "continuation_info.m"
                                        MR_Word ll_backend__continuation_info__V_60_60;

#line 84 "continuation_info.m"
                                        {
#line 84 "continuation_info.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__continuation_info__V_60_60, ll_backend__continuation_info__V_12_12, ll_backend__continuation_info__V_36_36);
                                        }
#line 8187 "ll_backend.continuation_info.c"
                                        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_60_60 == (MR_Integer) 0);
#line 84 "continuation_info.m"
                                        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 84 "continuation_info.m"
                                        if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_60_60;
#line 84 "continuation_info.m"
                                        else
#line 84 "continuation_info.m"
                                          {
#line 84 "continuation_info.m"
                                            MR_Word ll_backend__continuation_info__V_61_61;

#line 84 "continuation_info.m"
                                            {
#line 84 "continuation_info.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__continuation_info__V_61_61, ll_backend__continuation_info__V_13_13, ll_backend__continuation_info__V_37_37);
                                            }
#line 8207 "ll_backend.continuation_info.c"
                                            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_61_61 == (MR_Integer) 0);
#line 84 "continuation_info.m"
                                            ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 84 "continuation_info.m"
                                            if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                              *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_61_61;
#line 84 "continuation_info.m"
                                            else
#line 84 "continuation_info.m"
                                              {
#line 84 "continuation_info.m"
                                                MR_Word ll_backend__continuation_info__V_62_62;

#line 84 "continuation_info.m"
                                                {
#line 84 "continuation_info.m"
                                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[13], &ll_backend__continuation_info__V_62_62, ((MR_Box) (ll_backend__continuation_info__V_14_14)), ((MR_Box) (ll_backend__continuation_info__V_38_38)));
                                                }
#line 8227 "ll_backend.continuation_info.c"
                                                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_62_62 == (MR_Integer) 0);
#line 84 "continuation_info.m"
                                                ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 84 "continuation_info.m"
                                                if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                                  *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_62_62;
#line 84 "continuation_info.m"
                                                else
#line 84 "continuation_info.m"
                                                  {
#line 84 "continuation_info.m"
                                                    MR_Word ll_backend__continuation_info__V_63_63;

#line 84 "continuation_info.m"
                                                    {
#line 84 "continuation_info.m"
                                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[14], &ll_backend__continuation_info__V_63_63, ((MR_Box) (ll_backend__continuation_info__V_15_15)), ((MR_Box) (ll_backend__continuation_info__V_39_39)));
                                                    }
#line 8247 "ll_backend.continuation_info.c"
                                                    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_63_63 == (MR_Integer) 0);
#line 84 "continuation_info.m"
                                                    ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 84 "continuation_info.m"
                                                    if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                                      *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_63_63;
#line 84 "continuation_info.m"
                                                    else
#line 84 "continuation_info.m"
                                                      {
#line 84 "continuation_info.m"
                                                        MR_Word ll_backend__continuation_info__V_64_64;

#line 84 "continuation_info.m"
                                                        {
#line 84 "continuation_info.m"
                                                          hlds__hlds_goal____Compare____hlds_goal_0_0(&ll_backend__continuation_info__V_64_64, ll_backend__continuation_info__V_16_16, ll_backend__continuation_info__V_40_40);
                                                        }
#line 8267 "ll_backend.continuation_info.c"
                                                        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_64_64 == (MR_Integer) 0);
#line 84 "continuation_info.m"
                                                        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 84 "continuation_info.m"
                                                        if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                                          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_64_64;
#line 84 "continuation_info.m"
                                                        else
#line 84 "continuation_info.m"
                                                          {
#line 84 "continuation_info.m"
                                                            MR_Word ll_backend__continuation_info__V_65_65;
#line 84 "continuation_info.m"
                                                            MR_Integer ll_backend__continuation_info__V_103_103 = (MR_Integer) ll_backend__continuation_info__V_17_17;
#line 84 "continuation_info.m"
                                                            MR_Integer ll_backend__continuation_info__V_104_104 = (MR_Integer) ll_backend__continuation_info__V_41_41;

#line 84 "continuation_info.m"
                                                            {
#line 84 "continuation_info.m"
                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__continuation_info__V_65_65, ll_backend__continuation_info__V_103_103, ll_backend__continuation_info__V_104_104);
                                                            }
#line 8291 "ll_backend.continuation_info.c"
                                                            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_65_65 == (MR_Integer) 0);
#line 84 "continuation_info.m"
                                                            ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 84 "continuation_info.m"
                                                            if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                                              *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_65_65;
#line 84 "continuation_info.m"
                                                            else
#line 84 "continuation_info.m"
                                                              {
#line 84 "continuation_info.m"
                                                                MR_Word ll_backend__continuation_info__V_66_66;

#line 84 "continuation_info.m"
                                                                {
#line 84 "continuation_info.m"
                                                                  hlds__instmap____Compare____instmap_0_0(&ll_backend__continuation_info__V_66_66, ll_backend__continuation_info__V_18_18, ll_backend__continuation_info__V_42_42);
                                                                }
#line 8311 "ll_backend.continuation_info.c"
                                                                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_66_66 == (MR_Integer) 0);
#line 84 "continuation_info.m"
                                                                ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 84 "continuation_info.m"
                                                                if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                                                  *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_66_66;
#line 84 "continuation_info.m"
                                                                else
#line 84 "continuation_info.m"
                                                                  {
#line 84 "continuation_info.m"
                                                                    MR_Word ll_backend__continuation_info__V_67_67;

#line 84 "continuation_info.m"
                                                                    {
#line 84 "continuation_info.m"
                                                                      ll_backend__trace_gen____Compare____trace_slot_info_0_0(&ll_backend__continuation_info__V_67_67, ll_backend__continuation_info__V_19_19, ll_backend__continuation_info__V_43_43);
                                                                    }
#line 8331 "ll_backend.continuation_info.c"
                                                                    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_67_67 == (MR_Integer) 0);
#line 84 "continuation_info.m"
                                                                    ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 84 "continuation_info.m"
                                                                    if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                                                      *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_67_67;
#line 84 "continuation_info.m"
                                                                    else
#line 84 "continuation_info.m"
                                                                      {
#line 84 "continuation_info.m"
                                                                        MR_Word ll_backend__continuation_info__V_68_68;
#line 84 "continuation_info.m"
                                                                        MR_Integer ll_backend__continuation_info__V_105_105 = (MR_Integer) ll_backend__continuation_info__V_20_20;
#line 84 "continuation_info.m"
                                                                        MR_Integer ll_backend__continuation_info__V_106_106 = (MR_Integer) ll_backend__continuation_info__V_44_44;

#line 84 "continuation_info.m"
                                                                        {
#line 84 "continuation_info.m"
                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__continuation_info__V_68_68, ll_backend__continuation_info__V_105_105, ll_backend__continuation_info__V_106_106);
                                                                        }
#line 8355 "ll_backend.continuation_info.c"
                                                                        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_68_68 == (MR_Integer) 0);
#line 84 "continuation_info.m"
                                                                        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 84 "continuation_info.m"
                                                                        if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                                                          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_68_68;
#line 84 "continuation_info.m"
                                                                        else
#line 84 "continuation_info.m"
                                                                          {
#line 84 "continuation_info.m"
                                                                            MR_Word ll_backend__continuation_info__V_69_69;

#line 84 "continuation_info.m"
                                                                            {
#line 84 "continuation_info.m"
                                                                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[15], &ll_backend__continuation_info__V_69_69, ((MR_Box) (ll_backend__continuation_info__V_21_21)), ((MR_Box) (ll_backend__continuation_info__V_45_45)));
                                                                            }
#line 8375 "ll_backend.continuation_info.c"
                                                                            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_69_69 == (MR_Integer) 0);
#line 84 "continuation_info.m"
                                                                            ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 84 "continuation_info.m"
                                                                            if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                                                              *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_69_69;
#line 84 "continuation_info.m"
                                                                            else
#line 84 "continuation_info.m"
                                                                              {
#line 84 "continuation_info.m"
                                                                                MR_Word ll_backend__continuation_info__V_70_70;

#line 84 "continuation_info.m"
                                                                                {
#line 84 "continuation_info.m"
                                                                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_2[2], &ll_backend__continuation_info__V_70_70, ((MR_Box) (ll_backend__continuation_info__V_22_22)), ((MR_Box) (ll_backend__continuation_info__V_46_46)));
                                                                                }
#line 8395 "ll_backend.continuation_info.c"
                                                                                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_70_70 == (MR_Integer) 0);
#line 84 "continuation_info.m"
                                                                                ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 84 "continuation_info.m"
                                                                                if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                                                                  *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_70_70;
#line 84 "continuation_info.m"
                                                                                else
#line 84 "continuation_info.m"
                                                                                  {
#line 84 "continuation_info.m"
                                                                                    MR_Word ll_backend__continuation_info__V_71_71;

#line 84 "continuation_info.m"
                                                                                    {
#line 84 "continuation_info.m"
                                                                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_2[0], &ll_backend__continuation_info__V_71_71, ((MR_Box) (ll_backend__continuation_info__V_23_23)), ((MR_Box) (ll_backend__continuation_info__V_47_47)));
                                                                                    }
#line 8415 "ll_backend.continuation_info.c"
                                                                                    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_71_71 == (MR_Integer) 0);
#line 84 "continuation_info.m"
                                                                                    ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 84 "continuation_info.m"
                                                                                    if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                                                                      *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_71_71;
#line 84 "continuation_info.m"
                                                                                    else
#line 84 "continuation_info.m"
                                                                                      {
#line 84 "continuation_info.m"
                                                                                        MR_Word ll_backend__continuation_info__V_72_72;

#line 84 "continuation_info.m"
                                                                                        {
#line 84 "continuation_info.m"
                                                                                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[16], &ll_backend__continuation_info__V_72_72, ((MR_Box) (ll_backend__continuation_info__V_24_24)), ((MR_Box) (ll_backend__continuation_info__V_48_48)));
                                                                                        }
#line 8435 "ll_backend.continuation_info.c"
                                                                                        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_72_72 == (MR_Integer) 0);
#line 84 "continuation_info.m"
                                                                                        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 84 "continuation_info.m"
                                                                                        if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                                                                          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_72_72;
#line 84 "continuation_info.m"
                                                                                        else
#line 84 "continuation_info.m"
                                                                                          {
#line 84 "continuation_info.m"
                                                                                            MR_Word ll_backend__continuation_info__V_73_73;
#line 84 "continuation_info.m"
                                                                                            MR_Integer ll_backend__continuation_info__V_107_107 = (MR_Integer) ll_backend__continuation_info__V_25_25;
#line 84 "continuation_info.m"
                                                                                            MR_Integer ll_backend__continuation_info__V_108_108 = (MR_Integer) ll_backend__continuation_info__V_49_49;

#line 84 "continuation_info.m"
                                                                                            {
#line 84 "continuation_info.m"
                                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__continuation_info__V_73_73, ll_backend__continuation_info__V_107_107, ll_backend__continuation_info__V_108_108);
                                                                                            }
#line 8459 "ll_backend.continuation_info.c"
                                                                                            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_73_73 == (MR_Integer) 0);
#line 84 "continuation_info.m"
                                                                                            ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 84 "continuation_info.m"
                                                                                            if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                                                                              *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_73_73;
#line 84 "continuation_info.m"
                                                                                            else
#line 84 "continuation_info.m"
                                                                                              {
#line 84 "continuation_info.m"
                                                                                                MR_Word ll_backend__continuation_info__V_74_74;

#line 84 "continuation_info.m"
                                                                                                {
#line 84 "continuation_info.m"
                                                                                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[17], &ll_backend__continuation_info__V_74_74, ((MR_Box) (ll_backend__continuation_info__V_26_26)), ((MR_Box) (ll_backend__continuation_info__V_50_50)));
                                                                                                }
#line 8479 "ll_backend.continuation_info.c"
                                                                                                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_74_74 == (MR_Integer) 0);
#line 84 "continuation_info.m"
                                                                                                ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 84 "continuation_info.m"
                                                                                                if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                                                                                  *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_74_74;
#line 84 "continuation_info.m"
                                                                                                else
#line 84 "continuation_info.m"
                                                                                                  {
#line 84 "continuation_info.m"
                                                                                                    {
#line 84 "continuation_info.m"
                                                                                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[18], ll_backend__continuation_info__HeadVar__1_1, ((MR_Box) (ll_backend__continuation_info__V_27_27)), ((MR_Box) (ll_backend__continuation_info__V_51_51)));
#line 84 "continuation_info.m"
                                                                                                      return;
                                                                                                    }
#line 84 "continuation_info.m"
                                                                                                  }
#line 84 "continuation_info.m"
                                                                                              }
#line 84 "continuation_info.m"
                                                                                          }
#line 84 "continuation_info.m"
                                                                                      }
#line 84 "continuation_info.m"
                                                                                  }
#line 84 "continuation_info.m"
                                                                              }
#line 84 "continuation_info.m"
                                                                          }
#line 84 "continuation_info.m"
                                                                      }
#line 84 "continuation_info.m"
                                                                  }
#line 84 "continuation_info.m"
                                                              }
#line 84 "continuation_info.m"
                                                          }
#line 84 "continuation_info.m"
                                                      }
#line 84 "continuation_info.m"
                                                  }
#line 84 "continuation_info.m"
                                              }
#line 84 "continuation_info.m"
                                          }
#line 84 "continuation_info.m"
                                      }
#line 84 "continuation_info.m"
                                  }
#line 84 "continuation_info.m"
                              }
#line 84 "continuation_info.m"
                          }
#line 84 "continuation_info.m"
                      }
#line 84 "continuation_info.m"
                  }
#line 84 "continuation_info.m"
              }
#line 84 "continuation_info.m"
          }
#line 84 "continuation_info.m"
      }
#line 84 "continuation_info.m"
  }
#line 84 "continuation_info.m"
}

#line 84 "continuation_info.m"
MR_bool MR_CALL 
ll_backend__continuation_info____Unify____proc_layout_info_0_0(
#line 84 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 84 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2)
#line 84 "continuation_info.m"
{
#line 84 "continuation_info.m"
  {
#line 84 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 84 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_51 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 84 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_52 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 84 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_51 == ll_backend__continuation_info__CastY_52);
#line 84 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
      ll_backend__continuation_info__succeeded = MR_TRUE;
#line 84 "continuation_info.m"
    else
#line 84 "continuation_info.m"
      {
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_55_55;
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_58_58;
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_59_59;
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_60_60;
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_64_64;
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_65_65;
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_66_66;
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_67_67;
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_68_68;
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_69_69;
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 2)));
#line 84 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 3)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 4)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 5)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 6)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 7)));
#line 84 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 8)));
#line 84 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 9)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 10)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 11)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 12)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 13)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 14)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 15)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 16)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 17)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 18)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 19)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 20)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 21)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 22)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 23)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 2)));
#line 84 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 3)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 4)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 5)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 6)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 7)));
#line 84 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 8)));
#line 84 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 9)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 10)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 11)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 12)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 13)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 14)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 15)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 16)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 17)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 18)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 19)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 20)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 21)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 22)));
#line 84 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 23)));

#line 8696 "ll_backend.continuation_info.c"
        {
#line 8698 "ll_backend.continuation_info.c"
          ll_backend__continuation_info__succeeded = hlds__hlds_rtti____Unify____rtti_proc_label_0_0(ll_backend__continuation_info__V_3_3, ll_backend__continuation_info__V_27_27);
        }
#line 84 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
          {
#line 8705 "ll_backend.continuation_info.c"
            {
#line 8707 "ll_backend.continuation_info.c"
              ll_backend__continuation_info__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__continuation_info__V_4_4, ll_backend__continuation_info__V_28_28);
            }
#line 84 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
              {
#line 8714 "ll_backend.continuation_info.c"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_5_5 == ll_backend__continuation_info__V_29_29);
#line 84 "continuation_info.m"
                if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                  {
#line 8720 "ll_backend.continuation_info.c"
                    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_6_6 == ll_backend__continuation_info__V_30_30);
#line 84 "continuation_info.m"
                    if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                      {
#line 8726 "ll_backend.continuation_info.c"
                        ll_backend__continuation_info__TypeInfo_55_55 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[11];
#line 8728 "ll_backend.continuation_info.c"
                        {
#line 8730 "ll_backend.continuation_info.c"
                          ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_55_55, ((MR_Box) (ll_backend__continuation_info__V_7_7)), ((MR_Box) (ll_backend__continuation_info__V_31_31)));
                        }
#line 84 "continuation_info.m"
                        if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                          {
#line 8737 "ll_backend.continuation_info.c"
                            {
#line 8739 "ll_backend.continuation_info.c"
                              ll_backend__continuation_info__succeeded = parse_tree__prog_data____Unify____eval_method_0_0(ll_backend__continuation_info__V_8_8, ll_backend__continuation_info__V_32_32);
                            }
#line 84 "continuation_info.m"
                            if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                              {
#line 8746 "ll_backend.continuation_info.c"
                                {
#line 8748 "ll_backend.continuation_info.c"
                                  ll_backend__continuation_info__succeeded = libs__trace_params____Unify____trace_level_0_0(ll_backend__continuation_info__V_9_9, ll_backend__continuation_info__V_33_33);
                                }
#line 84 "continuation_info.m"
                                if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                  {
#line 8755 "ll_backend.continuation_info.c"
                                    ll_backend__continuation_info__TypeInfo_58_58 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[12];
#line 8757 "ll_backend.continuation_info.c"
                                    {
#line 8759 "ll_backend.continuation_info.c"
                                      ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_58_58, ((MR_Box) (ll_backend__continuation_info__V_10_10)), ((MR_Box) (ll_backend__continuation_info__V_34_34)));
                                    }
#line 84 "continuation_info.m"
                                    if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                      {
#line 8766 "ll_backend.continuation_info.c"
                                        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_11_11 == ll_backend__continuation_info__V_35_35);
#line 84 "continuation_info.m"
                                        if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                          {
#line 8772 "ll_backend.continuation_info.c"
                                            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_12_12 == ll_backend__continuation_info__V_36_36);
#line 84 "continuation_info.m"
                                            if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                              {
#line 8778 "ll_backend.continuation_info.c"
                                                ll_backend__continuation_info__TypeInfo_59_59 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[13];
#line 8780 "ll_backend.continuation_info.c"
                                                {
#line 8782 "ll_backend.continuation_info.c"
                                                  ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_59_59, ((MR_Box) (ll_backend__continuation_info__V_13_13)), ((MR_Box) (ll_backend__continuation_info__V_37_37)));
                                                }
#line 84 "continuation_info.m"
                                                if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                                  {
#line 8789 "ll_backend.continuation_info.c"
                                                    ll_backend__continuation_info__TypeInfo_60_60 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[14];
#line 8791 "ll_backend.continuation_info.c"
                                                    {
#line 8793 "ll_backend.continuation_info.c"
                                                      ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_60_60, ((MR_Box) (ll_backend__continuation_info__V_14_14)), ((MR_Box) (ll_backend__continuation_info__V_38_38)));
                                                    }
#line 84 "continuation_info.m"
                                                    if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                                      {
#line 8800 "ll_backend.continuation_info.c"
                                                        {
#line 8802 "ll_backend.continuation_info.c"
                                                          ll_backend__continuation_info__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(ll_backend__continuation_info__V_15_15, ll_backend__continuation_info__V_39_39);
                                                        }
#line 84 "continuation_info.m"
                                                        if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                                          {
#line 8809 "ll_backend.continuation_info.c"
                                                            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_16_16 == ll_backend__continuation_info__V_40_40);
#line 84 "continuation_info.m"
                                                            if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                                              {
#line 8815 "ll_backend.continuation_info.c"
                                                                {
#line 8817 "ll_backend.continuation_info.c"
                                                                  ll_backend__continuation_info__succeeded = hlds__instmap____Unify____instmap_0_0(ll_backend__continuation_info__V_17_17, ll_backend__continuation_info__V_41_41);
                                                                }
#line 84 "continuation_info.m"
                                                                if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                                                  {
#line 8824 "ll_backend.continuation_info.c"
                                                                    {
#line 8826 "ll_backend.continuation_info.c"
                                                                      ll_backend__continuation_info__succeeded = ll_backend__trace_gen____Unify____trace_slot_info_0_0(ll_backend__continuation_info__V_18_18, ll_backend__continuation_info__V_42_42);
                                                                    }
#line 84 "continuation_info.m"
                                                                    if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                                                      {
#line 8833 "ll_backend.continuation_info.c"
                                                                        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_19_19 == ll_backend__continuation_info__V_43_43);
#line 84 "continuation_info.m"
                                                                        if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                                                          {
#line 8839 "ll_backend.continuation_info.c"
                                                                            ll_backend__continuation_info__TypeInfo_64_64 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[15];
#line 8841 "ll_backend.continuation_info.c"
                                                                            {
#line 8843 "ll_backend.continuation_info.c"
                                                                              ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_64_64, ((MR_Box) (ll_backend__continuation_info__V_20_20)), ((MR_Box) (ll_backend__continuation_info__V_44_44)));
                                                                            }
#line 84 "continuation_info.m"
                                                                            if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                                                              {
#line 8850 "ll_backend.continuation_info.c"
                                                                                ll_backend__continuation_info__TypeInfo_65_65 = (MR_Word) &ll_backend__continuation_info_scalar_common_2[2];
#line 8852 "ll_backend.continuation_info.c"
                                                                                {
#line 8854 "ll_backend.continuation_info.c"
                                                                                  ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_65_65, ((MR_Box) (ll_backend__continuation_info__V_21_21)), ((MR_Box) (ll_backend__continuation_info__V_45_45)));
                                                                                }
#line 84 "continuation_info.m"
                                                                                if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                                                                  {
#line 8861 "ll_backend.continuation_info.c"
                                                                                    ll_backend__continuation_info__TypeInfo_66_66 = (MR_Word) &ll_backend__continuation_info_scalar_common_2[0];
#line 8863 "ll_backend.continuation_info.c"
                                                                                    {
#line 8865 "ll_backend.continuation_info.c"
                                                                                      ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_66_66, ((MR_Box) (ll_backend__continuation_info__V_22_22)), ((MR_Box) (ll_backend__continuation_info__V_46_46)));
                                                                                    }
#line 84 "continuation_info.m"
                                                                                    if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                                                                      {
#line 8872 "ll_backend.continuation_info.c"
                                                                                        ll_backend__continuation_info__TypeInfo_67_67 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[16];
#line 8874 "ll_backend.continuation_info.c"
                                                                                        {
#line 8876 "ll_backend.continuation_info.c"
                                                                                          ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_67_67, ((MR_Box) (ll_backend__continuation_info__V_23_23)), ((MR_Box) (ll_backend__continuation_info__V_47_47)));
                                                                                        }
#line 84 "continuation_info.m"
                                                                                        if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                                                                          {
#line 8883 "ll_backend.continuation_info.c"
                                                                                            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_24_24 == ll_backend__continuation_info__V_48_48);
#line 84 "continuation_info.m"
                                                                                            if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                                                                              {
#line 8889 "ll_backend.continuation_info.c"
                                                                                                ll_backend__continuation_info__TypeInfo_68_68 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[17];
#line 8891 "ll_backend.continuation_info.c"
                                                                                                {
#line 8893 "ll_backend.continuation_info.c"
                                                                                                  ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_68_68, ((MR_Box) (ll_backend__continuation_info__V_25_25)), ((MR_Box) (ll_backend__continuation_info__V_49_49)));
                                                                                                }
#line 84 "continuation_info.m"
                                                                                                if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                                                                                  {
#line 8900 "ll_backend.continuation_info.c"
                                                                                                    ll_backend__continuation_info__TypeInfo_69_69 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[18];
#line 8902 "ll_backend.continuation_info.c"
                                                                                                    {
#line 8904 "ll_backend.continuation_info.c"
                                                                                                      return ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_69_69, ((MR_Box) (ll_backend__continuation_info__V_26_26)), ((MR_Box) (ll_backend__continuation_info__V_50_50)));
                                                                                                    }
#line 84 "continuation_info.m"
                                                                                                  }
#line 84 "continuation_info.m"
                                                                                              }
#line 84 "continuation_info.m"
                                                                                          }
#line 84 "continuation_info.m"
                                                                                      }
#line 84 "continuation_info.m"
                                                                                  }
#line 84 "continuation_info.m"
                                                                              }
#line 84 "continuation_info.m"
                                                                          }
#line 84 "continuation_info.m"
                                                                      }
#line 84 "continuation_info.m"
                                                                  }
#line 84 "continuation_info.m"
                                                              }
#line 84 "continuation_info.m"
                                                          }
#line 84 "continuation_info.m"
                                                      }
#line 84 "continuation_info.m"
                                                  }
#line 84 "continuation_info.m"
                                              }
#line 84 "continuation_info.m"
                                          }
#line 84 "continuation_info.m"
                                      }
#line 84 "continuation_info.m"
                                  }
#line 84 "continuation_info.m"
                              }
#line 84 "continuation_info.m"
                          }
#line 84 "continuation_info.m"
                      }
#line 84 "continuation_info.m"
                  }
#line 84 "continuation_info.m"
              }
#line 84 "continuation_info.m"
          }
#line 84 "continuation_info.m"
      }
#line 84 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 84 "continuation_info.m"
  }
#line 84 "continuation_info.m"
}

#line 182 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info____Compare____proc_label_layout_info_0_0(
#line 182 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 182 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 182 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3)
#line 182 "continuation_info.m"
{
#line 182 "continuation_info.m"
  {
#line 182 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 182 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Cast_HeadVar1_4 = ll_backend__continuation_info__HeadVar__2_2;
#line 182 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Cast_HeadVar2_5 = ll_backend__continuation_info__HeadVar__3_3;

#line 182 "continuation_info.m"
    {
#line 182 "continuation_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_2[0], ll_backend__continuation_info__HeadVar__1_1, ((MR_Box) (ll_backend__continuation_info__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__continuation_info__Cast_HeadVar2_5)));
#line 182 "continuation_info.m"
      return;
    }
#line 182 "continuation_info.m"
  }
#line 182 "continuation_info.m"
}

#line 182 "continuation_info.m"
MR_bool MR_CALL 
ll_backend__continuation_info____Unify____proc_label_layout_info_0_0(
#line 182 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 182 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2)
#line 182 "continuation_info.m"
{
#line 182 "continuation_info.m"
  {
#line 182 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 182 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Cast_HeadVar1_3 = ll_backend__continuation_info__HeadVar__1_1;
#line 182 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Cast_HeadVar2_4 = ll_backend__continuation_info__HeadVar__2_2;

#line 182 "continuation_info.m"
    {
#line 182 "continuation_info.m"
      return ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_2[0], ((MR_Box) (ll_backend__continuation_info__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__continuation_info__Cast_HeadVar2_4)));
    }
#line 182 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 182 "continuation_info.m"
  }
#line 182 "continuation_info.m"
}

#line 161 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info____Compare____proc_deep_prof_info_0_0(
#line 161 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 161 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 161 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3)
#line 161 "continuation_info.m"
{
#line 161 "continuation_info.m"
  {
#line 161 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 161 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_12 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;
#line 161 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_13 = (MR_Integer) ll_backend__continuation_info__HeadVar__3_3;

#line 161 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_12 == ll_backend__continuation_info__CastY_13);
#line 161 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 9048 "ll_backend.continuation_info.c"
      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 161 "continuation_info.m"
    else
#line 161 "continuation_info.m"
      {
#line 161 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 161 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 161 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 2)));
#line 161 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));
#line 161 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 1)));
#line 161 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 2)));
#line 161 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_10_10;

#line 161 "continuation_info.m"
        {
#line 161 "continuation_info.m"
          hlds__hlds_pred____Compare____hlds_proc_static_0_0(&ll_backend__continuation_info__V_10_10, ll_backend__continuation_info__V_4_4, ll_backend__continuation_info__V_7_7);
        }
#line 9074 "ll_backend.continuation_info.c"
        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_10_10 == (MR_Integer) 0);
#line 161 "continuation_info.m"
        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 161 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 161 "continuation_info.m"
          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_10_10;
#line 161 "continuation_info.m"
        else
#line 161 "continuation_info.m"
          {
#line 161 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_11_11;

#line 161 "continuation_info.m"
            {
#line 161 "continuation_info.m"
              ll_backend__layout____Compare____deep_excp_slots_0_0(&ll_backend__continuation_info__V_11_11, ll_backend__continuation_info__V_5_5, ll_backend__continuation_info__V_8_8);
            }
#line 9094 "ll_backend.continuation_info.c"
            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_11_11 == (MR_Integer) 0);
#line 161 "continuation_info.m"
            ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 161 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 161 "continuation_info.m"
              *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_11_11;
#line 161 "continuation_info.m"
            else
#line 161 "continuation_info.m"
              {
#line 161 "continuation_info.m"
                hlds__hlds_pred____Compare____deep_original_body_0_0(ll_backend__continuation_info__HeadVar__1_1, ll_backend__continuation_info__V_6_6, ll_backend__continuation_info__V_9_9);
#line 161 "continuation_info.m"
                return;
              }
#line 161 "continuation_info.m"
          }
#line 161 "continuation_info.m"
      }
#line 161 "continuation_info.m"
  }
#line 161 "continuation_info.m"
}

#line 161 "continuation_info.m"
MR_bool MR_CALL 
ll_backend__continuation_info____Unify____proc_deep_prof_info_0_0(
#line 161 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 161 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2)
#line 161 "continuation_info.m"
{
#line 161 "continuation_info.m"
  {
#line 161 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 161 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_9 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 161 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_10 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 161 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_9 == ll_backend__continuation_info__CastY_10);
#line 161 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 161 "continuation_info.m"
      ll_backend__continuation_info__succeeded = MR_TRUE;
#line 161 "continuation_info.m"
    else
#line 161 "continuation_info.m"
      {
#line 161 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 161 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 161 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 2)));
#line 161 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 161 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 161 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 2)));

#line 9161 "ll_backend.continuation_info.c"
        {
#line 9163 "ll_backend.continuation_info.c"
          ll_backend__continuation_info__succeeded = hlds__hlds_pred____Unify____hlds_proc_static_0_0(ll_backend__continuation_info__V_3_3, ll_backend__continuation_info__V_6_6);
        }
#line 161 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 161 "continuation_info.m"
          {
#line 9170 "ll_backend.continuation_info.c"
            {
#line 9172 "ll_backend.continuation_info.c"
              ll_backend__continuation_info__succeeded = ll_backend__layout____Unify____deep_excp_slots_0_0(ll_backend__continuation_info__V_4_4, ll_backend__continuation_info__V_7_7);
            }
#line 161 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 9177 "ll_backend.continuation_info.c"
              {
#line 9179 "ll_backend.continuation_info.c"
                return ll_backend__continuation_info__succeeded = hlds__hlds_pred____Unify____deep_original_body_0_0(ll_backend__continuation_info__V_5_5, ll_backend__continuation_info__V_8_8);
              }
#line 161 "continuation_info.m"
          }
#line 161 "continuation_info.m"
      }
#line 161 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 161 "continuation_info.m"
  }
#line 161 "continuation_info.m"
}

#line 293 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info____Compare____layout_var_info_0_0(
#line 293 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 293 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 293 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3)
#line 293 "continuation_info.m"
{
#line 293 "continuation_info.m"
  {
#line 293 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 293 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_12 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;
#line 293 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_13 = (MR_Integer) ll_backend__continuation_info__HeadVar__3_3;

#line 293 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_12 == ll_backend__continuation_info__CastY_13);
#line 293 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 9217 "ll_backend.continuation_info.c"
      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 293 "continuation_info.m"
    else
#line 293 "continuation_info.m"
      {
#line 293 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 293 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 293 "continuation_info.m"
        MR_String ll_backend__continuation_info__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 2)));
#line 293 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));
#line 293 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 1)));
#line 293 "continuation_info.m"
        MR_String ll_backend__continuation_info__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 2)));
#line 293 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_10_10;

#line 293 "continuation_info.m"
        {
#line 293 "continuation_info.m"
          ll_backend__llds____Compare____layout_locn_0_0(&ll_backend__continuation_info__V_10_10, ll_backend__continuation_info__V_4_4, ll_backend__continuation_info__V_7_7);
        }
#line 9243 "ll_backend.continuation_info.c"
        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_10_10 == (MR_Integer) 0);
#line 293 "continuation_info.m"
        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 293 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 293 "continuation_info.m"
          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_10_10;
#line 293 "continuation_info.m"
        else
#line 293 "continuation_info.m"
          {
#line 293 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_11_11;

#line 293 "continuation_info.m"
            {
#line 293 "continuation_info.m"
              ll_backend__llds____Compare____live_value_type_0_0(&ll_backend__continuation_info__V_11_11, ll_backend__continuation_info__V_5_5, ll_backend__continuation_info__V_8_8);
            }
#line 9263 "ll_backend.continuation_info.c"
            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_11_11 == (MR_Integer) 0);
#line 293 "continuation_info.m"
            ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 293 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 293 "continuation_info.m"
              *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_11_11;
#line 293 "continuation_info.m"
            else
#line 293 "continuation_info.m"
              {
#line 293 "continuation_info.m"
                mercury__private_builtin__builtin_compare_string_3_p_0(ll_backend__continuation_info__HeadVar__1_1, ll_backend__continuation_info__V_6_6, ll_backend__continuation_info__V_9_9);
#line 293 "continuation_info.m"
                return;
              }
#line 293 "continuation_info.m"
          }
#line 293 "continuation_info.m"
      }
#line 293 "continuation_info.m"
  }
#line 293 "continuation_info.m"
}

#line 293 "continuation_info.m"
MR_bool MR_CALL 
ll_backend__continuation_info____Unify____layout_var_info_0_0(
#line 293 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 293 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2)
#line 293 "continuation_info.m"
{
#line 293 "continuation_info.m"
  {
#line 293 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 293 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_9 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 293 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_10 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 293 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_9 == ll_backend__continuation_info__CastY_10);
#line 293 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 293 "continuation_info.m"
      ll_backend__continuation_info__succeeded = MR_TRUE;
#line 293 "continuation_info.m"
    else
#line 293 "continuation_info.m"
      {
#line 293 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 293 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 293 "continuation_info.m"
        MR_String ll_backend__continuation_info__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 2)));
#line 293 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 293 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 293 "continuation_info.m"
        MR_String ll_backend__continuation_info__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 2)));

#line 9330 "ll_backend.continuation_info.c"
        {
#line 9332 "ll_backend.continuation_info.c"
          ll_backend__continuation_info__succeeded = ll_backend__llds____Unify____layout_locn_0_0(ll_backend__continuation_info__V_3_3, ll_backend__continuation_info__V_6_6);
        }
#line 293 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 293 "continuation_info.m"
          {
#line 9339 "ll_backend.continuation_info.c"
            {
#line 9341 "ll_backend.continuation_info.c"
              ll_backend__continuation_info__succeeded = ll_backend__llds____Unify____live_value_type_0_0(ll_backend__continuation_info__V_4_4, ll_backend__continuation_info__V_7_7);
            }
#line 293 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 9346 "ll_backend.continuation_info.c"
              ll_backend__continuation_info__succeeded = (strcmp(ll_backend__continuation_info__V_5_5, ll_backend__continuation_info__V_8_8) == 0);
#line 293 "continuation_info.m"
          }
#line 293 "continuation_info.m"
      }
#line 293 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 293 "continuation_info.m"
  }
#line 293 "continuation_info.m"
}

#line 284 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info____Compare____layout_label_info_0_0(
#line 284 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 284 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 284 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3)
#line 284 "continuation_info.m"
{
#line 284 "continuation_info.m"
  {
#line 284 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 284 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_9 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;
#line 284 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_10 = (MR_Integer) ll_backend__continuation_info__HeadVar__3_3;

#line 284 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_9 == ll_backend__continuation_info__CastY_10);
#line 284 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 9383 "ll_backend.continuation_info.c"
      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 284 "continuation_info.m"
    else
#line 284 "continuation_info.m"
      {
#line 284 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 284 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 284 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));
#line 284 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 1)));
#line 284 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8;

#line 284 "continuation_info.m"
        {
#line 284 "continuation_info.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[10], &ll_backend__continuation_info__V_8_8, ((MR_Box) (ll_backend__continuation_info__V_4_4)), ((MR_Box) (ll_backend__continuation_info__V_6_6)));
        }
#line 9405 "ll_backend.continuation_info.c"
        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_8_8 == (MR_Integer) 0);
#line 284 "continuation_info.m"
        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 284 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 284 "continuation_info.m"
          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_8_8;
#line 284 "continuation_info.m"
        else
#line 284 "continuation_info.m"
          {
#line 284 "continuation_info.m"
            {
#line 284 "continuation_info.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_2[1], ll_backend__continuation_info__HeadVar__1_1, ((MR_Box) (ll_backend__continuation_info__V_5_5)), ((MR_Box) (ll_backend__continuation_info__V_7_7)));
#line 284 "continuation_info.m"
              return;
            }
#line 284 "continuation_info.m"
          }
#line 284 "continuation_info.m"
      }
#line 284 "continuation_info.m"
  }
#line 284 "continuation_info.m"
}

#line 284 "continuation_info.m"
MR_bool MR_CALL 
ll_backend__continuation_info____Unify____layout_label_info_0_0(
#line 284 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 284 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2)
#line 284 "continuation_info.m"
{
#line 284 "continuation_info.m"
  {
#line 284 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 284 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_7 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 284 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_8 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 284 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_7 == ll_backend__continuation_info__CastY_8);
#line 284 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 284 "continuation_info.m"
      ll_backend__continuation_info__succeeded = MR_TRUE;
#line 284 "continuation_info.m"
    else
#line 284 "continuation_info.m"
      {
#line 284 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_10_10;
#line 284 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 284 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 284 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 284 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));

#line 9472 "ll_backend.continuation_info.c"
        {
#line 9474 "ll_backend.continuation_info.c"
          ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[10], ((MR_Box) (ll_backend__continuation_info__V_3_3)), ((MR_Box) (ll_backend__continuation_info__V_5_5)));
        }
#line 284 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 284 "continuation_info.m"
          {
#line 9481 "ll_backend.continuation_info.c"
            ll_backend__continuation_info__TypeInfo_10_10 = (MR_Word) &ll_backend__continuation_info_scalar_common_2[1];
#line 9483 "ll_backend.continuation_info.c"
            {
#line 9485 "ll_backend.continuation_info.c"
              return ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_10_10, ((MR_Box) (ll_backend__continuation_info__V_4_4)), ((MR_Box) (ll_backend__continuation_info__V_6_6)));
            }
#line 284 "continuation_info.m"
          }
#line 284 "continuation_info.m"
      }
#line 284 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 284 "continuation_info.m"
  }
#line 284 "continuation_info.m"
}

#line 259 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info____Compare____internal_layout_info_0_0(
#line 259 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 259 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 259 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3)
#line 259 "continuation_info.m"
{
#line 259 "continuation_info.m"
  {
#line 259 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 259 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_12 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;
#line 259 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_13 = (MR_Integer) ll_backend__continuation_info__HeadVar__3_3;

#line 259 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_12 == ll_backend__continuation_info__CastY_13);
#line 259 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 9523 "ll_backend.continuation_info.c"
      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 259 "continuation_info.m"
    else
#line 259 "continuation_info.m"
      {
#line 259 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 259 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 259 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 2)));
#line 259 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));
#line 259 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 1)));
#line 259 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 2)));
#line 259 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_10_10;

#line 259 "continuation_info.m"
        {
#line 259 "continuation_info.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[7], &ll_backend__continuation_info__V_10_10, ((MR_Box) (ll_backend__continuation_info__V_4_4)), ((MR_Box) (ll_backend__continuation_info__V_7_7)));
        }
#line 9549 "ll_backend.continuation_info.c"
        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_10_10 == (MR_Integer) 0);
#line 259 "continuation_info.m"
        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 259 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 259 "continuation_info.m"
          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_10_10;
#line 259 "continuation_info.m"
        else
#line 259 "continuation_info.m"
          {
#line 259 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_11_11;

#line 259 "continuation_info.m"
            {
#line 259 "continuation_info.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[8], &ll_backend__continuation_info__V_11_11, ((MR_Box) (ll_backend__continuation_info__V_5_5)), ((MR_Box) (ll_backend__continuation_info__V_8_8)));
            }
#line 9569 "ll_backend.continuation_info.c"
            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_11_11 == (MR_Integer) 0);
#line 259 "continuation_info.m"
            ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 259 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 259 "continuation_info.m"
              *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_11_11;
#line 259 "continuation_info.m"
            else
#line 259 "continuation_info.m"
              {
#line 259 "continuation_info.m"
                {
#line 259 "continuation_info.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[9], ll_backend__continuation_info__HeadVar__1_1, ((MR_Box) (ll_backend__continuation_info__V_6_6)), ((MR_Box) (ll_backend__continuation_info__V_9_9)));
#line 259 "continuation_info.m"
                  return;
                }
#line 259 "continuation_info.m"
              }
#line 259 "continuation_info.m"
          }
#line 259 "continuation_info.m"
      }
#line 259 "continuation_info.m"
  }
#line 259 "continuation_info.m"
}

#line 259 "continuation_info.m"
MR_bool MR_CALL 
ll_backend__continuation_info____Unify____internal_layout_info_0_0(
#line 259 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 259 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2)
#line 259 "continuation_info.m"
{
#line 259 "continuation_info.m"
  {
#line 259 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 259 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_9 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 259 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_10 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 259 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_9 == ll_backend__continuation_info__CastY_10);
#line 259 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 259 "continuation_info.m"
      ll_backend__continuation_info__succeeded = MR_TRUE;
#line 259 "continuation_info.m"
    else
#line 259 "continuation_info.m"
      {
#line 259 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_12_12;
#line 259 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_13_13;
#line 259 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 259 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 259 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 2)));
#line 259 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 259 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 259 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 2)));

#line 9644 "ll_backend.continuation_info.c"
        {
#line 9646 "ll_backend.continuation_info.c"
          ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[7], ((MR_Box) (ll_backend__continuation_info__V_3_3)), ((MR_Box) (ll_backend__continuation_info__V_6_6)));
        }
#line 259 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 259 "continuation_info.m"
          {
#line 9653 "ll_backend.continuation_info.c"
            ll_backend__continuation_info__TypeInfo_12_12 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[8];
#line 9655 "ll_backend.continuation_info.c"
            {
#line 9657 "ll_backend.continuation_info.c"
              ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_12_12, ((MR_Box) (ll_backend__continuation_info__V_4_4)), ((MR_Box) (ll_backend__continuation_info__V_7_7)));
            }
#line 259 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 259 "continuation_info.m"
              {
#line 9664 "ll_backend.continuation_info.c"
                ll_backend__continuation_info__TypeInfo_13_13 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[9];
#line 9666 "ll_backend.continuation_info.c"
                {
#line 9668 "ll_backend.continuation_info.c"
                  return ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_13_13, ((MR_Box) (ll_backend__continuation_info__V_5_5)), ((MR_Box) (ll_backend__continuation_info__V_8_8)));
                }
#line 259 "continuation_info.m"
              }
#line 259 "continuation_info.m"
          }
#line 259 "continuation_info.m"
      }
#line 259 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 259 "continuation_info.m"
  }
#line 259 "continuation_info.m"
}

#line 313 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info____Compare____closure_layout_info_0_0(
#line 313 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 313 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 313 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3)
#line 313 "continuation_info.m"
{
#line 313 "continuation_info.m"
  {
#line 313 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 313 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_9 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;
#line 313 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_10 = (MR_Integer) ll_backend__continuation_info__HeadVar__3_3;

#line 313 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_9 == ll_backend__continuation_info__CastY_10);
#line 313 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 9708 "ll_backend.continuation_info.c"
      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 313 "continuation_info.m"
    else
#line 313 "continuation_info.m"
      {
#line 313 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 313 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 313 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));
#line 313 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 1)));
#line 313 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8;

#line 313 "continuation_info.m"
        {
#line 313 "continuation_info.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[6], &ll_backend__continuation_info__V_8_8, ((MR_Box) (ll_backend__continuation_info__V_4_4)), ((MR_Box) (ll_backend__continuation_info__V_6_6)));
        }
#line 9730 "ll_backend.continuation_info.c"
        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_8_8 == (MR_Integer) 0);
#line 313 "continuation_info.m"
        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 313 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 313 "continuation_info.m"
          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_8_8;
#line 313 "continuation_info.m"
        else
#line 313 "continuation_info.m"
          {
#line 313 "continuation_info.m"
            {
#line 313 "continuation_info.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_2[1], ll_backend__continuation_info__HeadVar__1_1, ((MR_Box) (ll_backend__continuation_info__V_5_5)), ((MR_Box) (ll_backend__continuation_info__V_7_7)));
#line 313 "continuation_info.m"
              return;
            }
#line 313 "continuation_info.m"
          }
#line 313 "continuation_info.m"
      }
#line 313 "continuation_info.m"
  }
#line 313 "continuation_info.m"
}

#line 313 "continuation_info.m"
MR_bool MR_CALL 
ll_backend__continuation_info____Unify____closure_layout_info_0_0(
#line 313 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 313 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2)
#line 313 "continuation_info.m"
{
#line 313 "continuation_info.m"
  {
#line 313 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 313 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_7 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 313 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_8 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 313 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_7 == ll_backend__continuation_info__CastY_8);
#line 313 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 313 "continuation_info.m"
      ll_backend__continuation_info__succeeded = MR_TRUE;
#line 313 "continuation_info.m"
    else
#line 313 "continuation_info.m"
      {
#line 313 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_10_10;
#line 313 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 313 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 313 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 313 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));

#line 9797 "ll_backend.continuation_info.c"
        {
#line 9799 "ll_backend.continuation_info.c"
          ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[6], ((MR_Box) (ll_backend__continuation_info__V_3_3)), ((MR_Box) (ll_backend__continuation_info__V_5_5)));
        }
#line 313 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 313 "continuation_info.m"
          {
#line 9806 "ll_backend.continuation_info.c"
            ll_backend__continuation_info__TypeInfo_10_10 = (MR_Word) &ll_backend__continuation_info_scalar_common_2[1];
#line 9808 "ll_backend.continuation_info.c"
            {
#line 9810 "ll_backend.continuation_info.c"
              return ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_10_10, ((MR_Box) (ll_backend__continuation_info__V_4_4)), ((MR_Box) (ll_backend__continuation_info__V_6_6)));
            }
#line 313 "continuation_info.m"
          }
#line 313 "continuation_info.m"
      }
#line 313 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 313 "continuation_info.m"
  }
#line 313 "continuation_info.m"
}

#line 324 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info____Compare____closure_arg_info_0_0(
#line 324 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 324 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 324 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3)
#line 324 "continuation_info.m"
{
#line 324 "continuation_info.m"
  {
#line 324 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 324 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_9 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;
#line 324 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_10 = (MR_Integer) ll_backend__continuation_info__HeadVar__3_3;

#line 324 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_9 == ll_backend__continuation_info__CastY_10);
#line 324 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 9848 "ll_backend.continuation_info.c"
      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 324 "continuation_info.m"
    else
#line 324 "continuation_info.m"
      {
#line 324 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 324 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 324 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));
#line 324 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 1)));
#line 324 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8;

#line 324 "continuation_info.m"
        {
#line 324 "continuation_info.m"
          parse_tree__prog_data____Compare____mer_type_0_0(&ll_backend__continuation_info__V_8_8, ll_backend__continuation_info__V_4_4, ll_backend__continuation_info__V_6_6);
        }
#line 9870 "ll_backend.continuation_info.c"
        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_8_8 == (MR_Integer) 0);
#line 324 "continuation_info.m"
        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 324 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 324 "continuation_info.m"
          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_8_8;
#line 324 "continuation_info.m"
        else
#line 324 "continuation_info.m"
          {
#line 324 "continuation_info.m"
            parse_tree__prog_data____Compare____mer_inst_0_0(ll_backend__continuation_info__HeadVar__1_1, ll_backend__continuation_info__V_5_5, ll_backend__continuation_info__V_7_7);
#line 324 "continuation_info.m"
            return;
          }
#line 324 "continuation_info.m"
      }
#line 324 "continuation_info.m"
  }
#line 324 "continuation_info.m"
}

#line 324 "continuation_info.m"
MR_bool MR_CALL 
ll_backend__continuation_info____Unify____closure_arg_info_0_0(
#line 324 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 324 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2)
#line 324 "continuation_info.m"
{
#line 324 "continuation_info.m"
  {
#line 324 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 324 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_7 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 324 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_8 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 324 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_7 == ll_backend__continuation_info__CastY_8);
#line 324 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 324 "continuation_info.m"
      ll_backend__continuation_info__succeeded = MR_TRUE;
#line 324 "continuation_info.m"
    else
#line 324 "continuation_info.m"
      {
#line 324 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 324 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 324 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 324 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));

#line 9931 "ll_backend.continuation_info.c"
        {
#line 9933 "ll_backend.continuation_info.c"
          ll_backend__continuation_info__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ll_backend__continuation_info__V_3_3, ll_backend__continuation_info__V_5_5);
        }
#line 324 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 9938 "ll_backend.continuation_info.c"
          {
#line 9940 "ll_backend.continuation_info.c"
            return ll_backend__continuation_info__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ll_backend__continuation_info__V_4_4, ll_backend__continuation_info__V_6_6);
          }
#line 324 "continuation_info.m"
      }
#line 324 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 324 "continuation_info.m"
  }
#line 324 "continuation_info.m"
}

#line 448 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info____Compare____call_info_0_0(
#line 448 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 448 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 448 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3)
#line 448 "continuation_info.m"
{
#line 448 "continuation_info.m"
  {
#line 448 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 448 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_18 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;
#line 448 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_19 = (MR_Integer) ll_backend__continuation_info__HeadVar__3_3;

#line 448 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_18 == ll_backend__continuation_info__CastY_19);
#line 448 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 9976 "ll_backend.continuation_info.c"
      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 448 "continuation_info.m"
    else
#line 448 "continuation_info.m"
      {
#line 448 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 448 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 448 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 2)));
#line 448 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 3)));
#line 448 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 4)));
#line 448 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));
#line 448 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 1)));
#line 448 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 2)));
#line 448 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 3)));
#line 448 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 4)));
#line 448 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_14_14;

#line 448 "continuation_info.m"
        {
#line 448 "continuation_info.m"
          ll_backend__llds____Compare____label_0_0(&ll_backend__continuation_info__V_14_14, ll_backend__continuation_info__V_4_4, ll_backend__continuation_info__V_9_9);
        }
#line 10010 "ll_backend.continuation_info.c"
        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_14_14 == (MR_Integer) 0);
#line 448 "continuation_info.m"
        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 448 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 448 "continuation_info.m"
          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_14_14;
#line 448 "continuation_info.m"
        else
#line 448 "continuation_info.m"
          {
#line 448 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_15_15;

#line 448 "continuation_info.m"
            {
#line 448 "continuation_info.m"
              ll_backend__llds____Compare____code_addr_0_0(&ll_backend__continuation_info__V_15_15, ll_backend__continuation_info__V_5_5, ll_backend__continuation_info__V_10_10);
            }
#line 10030 "ll_backend.continuation_info.c"
            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_15_15 == (MR_Integer) 0);
#line 448 "continuation_info.m"
            ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 448 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 448 "continuation_info.m"
              *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_15_15;
#line 448 "continuation_info.m"
            else
#line 448 "continuation_info.m"
              {
#line 448 "continuation_info.m"
                MR_Word ll_backend__continuation_info__V_16_16;

#line 448 "continuation_info.m"
                {
#line 448 "continuation_info.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[4], &ll_backend__continuation_info__V_16_16, ((MR_Box) (ll_backend__continuation_info__V_6_6)), ((MR_Box) (ll_backend__continuation_info__V_11_11)));
                }
#line 10050 "ll_backend.continuation_info.c"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_16_16 == (MR_Integer) 0);
#line 448 "continuation_info.m"
                ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 448 "continuation_info.m"
                if (ll_backend__continuation_info__succeeded)
#line 448 "continuation_info.m"
                  *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_16_16;
#line 448 "continuation_info.m"
                else
#line 448 "continuation_info.m"
                  {
#line 448 "continuation_info.m"
                    MR_Word ll_backend__continuation_info__V_17_17;

#line 448 "continuation_info.m"
                    {
#line 448 "continuation_info.m"
                      mercury__term____Compare____context_0_0(&ll_backend__continuation_info__V_17_17, ll_backend__continuation_info__V_7_7, ll_backend__continuation_info__V_12_12);
                    }
#line 10070 "ll_backend.continuation_info.c"
                    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_17_17 == (MR_Integer) 0);
#line 448 "continuation_info.m"
                    ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 448 "continuation_info.m"
                    if (ll_backend__continuation_info__succeeded)
#line 448 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_17_17;
#line 448 "continuation_info.m"
                    else
#line 448 "continuation_info.m"
                      {
#line 448 "continuation_info.m"
                        {
#line 448 "continuation_info.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[5], ll_backend__continuation_info__HeadVar__1_1, ((MR_Box) (ll_backend__continuation_info__V_8_8)), ((MR_Box) (ll_backend__continuation_info__V_13_13)));
#line 448 "continuation_info.m"
                          return;
                        }
#line 448 "continuation_info.m"
                      }
#line 448 "continuation_info.m"
                  }
#line 448 "continuation_info.m"
              }
#line 448 "continuation_info.m"
          }
#line 448 "continuation_info.m"
      }
#line 448 "continuation_info.m"
  }
#line 448 "continuation_info.m"
}

#line 448 "continuation_info.m"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____call_info_0_0(
#line 448 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 448 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2)
#line 448 "continuation_info.m"
{
#line 448 "continuation_info.m"
  {
#line 448 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 448 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_13 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 448 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_14 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 448 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_13 == ll_backend__continuation_info__CastY_14);
#line 448 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 448 "continuation_info.m"
      ll_backend__continuation_info__succeeded = MR_TRUE;
#line 448 "continuation_info.m"
    else
#line 448 "continuation_info.m"
      {
#line 448 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_17_17;
#line 448 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_19_19;
#line 448 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 448 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 448 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 2)));
#line 448 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 3)));
#line 448 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 4)));
#line 448 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 448 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 448 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 2)));
#line 448 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 3)));
#line 448 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 4)));

#line 10157 "ll_backend.continuation_info.c"
        {
#line 10159 "ll_backend.continuation_info.c"
          ll_backend__continuation_info__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__continuation_info__V_3_3, ll_backend__continuation_info__V_8_8);
        }
#line 448 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 448 "continuation_info.m"
          {
#line 10166 "ll_backend.continuation_info.c"
            {
#line 10168 "ll_backend.continuation_info.c"
              ll_backend__continuation_info__succeeded = ll_backend__llds____Unify____code_addr_0_0(ll_backend__continuation_info__V_4_4, ll_backend__continuation_info__V_9_9);
            }
#line 448 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 448 "continuation_info.m"
              {
#line 10175 "ll_backend.continuation_info.c"
                ll_backend__continuation_info__TypeInfo_17_17 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[4];
#line 10177 "ll_backend.continuation_info.c"
                {
#line 10179 "ll_backend.continuation_info.c"
                  ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_17_17, ((MR_Box) (ll_backend__continuation_info__V_5_5)), ((MR_Box) (ll_backend__continuation_info__V_10_10)));
                }
#line 448 "continuation_info.m"
                if (ll_backend__continuation_info__succeeded)
#line 448 "continuation_info.m"
                  {
#line 10186 "ll_backend.continuation_info.c"
                    {
#line 10188 "ll_backend.continuation_info.c"
                      ll_backend__continuation_info__succeeded = mercury__term____Unify____context_0_0(ll_backend__continuation_info__V_6_6, ll_backend__continuation_info__V_11_11);
                    }
#line 448 "continuation_info.m"
                    if (ll_backend__continuation_info__succeeded)
#line 448 "continuation_info.m"
                      {
#line 10195 "ll_backend.continuation_info.c"
                        ll_backend__continuation_info__TypeInfo_19_19 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[5];
#line 10197 "ll_backend.continuation_info.c"
                        {
#line 10199 "ll_backend.continuation_info.c"
                          return ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_19_19, ((MR_Box) (ll_backend__continuation_info__V_7_7)), ((MR_Box) (ll_backend__continuation_info__V_12_12)));
                        }
#line 448 "continuation_info.m"
                      }
#line 448 "continuation_info.m"
                  }
#line 448 "continuation_info.m"
              }
#line 448 "continuation_info.m"
          }
#line 448 "continuation_info.m"
      }
#line 448 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 448 "continuation_info.m"
  }
#line 448 "continuation_info.m"
}

#line 903 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__build_table_arg_info_6_p_0(
#line 903 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarSet_1,
#line 903 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarTypes_2,
#line 903 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3,
#line 903 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__4_4,
#line 903 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_TypeVars_0_5,
#line 903 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_TypeVars_6)
#line 903 "continuation_info.m"
{
#line 907 "continuation_info.m"
  {
#line 907 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;

#line 907 "continuation_info.m"
    if ((ll_backend__continuation_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 907 "continuation_info.m"
      {
#line 907 "continuation_info.m"
        *ll_backend__continuation_info__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 907 "continuation_info.m"
        *ll_backend__continuation_info__STATE_VARIABLE_TypeVars_6 = ll_backend__continuation_info__STATE_VARIABLE_TypeVars_0_5;
#line 907 "continuation_info.m"
      }
#line 907 "continuation_info.m"
    else
#line 909 "continuation_info.m"
      {
#line 909 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeCtorInfo_29_29;
#line 909 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Var_14;
#line 909 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__SlotNum_15;
#line 909 "continuation_info.m"
        MR_Word ll_backend__continuation_info__NumberedVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 1)));
#line 909 "continuation_info.m"
        MR_Word ll_backend__continuation_info__ArgLayout_17;
#line 909 "continuation_info.m"
        MR_Word ll_backend__continuation_info__ArgLayouts_18;
#line 909 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__VarNum_20;
#line 909 "continuation_info.m"
        MR_String ll_backend__continuation_info__VarName_21;
#line 909 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Type_22;
#line 909 "continuation_info.m"
        MR_Word ll_backend__continuation_info__VarTypeVars_23;
#line 909 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));
#line 909 "continuation_info.m"
        MR_Word ll_backend__continuation_info__STATE_VARIABLE_TypeVars_27_27;

#line 908 "continuation_info.m"
        ll_backend__continuation_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_26_26, (MR_Integer) 0)));
#line 908 "continuation_info.m"
        ll_backend__continuation_info__SlotNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_26_26, (MR_Integer) 1)));
#line 10284 "ll_backend.continuation_info.c"
        ll_backend__continuation_info__TypeCtorInfo_29_29 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 910 "continuation_info.m"
        {
#line 910 "continuation_info.m"
          mercury__term__var_to_int_2_p_0(ll_backend__continuation_info__TypeCtorInfo_29_29, ll_backend__continuation_info__Var_14, &ll_backend__continuation_info__VarNum_20);
        }
#line 911 "continuation_info.m"
        {
#line 911 "continuation_info.m"
          mercury__varset__lookup_name_3_p_0(ll_backend__continuation_info__TypeCtorInfo_29_29, ll_backend__continuation_info__VarSet_1, ll_backend__continuation_info__Var_14, &ll_backend__continuation_info__VarName_21);
        }
#line 912 "continuation_info.m"
        {
#line 912 "continuation_info.m"
          hlds__vartypes__lookup_var_type_3_p_0(ll_backend__continuation_info__VarTypes_2, ll_backend__continuation_info__Var_14, &ll_backend__continuation_info__Type_22);
        }
#line 913 "continuation_info.m"
        {
#line 913 "continuation_info.m"
          ll_backend__continuation_info__ArgLayout_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 913 "continuation_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ArgLayout_17, 0) = ((MR_Box) (ll_backend__continuation_info__VarNum_20));
#line 913 "continuation_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ArgLayout_17, 1) = ((MR_Box) (ll_backend__continuation_info__VarName_21));
#line 913 "continuation_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ArgLayout_17, 2) = ((MR_Box) (ll_backend__continuation_info__SlotNum_15));
#line 913 "continuation_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ArgLayout_17, 3) = ((MR_Box) (ll_backend__continuation_info__Type_22));
#line 913 "continuation_info.m"
        }
#line 914 "continuation_info.m"
        {
#line 914 "continuation_info.m"
          parse_tree__prog_type__type_vars_2_p_0(ll_backend__continuation_info__Type_22, &ll_backend__continuation_info__VarTypeVars_23);
        }
#line 915 "continuation_info.m"
        {
#line 915 "continuation_info.m"
          mercury__set__insert_list_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[2], ll_backend__continuation_info__VarTypeVars_23, ll_backend__continuation_info__STATE_VARIABLE_TypeVars_0_5, &ll_backend__continuation_info__STATE_VARIABLE_TypeVars_27_27);
        }
#line 916 "continuation_info.m"
        {
#line 916 "continuation_info.m"
          ll_backend__continuation_info__build_table_arg_info_6_p_0(ll_backend__continuation_info__VarSet_1, ll_backend__continuation_info__VarTypes_2, ll_backend__continuation_info__NumberedVars_16, &ll_backend__continuation_info__ArgLayouts_18, ll_backend__continuation_info__STATE_VARIABLE_TypeVars_27_27, ll_backend__continuation_info__STATE_VARIABLE_TypeVars_6);
        }
#line 909 "continuation_info.m"
        {
#line 909 "continuation_info.m"
          MR_Word base;
#line 909 "continuation_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 909 "continuation_info.m"
          *ll_backend__continuation_info__HeadVar__4_4 = base;
#line 909 "continuation_info.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__continuation_info__ArgLayout_17));
#line 909 "continuation_info.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__continuation_info__ArgLayouts_18));
#line 909 "continuation_info.m"
        }
#line 909 "continuation_info.m"
      }
#line 907 "continuation_info.m"
  }
#line 903 "continuation_info.m"
}

#line 827 "continuation_info.m"
static MR_bool MR_CALL 
ll_backend__continuation_info__build_closure_info_10_p_0(
#line 827 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 827 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 827 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3,
#line 827 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__4_4,
#line 827 "continuation_info.m"
  MR_Word ll_backend__continuation_info__InstMap_5,
#line 827 "continuation_info.m"
  MR_Word ll_backend__continuation_info__UseFloatRegs_6,
#line 827 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_VarLocs_0_7,
#line 827 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_VarLocs_8,
#line 827 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_TypeVars_0_9,
#line 827 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_TypeVars_10)
#line 827 "continuation_info.m"
{
#line 833 "continuation_info.m"
  {
#line 833 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;

#line 833 "continuation_info.m"
    if ((ll_backend__continuation_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 833 "continuation_info.m"
      {
#line 833 "continuation_info.m"
        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 833 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 833 "continuation_info.m"
          {
#line 833 "continuation_info.m"
            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 833 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 833 "continuation_info.m"
              {
#line 833 "continuation_info.m"
                *ll_backend__continuation_info__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 833 "continuation_info.m"
                *ll_backend__continuation_info__STATE_VARIABLE_TypeVars_10 = ll_backend__continuation_info__STATE_VARIABLE_TypeVars_0_9;
#line 833 "continuation_info.m"
                *ll_backend__continuation_info__STATE_VARIABLE_VarLocs_8 = ll_backend__continuation_info__STATE_VARIABLE_VarLocs_0_7;
#line 833 "continuation_info.m"
                ll_backend__continuation_info__succeeded = MR_TRUE;
#line 833 "continuation_info.m"
              }
#line 833 "continuation_info.m"
          }
#line 833 "continuation_info.m"
      }
#line 833 "continuation_info.m"
    else
#line 836 "continuation_info.m"
      {
#line 836 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeCtorInfo_48_48;
#line 836 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_49_49;
#line 836 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_50_50;
#line 836 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_51_51;
#line 836 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 836 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Vars_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 836 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Type0_21;
#line 836 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Types_22;
#line 836 "continuation_info.m"
        MR_Word ll_backend__continuation_info__ArgInfo_23;
#line 836 "continuation_info.m"
        MR_Word ll_backend__continuation_info__ArgInfos_24;
#line 836 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Layout_25;
#line 836 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Layouts_26;
#line 836 "continuation_info.m"
        MR_Word ll_backend__continuation_info__ArgLoc_31;
#line 836 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Type_34;
#line 836 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Inst_35;
#line 836 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Reg_36;
#line 836 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Locations_37;
#line 836 "continuation_info.m"
        MR_Word ll_backend__continuation_info__VarTypeVars_38;
#line 836 "continuation_info.m"
        MR_Word ll_backend__continuation_info__STATE_VARIABLE_VarLocs_44_44;
#line 836 "continuation_info.m"
        MR_Word ll_backend__continuation_info__STATE_VARIABLE_TypeVars_45_45;
#line 837 "continuation_info.m"
        MR_Word ll_backend__continuation_info___ArgMode_32;
#line 842 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_43_43;
#line 842 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_52_52;
#line 844 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_33_33;

#line 834 "continuation_info.m"
        ll_backend__continuation_info__succeeded = ((MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 834 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 834 "continuation_info.m"
          {
#line 834 "continuation_info.m"
            ll_backend__continuation_info__Type0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 834 "continuation_info.m"
            ll_backend__continuation_info__Types_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 835 "continuation_info.m"
            ll_backend__continuation_info__succeeded = ((MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 835 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 835 "continuation_info.m"
              {
#line 835 "continuation_info.m"
                ll_backend__continuation_info__ArgInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));
#line 835 "continuation_info.m"
                ll_backend__continuation_info__ArgInfos_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 1)));
#line 837 "continuation_info.m"
                ll_backend__continuation_info__ArgLoc_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ArgInfo_23, (MR_Integer) 0)));
#line 837 "continuation_info.m"
                ll_backend__continuation_info___ArgMode_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ArgInfo_23, (MR_Integer) 1)));
#line 842 "continuation_info.m"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__UseFloatRegs_6 == (MR_Integer) 1);
#line 842 "continuation_info.m"
                if (ll_backend__continuation_info__succeeded)
#line 842 "continuation_info.m"
                  {
#line 843 "continuation_info.m"
                    {
#line 843 "continuation_info.m"
                      ll_backend__continuation_info__V_52_52 = parse_tree__builtin_lib_types__float_type_0_f_0();
                    }
#line 843 "continuation_info.m"
                    {
#line 843 "continuation_info.m"
                      ll_backend__continuation_info__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ll_backend__continuation_info__Type0_21, ll_backend__continuation_info__V_52_52);
                    }
#line 842 "continuation_info.m"
                    if (ll_backend__continuation_info__succeeded)
#line 842 "continuation_info.m"
                      {
#line 844 "continuation_info.m"
                        ll_backend__continuation_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ArgLoc_31, (MR_Integer) 0)));
#line 844 "continuation_info.m"
                        ll_backend__continuation_info__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ArgLoc_31, (MR_Integer) 1)));
#line 844 "continuation_info.m"
                        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_43_43 == (MR_Integer) 0);
#line 842 "continuation_info.m"
                      }
#line 842 "continuation_info.m"
                  }
#line 847 "continuation_info.m"
                if (ll_backend__continuation_info__succeeded)
#line 846 "continuation_info.m"
                  {
#line 846 "continuation_info.m"
                    ll_backend__continuation_info__Type_34 = parse_tree__builtin_lib_types__float_box_type_0_f_0();
                  }
#line 847 "continuation_info.m"
                else
#line 848 "continuation_info.m"
                  ll_backend__continuation_info__Type_34 = ll_backend__continuation_info__Type0_21;
#line 850 "continuation_info.m"
                {
#line 850 "continuation_info.m"
                  hlds__instmap__instmap_lookup_var_3_p_0(ll_backend__continuation_info__InstMap_5, ll_backend__continuation_info__Var_19, &ll_backend__continuation_info__Inst_35);
                }
#line 851 "continuation_info.m"
                {
#line 851 "continuation_info.m"
                  ll_backend__continuation_info__Layout_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 851 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Layout_25, 0) = ((MR_Box) (ll_backend__continuation_info__Type_34));
#line 851 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Layout_25, 1) = ((MR_Box) (ll_backend__continuation_info__Inst_35));
#line 851 "continuation_info.m"
                }
#line 852 "continuation_info.m"
                {
#line 852 "continuation_info.m"
                  ll_backend__code_util__arg_loc_to_register_2_p_0(ll_backend__continuation_info__ArgLoc_31, &ll_backend__continuation_info__Reg_36);
                }
#line 10549 "ll_backend.continuation_info.c"
                ll_backend__continuation_info__TypeCtorInfo_48_48 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 853 "continuation_info.m"
                {
#line 853 "continuation_info.m"
                  ll_backend__continuation_info__Locations_37 = mercury__set__make_singleton_set_1_f_0(ll_backend__continuation_info__TypeCtorInfo_48_48, ((MR_Box) (ll_backend__continuation_info__Reg_36)));
                }
#line 10556 "ll_backend.continuation_info.c"
                ll_backend__continuation_info__TypeInfo_49_49 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[0];
#line 10558 "ll_backend.continuation_info.c"
                ll_backend__continuation_info__TypeInfo_50_50 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[1];
#line 854 "continuation_info.m"
                {
#line 854 "continuation_info.m"
                  mercury__map__det_insert_4_p_0(ll_backend__continuation_info__TypeInfo_49_49, ll_backend__continuation_info__TypeInfo_50_50, ((MR_Box) (ll_backend__continuation_info__Var_19)), ((MR_Box) (ll_backend__continuation_info__Locations_37)), ll_backend__continuation_info__STATE_VARIABLE_VarLocs_0_7, &ll_backend__continuation_info__STATE_VARIABLE_VarLocs_44_44);
                }
#line 855 "continuation_info.m"
                {
#line 855 "continuation_info.m"
                  parse_tree__prog_type__type_vars_2_p_0(ll_backend__continuation_info__Type_34, &ll_backend__continuation_info__VarTypeVars_38);
                }
#line 10570 "ll_backend.continuation_info.c"
                ll_backend__continuation_info__TypeInfo_51_51 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[2];
#line 856 "continuation_info.m"
                {
#line 856 "continuation_info.m"
                  mercury__set__insert_list_3_p_0(ll_backend__continuation_info__TypeInfo_51_51, ll_backend__continuation_info__VarTypeVars_38, ll_backend__continuation_info__STATE_VARIABLE_TypeVars_0_9, &ll_backend__continuation_info__STATE_VARIABLE_TypeVars_45_45);
                }
#line 857 "continuation_info.m"
                {
#line 857 "continuation_info.m"
                  ll_backend__continuation_info__succeeded = ll_backend__continuation_info__build_closure_info_10_p_0(ll_backend__continuation_info__Vars_20, ll_backend__continuation_info__Types_22, ll_backend__continuation_info__ArgInfos_24, &ll_backend__continuation_info__Layouts_26, ll_backend__continuation_info__InstMap_5, ll_backend__continuation_info__UseFloatRegs_6, ll_backend__continuation_info__STATE_VARIABLE_VarLocs_44_44, ll_backend__continuation_info__STATE_VARIABLE_VarLocs_8, ll_backend__continuation_info__STATE_VARIABLE_TypeVars_45_45, ll_backend__continuation_info__STATE_VARIABLE_TypeVars_10);
                }
#line 836 "continuation_info.m"
                if (ll_backend__continuation_info__succeeded)
#line 836 "continuation_info.m"
                  {
#line 835 "continuation_info.m"
                    {
#line 835 "continuation_info.m"
                      MR_Word base;
#line 835 "continuation_info.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 835 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__4_4 = base;
#line 835 "continuation_info.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__continuation_info__Layout_25));
#line 835 "continuation_info.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__continuation_info__Layouts_26));
#line 835 "continuation_info.m"
                    }
#line 835 "continuation_info.m"
                    ll_backend__continuation_info__succeeded = MR_TRUE;
#line 836 "continuation_info.m"
                  }
#line 835 "continuation_info.m"
              }
#line 834 "continuation_info.m"
          }
#line 836 "continuation_info.m"
      }
#line 833 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 833 "continuation_info.m"
  }
#line 827 "continuation_info.m"
}

#line 750 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__generate_temp_var_infos_2_p_0(
#line 750 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 750 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__2_2)
#line 750 "continuation_info.m"
{
#line 753 "continuation_info.m"
  {
#line 753 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;

#line 753 "continuation_info.m"
    if ((ll_backend__continuation_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 753 "continuation_info.m"
      *ll_backend__continuation_info__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 753 "continuation_info.m"
    else
#line 754 "continuation_info.m"
      {
#line 754 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Temp_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 754 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Temps_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 754 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Live_5;
#line 754 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Lives_6;
#line 754 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Slot_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Temp_3, (MR_Integer) 0)));
#line 754 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Contents_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Temp_3, (MR_Integer) 1)));
#line 754 "continuation_info.m"
        MR_Word ll_backend__continuation_info__LiveLvalueType_9;
#line 754 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_10_10;

#line 958 "continuation_info.m"
#line 958 "continuation_info.m"
        switch (MR_tag((MR_Word) ll_backend__continuation_info__Contents_8)) {
#line 958 "continuation_info.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 958 "continuation_info.m"
          case (MR_Integer) 0:
#line 958 "continuation_info.m"
#line 958 "continuation_info.m"
            switch (MR_unmkbody(ll_backend__continuation_info__Contents_8)) {
#line 958 "continuation_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 958 "continuation_info.m"
              case (MR_Integer) 0:
#line 980 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 958 "continuation_info.m"
                break;
#line 958 "continuation_info.m"
              case (MR_Integer) 1:
#line 983 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 958 "continuation_info.m"
                break;
#line 958 "continuation_info.m"
              case (MR_Integer) 2:
#line 988 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 958 "continuation_info.m"
                break;
#line 958 "continuation_info.m"
              case (MR_Integer) 3:
#line 984 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 958 "continuation_info.m"
                break;
#line 958 "continuation_info.m"
              case (MR_Integer) 4:
#line 985 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 958 "continuation_info.m"
                break;
#line 958 "continuation_info.m"
              case (MR_Integer) 5:
#line 986 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 958 "continuation_info.m"
                break;
#line 958 "continuation_info.m"
              case (MR_Integer) 6:
#line 987 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 958 "continuation_info.m"
                break;
#line 958 "continuation_info.m"
              case (MR_Integer) 7:
#line 989 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 958 "continuation_info.m"
                break;
#line 958 "continuation_info.m"
              case (MR_Integer) 8:
#line 990 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 958 "continuation_info.m"
                break;
#line 958 "continuation_info.m"
              case (MR_Integer) 9:
#line 991 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
#line 958 "continuation_info.m"
                break;
#line 958 "continuation_info.m"
              case (MR_Integer) 10:
#line 979 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 958 "continuation_info.m"
                break;
#line 958 "continuation_info.m"
            }
#line 958 "continuation_info.m"
            break;
#line 958 "continuation_info.m"
          case (MR_Integer) 1:
#line 958 "continuation_info.m"
            {
#line 958 "continuation_info.m"
              MR_Word ll_backend__continuation_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__Contents_8, (MR_Integer) 0)));

#line 958 "continuation_info.m"
#line 958 "continuation_info.m"
              switch (MR_tag((MR_Word) ll_backend__continuation_info__V_53_53)) {
#line 958 "continuation_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 958 "continuation_info.m"
                case (MR_Integer) 0:
#line 958 "continuation_info.m"
#line 958 "continuation_info.m"
                  switch (MR_unmkbody(ll_backend__continuation_info__V_53_53)) {
#line 958 "continuation_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 958 "continuation_info.m"
                    case (MR_Integer) 0:
#line 958 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 958 "continuation_info.m"
                      break;
#line 958 "continuation_info.m"
                    case (MR_Integer) 1:
#line 960 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 958 "continuation_info.m"
                      break;
#line 958 "continuation_info.m"
                    case (MR_Integer) 2:
#line 961 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 958 "continuation_info.m"
                      break;
#line 958 "continuation_info.m"
                    case (MR_Integer) 3:
#line 959 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 958 "continuation_info.m"
                      break;
#line 958 "continuation_info.m"
                    case (MR_Integer) 4:
#line 967 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 958 "continuation_info.m"
                      break;
#line 958 "continuation_info.m"
                    case (MR_Integer) 5:
#line 968 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 958 "continuation_info.m"
                      break;
#line 958 "continuation_info.m"
                  }
#line 958 "continuation_info.m"
                  break;
#line 958 "continuation_info.m"
                case (MR_Integer) 1:
#line 972 "continuation_info.m"
                  ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 958 "continuation_info.m"
                  break;
#line 958 "continuation_info.m"
                case (MR_Integer) 2:
#line 971 "continuation_info.m"
                  ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 958 "continuation_info.m"
                  break;
#line 958 "continuation_info.m"
                case (MR_Integer) 3:
#line 958 "continuation_info.m"
#line 958 "continuation_info.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__continuation_info__V_53_53, (MR_Integer) 0)))) {
#line 958 "continuation_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 958 "continuation_info.m"
                    case (MR_Integer) 0:
#line 973 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 958 "continuation_info.m"
                      break;
#line 958 "continuation_info.m"
                    case (MR_Integer) 1:
#line 974 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 958 "continuation_info.m"
                      break;
#line 958 "continuation_info.m"
                    case (MR_Integer) 2:
#line 975 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 958 "continuation_info.m"
                      break;
#line 958 "continuation_info.m"
                    case (MR_Integer) 3:
#line 976 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 958 "continuation_info.m"
                      break;
#line 958 "continuation_info.m"
                    case (MR_Integer) 4:
#line 966 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 958 "continuation_info.m"
                      break;
#line 958 "continuation_info.m"
                    case (MR_Integer) 5:
#line 962 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 958 "continuation_info.m"
                      break;
#line 958 "continuation_info.m"
                    case (MR_Integer) 6:
#line 965 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 958 "continuation_info.m"
                      break;
#line 958 "continuation_info.m"
                    case (MR_Integer) 7:
#line 964 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 958 "continuation_info.m"
                      break;
#line 958 "continuation_info.m"
                    case (MR_Integer) 8:
#line 963 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 958 "continuation_info.m"
                      break;
#line 958 "continuation_info.m"
                    case (MR_Integer) 9:
#line 970 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 958 "continuation_info.m"
                      break;
#line 958 "continuation_info.m"
                    case (MR_Integer) 10:
#line 977 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 958 "continuation_info.m"
                      break;
#line 958 "continuation_info.m"
                    case (MR_Integer) 11:
#line 978 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 958 "continuation_info.m"
                      break;
#line 958 "continuation_info.m"
                    case (MR_Integer) 12:
#line 969 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 958 "continuation_info.m"
                      break;
#line 958 "continuation_info.m"
                  }
#line 958 "continuation_info.m"
                  break;
#line 958 "continuation_info.m"
              }
#line 958 "continuation_info.m"
            }
#line 958 "continuation_info.m"
            break;
#line 958 "continuation_info.m"
        }
#line 757 "continuation_info.m"
        {
#line 757 "continuation_info.m"
          ll_backend__continuation_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 757 "continuation_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_10_10, 0) = ((MR_Box) (ll_backend__continuation_info__Slot_7));
#line 757 "continuation_info.m"
        }
#line 757 "continuation_info.m"
        {
#line 757 "continuation_info.m"
          ll_backend__continuation_info__Live_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 757 "continuation_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Live_5, 0) = ((MR_Box) (ll_backend__continuation_info__V_10_10));
#line 757 "continuation_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Live_5, 1) = ((MR_Box) (ll_backend__continuation_info__LiveLvalueType_9));
#line 757 "continuation_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Live_5, 2) = ((MR_Box) ((MR_String) "generate_temp_var_infos"));
#line 757 "continuation_info.m"
        }
#line 759 "continuation_info.m"
        {
#line 759 "continuation_info.m"
          ll_backend__continuation_info__generate_temp_var_infos_2_p_0(ll_backend__continuation_info__Temps_4, &ll_backend__continuation_info__Lives_6);
        }
#line 754 "continuation_info.m"
        {
#line 754 "continuation_info.m"
          MR_Word base;
#line 754 "continuation_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 754 "continuation_info.m"
          *ll_backend__continuation_info__HeadVar__2_2 = base;
#line 754 "continuation_info.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__continuation_info__Live_5));
#line 754 "continuation_info.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__continuation_info__Lives_6));
#line 754 "continuation_info.m"
        }
#line 754 "continuation_info.m"
      }
#line 753 "continuation_info.m"
  }
#line 750 "continuation_info.m"
}

#line 652 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__generate_temp_live_lvalues_2_p_0(
#line 652 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 652 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__2_2)
#line 652 "continuation_info.m"
{
#line 655 "continuation_info.m"
  {
#line 655 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;

#line 655 "continuation_info.m"
    if ((ll_backend__continuation_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 655 "continuation_info.m"
      *ll_backend__continuation_info__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 655 "continuation_info.m"
    else
#line 656 "continuation_info.m"
      {
#line 656 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Temp_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 656 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Temps_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 656 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Live_5;
#line 656 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Lives_6;
#line 656 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Slot_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Temp_3, (MR_Integer) 0)));
#line 656 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Contents_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Temp_3, (MR_Integer) 1)));
#line 656 "continuation_info.m"
        MR_Word ll_backend__continuation_info__LiveLvalueType_9;
#line 656 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Empty_10;
#line 656 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_11_11;

#line 958 "continuation_info.m"
#line 958 "continuation_info.m"
        switch (MR_tag((MR_Word) ll_backend__continuation_info__Contents_8)) {
#line 958 "continuation_info.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 958 "continuation_info.m"
          case (MR_Integer) 0:
#line 958 "continuation_info.m"
#line 958 "continuation_info.m"
            switch (MR_unmkbody(ll_backend__continuation_info__Contents_8)) {
#line 958 "continuation_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 958 "continuation_info.m"
              case (MR_Integer) 0:
#line 980 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 958 "continuation_info.m"
                break;
#line 958 "continuation_info.m"
              case (MR_Integer) 1:
#line 983 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 958 "continuation_info.m"
                break;
#line 958 "continuation_info.m"
              case (MR_Integer) 2:
#line 988 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 958 "continuation_info.m"
                break;
#line 958 "continuation_info.m"
              case (MR_Integer) 3:
#line 984 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 958 "continuation_info.m"
                break;
#line 958 "continuation_info.m"
              case (MR_Integer) 4:
#line 985 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 958 "continuation_info.m"
                break;
#line 958 "continuation_info.m"
              case (MR_Integer) 5:
#line 986 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 958 "continuation_info.m"
                break;
#line 958 "continuation_info.m"
              case (MR_Integer) 6:
#line 987 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 958 "continuation_info.m"
                break;
#line 958 "continuation_info.m"
              case (MR_Integer) 7:
#line 989 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 958 "continuation_info.m"
                break;
#line 958 "continuation_info.m"
              case (MR_Integer) 8:
#line 990 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 958 "continuation_info.m"
                break;
#line 958 "continuation_info.m"
              case (MR_Integer) 9:
#line 991 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
#line 958 "continuation_info.m"
                break;
#line 958 "continuation_info.m"
              case (MR_Integer) 10:
#line 979 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 958 "continuation_info.m"
                break;
#line 958 "continuation_info.m"
            }
#line 958 "continuation_info.m"
            break;
#line 958 "continuation_info.m"
          case (MR_Integer) 1:
#line 958 "continuation_info.m"
            {
#line 958 "continuation_info.m"
              MR_Word ll_backend__continuation_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__Contents_8, (MR_Integer) 0)));

#line 958 "continuation_info.m"
#line 958 "continuation_info.m"
              switch (MR_tag((MR_Word) ll_backend__continuation_info__V_55_55)) {
#line 958 "continuation_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 958 "continuation_info.m"
                case (MR_Integer) 0:
#line 958 "continuation_info.m"
#line 958 "continuation_info.m"
                  switch (MR_unmkbody(ll_backend__continuation_info__V_55_55)) {
#line 958 "continuation_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 958 "continuation_info.m"
                    case (MR_Integer) 0:
#line 958 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 958 "continuation_info.m"
                      break;
#line 958 "continuation_info.m"
                    case (MR_Integer) 1:
#line 960 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 958 "continuation_info.m"
                      break;
#line 958 "continuation_info.m"
                    case (MR_Integer) 2:
#line 961 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 958 "continuation_info.m"
                      break;
#line 958 "continuation_info.m"
                    case (MR_Integer) 3:
#line 959 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 958 "continuation_info.m"
                      break;
#line 958 "continuation_info.m"
                    case (MR_Integer) 4:
#line 967 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 958 "continuation_info.m"
                      break;
#line 958 "continuation_info.m"
                    case (MR_Integer) 5:
#line 968 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 958 "continuation_info.m"
                      break;
#line 958 "continuation_info.m"
                  }
#line 958 "continuation_info.m"
                  break;
#line 958 "continuation_info.m"
                case (MR_Integer) 1:
#line 972 "continuation_info.m"
                  ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 958 "continuation_info.m"
                  break;
#line 958 "continuation_info.m"
                case (MR_Integer) 2:
#line 971 "continuation_info.m"
                  ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 958 "continuation_info.m"
                  break;
#line 958 "continuation_info.m"
                case (MR_Integer) 3:
#line 958 "continuation_info.m"
#line 958 "continuation_info.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__continuation_info__V_55_55, (MR_Integer) 0)))) {
#line 958 "continuation_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 958 "continuation_info.m"
                    case (MR_Integer) 0:
#line 973 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 958 "continuation_info.m"
                      break;
#line 958 "continuation_info.m"
                    case (MR_Integer) 1:
#line 974 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 958 "continuation_info.m"
                      break;
#line 958 "continuation_info.m"
                    case (MR_Integer) 2:
#line 975 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 958 "continuation_info.m"
                      break;
#line 958 "continuation_info.m"
                    case (MR_Integer) 3:
#line 976 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 958 "continuation_info.m"
                      break;
#line 958 "continuation_info.m"
                    case (MR_Integer) 4:
#line 966 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 958 "continuation_info.m"
                      break;
#line 958 "continuation_info.m"
                    case (MR_Integer) 5:
#line 962 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 958 "continuation_info.m"
                      break;
#line 958 "continuation_info.m"
                    case (MR_Integer) 6:
#line 965 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 958 "continuation_info.m"
                      break;
#line 958 "continuation_info.m"
                    case (MR_Integer) 7:
#line 964 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 958 "continuation_info.m"
                      break;
#line 958 "continuation_info.m"
                    case (MR_Integer) 8:
#line 963 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 958 "continuation_info.m"
                      break;
#line 958 "continuation_info.m"
                    case (MR_Integer) 9:
#line 970 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 958 "continuation_info.m"
                      break;
#line 958 "continuation_info.m"
                    case (MR_Integer) 10:
#line 977 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 958 "continuation_info.m"
                      break;
#line 958 "continuation_info.m"
                    case (MR_Integer) 11:
#line 978 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 958 "continuation_info.m"
                      break;
#line 958 "continuation_info.m"
                    case (MR_Integer) 12:
#line 969 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 958 "continuation_info.m"
                      break;
#line 958 "continuation_info.m"
                  }
#line 958 "continuation_info.m"
                  break;
#line 958 "continuation_info.m"
              }
#line 958 "continuation_info.m"
            }
#line 958 "continuation_info.m"
            break;
#line 958 "continuation_info.m"
        }
#line 659 "continuation_info.m"
        {
#line 659 "continuation_info.m"
          mercury__map__init_1_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[2], (MR_Word) &ll_backend__continuation_info_scalar_common_1[3], &ll_backend__continuation_info__Empty_10);
        }
#line 660 "continuation_info.m"
        {
#line 660 "continuation_info.m"
          ll_backend__continuation_info__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 660 "continuation_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_11_11, 0) = ((MR_Box) (ll_backend__continuation_info__Slot_7));
#line 660 "continuation_info.m"
        }
#line 660 "continuation_info.m"
        {
#line 660 "continuation_info.m"
          ll_backend__continuation_info__Live_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 660 "continuation_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Live_5, 0) = ((MR_Box) (ll_backend__continuation_info__V_11_11));
#line 660 "continuation_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Live_5, 1) = ((MR_Box) (ll_backend__continuation_info__LiveLvalueType_9));
#line 660 "continuation_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Live_5, 2) = ((MR_Box) (ll_backend__continuation_info__Empty_10));
#line 660 "continuation_info.m"
        }
#line 661 "continuation_info.m"
        {
#line 661 "continuation_info.m"
          ll_backend__continuation_info__generate_temp_live_lvalues_2_p_0(ll_backend__continuation_info__Temps_4, &ll_backend__continuation_info__Lives_6);
        }
#line 656 "continuation_info.m"
        {
#line 656 "continuation_info.m"
          MR_Word base;
#line 656 "continuation_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 656 "continuation_info.m"
          *ll_backend__continuation_info__HeadVar__2_2 = base;
#line 656 "continuation_info.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__continuation_info__Live_5));
#line 656 "continuation_info.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__continuation_info__Lives_6));
#line 656 "continuation_info.m"
        }
#line 656 "continuation_info.m"
      }
#line 655 "continuation_info.m"
  }
#line 652 "continuation_info.m"
}

#line 626 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__find_return_var_lvals_5_p_0(
#line 626 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 626 "continuation_info.m"
  MR_Word ll_backend__continuation_info__StackSlots_2,
#line 626 "continuation_info.m"
  MR_Word ll_backend__continuation_info__OkToDeleteAny_3,
#line 626 "continuation_info.m"
  MR_Word ll_backend__continuation_info__OutputArgLocs_4,
#line 626 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__5_5)
#line 626 "continuation_info.m"
{
#line 630 "continuation_info.m"
  {
#line 630 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;

#line 630 "continuation_info.m"
    if ((ll_backend__continuation_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 630 "continuation_info.m"
      *ll_backend__continuation_info__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 630 "continuation_info.m"
    else
#line 632 "continuation_info.m"
      {
#line 632 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 632 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Vars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 632 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TailVarLvals_15;
#line 639 "continuation_info.m"
        MR_Word ll_backend__continuation_info__ArgLoc_16;
#line 635 "continuation_info.m"
        MR_Box ll_backend__continuation_info__conv0_ArgLoc_16;

#line 633 "continuation_info.m"
        {
#line 633 "continuation_info.m"
          ll_backend__continuation_info__find_return_var_lvals_5_p_0(ll_backend__continuation_info__Vars_10, ll_backend__continuation_info__StackSlots_2, ll_backend__continuation_info__OkToDeleteAny_3, ll_backend__continuation_info__OutputArgLocs_4, &ll_backend__continuation_info__TailVarLvals_15);
        }
#line 635 "continuation_info.m"
        {
#line 635 "continuation_info.m"
          ll_backend__continuation_info__succeeded = mercury__assoc_list__search_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[0], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_loc_0, ll_backend__continuation_info__OutputArgLocs_4, ((MR_Box) (ll_backend__continuation_info__Var_9)), &ll_backend__continuation_info__conv0_ArgLoc_16);
        }
#line 635 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 635 "continuation_info.m"
          {
#line 635 "continuation_info.m"
            ll_backend__continuation_info__ArgLoc_16 = ((MR_Word) ll_backend__continuation_info__conv0_ArgLoc_16);
#line 635 "continuation_info.m"
            ll_backend__continuation_info__succeeded = MR_TRUE;
#line 635 "continuation_info.m"
          }
#line 639 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 637 "continuation_info.m"
          {
#line 637 "continuation_info.m"
            MR_Word ll_backend__continuation_info__Lval_17;
#line 637 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_19_19;

#line 637 "continuation_info.m"
            {
#line 637 "continuation_info.m"
              ll_backend__code_util__arg_loc_to_register_2_p_0(ll_backend__continuation_info__ArgLoc_16, &ll_backend__continuation_info__Lval_17);
            }
#line 638 "continuation_info.m"
            {
#line 638 "continuation_info.m"
              ll_backend__continuation_info__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 638 "continuation_info.m"
              MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_19_19, 0) = ((MR_Box) (ll_backend__continuation_info__Var_9));
#line 638 "continuation_info.m"
              MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_19_19, 1) = ((MR_Box) (ll_backend__continuation_info__Lval_17));
#line 638 "continuation_info.m"
            }
#line 638 "continuation_info.m"
            {
#line 638 "continuation_info.m"
              MR_Word base;
#line 638 "continuation_info.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 638 "continuation_info.m"
              *ll_backend__continuation_info__HeadVar__5_5 = base;
#line 638 "continuation_info.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__continuation_info__V_19_19));
#line 638 "continuation_info.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__continuation_info__TailVarLvals_15));
#line 638 "continuation_info.m"
            }
#line 637 "continuation_info.m"
          }
#line 639 "continuation_info.m"
        else
#line 642 "continuation_info.m"
          {
#line 642 "continuation_info.m"
            MR_Word ll_backend__continuation_info__Slot_18;
#line 639 "continuation_info.m"
            MR_Box ll_backend__continuation_info__conv1_Slot_18;

#line 639 "continuation_info.m"
            {
#line 639 "continuation_info.m"
              ll_backend__continuation_info__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0, ll_backend__continuation_info__StackSlots_2, ((MR_Box) (ll_backend__continuation_info__Var_9)), &ll_backend__continuation_info__conv1_Slot_18);
            }
#line 639 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 639 "continuation_info.m"
              {
#line 639 "continuation_info.m"
                ll_backend__continuation_info__Slot_18 = ((MR_Word) ll_backend__continuation_info__conv1_Slot_18);
#line 639 "continuation_info.m"
                ll_backend__continuation_info__succeeded = MR_TRUE;
#line 639 "continuation_info.m"
              }
#line 642 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 641 "continuation_info.m"
              {
#line 641 "continuation_info.m"
                MR_Word ll_backend__continuation_info__V_20_20;
#line 641 "continuation_info.m"
                MR_Word ll_backend__continuation_info__V_21_21;

#line 641 "continuation_info.m"
                {
#line 641 "continuation_info.m"
                  ll_backend__continuation_info__V_21_21 = ll_backend__llds__stack_slot_to_lval_1_f_0(ll_backend__continuation_info__Slot_18);
                }
#line 641 "continuation_info.m"
                {
#line 641 "continuation_info.m"
                  ll_backend__continuation_info__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 641 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_20_20, 0) = ((MR_Box) (ll_backend__continuation_info__Var_9));
#line 641 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_20_20, 1) = ((MR_Box) (ll_backend__continuation_info__V_21_21));
#line 641 "continuation_info.m"
                }
#line 641 "continuation_info.m"
                {
#line 641 "continuation_info.m"
                  MR_Word base;
#line 641 "continuation_info.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 641 "continuation_info.m"
                  *ll_backend__continuation_info__HeadVar__5_5 = base;
#line 641 "continuation_info.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__continuation_info__V_20_20));
#line 641 "continuation_info.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__continuation_info__TailVarLvals_15));
#line 641 "continuation_info.m"
                }
#line 641 "continuation_info.m"
              }
#line 642 "continuation_info.m"
            else
#line 646 "continuation_info.m"
#line 646 "continuation_info.m"
              switch (ll_backend__continuation_info__OkToDeleteAny_3) {
#line 646 "continuation_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 646 "continuation_info.m"
                case (MR_Integer) 0:
#line 647 "continuation_info.m"
                  {
#line 648 "continuation_info.m"
                    {
#line 648 "continuation_info.m"
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.continuation_info", (MR_String) "predicate \140ll_backend.continuation_info.find_return_var_lvals\'/5", (MR_String) "no slot");
#line 648 "continuation_info.m"
                      return;
                    }
#line 647 "continuation_info.m"
                  }
#line 646 "continuation_info.m"
                  break;
#line 646 "continuation_info.m"
                case (MR_Integer) 1:
#line 645 "continuation_info.m"
                  *ll_backend__continuation_info__HeadVar__5_5 = ll_backend__continuation_info__TailVarLvals_15;
#line 646 "continuation_info.m"
                  break;
#line 646 "continuation_info.m"
              }
#line 642 "continuation_info.m"
          }
#line 632 "continuation_info.m"
      }
#line 630 "continuation_info.m"
  }
#line 626 "continuation_info.m"
}

#line 564 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__convert_return_data_3_p_0_3(
#line 564 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 564 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 564 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 564 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_3)
#line 564 "continuation_info.m"
{
#line 564 "continuation_info.m"
  {
#line 564 "continuation_info.m"
    MR_Box ll_backend__continuation_info__closure = ll_backend__continuation_info__closure_arg;
#line 564 "continuation_info.m"
    MR_Word ll_backend__continuation_info__conv2_LambdaHeadVar__3_31;

#line 564 "continuation_info.m"
    {
#line 564 "continuation_info.m"
      ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__564__1_3_p_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), &ll_backend__continuation_info__conv2_LambdaHeadVar__3_31);
    }
#line 564 "continuation_info.m"
    *ll_backend__continuation_info__wrapper_arg_3 = ((MR_Box) (ll_backend__continuation_info__conv2_LambdaHeadVar__3_31));
#line 564 "continuation_info.m"
  }
#line 564 "continuation_info.m"
}

#line 559 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__convert_return_data_3_p_0_2(
#line 559 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 559 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 559 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_2)
#line 559 "continuation_info.m"
{
#line 559 "continuation_info.m"
  {
#line 559 "continuation_info.m"
    MR_Box ll_backend__continuation_info__closure = ll_backend__continuation_info__closure_arg;
#line 559 "continuation_info.m"
    MR_Word ll_backend__continuation_info__conv1_LambdaHeadVar__2_27;

#line 559 "continuation_info.m"
    {
#line 559 "continuation_info.m"
      ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__560__1_2_p_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), &ll_backend__continuation_info__conv1_LambdaHeadVar__2_27);
    }
#line 559 "continuation_info.m"
    *ll_backend__continuation_info__wrapper_arg_2 = ((MR_Box) (ll_backend__continuation_info__conv1_LambdaHeadVar__2_27));
#line 559 "continuation_info.m"
  }
#line 559 "continuation_info.m"
}

#line 554 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__convert_return_data_3_p_0_1(
#line 554 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 554 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 554 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_2)
#line 554 "continuation_info.m"
{
#line 554 "continuation_info.m"
  {
#line 554 "continuation_info.m"
    MR_Box ll_backend__continuation_info__closure = ll_backend__continuation_info__closure_arg;
#line 554 "continuation_info.m"
    MR_Word ll_backend__continuation_info__conv0_LambdaHeadVar__2_24;

#line 554 "continuation_info.m"
    {
#line 554 "continuation_info.m"
      ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__554__1_2_p_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), &ll_backend__continuation_info__conv0_LambdaHeadVar__2_24);
    }
#line 554 "continuation_info.m"
    *ll_backend__continuation_info__wrapper_arg_2 = ((MR_Box) (ll_backend__continuation_info__conv0_LambdaHeadVar__2_24));
#line 554 "continuation_info.m"
  }
#line 554 "continuation_info.m"
}

#line 550 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__convert_return_data_3_p_0(
#line 550 "continuation_info.m"
  MR_Word ll_backend__continuation_info__LiveInfos_4,
#line 550 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__VarInfoSet_5,
#line 550 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__TypeInfoMap_6)
#line 550 "continuation_info.m"
{
#line 553 "continuation_info.m"
  {
#line 553 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 553 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeCtorInfo_40_40 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_liveinfo_0;
#line 553 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeCtorInfo_41_41 = (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0;
#line 553 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeInfo_42_42;
#line 553 "continuation_info.m"
    MR_Word ll_backend__continuation_info__VarInfoList_13;
#line 553 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeInfoMapList_18;
#line 553 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Empty_19;
#line 564 "continuation_info.m"
    MR_Box ll_backend__continuation_info__conv3_TypeInfoMap_6;

#line 558 "continuation_info.m"
    {
#line 558 "continuation_info.m"
      mercury__list__map_3_p_0(ll_backend__continuation_info__TypeCtorInfo_40_40, ll_backend__continuation_info__TypeCtorInfo_41_41, (MR_Word) &ll_backend__continuation_info_scalar_common_2[7], ll_backend__continuation_info__LiveInfos_4, &ll_backend__continuation_info__VarInfoList_13);
    }
#line 11623 "ll_backend.continuation_info.c"
    ll_backend__continuation_info__TypeInfo_42_42 = (MR_Word) &ll_backend__continuation_info_scalar_common_2[1];
#line 562 "continuation_info.m"
    {
#line 562 "continuation_info.m"
      mercury__list__map_3_p_0(ll_backend__continuation_info__TypeCtorInfo_40_40, ll_backend__continuation_info__TypeInfo_42_42, (MR_Word) &ll_backend__continuation_info_scalar_common_2[8], ll_backend__continuation_info__LiveInfos_4, &ll_backend__continuation_info__TypeInfoMapList_18);
    }
#line 563 "continuation_info.m"
    {
#line 563 "continuation_info.m"
      mercury__map__init_1_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[2], (MR_Word) &ll_backend__continuation_info_scalar_common_1[3], &ll_backend__continuation_info__Empty_19);
    }
#line 564 "continuation_info.m"
    {
#line 564 "continuation_info.m"
      mercury__list__foldl_4_p_0(ll_backend__continuation_info__TypeInfo_42_42, ll_backend__continuation_info__TypeInfo_42_42, (MR_Word) &ll_backend__continuation_info_scalar_common_2[9], ll_backend__continuation_info__TypeInfoMapList_18, ((MR_Box) (ll_backend__continuation_info__Empty_19)), &ll_backend__continuation_info__conv3_TypeInfoMap_6);
    }
#line 564 "continuation_info.m"
    *ll_backend__continuation_info__TypeInfoMap_6 = ((MR_Word) ll_backend__continuation_info__conv3_TypeInfoMap_6);
#line 567 "continuation_info.m"
    {
#line 567 "continuation_info.m"
      mercury__set__list_to_set_2_p_0(ll_backend__continuation_info__TypeCtorInfo_41_41, ll_backend__continuation_info__VarInfoList_13, ll_backend__continuation_info__VarInfoSet_5);
#line 567 "continuation_info.m"
      return;
    }
#line 553 "continuation_info.m"
  }
#line 550 "continuation_info.m"
}

#line 535 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__collect_continuation_4_p_0_1(
#line 535 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 535 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 535 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 535 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_3)
#line 535 "continuation_info.m"
{
#line 535 "continuation_info.m"
  {
#line 535 "continuation_info.m"
    MR_Box ll_backend__continuation_info__closure = ll_backend__continuation_info__closure_arg;
#line 535 "continuation_info.m"
    MR_Word ll_backend__continuation_info__conv1_HeadVar__3_56;

#line 535 "continuation_info.m"
    {
#line 535 "continuation_info.m"
      ll_backend__continuation_info__IntroducedFrom__pred__collect_continuation__535__1_3_p_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), &ll_backend__continuation_info__conv1_HeadVar__3_56);
    }
#line 535 "continuation_info.m"
    *ll_backend__continuation_info__wrapper_arg_3 = ((MR_Box) (ll_backend__continuation_info__conv1_HeadVar__3_56));
#line 535 "continuation_info.m"
  }
#line 535 "continuation_info.m"
}

#line 489 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__collect_continuation_4_p_0(
#line 489 "continuation_info.m"
  MR_Word ll_backend__continuation_info__WantReturnInfo_5,
#line 489 "continuation_info.m"
  MR_Word ll_backend__continuation_info__CallInfo_6,
#line 489 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_Internals_0_36,
#line 489 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_Internals_37)
#line 489 "continuation_info.m"
{
#line 492 "continuation_info.m"
  {
#line 492 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 492 "continuation_info.m"
    MR_Word ll_backend__continuation_info__ReturnLabel_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CallInfo_6, (MR_Integer) 0)));
#line 492 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Target_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CallInfo_6, (MR_Integer) 1)));
#line 492 "continuation_info.m"
    MR_Word ll_backend__continuation_info__LiveInfoList_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CallInfo_6, (MR_Integer) 2)));
#line 492 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CallInfo_6, (MR_Integer) 3)));
#line 492 "continuation_info.m"
    MR_Word ll_backend__continuation_info__MaybeGoalPath_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CallInfo_6, (MR_Integer) 4)));
#line 492 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__ReturnLabelNum_13;
#line 492 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Port0_18;
#line 492 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Resume0_19;
#line 492 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Return0_20;
#line 492 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Return_21;
#line 492 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Internal_35;
#line 506 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Internal0_17;
#line 504 "continuation_info.m"
    MR_Box ll_backend__continuation_info__conv0_Internal0_17;

#line 500 "continuation_info.m"
    if (((MR_tag((MR_Word) ll_backend__continuation_info__ReturnLabel_8)) == (MR_mktag((MR_Integer) 1))))
#line 501 "continuation_info.m"
      {
#line 502 "continuation_info.m"
        {
#line 502 "continuation_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.continuation_info", (MR_String) "predicate \140ll_backend.continuation_info.collect_continuation\'/4", (MR_String) "bad return");
#line 502 "continuation_info.m"
          return;
        }
#line 501 "continuation_info.m"
      }
#line 500 "continuation_info.m"
    else
#line 499 "continuation_info.m"
      {
#line 499 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_14_14;

#line 499 "continuation_info.m"
        ll_backend__continuation_info__ReturnLabelNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ReturnLabel_8, (MR_Integer) 0)));
#line 499 "continuation_info.m"
        ll_backend__continuation_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ReturnLabel_8, (MR_Integer) 1)));
#line 499 "continuation_info.m"
      }
#line 504 "continuation_info.m"
    {
#line 504 "continuation_info.m"
      ll_backend__continuation_info__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0, ll_backend__continuation_info__STATE_VARIABLE_Internals_0_36, ll_backend__continuation_info__ReturnLabelNum_13, &ll_backend__continuation_info__conv0_Internal0_17);
    }
#line 504 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 504 "continuation_info.m"
      {
#line 504 "continuation_info.m"
        ll_backend__continuation_info__Internal0_17 = ((MR_Word) ll_backend__continuation_info__conv0_Internal0_17);
#line 504 "continuation_info.m"
        ll_backend__continuation_info__succeeded = MR_TRUE;
#line 504 "continuation_info.m"
      }
#line 506 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 505 "continuation_info.m"
      {
#line 505 "continuation_info.m"
        ll_backend__continuation_info__Port0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Internal0_17, (MR_Integer) 0)));
#line 505 "continuation_info.m"
        ll_backend__continuation_info__Resume0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Internal0_17, (MR_Integer) 1)));
#line 505 "continuation_info.m"
        ll_backend__continuation_info__Return0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Internal0_17, (MR_Integer) 2)));
#line 505 "continuation_info.m"
      }
#line 506 "continuation_info.m"
    else
#line 507 "continuation_info.m"
      {
#line 507 "continuation_info.m"
        ll_backend__continuation_info__Port0_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 508 "continuation_info.m"
        ll_backend__continuation_info__Resume0_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 509 "continuation_info.m"
        ll_backend__continuation_info__Return0_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 507 "continuation_info.m"
      }
#line 543 "continuation_info.m"
#line 543 "continuation_info.m"
    switch (ll_backend__continuation_info__WantReturnInfo_5) {
#line 543 "continuation_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 543 "continuation_info.m"
      case (MR_Integer) 0:
#line 545 "continuation_info.m"
        ll_backend__continuation_info__Return_21 = ll_backend__continuation_info__Return0_20;
#line 543 "continuation_info.m"
        break;
#line 543 "continuation_info.m"
      case (MR_Integer) 1:
#line 518 "continuation_info.m"
        if ((ll_backend__continuation_info__MaybeGoalPath_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 517 "continuation_info.m"
          ll_backend__continuation_info__Return_21 = ll_backend__continuation_info__Return0_20;
#line 518 "continuation_info.m"
        else
#line 519 "continuation_info.m"
          {
#line 519 "continuation_info.m"
            MR_Word ll_backend__continuation_info__GoalPath_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__MaybeGoalPath_12, (MR_Integer) 0)));
#line 519 "continuation_info.m"
            MR_Word ll_backend__continuation_info__VarInfoSet_23;
#line 519 "continuation_info.m"
            MR_Word ll_backend__continuation_info__TypeInfoMap_24;

#line 520 "continuation_info.m"
            {
#line 520 "continuation_info.m"
              ll_backend__continuation_info__convert_return_data_3_p_0(ll_backend__continuation_info__LiveInfoList_10, &ll_backend__continuation_info__VarInfoSet_23, &ll_backend__continuation_info__TypeInfoMap_24);
            }
#line 527 "continuation_info.m"
            if ((ll_backend__continuation_info__Return0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 522 "continuation_info.m"
              {
#line 522 "continuation_info.m"
                MR_Word ll_backend__continuation_info__Layout_25;
#line 522 "continuation_info.m"
                MR_Word ll_backend__continuation_info__ReturnInfo_26;
#line 522 "continuation_info.m"
                MR_Word ll_backend__continuation_info__V_44_44;
#line 522 "continuation_info.m"
                MR_Word ll_backend__continuation_info__V_45_45;
#line 522 "continuation_info.m"
                MR_Word ll_backend__continuation_info__V_46_46;

#line 523 "continuation_info.m"
                {
#line 523 "continuation_info.m"
                  ll_backend__continuation_info__Layout_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 523 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Layout_25, 0) = ((MR_Box) (ll_backend__continuation_info__VarInfoSet_23));
#line 523 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Layout_25, 1) = ((MR_Box) (ll_backend__continuation_info__TypeInfoMap_24));
#line 523 "continuation_info.m"
                }
#line 525 "continuation_info.m"
                {
#line 525 "continuation_info.m"
                  ll_backend__continuation_info__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 525 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_46_46, 0) = ((MR_Box) (ll_backend__continuation_info__Context_11));
#line 525 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_46_46, 1) = ((MR_Box) (ll_backend__continuation_info__GoalPath_22));
#line 525 "continuation_info.m"
                }
#line 525 "continuation_info.m"
                {
#line 525 "continuation_info.m"
                  ll_backend__continuation_info__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 525 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_45_45, 0) = ((MR_Box) (ll_backend__continuation_info__Target_9));
#line 525 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_45_45, 1) = ((MR_Box) (ll_backend__continuation_info__V_46_46));
#line 525 "continuation_info.m"
                }
#line 525 "continuation_info.m"
                {
#line 525 "continuation_info.m"
                  ll_backend__continuation_info__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 525 "continuation_info.m"
                  MR_hl_field(MR_mktag(1), ll_backend__continuation_info__V_44_44, 0) = ((MR_Box) (ll_backend__continuation_info__V_45_45));
#line 525 "continuation_info.m"
                  MR_hl_field(MR_mktag(1), ll_backend__continuation_info__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 525 "continuation_info.m"
                }
#line 524 "continuation_info.m"
                {
#line 524 "continuation_info.m"
                  ll_backend__continuation_info__ReturnInfo_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 524 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ReturnInfo_26, 0) = ((MR_Box) (ll_backend__continuation_info__V_44_44));
#line 524 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ReturnInfo_26, 1) = ((MR_Box) (ll_backend__continuation_info__Layout_25));
#line 524 "continuation_info.m"
                }
#line 526 "continuation_info.m"
                {
#line 526 "continuation_info.m"
                  ll_backend__continuation_info__Return_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 526 "continuation_info.m"
                  MR_hl_field(MR_mktag(1), ll_backend__continuation_info__Return_21, 0) = ((MR_Box) (ll_backend__continuation_info__ReturnInfo_26));
#line 526 "continuation_info.m"
                }
#line 522 "continuation_info.m"
              }
#line 527 "continuation_info.m"
            else
#line 531 "continuation_info.m"
              {
#line 531 "continuation_info.m"
                MR_Word ll_backend__continuation_info__ReturnInfo0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__Return0_20, (MR_Integer) 0)));
#line 531 "continuation_info.m"
                MR_Word ll_backend__continuation_info__TargetsContexts0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ReturnInfo0_27, (MR_Integer) 0)));
#line 531 "continuation_info.m"
                MR_Word ll_backend__continuation_info__Layout0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ReturnInfo0_27, (MR_Integer) 1)));
#line 531 "continuation_info.m"
                MR_Word ll_backend__continuation_info__LV0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Layout0_29, (MR_Integer) 0)));
#line 531 "continuation_info.m"
                MR_Word ll_backend__continuation_info__TV0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Layout0_29, (MR_Integer) 1)));
#line 531 "continuation_info.m"
                MR_Word ll_backend__continuation_info__LV_32;
#line 531 "continuation_info.m"
                MR_Word ll_backend__continuation_info__TV_33;
#line 531 "continuation_info.m"
                MR_Word ll_backend__continuation_info__TargetContexts_34;
#line 531 "continuation_info.m"
                MR_Word ll_backend__continuation_info__V_42_42;
#line 531 "continuation_info.m"
                MR_Word ll_backend__continuation_info__V_43_43;
#line 531 "continuation_info.m"
                MR_Word ll_backend__continuation_info__Layout_49;
#line 531 "continuation_info.m"
                MR_Word ll_backend__continuation_info__ReturnInfo_50;

#line 534 "continuation_info.m"
                {
#line 534 "continuation_info.m"
                  mercury__set__intersect_3_p_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0, ll_backend__continuation_info__LV0_30, ll_backend__continuation_info__VarInfoSet_23, &ll_backend__continuation_info__LV_32);
                }
#line 535 "continuation_info.m"
                {
#line 535 "continuation_info.m"
                  mercury__map__intersect_4_p_1((MR_Word) &ll_backend__continuation_info_scalar_common_1[3], (MR_Word) &ll_backend__continuation_info_scalar_common_1[2], (MR_Word) &ll_backend__continuation_info_scalar_common_2[6], ll_backend__continuation_info__TV0_31, ll_backend__continuation_info__TypeInfoMap_24, &ll_backend__continuation_info__TV_33);
                }
#line 536 "continuation_info.m"
                {
#line 536 "continuation_info.m"
                  ll_backend__continuation_info__Layout_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 536 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Layout_49, 0) = ((MR_Box) (ll_backend__continuation_info__LV_32));
#line 536 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Layout_49, 1) = ((MR_Box) (ll_backend__continuation_info__TV_33));
#line 536 "continuation_info.m"
                }
#line 537 "continuation_info.m"
                {
#line 537 "continuation_info.m"
                  ll_backend__continuation_info__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 537 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_43_43, 0) = ((MR_Box) (ll_backend__continuation_info__Context_11));
#line 537 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_43_43, 1) = ((MR_Box) (ll_backend__continuation_info__GoalPath_22));
#line 537 "continuation_info.m"
                }
#line 537 "continuation_info.m"
                {
#line 537 "continuation_info.m"
                  ll_backend__continuation_info__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 537 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_42_42, 0) = ((MR_Box) (ll_backend__continuation_info__Target_9));
#line 537 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_42_42, 1) = ((MR_Box) (ll_backend__continuation_info__V_43_43));
#line 537 "continuation_info.m"
                }
#line 538 "continuation_info.m"
                {
#line 538 "continuation_info.m"
                  ll_backend__continuation_info__TargetContexts_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 538 "continuation_info.m"
                  MR_hl_field(MR_mktag(1), ll_backend__continuation_info__TargetContexts_34, 0) = ((MR_Box) (ll_backend__continuation_info__V_42_42));
#line 538 "continuation_info.m"
                  MR_hl_field(MR_mktag(1), ll_backend__continuation_info__TargetContexts_34, 1) = ((MR_Box) (ll_backend__continuation_info__TargetsContexts0_28));
#line 538 "continuation_info.m"
                }
#line 539 "continuation_info.m"
                {
#line 539 "continuation_info.m"
                  ll_backend__continuation_info__ReturnInfo_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 539 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ReturnInfo_50, 0) = ((MR_Box) (ll_backend__continuation_info__TargetContexts_34));
#line 539 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ReturnInfo_50, 1) = ((MR_Box) (ll_backend__continuation_info__Layout_49));
#line 539 "continuation_info.m"
                }
#line 540 "continuation_info.m"
                {
#line 540 "continuation_info.m"
                  ll_backend__continuation_info__Return_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 540 "continuation_info.m"
                  MR_hl_field(MR_mktag(1), ll_backend__continuation_info__Return_21, 0) = ((MR_Box) (ll_backend__continuation_info__ReturnInfo_50));
#line 540 "continuation_info.m"
                }
#line 531 "continuation_info.m"
              }
#line 519 "continuation_info.m"
          }
#line 543 "continuation_info.m"
        break;
#line 543 "continuation_info.m"
    }
#line 547 "continuation_info.m"
    {
#line 547 "continuation_info.m"
      ll_backend__continuation_info__Internal_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 547 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Internal_35, 0) = ((MR_Box) (ll_backend__continuation_info__Port0_18));
#line 547 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Internal_35, 1) = ((MR_Box) (ll_backend__continuation_info__Resume0_19));
#line 547 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Internal_35, 2) = ((MR_Box) (ll_backend__continuation_info__Return_21));
#line 547 "continuation_info.m"
    }
#line 548 "continuation_info.m"
    {
#line 548 "continuation_info.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0, ll_backend__continuation_info__ReturnLabelNum_13, ((MR_Box) (ll_backend__continuation_info__Internal_35)), ll_backend__continuation_info__STATE_VARIABLE_Internals_0_36, ll_backend__continuation_info__STATE_VARIABLE_Internals_37);
#line 548 "continuation_info.m"
      return;
    }
#line 492 "continuation_info.m"
  }
#line 489 "continuation_info.m"
}

#line 476 "continuation_info.m"
static MR_bool MR_CALL 
ll_backend__continuation_info__get_call_info_2_p_0(
#line 476 "continuation_info.m"
  MR_Word ll_backend__continuation_info__Instr_3,
#line 476 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__CallInfo_4)
#line 476 "continuation_info.m"
{
#line 478 "continuation_info.m"
  {
#line 478 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 478 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Uinstr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Instr_3, (MR_Integer) 0)));
#line 478 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Target_7;
#line 478 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Return_8;
#line 478 "continuation_info.m"
    MR_Word ll_backend__continuation_info__LiveInfo_9;
#line 478 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Context_10;
#line 478 "continuation_info.m"
    MR_Word ll_backend__continuation_info__GoalPath_11;
#line 478 "continuation_info.m"
    MR_Word ll_backend__continuation_info__ReturnLabel_13;
#line 479 "continuation_info.m"
    MR_String ll_backend__continuation_info___Comment_6 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Instr_3, (MR_Integer) 1)));
#line 480 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_12_12;

#line 480 "continuation_info.m"
    ll_backend__continuation_info__succeeded = ((((MR_tag((MR_Word) ll_backend__continuation_info__Uinstr_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__continuation_info__Uinstr_5, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 480 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 480 "continuation_info.m"
      {
#line 480 "continuation_info.m"
        ll_backend__continuation_info__Target_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__continuation_info__Uinstr_5, (MR_Integer) 1)));
#line 480 "continuation_info.m"
        ll_backend__continuation_info__Return_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__continuation_info__Uinstr_5, (MR_Integer) 2)));
#line 480 "continuation_info.m"
        ll_backend__continuation_info__LiveInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__continuation_info__Uinstr_5, (MR_Integer) 3)));
#line 480 "continuation_info.m"
        ll_backend__continuation_info__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__continuation_info__Uinstr_5, (MR_Integer) 4)));
#line 480 "continuation_info.m"
        ll_backend__continuation_info__GoalPath_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__continuation_info__Uinstr_5, (MR_Integer) 5)));
#line 480 "continuation_info.m"
        ll_backend__continuation_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__continuation_info__Uinstr_5, (MR_Integer) 6)));
#line 481 "continuation_info.m"
        ll_backend__continuation_info__succeeded = ((MR_tag((MR_Word) ll_backend__continuation_info__Return_8)) == (MR_mktag((MR_Integer) 1)));
#line 481 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 481 "continuation_info.m"
          {
#line 481 "continuation_info.m"
            ll_backend__continuation_info__ReturnLabel_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__Return_8, (MR_Integer) 0)));
#line 482 "continuation_info.m"
            {
#line 482 "continuation_info.m"
              MR_Word base;
#line 482 "continuation_info.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 482 "continuation_info.m"
              *ll_backend__continuation_info__CallInfo_4 = base;
#line 482 "continuation_info.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__continuation_info__ReturnLabel_13));
#line 482 "continuation_info.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__continuation_info__Target_7));
#line 482 "continuation_info.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__continuation_info__LiveInfo_9));
#line 482 "continuation_info.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__continuation_info__Context_10));
#line 482 "continuation_info.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__continuation_info__GoalPath_11));
#line 482 "continuation_info.m"
            }
#line 482 "continuation_info.m"
            ll_backend__continuation_info__succeeded = MR_TRUE;
#line 481 "continuation_info.m"
          }
#line 480 "continuation_info.m"
      }
#line 478 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 478 "continuation_info.m"
  }
#line 476 "continuation_info.m"
}

#line 471 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__collect_call_continuations_in_cproc_4_p_0_2(
#line 471 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 471 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 471 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 471 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_3)
#line 471 "continuation_info.m"
{
#line 471 "continuation_info.m"
  {
#line 471 "continuation_info.m"
    MR_Box ll_backend__continuation_info__closure = ll_backend__continuation_info__closure_arg;
#line 471 "continuation_info.m"
    MR_Word ll_backend__continuation_info__conv1_STATE_VARIABLE_Internals_37;

#line 471 "continuation_info.m"
    {
#line 471 "continuation_info.m"
      ll_backend__continuation_info__collect_continuation_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), &ll_backend__continuation_info__conv1_STATE_VARIABLE_Internals_37);
    }
#line 471 "continuation_info.m"
    *ll_backend__continuation_info__wrapper_arg_3 = ((MR_Box) (ll_backend__continuation_info__conv1_STATE_VARIABLE_Internals_37));
#line 471 "continuation_info.m"
  }
#line 471 "continuation_info.m"
}

#line 470 "continuation_info.m"
static MR_bool MR_CALL 
ll_backend__continuation_info__collect_call_continuations_in_cproc_4_p_0_1(
#line 470 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 470 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 470 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_2)
#line 470 "continuation_info.m"
{
#line 470 "continuation_info.m"
  {
#line 470 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 470 "continuation_info.m"
    MR_Box ll_backend__continuation_info__closure = ll_backend__continuation_info__closure_arg;
#line 470 "continuation_info.m"
    MR_Word ll_backend__continuation_info__conv0_CallInfo_4;

#line 470 "continuation_info.m"
    {
#line 470 "continuation_info.m"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info__get_call_info_2_p_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), &ll_backend__continuation_info__conv0_CallInfo_4);
    }
#line 470 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 470 "continuation_info.m"
      {
#line 470 "continuation_info.m"
        *ll_backend__continuation_info__wrapper_arg_2 = ((MR_Box) (ll_backend__continuation_info__conv0_CallInfo_4));
#line 470 "continuation_info.m"
        ll_backend__continuation_info__succeeded = MR_TRUE;
#line 470 "continuation_info.m"
      }
#line 470 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 470 "continuation_info.m"
  }
#line 470 "continuation_info.m"
}

#line 462 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__collect_call_continuations_in_cproc_4_p_0(
#line 462 "continuation_info.m"
  MR_Word ll_backend__continuation_info__WantReturnInfo_5,
#line 462 "continuation_info.m"
  MR_Word ll_backend__continuation_info__CProc_6,
#line 462 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_GlobalData_0_15,
#line 462 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_GlobalData_16)
#line 462 "continuation_info.m"
{
#line 465 "continuation_info.m"
  {
#line 465 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 465 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeCtorInfo_86_86;
#line 465 "continuation_info.m"
    MR_Word ll_backend__continuation_info__PredProcId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 2)));
#line 465 "continuation_info.m"
    MR_Word ll_backend__continuation_info__ProcLayoutInfo0_9;
#line 465 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Instrs_10;
#line 465 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Internals0_11;
#line 465 "continuation_info.m"
    MR_Word ll_backend__continuation_info__CallInfos_12;
#line 465 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Internals_13;
#line 465 "continuation_info.m"
    MR_Word ll_backend__continuation_info__ProcLayoutInfo_14;
#line 465 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_18_18;
#line 466 "continuation_info.m"
    MR_String ll_backend__continuation_info__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 0)));
#line 466 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 1)));
#line 466 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 3)));
#line 466 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 4)));
#line 466 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 5)));
#line 466 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 6)));
#line 466 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 7)));
#line 466 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 8)));
#line 468 "continuation_info.m"
    MR_String ll_backend__continuation_info__V_28_28;
#line 468 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__V_29_29;
#line 468 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_30_30;
#line 468 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_31_31;
#line 468 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_32_32;
#line 468 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_33_33;
#line 468 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_34_34;
#line 468 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_35_35;
#line 469 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_36_36;
#line 469 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_37_37;
#line 469 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_38_38;
#line 469 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__V_39_39;
#line 469 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_40_40;
#line 469 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_41_41;
#line 469 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_42_42;
#line 469 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_43_43;
#line 469 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__V_44_44;
#line 469 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__V_45_45;
#line 469 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_46_46;
#line 469 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_47_47;
#line 469 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_48_48;
#line 469 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_49_49;
#line 469 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_50_50;
#line 469 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_51_51;
#line 469 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_52_52;
#line 469 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_53_53;
#line 469 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_54_54;
#line 469 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_55_55;
#line 469 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_56_56;
#line 469 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_57_57;
#line 469 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_58_58;
#line 471 "continuation_info.m"
    MR_Box ll_backend__continuation_info__conv2_Internals_13;
#line 473 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_59_59;
#line 473 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_60_60;
#line 473 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_61_61;
#line 473 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__V_62_62;
#line 473 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_63_63;
#line 473 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_64_64;
#line 473 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_65_65;
#line 473 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_66_66;
#line 473 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__V_67_67;
#line 473 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__V_68_68;
#line 473 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_69_69;
#line 473 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_70_70;
#line 473 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_71_71;
#line 473 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_72_72;
#line 473 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_73_73;
#line 473 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_74_74;
#line 473 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_75_75;
#line 473 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_76_76;
#line 473 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_77_77;
#line 473 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_79_79;
#line 473 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_80_80;
#line 473 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_81_81;
#line 473 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_82_82;
#line 473 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_78_78;

#line 467 "continuation_info.m"
    {
#line 467 "continuation_info.m"
      ll_backend__global_data__global_data_get_proc_layout_3_p_0(ll_backend__continuation_info__STATE_VARIABLE_GlobalData_0_15, ll_backend__continuation_info__PredProcId_8, &ll_backend__continuation_info__ProcLayoutInfo0_9);
    }
#line 468 "continuation_info.m"
    ll_backend__continuation_info__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 0)));
#line 468 "continuation_info.m"
    ll_backend__continuation_info__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 1)));
#line 468 "continuation_info.m"
    ll_backend__continuation_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 2)));
#line 468 "continuation_info.m"
    ll_backend__continuation_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 3)));
#line 468 "continuation_info.m"
    ll_backend__continuation_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 4)));
#line 468 "continuation_info.m"
    ll_backend__continuation_info__Instrs_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 5)));
#line 468 "continuation_info.m"
    ll_backend__continuation_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 6)));
#line 468 "continuation_info.m"
    ll_backend__continuation_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 7)));
#line 468 "continuation_info.m"
    ll_backend__continuation_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 8)));
#line 469 "continuation_info.m"
    ll_backend__continuation_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 0)));
#line 469 "continuation_info.m"
    ll_backend__continuation_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 1)));
#line 469 "continuation_info.m"
    ll_backend__continuation_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 2)));
#line 469 "continuation_info.m"
    ll_backend__continuation_info__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 3)));
#line 469 "continuation_info.m"
    ll_backend__continuation_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 4)));
#line 469 "continuation_info.m"
    ll_backend__continuation_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 5)));
#line 469 "continuation_info.m"
    ll_backend__continuation_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 6)));
#line 469 "continuation_info.m"
    ll_backend__continuation_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 7)));
#line 469 "continuation_info.m"
    ll_backend__continuation_info__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 8)));
#line 469 "continuation_info.m"
    ll_backend__continuation_info__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 9)));
#line 469 "continuation_info.m"
    ll_backend__continuation_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 10)));
#line 469 "continuation_info.m"
    ll_backend__continuation_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 11)));
#line 469 "continuation_info.m"
    ll_backend__continuation_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 12)));
#line 469 "continuation_info.m"
    ll_backend__continuation_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 13)));
#line 469 "continuation_info.m"
    ll_backend__continuation_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 14)));
#line 469 "continuation_info.m"
    ll_backend__continuation_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 15)));
#line 469 "continuation_info.m"
    ll_backend__continuation_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 16)));
#line 469 "continuation_info.m"
    ll_backend__continuation_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 17)));
#line 469 "continuation_info.m"
    ll_backend__continuation_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 18)));
#line 469 "continuation_info.m"
    ll_backend__continuation_info__Internals0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 19)));
#line 469 "continuation_info.m"
    ll_backend__continuation_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 20)));
#line 469 "continuation_info.m"
    ll_backend__continuation_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 21)));
#line 469 "continuation_info.m"
    ll_backend__continuation_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 22)));
#line 469 "continuation_info.m"
    ll_backend__continuation_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 23)));
#line 12432 "ll_backend.continuation_info.c"
    ll_backend__continuation_info__TypeCtorInfo_86_86 = (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_call_info_0;
#line 470 "continuation_info.m"
    {
#line 470 "continuation_info.m"
      mercury__list__filter_map_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__continuation_info__TypeCtorInfo_86_86, (MR_Word) &ll_backend__continuation_info_scalar_common_2[5], ll_backend__continuation_info__Instrs_10, &ll_backend__continuation_info__CallInfos_12);
    }
#line 471 "continuation_info.m"
    {
#line 471 "continuation_info.m"
      ll_backend__continuation_info__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 471 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_18_18, 0) = ((MR_Box) (&ll_backend__continuation_info_scalar_common_4[2]));
#line 471 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_18_18, 1) = ((MR_Box) (ll_backend__continuation_info__collect_call_continuations_in_cproc_4_p_0_2));
#line 471 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 471 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_18_18, 3) = ((MR_Box) (ll_backend__continuation_info__WantReturnInfo_5));
#line 471 "continuation_info.m"
    }
#line 471 "continuation_info.m"
    {
#line 471 "continuation_info.m"
      mercury__list__foldl_4_p_0(ll_backend__continuation_info__TypeCtorInfo_86_86, (MR_Word) &ll_backend__continuation_info_scalar_common_2[0], ll_backend__continuation_info__V_18_18, ll_backend__continuation_info__CallInfos_12, ((MR_Box) (ll_backend__continuation_info__Internals0_11)), &ll_backend__continuation_info__conv2_Internals_13);
    }
#line 471 "continuation_info.m"
    ll_backend__continuation_info__Internals_13 = ((MR_Word) ll_backend__continuation_info__conv2_Internals_13);
#line 473 "continuation_info.m"
    ll_backend__continuation_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 0)));
#line 473 "continuation_info.m"
    ll_backend__continuation_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 1)));
#line 473 "continuation_info.m"
    ll_backend__continuation_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 2)));
#line 473 "continuation_info.m"
    ll_backend__continuation_info__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 3)));
#line 473 "continuation_info.m"
    ll_backend__continuation_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 4)));
#line 473 "continuation_info.m"
    ll_backend__continuation_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 5)));
#line 473 "continuation_info.m"
    ll_backend__continuation_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 6)));
#line 473 "continuation_info.m"
    ll_backend__continuation_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 7)));
#line 473 "continuation_info.m"
    ll_backend__continuation_info__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 8)));
#line 473 "continuation_info.m"
    ll_backend__continuation_info__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 9)));
#line 473 "continuation_info.m"
    ll_backend__continuation_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 10)));
#line 473 "continuation_info.m"
    ll_backend__continuation_info__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 11)));
#line 473 "continuation_info.m"
    ll_backend__continuation_info__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 12)));
#line 473 "continuation_info.m"
    ll_backend__continuation_info__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 13)));
#line 473 "continuation_info.m"
    ll_backend__continuation_info__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 14)));
#line 473 "continuation_info.m"
    ll_backend__continuation_info__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 15)));
#line 473 "continuation_info.m"
    ll_backend__continuation_info__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 16)));
#line 473 "continuation_info.m"
    ll_backend__continuation_info__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 17)));
#line 473 "continuation_info.m"
    ll_backend__continuation_info__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 18)));
#line 473 "continuation_info.m"
    ll_backend__continuation_info__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 19)));
#line 473 "continuation_info.m"
    ll_backend__continuation_info__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 20)));
#line 473 "continuation_info.m"
    ll_backend__continuation_info__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 21)));
#line 473 "continuation_info.m"
    ll_backend__continuation_info__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 22)));
#line 473 "continuation_info.m"
    ll_backend__continuation_info__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 23)));
#line 473 "continuation_info.m"
    {
#line 473 "continuation_info.m"
      ll_backend__continuation_info__ProcLayoutInfo_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 24 * sizeof(MR_Word)), NULL, NULL);
#line 473 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_14, 0) = ((MR_Box) (ll_backend__continuation_info__V_59_59));
#line 473 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_14, 1) = ((MR_Box) (ll_backend__continuation_info__V_60_60));
#line 473 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_14, 2) = ((MR_Box) (ll_backend__continuation_info__V_61_61));
#line 473 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_14, 3) = ((MR_Box) (ll_backend__continuation_info__V_62_62));
#line 473 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_14, 4) = ((MR_Box) (ll_backend__continuation_info__V_63_63));
#line 473 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_14, 5) = ((MR_Box) (ll_backend__continuation_info__V_64_64));
#line 473 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_14, 6) = ((MR_Box) (ll_backend__continuation_info__V_65_65));
#line 473 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_14, 7) = ((MR_Box) (ll_backend__continuation_info__V_66_66));
#line 473 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_14, 8) = ((MR_Box) (ll_backend__continuation_info__V_67_67));
#line 473 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_14, 9) = ((MR_Box) (ll_backend__continuation_info__V_68_68));
#line 473 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_14, 10) = ((MR_Box) (ll_backend__continuation_info__V_69_69));
#line 473 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_14, 11) = ((MR_Box) (ll_backend__continuation_info__V_70_70));
#line 473 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_14, 12) = ((MR_Box) (ll_backend__continuation_info__V_71_71));
#line 473 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_14, 13) = ((MR_Box) (ll_backend__continuation_info__V_72_72));
#line 473 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_14, 14) = ((MR_Box) (ll_backend__continuation_info__V_73_73));
#line 473 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_14, 15) = ((MR_Box) (ll_backend__continuation_info__V_74_74));
#line 473 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_14, 16) = ((MR_Box) (ll_backend__continuation_info__V_75_75));
#line 473 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_14, 17) = ((MR_Box) (ll_backend__continuation_info__V_76_76));
#line 473 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_14, 18) = ((MR_Box) (ll_backend__continuation_info__V_77_77));
#line 473 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_14, 19) = ((MR_Box) (ll_backend__continuation_info__Internals_13));
#line 473 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_14, 20) = ((MR_Box) (ll_backend__continuation_info__V_79_79));
#line 473 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_14, 21) = ((MR_Box) (ll_backend__continuation_info__V_80_80));
#line 473 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_14, 22) = ((MR_Box) (ll_backend__continuation_info__V_81_81));
#line 473 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_14, 23) = ((MR_Box) (ll_backend__continuation_info__V_82_82));
#line 473 "continuation_info.m"
    }
#line 474 "continuation_info.m"
    {
#line 474 "continuation_info.m"
      ll_backend__global_data__global_data_update_proc_layout_4_p_0(ll_backend__continuation_info__PredProcId_8, ll_backend__continuation_info__ProcLayoutInfo_14, ll_backend__continuation_info__STATE_VARIABLE_GlobalData_0_15, ll_backend__continuation_info__STATE_VARIABLE_GlobalData_16);
#line 474 "continuation_info.m"
      return;
    }
#line 465 "continuation_info.m"
  }
#line 462 "continuation_info.m"
}

#line 931 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__generate_table_arg_type_info_3_p_0_2(
#line 931 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 931 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 931 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_2)
#line 931 "continuation_info.m"
{
#line 931 "continuation_info.m"
  {
#line 931 "continuation_info.m"
    MR_Box ll_backend__continuation_info__closure = ll_backend__continuation_info__closure_arg;
#line 931 "continuation_info.m"
    MR_Word ll_backend__continuation_info__conv1_LambdaHeadVar__2_23;

#line 931 "continuation_info.m"
    {
#line 931 "continuation_info.m"
      ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars_table__944__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__continuation_info__wrapper_arg_1), &ll_backend__continuation_info__conv1_LambdaHeadVar__2_23);
    }
#line 931 "continuation_info.m"
    *ll_backend__continuation_info__wrapper_arg_2 = ((MR_Box) (ll_backend__continuation_info__conv1_LambdaHeadVar__2_23));
#line 931 "continuation_info.m"
  }
#line 931 "continuation_info.m"
}

#line 929 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__generate_table_arg_type_info_3_p_0_1(
#line 929 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 929 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 929 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_2)
#line 929 "continuation_info.m"
{
#line 929 "continuation_info.m"
  {
#line 929 "continuation_info.m"
    MR_Box ll_backend__continuation_info__closure = ll_backend__continuation_info__closure_arg;
#line 929 "continuation_info.m"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__3_3;

#line 929 "continuation_info.m"
    {
#line 929 "continuation_info.m"
      hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__continuation_info__wrapper_arg_1), &ll_backend__continuation_info__conv0_HeadVar__3_3);
    }
#line 929 "continuation_info.m"
    *ll_backend__continuation_info__wrapper_arg_2 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__3_3));
#line 929 "continuation_info.m"
  }
#line 929 "continuation_info.m"
}

#line 403 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info__generate_table_arg_type_info_3_p_0(
#line 403 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ProcInfo_4,
#line 403 "continuation_info.m"
  MR_Word ll_backend__continuation_info__NumberedVars_5,
#line 403 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__TableArgInfos_6)
#line 403 "continuation_info.m"
{
#line 892 "continuation_info.m"
  {
#line 892 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 892 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeInfo_14_14;
#line 892 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeInfo_35_45;
#line 892 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeCtorInfo_36_46;
#line 892 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeCtorInfo_42_52;
#line 892 "continuation_info.m"
    MR_Word ll_backend__continuation_info__VarSet_7;
#line 892 "continuation_info.m"
    MR_Word ll_backend__continuation_info__VarTypes_8;
#line 892 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeVars0_9;
#line 892 "continuation_info.m"
    MR_Word ll_backend__continuation_info__ArgLayouts_10;
#line 892 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeVars_11;
#line 892 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeVarsList_12;
#line 892 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeInfoDataMap_13;
#line 892 "continuation_info.m"
    MR_Word ll_backend__continuation_info__VarSet_19;
#line 892 "continuation_info.m"
    MR_Word ll_backend__continuation_info__RttiVarMaps_20;
#line 892 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeInfoLocns_21;
#line 892 "continuation_info.m"
    MR_Word ll_backend__continuation_info__FindLocn_22;
#line 892 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeInfoVarLocns_30;
#line 892 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_31_31;

#line 893 "continuation_info.m"
    {
#line 893 "continuation_info.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(ll_backend__continuation_info__ProcInfo_4, &ll_backend__continuation_info__VarSet_7);
    }
#line 894 "continuation_info.m"
    {
#line 894 "continuation_info.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__continuation_info__ProcInfo_4, &ll_backend__continuation_info__VarTypes_8);
    }
#line 12694 "ll_backend.continuation_info.c"
    ll_backend__continuation_info__TypeInfo_14_14 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[2];
#line 895 "continuation_info.m"
    {
#line 895 "continuation_info.m"
      mercury__set__init_1_p_0(ll_backend__continuation_info__TypeInfo_14_14, &ll_backend__continuation_info__TypeVars0_9);
    }
#line 896 "continuation_info.m"
    {
#line 896 "continuation_info.m"
      ll_backend__continuation_info__build_table_arg_info_6_p_0(ll_backend__continuation_info__VarSet_7, ll_backend__continuation_info__VarTypes_8, ll_backend__continuation_info__NumberedVars_5, &ll_backend__continuation_info__ArgLayouts_10, ll_backend__continuation_info__TypeVars0_9, &ll_backend__continuation_info__TypeVars_11);
    }
#line 898 "continuation_info.m"
    {
#line 898 "continuation_info.m"
      mercury__set__to_sorted_list_2_p_0(ll_backend__continuation_info__TypeInfo_14_14, ll_backend__continuation_info__TypeVars_11, &ll_backend__continuation_info__TypeVarsList_12);
    }
#line 927 "continuation_info.m"
    {
#line 927 "continuation_info.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(ll_backend__continuation_info__ProcInfo_4, &ll_backend__continuation_info__VarSet_19);
    }
#line 928 "continuation_info.m"
    {
#line 928 "continuation_info.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ll_backend__continuation_info__ProcInfo_4, &ll_backend__continuation_info__RttiVarMaps_20);
    }
#line 929 "continuation_info.m"
    {
#line 929 "continuation_info.m"
      ll_backend__continuation_info__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 929 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_31_31, 0) = ((MR_Box) (&ll_backend__continuation_info_scalar_common_3[0]));
#line 929 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_31_31, 1) = ((MR_Box) (ll_backend__continuation_info__generate_table_arg_type_info_3_p_0_1));
#line 929 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 929 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_31_31, 3) = ((MR_Box) (ll_backend__continuation_info__RttiVarMaps_20));
#line 929 "continuation_info.m"
    }
#line 12735 "ll_backend.continuation_info.c"
    ll_backend__continuation_info__TypeInfo_35_45 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[2];
#line 12737 "ll_backend.continuation_info.c"
    ll_backend__continuation_info__TypeCtorInfo_36_46 = (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0;
#line 929 "continuation_info.m"
    {
#line 929 "continuation_info.m"
      mercury__list__map_3_p_0(ll_backend__continuation_info__TypeInfo_35_45, ll_backend__continuation_info__TypeCtorInfo_36_46, ll_backend__continuation_info__V_31_31, ll_backend__continuation_info__TypeVarsList_12, &ll_backend__continuation_info__TypeInfoLocns_21);
    }
#line 931 "continuation_info.m"
    {
#line 931 "continuation_info.m"
      ll_backend__continuation_info__FindLocn_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 931 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__FindLocn_22, 0) = ((MR_Box) (&ll_backend__continuation_info_scalar_common_4[1]));
#line 931 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__FindLocn_22, 1) = ((MR_Box) (ll_backend__continuation_info__generate_table_arg_type_info_3_p_0_2));
#line 931 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__FindLocn_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 931 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__FindLocn_22, 3) = ((MR_Box) (ll_backend__continuation_info__NumberedVars_5));
#line 931 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__FindLocn_22, 4) = ((MR_Box) (ll_backend__continuation_info__VarSet_19));
#line 931 "continuation_info.m"
    }
#line 12760 "ll_backend.continuation_info.c"
    ll_backend__continuation_info__TypeCtorInfo_42_52 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_locn_0;
#line 951 "continuation_info.m"
    {
#line 951 "continuation_info.m"
      mercury__list__map_3_p_0(ll_backend__continuation_info__TypeCtorInfo_36_46, ll_backend__continuation_info__TypeCtorInfo_42_52, ll_backend__continuation_info__FindLocn_22, ll_backend__continuation_info__TypeInfoLocns_21, &ll_backend__continuation_info__TypeInfoVarLocns_30);
    }
#line 952 "continuation_info.m"
    {
#line 952 "continuation_info.m"
      mercury__map__from_corresponding_lists_3_p_0(ll_backend__continuation_info__TypeInfo_35_45, ll_backend__continuation_info__TypeCtorInfo_42_52, ll_backend__continuation_info__TypeVarsList_12, ll_backend__continuation_info__TypeInfoVarLocns_30, &ll_backend__continuation_info__TypeInfoDataMap_13);
    }
#line 901 "continuation_info.m"
    {
#line 901 "continuation_info.m"
      MR_Word base;
#line 901 "continuation_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 901 "continuation_info.m"
      *ll_backend__continuation_info__TableArgInfos_6 = base;
#line 901 "continuation_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__continuation_info__ArgLayouts_10));
#line 901 "continuation_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__continuation_info__TypeInfoDataMap_13));
#line 901 "continuation_info.m"
    }
#line 892 "continuation_info.m"
  }
#line 403 "continuation_info.m"
}

#line 867 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__find_typeinfos_for_tvars_4_p_0_2(
#line 867 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 867 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 867 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_2)
#line 867 "continuation_info.m"
{
#line 867 "continuation_info.m"
  {
#line 867 "continuation_info.m"
    MR_Box ll_backend__continuation_info__closure = ll_backend__continuation_info__closure_arg;
#line 867 "continuation_info.m"
    MR_Word ll_backend__continuation_info__conv1_LambdaHeadVar__2_29;

#line 867 "continuation_info.m"
    {
#line 867 "continuation_info.m"
      ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars__867__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__continuation_info__wrapper_arg_1), &ll_backend__continuation_info__conv1_LambdaHeadVar__2_29);
    }
#line 867 "continuation_info.m"
    *ll_backend__continuation_info__wrapper_arg_2 = ((MR_Box) (ll_backend__continuation_info__conv1_LambdaHeadVar__2_29));
#line 867 "continuation_info.m"
  }
#line 867 "continuation_info.m"
}

#line 865 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__find_typeinfos_for_tvars_4_p_0_1(
#line 865 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 865 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 865 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_2)
#line 865 "continuation_info.m"
{
#line 865 "continuation_info.m"
  {
#line 865 "continuation_info.m"
    MR_Box ll_backend__continuation_info__closure = ll_backend__continuation_info__closure_arg;
#line 865 "continuation_info.m"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__3_3;

#line 865 "continuation_info.m"
    {
#line 865 "continuation_info.m"
      hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__continuation_info__wrapper_arg_1), &ll_backend__continuation_info__conv0_HeadVar__3_3);
    }
#line 865 "continuation_info.m"
    *ll_backend__continuation_info__wrapper_arg_2 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__3_3));
#line 865 "continuation_info.m"
  }
#line 865 "continuation_info.m"
}

#line 400 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info__find_typeinfos_for_tvars_4_p_0(
#line 400 "continuation_info.m"
  MR_Word ll_backend__continuation_info__TypeVars_5,
#line 400 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarLocs_6,
#line 400 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ProcInfo_7,
#line 400 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__TypeInfoDataMap_8)
#line 400 "continuation_info.m"
{
#line 862 "continuation_info.m"
  {
#line 862 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 862 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeInfo_45_45;
#line 862 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeCtorInfo_46_46;
#line 862 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeInfo_54_54;
#line 862 "continuation_info.m"
    MR_Word ll_backend__continuation_info__VarSet_9;
#line 862 "continuation_info.m"
    MR_Word ll_backend__continuation_info__RttiVarMaps_10;
#line 862 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeInfoLocns_11;
#line 862 "continuation_info.m"
    MR_Word ll_backend__continuation_info__FindLocn_12;
#line 862 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeInfoVarLocns_26;
#line 862 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_27_27;

#line 863 "continuation_info.m"
    {
#line 863 "continuation_info.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(ll_backend__continuation_info__ProcInfo_7, &ll_backend__continuation_info__VarSet_9);
    }
#line 864 "continuation_info.m"
    {
#line 864 "continuation_info.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ll_backend__continuation_info__ProcInfo_7, &ll_backend__continuation_info__RttiVarMaps_10);
    }
#line 865 "continuation_info.m"
    {
#line 865 "continuation_info.m"
      ll_backend__continuation_info__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 865 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_27_27, 0) = ((MR_Box) (&ll_backend__continuation_info_scalar_common_3[0]));
#line 865 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_27_27, 1) = ((MR_Box) (ll_backend__continuation_info__find_typeinfos_for_tvars_4_p_0_1));
#line 865 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 865 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_27_27, 3) = ((MR_Box) (ll_backend__continuation_info__RttiVarMaps_10));
#line 865 "continuation_info.m"
    }
#line 12911 "ll_backend.continuation_info.c"
    ll_backend__continuation_info__TypeInfo_45_45 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[2];
#line 12913 "ll_backend.continuation_info.c"
    ll_backend__continuation_info__TypeCtorInfo_46_46 = (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0;
#line 865 "continuation_info.m"
    {
#line 865 "continuation_info.m"
      mercury__list__map_3_p_0(ll_backend__continuation_info__TypeInfo_45_45, ll_backend__continuation_info__TypeCtorInfo_46_46, ll_backend__continuation_info__V_27_27, ll_backend__continuation_info__TypeVars_5, &ll_backend__continuation_info__TypeInfoLocns_11);
    }
#line 867 "continuation_info.m"
    {
#line 867 "continuation_info.m"
      ll_backend__continuation_info__FindLocn_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 867 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__FindLocn_12, 0) = ((MR_Box) (&ll_backend__continuation_info_scalar_common_4[0]));
#line 867 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__FindLocn_12, 1) = ((MR_Box) (ll_backend__continuation_info__find_typeinfos_for_tvars_4_p_0_2));
#line 867 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__FindLocn_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 867 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__FindLocn_12, 3) = ((MR_Box) (ll_backend__continuation_info__VarLocs_6));
#line 867 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__FindLocn_12, 4) = ((MR_Box) (ll_backend__continuation_info__VarSet_9));
#line 867 "continuation_info.m"
    }
#line 12936 "ll_backend.continuation_info.c"
    ll_backend__continuation_info__TypeInfo_54_54 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[3];
#line 887 "continuation_info.m"
    {
#line 887 "continuation_info.m"
      mercury__list__map_3_p_0(ll_backend__continuation_info__TypeCtorInfo_46_46, ll_backend__continuation_info__TypeInfo_54_54, ll_backend__continuation_info__FindLocn_12, ll_backend__continuation_info__TypeInfoLocns_11, &ll_backend__continuation_info__TypeInfoVarLocns_26);
    }
#line 888 "continuation_info.m"
    {
#line 888 "continuation_info.m"
      mercury__map__from_corresponding_lists_3_p_0(ll_backend__continuation_info__TypeInfo_45_45, ll_backend__continuation_info__TypeInfo_54_54, ll_backend__continuation_info__TypeVars_5, ll_backend__continuation_info__TypeInfoVarLocns_26, ll_backend__continuation_info__TypeInfoDataMap_8);
#line 888 "continuation_info.m"
      return;
    }
#line 862 "continuation_info.m"
  }
#line 400 "continuation_info.m"
}

#line 394 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info__generate_closure_layout_4_p_0(
#line 394 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ModuleInfo_5,
#line 394 "continuation_info.m"
  MR_Word ll_backend__continuation_info__PredId_6,
#line 394 "continuation_info.m"
  MR_Integer ll_backend__continuation_info__ProcId_7,
#line 394 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__ClosureLayout_8)
#line 394 "continuation_info.m"
{
#line 804 "continuation_info.m"
  {
#line 804 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 804 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeInfo_30_30;
#line 804 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Globals_9;
#line 804 "continuation_info.m"
    MR_Word ll_backend__continuation_info__UseFloatRegs_10;
#line 804 "continuation_info.m"
    MR_Word ll_backend__continuation_info__PredInfo_11;
#line 804 "continuation_info.m"
    MR_Word ll_backend__continuation_info__ProcInfo_12;
#line 804 "continuation_info.m"
    MR_Word ll_backend__continuation_info__HeadVars_13;
#line 804 "continuation_info.m"
    MR_Word ll_backend__continuation_info__ArgInfos_14;
#line 804 "continuation_info.m"
    MR_Word ll_backend__continuation_info__ArgTypes_15;
#line 804 "continuation_info.m"
    MR_Word ll_backend__continuation_info__InstMap_16;
#line 804 "continuation_info.m"
    MR_Word ll_backend__continuation_info__VarLocs0_17;
#line 804 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeVars0_18;
#line 822 "continuation_info.m"
    MR_Word ll_backend__continuation_info__ArgLayouts_19;
#line 822 "continuation_info.m"
    MR_Word ll_backend__continuation_info__VarLocs_20;
#line 822 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeVars_21;

#line 805 "continuation_info.m"
    {
#line 805 "continuation_info.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__continuation_info__ModuleInfo_5, &ll_backend__continuation_info__Globals_9);
    }
#line 806 "continuation_info.m"
    {
#line 806 "continuation_info.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__continuation_info__Globals_9, (MR_Integer) 250, &ll_backend__continuation_info__UseFloatRegs_10);
    }
#line 807 "continuation_info.m"
    {
#line 807 "continuation_info.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(ll_backend__continuation_info__ModuleInfo_5, ll_backend__continuation_info__PredId_6, ll_backend__continuation_info__ProcId_7, &ll_backend__continuation_info__PredInfo_11, &ll_backend__continuation_info__ProcInfo_12);
    }
#line 808 "continuation_info.m"
    {
#line 808 "continuation_info.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ll_backend__continuation_info__ProcInfo_12, &ll_backend__continuation_info__HeadVars_13);
    }
#line 809 "continuation_info.m"
    {
#line 809 "continuation_info.m"
      hlds__hlds_pred__proc_info_arg_info_2_p_0(ll_backend__continuation_info__ProcInfo_12, &ll_backend__continuation_info__ArgInfos_14);
    }
#line 810 "continuation_info.m"
    {
#line 810 "continuation_info.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(ll_backend__continuation_info__PredInfo_11, &ll_backend__continuation_info__ArgTypes_15);
    }
#line 811 "continuation_info.m"
    {
#line 811 "continuation_info.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(ll_backend__continuation_info__ProcInfo_12, ll_backend__continuation_info__ModuleInfo_5, &ll_backend__continuation_info__InstMap_16);
    }
#line 812 "continuation_info.m"
    {
#line 812 "continuation_info.m"
      mercury__map__init_1_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[0], (MR_Word) &ll_backend__continuation_info_scalar_common_1[1], &ll_backend__continuation_info__VarLocs0_17);
    }
#line 13041 "ll_backend.continuation_info.c"
    ll_backend__continuation_info__TypeInfo_30_30 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[2];
#line 813 "continuation_info.m"
    {
#line 813 "continuation_info.m"
      mercury__set__init_1_p_0(ll_backend__continuation_info__TypeInfo_30_30, &ll_backend__continuation_info__TypeVars0_18);
    }
#line 815 "continuation_info.m"
    {
#line 815 "continuation_info.m"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info__build_closure_info_10_p_0(ll_backend__continuation_info__HeadVars_13, ll_backend__continuation_info__ArgTypes_15, ll_backend__continuation_info__ArgInfos_14, &ll_backend__continuation_info__ArgLayouts_19, ll_backend__continuation_info__InstMap_16, ll_backend__continuation_info__UseFloatRegs_10, ll_backend__continuation_info__VarLocs0_17, &ll_backend__continuation_info__VarLocs_20, ll_backend__continuation_info__TypeVars0_18, &ll_backend__continuation_info__TypeVars_21);
    }
#line 822 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 818 "continuation_info.m"
      {
#line 818 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeVarsList_22;
#line 818 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfoDataMap_23;

#line 818 "continuation_info.m"
        {
#line 818 "continuation_info.m"
          mercury__set__to_sorted_list_2_p_0(ll_backend__continuation_info__TypeInfo_30_30, ll_backend__continuation_info__TypeVars_21, &ll_backend__continuation_info__TypeVarsList_22);
        }
#line 819 "continuation_info.m"
        {
#line 819 "continuation_info.m"
          ll_backend__continuation_info__find_typeinfos_for_tvars_4_p_0(ll_backend__continuation_info__TypeVarsList_22, ll_backend__continuation_info__VarLocs_20, ll_backend__continuation_info__ProcInfo_12, &ll_backend__continuation_info__TypeInfoDataMap_23);
        }
#line 821 "continuation_info.m"
        {
#line 821 "continuation_info.m"
          MR_Word base;
#line 821 "continuation_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 821 "continuation_info.m"
          *ll_backend__continuation_info__ClosureLayout_8 = base;
#line 821 "continuation_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__continuation_info__ArgLayouts_19));
#line 821 "continuation_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__continuation_info__TypeInfoDataMap_23));
#line 821 "continuation_info.m"
        }
#line 818 "continuation_info.m"
      }
#line 822 "continuation_info.m"
    else
#line 823 "continuation_info.m"
      {
#line 823 "continuation_info.m"
        {
#line 823 "continuation_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.continuation_info", (MR_String) "predicate \140ll_backend.continuation_info.generate_closure_layout\'/4", (MR_String) "proc headvars and pred argtypes disagree on arity");
#line 823 "continuation_info.m"
          return;
        }
#line 823 "continuation_info.m"
      }
#line 804 "continuation_info.m"
  }
#line 394 "continuation_info.m"
}

#line 388 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info__generate_resume_layout_6_p_0(
#line 388 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ResumeMap_7,
#line 388 "continuation_info.m"
  MR_Word ll_backend__continuation_info__Temps_8,
#line 388 "continuation_info.m"
  MR_Word ll_backend__continuation_info__InstMap_9,
#line 388 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ProcInfo_10,
#line 388 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ModuleInfo_11,
#line 388 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__Layout_12)
#line 388 "continuation_info.m"
{
#line 687 "continuation_info.m"
  {
#line 687 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;

#line 687 "continuation_info.m"
    {
#line 687 "continuation_info.m"
      ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_117_109_101_95_108_97_121_111_117_116_95_95_91_51_93_95_48_6_p_0(ll_backend__continuation_info__ResumeMap_7, ll_backend__continuation_info__Temps_8, ll_backend__continuation_info__ProcInfo_10, ll_backend__continuation_info__ModuleInfo_11, ll_backend__continuation_info__Layout_12);
#line 687 "continuation_info.m"
      return;
    }
#line 687 "continuation_info.m"
  }
#line 388 "continuation_info.m"
}

#line 380 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info__generate_return_live_lvalues_10_p_0(
#line 380 "continuation_info.m"
  MR_Word ll_backend__continuation_info__OutputArgLocs_11,
#line 380 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ReturnInstMap_12,
#line 380 "continuation_info.m"
  MR_Word ll_backend__continuation_info__Vars_13,
#line 380 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarLocs_14,
#line 380 "continuation_info.m"
  MR_Word ll_backend__continuation_info__Temps_15,
#line 380 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ProcInfo_16,
#line 380 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ModuleInfo_17,
#line 380 "continuation_info.m"
  MR_Word ll_backend__continuation_info__Globals_18,
#line 380 "continuation_info.m"
  MR_Word ll_backend__continuation_info__OkToDeleteAny_19,
#line 380 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__LiveLvalues_20)
#line 380 "continuation_info.m"
{
#line 616 "continuation_info.m"
  {
#line 616 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;

#line 616 "continuation_info.m"
    {
#line 616 "continuation_info.m"
      ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_116_117_114_110_95_108_105_118_101_95_108_118_97_108_117_101_115_95_95_91_50_44_32_55_93_95_48_10_p_0(ll_backend__continuation_info__OutputArgLocs_11, ll_backend__continuation_info__Vars_13, ll_backend__continuation_info__VarLocs_14, ll_backend__continuation_info__Temps_15, ll_backend__continuation_info__ProcInfo_16, ll_backend__continuation_info__Globals_18, ll_backend__continuation_info__OkToDeleteAny_19, ll_backend__continuation_info__LiveLvalues_20);
#line 616 "continuation_info.m"
      return;
    }
#line 616 "continuation_info.m"
  }
#line 380 "continuation_info.m"
}

#line 609 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_1(
#line 609 "continuation_info.m"
  void * ll_backend__continuation_info__env_ptr_arg)
#line 609 "continuation_info.m"
{
#line 609 "continuation_info.m"
  {
#line 609 "continuation_info.m"
    struct ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0_s * ll_backend__continuation_info__env_ptr = (struct ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0_s *) ll_backend__continuation_info__env_ptr_arg;

#line 609 "continuation_info.m"
    MR_builtin_longjmp((ll_backend__continuation_info__env_ptr)->ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__commit_0, 1);
#line 609 "continuation_info.m"
  }
#line 609 "continuation_info.m"
}

#line 609 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_3(
#line 609 "continuation_info.m"
  void * ll_backend__continuation_info__env_ptr_arg)
#line 609 "continuation_info.m"
{
#line 609 "continuation_info.m"
  {
#line 609 "continuation_info.m"
    struct ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0_s * ll_backend__continuation_info__env_ptr = (struct ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0_s *) ll_backend__continuation_info__env_ptr_arg;

#line 609 "continuation_info.m"
    (ll_backend__continuation_info__env_ptr)->ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__Type_16 = ((MR_Word) (ll_backend__continuation_info__env_ptr)->ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__conv0_Type_16);
#line 609 "continuation_info.m"
    {
#line 609 "continuation_info.m"
      ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_2(ll_backend__continuation_info__env_ptr);
#line 609 "continuation_info.m"
      return;
    }
#line 609 "continuation_info.m"
  }
#line 609 "continuation_info.m"
}

#line 609 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_2(
#line 609 "continuation_info.m"
  void * ll_backend__continuation_info__env_ptr_arg)
#line 609 "continuation_info.m"
{
#line 609 "continuation_info.m"
  {
#line 609 "continuation_info.m"
    struct ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0_s * ll_backend__continuation_info__env_ptr = (struct ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0_s *) ll_backend__continuation_info__env_ptr_arg;

#line 610 "continuation_info.m"
    {
#line 610 "continuation_info.m"
      (ll_backend__continuation_info__env_ptr)->ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__succeeded = parse_tree__prog_type__type_is_higher_order_1_p_0((ll_backend__continuation_info__env_ptr)->ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__Type_16);
    }
#line 610 "continuation_info.m"
    if ((ll_backend__continuation_info__env_ptr)->ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__succeeded)
#line 610 "continuation_info.m"
      {
#line 610 "continuation_info.m"
        ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_1(ll_backend__continuation_info__env_ptr);
#line 610 "continuation_info.m"
        return;
      }
#line 609 "continuation_info.m"
  }
#line 609 "continuation_info.m"
}

#line 609 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_4(
#line 609 "continuation_info.m"
  void * ll_backend__continuation_info__env_ptr_arg)
#line 609 "continuation_info.m"
{
#line 609 "continuation_info.m"
  {
#line 609 "continuation_info.m"
    struct ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0_s * ll_backend__continuation_info__env_ptr = (struct ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0_s *) ll_backend__continuation_info__env_ptr_arg;

#line 609 "continuation_info.m"
    if (MR_builtin_setjmp((ll_backend__continuation_info__env_ptr)->ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__commit_0) == 0)
#line 609 "continuation_info.m"
      {
#line 609 "continuation_info.m"
        {
#line 609 "continuation_info.m"
          {
#line 609 "continuation_info.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &(ll_backend__continuation_info__env_ptr)->ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__conv0_Type_16, (ll_backend__continuation_info__env_ptr)->ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__ArgTypes_14, ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_3, ll_backend__continuation_info__env_ptr);
          }
#line 609 "continuation_info.m"
        }
#line 609 "continuation_info.m"
        (ll_backend__continuation_info__env_ptr)->ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__succeeded = MR_FALSE;
#line 609 "continuation_info.m"
      }
#line 609 "continuation_info.m"
    else
#line 609 "continuation_info.m"
      (ll_backend__continuation_info__env_ptr)->ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__succeeded = MR_TRUE;
#line 609 "continuation_info.m"
  }
#line 609 "continuation_info.m"
}

#line 375 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0(
#line 375 "continuation_info.m"
  MR_Word ll_backend__continuation_info__PredInfo_5,
#line 375 "continuation_info.m"
  MR_Word ll_backend__continuation_info__Globals_6,
#line 375 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__BasicLayout_7,
#line 375 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__ForceProcIdLayout_8)
#line 375 "continuation_info.m"
{
#line 375 "continuation_info.m"
  {
#line 375 "continuation_info.m"
    struct ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0_s ll_backend__continuation_info__env;

#line 589 "continuation_info.m"
    {
#line 589 "continuation_info.m"
      (ll_backend__continuation_info__env).ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__succeeded = libs__globals__lookup_bool_option_3_p_1(ll_backend__continuation_info__Globals_6, (MR_Integer) 134, (MR_Integer) 1);
    }
#line 589 "continuation_info.m"
    if ((ll_backend__continuation_info__env).ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__succeeded)
#line 589 "continuation_info.m"
      {
#line 607 "continuation_info.m"
        {
#line 607 "continuation_info.m"
          hlds__hlds_pred__pred_info_get_arg_types_2_p_0(ll_backend__continuation_info__PredInfo_5, &(ll_backend__continuation_info__env).ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__ArgTypes_14);
        }
#line 609 "continuation_info.m"
        {
#line 609 "continuation_info.m"
          ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_4(&ll_backend__continuation_info__env);
        }
#line 589 "continuation_info.m"
      }
#line 594 "continuation_info.m"
    if ((ll_backend__continuation_info__env).ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__succeeded)
#line 592 "continuation_info.m"
      {
#line 592 "continuation_info.m"
        *ll_backend__continuation_info__BasicLayout_7 = (MR_Integer) 1;
#line 593 "continuation_info.m"
        *ll_backend__continuation_info__ForceProcIdLayout_8 = (MR_Integer) 1;
#line 592 "continuation_info.m"
      }
#line 594 "continuation_info.m"
    else
#line 599 "continuation_info.m"
      {
#line 595 "continuation_info.m"
        {
#line 595 "continuation_info.m"
          (ll_backend__continuation_info__env).ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__succeeded = libs__globals__lookup_bool_option_3_p_1(ll_backend__continuation_info__Globals_6, (MR_Integer) 260, (MR_Integer) 1);
        }
#line 599 "continuation_info.m"
        if ((ll_backend__continuation_info__env).ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__succeeded)
#line 597 "continuation_info.m"
          {
#line 597 "continuation_info.m"
            *ll_backend__continuation_info__BasicLayout_7 = (MR_Integer) 1;
#line 598 "continuation_info.m"
            *ll_backend__continuation_info__ForceProcIdLayout_8 = (MR_Integer) 0;
#line 597 "continuation_info.m"
          }
#line 599 "continuation_info.m"
        else
#line 600 "continuation_info.m"
          {
#line 600 "continuation_info.m"
            *ll_backend__continuation_info__BasicLayout_7 = (MR_Integer) 0;
#line 601 "continuation_info.m"
            *ll_backend__continuation_info__ForceProcIdLayout_8 = (MR_Integer) 0;
#line 600 "continuation_info.m"
          }
#line 599 "continuation_info.m"
      }
#line 375 "continuation_info.m"
  }
#line 375 "continuation_info.m"
}

#line 368 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info__maybe_collect_call_continuations_in_cproc_4_p_0(
#line 368 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ModuleInfo_5,
#line 368 "continuation_info.m"
  MR_Word ll_backend__continuation_info__CProc_6,
#line 368 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_GlobalData_0_15,
#line 368 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_GlobalData_16)
#line 368 "continuation_info.m"
{
#line 434 "continuation_info.m"
  {
#line 434 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 434 "continuation_info.m"
    MR_Word ll_backend__continuation_info__PredId_8;
#line 434 "continuation_info.m"
    MR_Word ll_backend__continuation_info__PredInfo_10;
#line 434 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Globals_11;
#line 434 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Layout_12;
#line 434 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 2)));
#line 435 "continuation_info.m"
    MR_String ll_backend__continuation_info__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 0)));
#line 435 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 1)));
#line 435 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 3)));
#line 435 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 4)));
#line 435 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 5)));
#line 435 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 6)));
#line 435 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 7)));
#line 435 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 8)));
#line 435 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__V_9_9;
#line 438 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_13_13;

#line 435 "continuation_info.m"
    ll_backend__continuation_info__PredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_17_17, (MR_Integer) 0)));
#line 435 "continuation_info.m"
    ll_backend__continuation_info__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_17_17, (MR_Integer) 1)));
#line 436 "continuation_info.m"
    {
#line 436 "continuation_info.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__continuation_info__ModuleInfo_5, ll_backend__continuation_info__PredId_8, &ll_backend__continuation_info__PredInfo_10);
    }
#line 437 "continuation_info.m"
    {
#line 437 "continuation_info.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__continuation_info__ModuleInfo_5, &ll_backend__continuation_info__Globals_11);
    }
#line 438 "continuation_info.m"
    {
#line 438 "continuation_info.m"
      ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0(ll_backend__continuation_info__PredInfo_10, ll_backend__continuation_info__Globals_11, &ll_backend__continuation_info__Layout_12, &ll_backend__continuation_info__V_13_13);
    }
#line 444 "continuation_info.m"
#line 444 "continuation_info.m"
    switch (ll_backend__continuation_info__Layout_12) {
#line 444 "continuation_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 444 "continuation_info.m"
      case (MR_Integer) 0:
#line 445 "continuation_info.m"
        *ll_backend__continuation_info__STATE_VARIABLE_GlobalData_16 = ll_backend__continuation_info__STATE_VARIABLE_GlobalData_0_15;
#line 444 "continuation_info.m"
        break;
#line 444 "continuation_info.m"
      case (MR_Integer) 1:
#line 440 "continuation_info.m"
        {
#line 440 "continuation_info.m"
          MR_Word ll_backend__continuation_info__WantReturnLayout_14;

#line 441 "continuation_info.m"
          {
#line 441 "continuation_info.m"
            libs__globals__want_return_var_layouts_2_p_0(ll_backend__continuation_info__Globals_11, &ll_backend__continuation_info__WantReturnLayout_14);
          }
#line 442 "continuation_info.m"
          {
#line 442 "continuation_info.m"
            ll_backend__continuation_info__collect_call_continuations_in_cproc_4_p_0(ll_backend__continuation_info__WantReturnLayout_14, ll_backend__continuation_info__CProc_6, ll_backend__continuation_info__STATE_VARIABLE_GlobalData_0_15, ll_backend__continuation_info__STATE_VARIABLE_GlobalData_16);
#line 442 "continuation_info.m"
            return;
          }
#line 440 "continuation_info.m"
        }
#line 444 "continuation_info.m"
        break;
#line 444 "continuation_info.m"
    }
#line 434 "continuation_info.m"
  }
#line 368 "continuation_info.m"
}

#line 359 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info__maybe_collect_call_continuations_in_cprocs_4_p_0(
#line 359 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ModuleInfo_1,
#line 359 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 359 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_GlobalData_0_3,
#line 359 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_GlobalData_4)
#line 359 "continuation_info.m"
{
#line 426 "continuation_info.m"
  while (MR_TRUE)
#line 426 "continuation_info.m"
    {
#line 426 "continuation_info.m"
      /* tailcall optimized into a loop */
#line 426 "continuation_info.m"
      {
#line 426 "continuation_info.m"
        MR_bool ll_backend__continuation_info__succeeded;

#line 426 "continuation_info.m"
        if ((ll_backend__continuation_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 426 "continuation_info.m"
          *ll_backend__continuation_info__STATE_VARIABLE_GlobalData_4 = ll_backend__continuation_info__STATE_VARIABLE_GlobalData_0_3;
#line 426 "continuation_info.m"
        else
#line 428 "continuation_info.m"
          {
#line 428 "continuation_info.m"
            MR_Word ll_backend__continuation_info__CProc_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 428 "continuation_info.m"
            MR_Word ll_backend__continuation_info__CProcs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 428 "continuation_info.m"
            MR_Word ll_backend__continuation_info__STATE_VARIABLE_GlobalData_15_15;

#line 429 "continuation_info.m"
            {
#line 429 "continuation_info.m"
              ll_backend__continuation_info__maybe_collect_call_continuations_in_cproc_4_p_0(ll_backend__continuation_info__ModuleInfo_1, ll_backend__continuation_info__CProc_10, ll_backend__continuation_info__STATE_VARIABLE_GlobalData_0_3, &ll_backend__continuation_info__STATE_VARIABLE_GlobalData_15_15);
            }
#line 431 "continuation_info.m"
            /* direct tailcall eliminated */
#line 431 "continuation_info.m"
            {
#line 431 "continuation_info.m"
              MR_Word ll_backend__continuation_info__HeadVar__2__tmp_copy_2 = ll_backend__continuation_info__CProcs_11;
#line 431 "continuation_info.m"
              MR_Word ll_backend__continuation_info__STATE_VARIABLE_GlobalData_0__tmp_copy_3 = ll_backend__continuation_info__STATE_VARIABLE_GlobalData_15_15;

#line 431 "continuation_info.m"
              ll_backend__continuation_info__STATE_VARIABLE_GlobalData_0_3 = ll_backend__continuation_info__STATE_VARIABLE_GlobalData_0__tmp_copy_3;
#line 431 "continuation_info.m"
              ll_backend__continuation_info__HeadVar__2_2 = ll_backend__continuation_info__HeadVar__2__tmp_copy_2;
#line 431 "continuation_info.m"
            }
#line 431 "continuation_info.m"
            continue;
#line 428 "continuation_info.m"
          }
#line 426 "continuation_info.m"
      }
#line 426 "continuation_info.m"
      break;
#line 426 "continuation_info.m"
    }
#line 359 "continuation_info.m"
}

void mercury__ll_backend__continuation_info__init(void)
{
}

void mercury__ll_backend__continuation_info__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_call_info_0);
	MR_register_type_ctor_info(&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_closure_arg_info_0);
	MR_register_type_ctor_info(&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_closure_layout_info_0);
	MR_register_type_ctor_info(&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0);
	MR_register_type_ctor_info(&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_label_info_0);
	MR_register_type_ctor_info(&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0);
	MR_register_type_ctor_info(&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_deep_prof_info_0);
	MR_register_type_ctor_info(&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_label_layout_info_0);
	MR_register_type_ctor_info(&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_layout_info_0);
	MR_register_type_ctor_info(&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_layout_table_info_0);
	MR_register_type_ctor_info(&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_return_layout_info_0);
	MR_register_type_ctor_info(&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_slot_contents_0);
	MR_register_type_ctor_info(&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_trace_needs_body_rep_0);
	MR_register_type_ctor_info(&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_trace_port_layout_info_0);
	MR_register_type_ctor_info(&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_user_attribute_0);
	MR_register_type_ctor_info(&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_user_event_info_0);
}

void mercury__ll_backend__continuation_info__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.continuation_info. */
