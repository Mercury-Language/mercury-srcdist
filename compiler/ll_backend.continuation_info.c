/*
** Automatically generated from `continuation_info.m'
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
#include "transform_hlds.mih"
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
#include "parse_tree.maybe_error.mih"
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



#line 377 "continuation_info.m"
struct ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0_s {
#line 591 "continuation_info.m"
  MR_bool ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__succeeded;
#line 592 "continuation_info.m"
  MR_Word ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__ArgTypes_14;
#line 612 "continuation_info.m"
  jmp_buf ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__commit_0;
#line 612 "continuation_info.m"
  MR_Word ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__Type_16;
#line 612 "continuation_info.m"
  MR_Box ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__conv0_Type_16;
#line 377 "continuation_info.m"
};


#line 173 "ll_backend.continuation_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__continuation_info__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 176 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 179 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

#line 182 "ll_backend.continuation_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__continuation_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

#line 185 "ll_backend.continuation_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__continuation_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 188 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 191 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0;

#line 194 "ll_backend.continuation_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__continuation_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0;

#line 197 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__continuation_info__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0;

#line 200 "ll_backend.continuation_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__continuation_info__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0;

#line 203 "ll_backend.continuation_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__continuation_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__continuation_info__type_ctor_info_internal_layout_info_0;

#line 206 "ll_backend.continuation_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__continuation_info__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_layout_locn_0;

#line 209 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__list__ti_list_1ll_backend__llds__type_ctor_info_liveinfo_0;

#line 212 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1mdbcomp__goal_path__type_ctor_info_forward_goal_path_0;

#line 215 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_call_info_0_0[5];

#line 218 "ll_backend.continuation_info.c"
static const MR_ConstString ll_backend__continuation_info__ll_backend__continuation_info__field_names_call_info_0_0[5];

#line 221 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_call_info_0_0;

#line 224 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_call_info_0_0[1];

#line 227 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_call_info_0[1];

#line 230 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_call_info_0[1];

#line 233 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_call_info_0[1];

#line 236 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_closure_arg_info_0_0[2];

#line 239 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_closure_arg_info_0_0;

#line 242 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_closure_arg_info_0_0[1];

#line 245 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_closure_arg_info_0[1];

#line 248 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_closure_arg_info_0[1];

#line 251 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_closure_arg_info_0[1];

#line 254 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__list__ti_list_1ll_backend__continuation_info__type_ctor_info_closure_arg_info_0;

#line 257 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__continuation_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0;

#line 260 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_closure_layout_info_0_0[2];

#line 263 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_closure_layout_info_0_0;

#line 266 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_closure_layout_info_0_0[1];

#line 269 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_closure_layout_info_0[1];

#line 272 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_closure_layout_info_0[1];

#line 275 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_closure_layout_info_0[1];

#line 278 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_trace_port_layout_info_0;

#line 281 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_layout_label_info_0;

#line 284 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_return_layout_info_0;

#line 287 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_internal_layout_info_0_0[3];

#line 290 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_internal_layout_info_0_0;

#line 293 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_internal_layout_info_0_0[1];

#line 296 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_internal_layout_info_0[1];

#line 299 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_internal_layout_info_0[1];

#line 302 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_internal_layout_info_0[1];

#line 305 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__set_ordlist__ti_set_ordlist_1ll_backend__continuation_info__type_ctor_info_layout_var_info_0;

#line 308 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_layout_label_info_0_0[2];

#line 311 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_layout_label_info_0_0;

#line 314 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_layout_label_info_0_0[1];

#line 317 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_layout_label_info_0[1];

#line 320 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_layout_label_info_0[1];

#line 323 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_layout_label_info_0[1];

#line 326 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_layout_var_info_0_0[3];

#line 329 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_layout_var_info_0_0;

#line 332 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_layout_var_info_0_0[1];

#line 335 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_layout_var_info_0[1];

#line 338 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_layout_var_info_0[1];

#line 341 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_layout_var_info_0[1];

#line 344 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_proc_deep_prof_info_0_0[3];

#line 347 "ll_backend.continuation_info.c"
static const MR_ConstString ll_backend__continuation_info__ll_backend__continuation_info__field_names_proc_deep_prof_info_0_0[3];

#line 350 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_proc_deep_prof_info_0_0;

#line 353 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_proc_deep_prof_info_0_0[1];

#line 356 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_proc_deep_prof_info_0[1];

#line 359 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_proc_deep_prof_info_0[1];

#line 362 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_proc_deep_prof_info_0[1];

#line 365 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__continuation_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__continuation_info__type_ctor_info_internal_layout_info_0;

#line 368 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

#line 371 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0;

#line 374 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 377 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0;

#line 380 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 383 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__continuation_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 386 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_proc_layout_table_info_0;

#line 389 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0;

#line 392 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_proc_deep_prof_info_0;

#line 395 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_proc_layout_info_0_0[24];

#line 398 "ll_backend.continuation_info.c"
static const MR_ConstString ll_backend__continuation_info__ll_backend__continuation_info__field_names_proc_layout_info_0_0[24];

#line 401 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_proc_layout_info_0_0;

#line 404 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_proc_layout_info_0_0[1];

#line 407 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_proc_layout_info_0[1];

#line 410 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_proc_layout_info_0[1];

#line 413 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_proc_layout_info_0[1];

#line 416 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_proc_layout_table_info_0_0[1];

#line 419 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_proc_layout_table_info_0_0;

#line 422 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_proc_layout_table_info_0_1[1];

#line 425 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_proc_layout_table_info_0_1;

#line 428 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_proc_layout_table_info_0_0[1];

#line 431 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_proc_layout_table_info_0_1[1];

#line 434 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_proc_layout_table_info_0[2];

#line 437 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_proc_layout_table_info_0[2];

#line 440 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_proc_layout_table_info_0[2];

#line 443 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__continuation_info__pair__ti_pair_2term__type_ctor_info_context_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0;

#line 446 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__continuation_info__pair__ti_pair_2ll_backend__llds__type_ctor_info_code_addr_0pair__ti_pair_2term__type_ctor_info_context_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0;

#line 449 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__list__ti_list_1pair__ti_pair_2ll_backend__llds__type_ctor_info_code_addr_0pair__ti_pair_2term__type_ctor_info_context_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0;

#line 452 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_return_layout_info_0_0[2];

#line 455 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_return_layout_info_0_0;

#line 458 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_return_layout_info_0_0[1];

#line 461 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_return_layout_info_0[1];

#line 464 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_return_layout_info_0[1];

#line 467 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_return_layout_info_0[1];

#line 470 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_0;

#line 473 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_1;

#line 476 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_2;

#line 479 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_3;

#line 482 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_4;

#line 485 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_5;

#line 488 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_6;

#line 491 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_7;

#line 494 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_8;

#line 497 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_9;

#line 500 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_10;

#line 503 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_slot_contents_0_11[1];

#line 506 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_11;

#line 509 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_slot_contents_0_0[11];

#line 512 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_slot_contents_0_1[1];

#line 515 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_slot_contents_0[2];

#line 518 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_slot_contents_0[12];

#line 521 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_slot_contents_0[12];

#line 524 "ll_backend.continuation_info.c"
static const MR_EnumFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__enum_functor_desc_trace_needs_body_rep_0_0;

#line 527 "ll_backend.continuation_info.c"
static const MR_EnumFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__enum_functor_desc_trace_needs_body_rep_0_1;

#line 530 "ll_backend.continuation_info.c"
static const MR_EnumFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__enum_value_ordered_trace_needs_body_rep_0[2];

#line 533 "ll_backend.continuation_info.c"
static const MR_EnumFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__enum_name_ordered_trace_needs_body_rep_0[2];

#line 536 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_trace_needs_body_rep_0[2];

#line 539 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_user_event_info_0;

#line 542 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_trace_port_layout_info_0_0[6];

#line 545 "ll_backend.continuation_info.c"
static const MR_ConstString ll_backend__continuation_info__ll_backend__continuation_info__field_names_trace_port_layout_info_0_0[6];

#line 548 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_trace_port_layout_info_0_0;

#line 551 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_trace_port_layout_info_0_0[1];

#line 554 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_trace_port_layout_info_0[1];

#line 557 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_trace_port_layout_info_0[1];

#line 560 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_trace_port_layout_info_0[1];

#line 563 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_user_attribute_0_0[2];

#line 566 "ll_backend.continuation_info.c"
static const MR_ConstString ll_backend__continuation_info__ll_backend__continuation_info__field_names_user_attribute_0_0[2];

#line 569 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_user_attribute_0_0;

#line 572 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_user_attribute_0_0[1];

#line 575 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_user_attribute_0[1];

#line 578 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_user_attribute_0[1];

#line 581 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_user_attribute_0[1];

#line 584 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_user_attribute_0;

#line 587 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__list__ti_list_1maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_user_attribute_0;

#line 590 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_user_event_info_0_0[2];

#line 593 "ll_backend.continuation_info.c"
static const MR_ConstString ll_backend__continuation_info__ll_backend__continuation_info__field_names_user_event_info_0_0[2];

#line 596 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_user_event_info_0_0;

#line 599 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_user_event_info_0_0[1];

#line 602 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_user_event_info_0[1];

#line 605 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_user_event_info_0[1];

#line 608 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_user_event_info_0[1];

#line 611 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____call_info_0_0_10001(
#line 614 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 616 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2);

#line 619 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____call_info_0_0_10001(
#line 622 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 624 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 626 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3);

#line 629 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____closure_arg_info_0_0_10001(
#line 632 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 634 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2);

#line 637 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____closure_arg_info_0_0_10001(
#line 640 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 642 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 644 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3);

#line 647 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____closure_layout_info_0_0_10001(
#line 650 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 652 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2);

#line 655 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____closure_layout_info_0_0_10001(
#line 658 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 660 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 662 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3);

#line 665 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____internal_layout_info_0_0_10001(
#line 668 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 670 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2);

#line 673 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____internal_layout_info_0_0_10001(
#line 676 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 678 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 680 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3);

#line 683 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____layout_label_info_0_0_10001(
#line 686 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 688 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2);

#line 691 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____layout_label_info_0_0_10001(
#line 694 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 696 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 698 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3);

#line 701 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____layout_var_info_0_0_10001(
#line 704 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 706 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2);

#line 709 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____layout_var_info_0_0_10001(
#line 712 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 714 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 716 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3);

#line 719 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____proc_deep_prof_info_0_0_10001(
#line 722 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 724 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2);

#line 727 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____proc_deep_prof_info_0_0_10001(
#line 730 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 732 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 734 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3);

#line 737 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____proc_label_layout_info_0_0_10001(
#line 740 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 742 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2);

#line 745 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____proc_label_layout_info_0_0_10001(
#line 748 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 750 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 752 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3);

#line 755 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____proc_layout_info_0_0_10001(
#line 758 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 760 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2);

#line 763 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____proc_layout_info_0_0_10001(
#line 766 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 768 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 770 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3);

#line 773 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____proc_layout_table_info_0_0_10001(
#line 776 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 778 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2);

#line 781 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____proc_layout_table_info_0_0_10001(
#line 784 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 786 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 788 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3);

#line 791 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____return_layout_info_0_0_10001(
#line 794 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 796 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2);

#line 799 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____return_layout_info_0_0_10001(
#line 802 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 804 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 806 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3);

#line 809 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____slot_contents_0_0_10001(
#line 812 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 814 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2);

#line 817 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____slot_contents_0_0_10001(
#line 820 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 822 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 824 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3);

#line 827 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____trace_needs_body_rep_0_0_10001(
#line 830 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 832 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2);

#line 835 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____trace_needs_body_rep_0_0_10001(
#line 838 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 840 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 842 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3);

#line 845 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____trace_port_layout_info_0_0_10001(
#line 848 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 850 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2);

#line 853 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____trace_port_layout_info_0_0_10001(
#line 856 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 858 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 860 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3);

#line 863 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____user_attribute_0_0_10001(
#line 866 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 868 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2);

#line 871 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____user_attribute_0_0_10001(
#line 874 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 876 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 878 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3);

#line 881 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____user_event_info_0_0_10001(
#line 884 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 886 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2);

#line 889 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____user_event_info_0_0_10001(
#line 892 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 894 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 896 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3);

#line 744 "continuation_info.m"
static MR_bool MR_CALL 
ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_117_109_101_95_108_97_121_111_117_116_95_102_111_114_95_118_97_114_115_95_95_91_50_93_95_48_9_p_0_3(
#line 744 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg);

#line 742 "continuation_info.m"
static MR_bool MR_CALL 
ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_117_109_101_95_108_97_121_111_117_116_95_102_111_114_95_118_97_114_115_95_95_91_50_93_95_48_9_p_0_2(
#line 742 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg);

#line 740 "continuation_info.m"
static MR_bool MR_CALL 
ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_117_109_101_95_108_97_121_111_117_116_95_102_111_114_95_118_97_114_115_95_95_91_50_93_95_48_9_p_0_1(
#line 740 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg);

#line 704 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_117_109_101_95_108_97_121_111_117_116_95_102_111_114_95_118_97_114_115_95_95_91_50_93_95_48_9_p_0(
#line 704 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 704 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarTypes_3,
#line 704 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ProcInfo_4,
#line 704 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ModuleInfo_5,
#line 704 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_VarInfos_0_6,
#line 704 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_VarInfos_7,
#line 704 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_TVars_0_8,
#line 704 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_TVars_9);

#line 666 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_118_97_114_95_108_105_118_101_95_108_118_97_108_117_101_115_95_95_91_50_44_32_53_93_95_48_7_p_0(
#line 666 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 666 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarLocs_3,
#line 666 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ProcInfo_4,
#line 666 "continuation_info.m"
  MR_Word ll_backend__continuation_info__WantReturnVarLayout_6,
#line 666 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__7_7);

#line 945 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars_table__945__1_4_p_0(
#line 945 "continuation_info.m"
  MR_Word ll_backend__continuation_info__NumberedVars_6,
#line 945 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarSet_9,
#line 945 "continuation_info.m"
  MR_Word ll_backend__continuation_info__LambdaHeadVar__1_22,
#line 945 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__LambdaHeadVar__2_23);

#line 568 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__567__1_3_p_0_1(
#line 568 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 568 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 568 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 568 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_3);

#line 567 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__567__1_3_p_0(
#line 567 "continuation_info.m"
  MR_Word ll_backend__continuation_info__LambdaHeadVar__1_29,
#line 567 "continuation_info.m"
  MR_Word ll_backend__continuation_info__LambdaHeadVar__2_30,
#line 567 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__LambdaHeadVar__3_31);

#line 568 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__568__1_3_p_0(
#line 568 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_45,
#line 568 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_46,
#line 568 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__3_47);

#line 563 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__563__1_2_p_0(
#line 563 "continuation_info.m"
  MR_Word ll_backend__continuation_info__LambdaHeadVar__1_26,
#line 563 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__LambdaHeadVar__2_27);

#line 557 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__557__1_2_p_0(
#line 557 "continuation_info.m"
  MR_Word ll_backend__continuation_info__LambdaHeadVar__1_23,
#line 557 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__LambdaHeadVar__2_24);

#line 538 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__collect_continuation__538__1_3_p_0(
#line 538 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_54,
#line 538 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_55,
#line 538 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__3_56);

#line 451 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info____Compare____call_info_0_0(
#line 451 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 451 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 451 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3);

#line 451 "continuation_info.m"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____call_info_0_0(
#line 451 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 451 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2);

#line 916 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__build_table_arg_info_6_p_0(
#line 916 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarSet_1,
#line 916 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarTypes_2,
#line 916 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3,
#line 916 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__4_4,
#line 916 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_TypeVars_0_5,
#line 916 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_TypeVars_6);

#line 890 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__gather_type_info_layout_locn_4_p_0(
#line 890 "continuation_info.m"
  MR_Word ll_backend__continuation_info__TypeInfoLocn_5,
#line 890 "continuation_info.m"
  MR_Word ll_backend__continuation_info__Lval_6,
#line 890 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_Locns_0_12,
#line 890 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_Locns_13);

#line 881 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__gather_type_info_layout_locns_for_tvar_6_p_0_1(
#line 881 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 881 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 881 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 881 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_3);

#line 872 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__gather_type_info_layout_locns_for_tvar_6_p_0(
#line 872 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarSet_7,
#line 872 "continuation_info.m"
  MR_Word ll_backend__continuation_info__RttiVarMaps_8,
#line 872 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarLocs_9,
#line 872 "continuation_info.m"
  MR_Word ll_backend__continuation_info__TypeVar_10,
#line 872 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_TypeInfoDataMap_0_17,
#line 872 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_TypeInfoDataMap_18);

#line 830 "continuation_info.m"
static MR_bool MR_CALL 
ll_backend__continuation_info__build_closure_info_10_p_0(
#line 830 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 830 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 830 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3,
#line 830 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__4_4,
#line 830 "continuation_info.m"
  MR_Word ll_backend__continuation_info__InstMap_5,
#line 830 "continuation_info.m"
  MR_Word ll_backend__continuation_info__UseFloatRegs_6,
#line 830 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_VarLocs_0_7,
#line 830 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_VarLocs_8,
#line 830 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_TypeVars_0_9,
#line 830 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_TypeVars_10);

#line 753 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__generate_temp_var_infos_2_p_0(
#line 753 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 753 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__2_2);

#line 655 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__generate_temp_live_lvalues_2_p_0(
#line 655 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 655 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__2_2);

#line 629 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__find_return_var_lvals_5_p_0(
#line 629 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 629 "continuation_info.m"
  MR_Word ll_backend__continuation_info__StackSlots_2,
#line 629 "continuation_info.m"
  MR_Word ll_backend__continuation_info__OkToDeleteAny_3,
#line 629 "continuation_info.m"
  MR_Word ll_backend__continuation_info__OutputArgLocs_4,
#line 629 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__5_5);

#line 567 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__convert_return_data_3_p_0_3(
#line 567 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 567 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 567 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 567 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_3);

#line 562 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__convert_return_data_3_p_0_2(
#line 562 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 562 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 562 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_2);

#line 557 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__convert_return_data_3_p_0_1(
#line 557 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 557 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 557 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_2);

#line 553 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__convert_return_data_3_p_0(
#line 553 "continuation_info.m"
  MR_Word ll_backend__continuation_info__LiveInfos_4,
#line 553 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__VarInfoSet_5,
#line 553 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__TypeInfoMap_6);

#line 538 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__collect_continuation_4_p_0_1(
#line 538 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 538 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 538 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 538 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_3);

#line 492 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__collect_continuation_4_p_0(
#line 492 "continuation_info.m"
  MR_Word ll_backend__continuation_info__WantReturnInfo_5,
#line 492 "continuation_info.m"
  MR_Word ll_backend__continuation_info__CallInfo_6,
#line 492 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_Internals_0_36,
#line 492 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_Internals_37);

#line 479 "continuation_info.m"
static MR_bool MR_CALL 
ll_backend__continuation_info__get_call_info_2_p_0(
#line 479 "continuation_info.m"
  MR_Word ll_backend__continuation_info__Instr_3,
#line 479 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__CallInfo_4);

#line 474 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__collect_call_continuations_in_cproc_4_p_0_2(
#line 474 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 474 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 474 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 474 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_3);

#line 473 "continuation_info.m"
static MR_bool MR_CALL 
ll_backend__continuation_info__collect_call_continuations_in_cproc_4_p_0_1(
#line 473 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 473 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 473 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_2);

#line 465 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__collect_call_continuations_in_cproc_4_p_0(
#line 465 "continuation_info.m"
  MR_Word ll_backend__continuation_info__WantReturnInfo_5,
#line 465 "continuation_info.m"
  MR_Word ll_backend__continuation_info__CProc_6,
#line 465 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_GlobalData_0_15,
#line 465 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_GlobalData_16);

#line 944 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__generate_table_arg_type_info_3_p_0_2(
#line 944 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 944 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 944 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_2);

#line 942 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__generate_table_arg_type_info_3_p_0_1(
#line 942 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 942 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 942 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_2);

#line 869 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__find_typeinfos_for_tvars_4_p_0_1(
#line 869 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 869 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 869 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 869 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_3);

#line 612 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_1(
#line 612 "continuation_info.m"
  void * ll_backend__continuation_info__env_ptr_arg);

#line 612 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_3(
#line 612 "continuation_info.m"
  void * ll_backend__continuation_info__env_ptr_arg);

#line 612 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_2(
#line 612 "continuation_info.m"
  void * ll_backend__continuation_info__env_ptr_arg);

#line 612 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_4(
#line 612 "continuation_info.m"
  void * ll_backend__continuation_info__env_ptr_arg);


static /* final */ const MR_Box ll_backend__continuation_info_scalar_common_1[23][2];

static /* final */ const MR_Box ll_backend__continuation_info_scalar_common_2[11][3];

static /* final */ const MR_Box ll_backend__continuation_info_scalar_common_3[1][9];

static /* final */ const MR_Box ll_backend__continuation_info_scalar_common_4[3][6];

static /* final */ const MR_Box ll_backend__continuation_info_scalar_common_5[3][7];

static /* final */ const MR_Box ll_backend__continuation_info_scalar_common_6[4][5];




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
    ((MR_Box) (&ll_backend__continuation_info_scalar_common_1[2])),
    ((MR_Box) (&ll_backend__continuation_info_scalar_common_1[3]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0))
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
    ((MR_Box) (&ll_backend__continuation_info_scalar_common_6[0])),
    ((MR_Box) (ll_backend__continuation_info__collect_call_continuations_in_cproc_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ll_backend__continuation_info_scalar_common_4[1])),
    ((MR_Box) (ll_backend__continuation_info__collect_continuation_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ll_backend__continuation_info_scalar_common_6[1])),
    ((MR_Box) (ll_backend__continuation_info__convert_return_data_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ll_backend__continuation_info_scalar_common_6[2])),
    ((MR_Box) (ll_backend__continuation_info__convert_return_data_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ll_backend__continuation_info_scalar_common_4[2])),
    ((MR_Box) (ll_backend__continuation_info__convert_return_data_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&ll_backend__continuation_info_scalar_common_4[1])),
    ((MR_Box) (ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__567__1_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__continuation_info_scalar_common_3[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__continuation_info__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&ll_backend__continuation_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__continuation_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&ll_backend__continuation_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0)),
    ((MR_Box) (&ll_backend__continuation_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0))
  },
};

static /* final */ const MR_Box ll_backend__continuation_info_scalar_common_4[3][6] = {
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

static /* final */ const MR_Box ll_backend__continuation_info_scalar_common_5[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__continuation_info__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__continuation_info__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_locn_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_call_info_0)),
    ((MR_Box) (&ll_backend__continuation_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__continuation_info__type_ctor_info_internal_layout_info_0)),
    ((MR_Box) (&ll_backend__continuation_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__continuation_info__type_ctor_info_internal_layout_info_0))
  },
  /* row 2 */
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

static /* final */ const MR_Box ll_backend__continuation_info_scalar_common_6[4][5] = {
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



#line 1638 "ll_backend.continuation_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__continuation_info__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1646 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1654 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 1662 "ll_backend.continuation_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__continuation_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__continuation_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &ll_backend__continuation_info__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 1671 "ll_backend.continuation_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__continuation_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1679 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1687 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0
  }
};

#line 1695 "ll_backend.continuation_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__continuation_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__continuation_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &ll_backend__continuation_info__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0
  }
};

#line 1704 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__continuation_info__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1713 "ll_backend.continuation_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__continuation_info__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__continuation_info__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0
  }
};

#line 1721 "ll_backend.continuation_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__continuation_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__continuation_info__type_ctor_info_internal_layout_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0
  }
};

#line 1730 "ll_backend.continuation_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__continuation_info__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_layout_locn_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0
  }
};

#line 1738 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__list__ti_list_1ll_backend__llds__type_ctor_info_liveinfo_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_liveinfo_0
  }
};

#line 1746 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
  }
};

#line 1754 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_call_info_0_0[5] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__list__ti_list_1ll_backend__llds__type_ctor_info_liveinfo_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__maybe__ti_maybe_1mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
};

#line 1763 "ll_backend.continuation_info.c"
static const MR_ConstString ll_backend__continuation_info__ll_backend__continuation_info__field_names_call_info_0_0[5] = {
  (MR_String) "call_return_label",
  (MR_String) "call_target",
  (MR_String) "call_live_on_return",
  (MR_String) "call_context",
  (MR_String) "call_goal_path"
};

#line 1772 "ll_backend.continuation_info.c"
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

#line 1787 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_call_info_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_call_info_0_0
};

#line 1792 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_call_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_call_info_0_0
  }
};

#line 1801 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_call_info_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_call_info_0_0
};

#line 1806 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_call_info_0[1] = {
  (MR_Integer) 0
};

#line 1811 "ll_backend.continuation_info.c"
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

#line 1828 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_closure_arg_info_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
};

#line 1834 "ll_backend.continuation_info.c"
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

#line 1849 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_closure_arg_info_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_closure_arg_info_0_0
};

#line 1854 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_closure_arg_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_closure_arg_info_0_0
  }
};

#line 1863 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_closure_arg_info_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_closure_arg_info_0_0
};

#line 1868 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_closure_arg_info_0[1] = {
  (MR_Integer) 0
};

#line 1873 "ll_backend.continuation_info.c"
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

#line 1890 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__list__ti_list_1ll_backend__continuation_info__type_ctor_info_closure_arg_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_closure_arg_info_0
  }
};

#line 1898 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__continuation_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_TypeInfo) &ll_backend__continuation_info__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0
  }
};

#line 1907 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_closure_layout_info_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__list__ti_list_1ll_backend__continuation_info__type_ctor_info_closure_arg_info_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0
};

#line 1913 "ll_backend.continuation_info.c"
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

#line 1928 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_closure_layout_info_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_closure_layout_info_0_0
};

#line 1933 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_closure_layout_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_closure_layout_info_0_0
  }
};

#line 1942 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_closure_layout_info_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_closure_layout_info_0_0
};

#line 1947 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_closure_layout_info_0[1] = {
  (MR_Integer) 0
};

#line 1952 "ll_backend.continuation_info.c"
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

#line 1969 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_trace_port_layout_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_trace_port_layout_info_0
  }
};

#line 1977 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_layout_label_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_label_info_0
  }
};

#line 1985 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_return_layout_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_return_layout_info_0
  }
};

#line 1993 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_internal_layout_info_0_0[3] = {
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_trace_port_layout_info_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_layout_label_info_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_return_layout_info_0
};

#line 2000 "ll_backend.continuation_info.c"
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

#line 2015 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_internal_layout_info_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_internal_layout_info_0_0
};

#line 2020 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_internal_layout_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_internal_layout_info_0_0
  }
};

#line 2029 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_internal_layout_info_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_internal_layout_info_0_0
};

#line 2034 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_internal_layout_info_0[1] = {
  (MR_Integer) 0
};

#line 2039 "ll_backend.continuation_info.c"
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

#line 2056 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__set_ordlist__ti_set_ordlist_1ll_backend__continuation_info__type_ctor_info_layout_var_info_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0
  }
};

#line 2064 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_layout_label_info_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__set_ordlist__ti_set_ordlist_1ll_backend__continuation_info__type_ctor_info_layout_var_info_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0
};

#line 2070 "ll_backend.continuation_info.c"
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

#line 2085 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_layout_label_info_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_layout_label_info_0_0
};

#line 2090 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_layout_label_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_layout_label_info_0_0
  }
};

#line 2099 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_layout_label_info_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_layout_label_info_0_0
};

#line 2104 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_layout_label_info_0[1] = {
  (MR_Integer) 0
};

#line 2109 "ll_backend.continuation_info.c"
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

#line 2126 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_layout_var_info_0_0[3] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_live_value_type_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2133 "ll_backend.continuation_info.c"
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

#line 2148 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_layout_var_info_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_layout_var_info_0_0
};

#line 2153 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_layout_var_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_layout_var_info_0_0
  }
};

#line 2162 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_layout_var_info_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_layout_var_info_0_0
};

#line 2167 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_layout_var_info_0[1] = {
  (MR_Integer) 0
};

#line 2172 "ll_backend.continuation_info.c"
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

#line 2189 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_proc_deep_prof_info_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_hlds_proc_static_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_deep_excp_slots_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_deep_original_body_0
};

#line 2196 "ll_backend.continuation_info.c"
static const MR_ConstString ll_backend__continuation_info__ll_backend__continuation_info__field_names_proc_deep_prof_info_0_0[3] = {
  (MR_String) "pdpi_proc_static",
  (MR_String) "pdpi_excp_slots",
  (MR_String) "pdpi_orig_body"
};

#line 2203 "ll_backend.continuation_info.c"
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

#line 2218 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_proc_deep_prof_info_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_proc_deep_prof_info_0_0
};

#line 2223 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_proc_deep_prof_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_proc_deep_prof_info_0_0
  }
};

#line 2232 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_proc_deep_prof_info_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_proc_deep_prof_info_0_0
};

#line 2237 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_proc_deep_prof_info_0[1] = {
  (MR_Integer) 0
};

#line 2242 "ll_backend.continuation_info.c"
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

#line 2259 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__continuation_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__continuation_info__type_ctor_info_internal_layout_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0
  }
};

#line 2268 "ll_backend.continuation_info.c"
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

#line 2285 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2293 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 2301 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2309 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

#line 2317 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2325 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__continuation_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2334 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_proc_layout_table_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_layout_table_info_0
  }
};

#line 2342 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0
  }
};

#line 2350 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_proc_deep_prof_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_deep_prof_info_0
  }
};

#line 2358 "ll_backend.continuation_info.c"
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

#line 2386 "ll_backend.continuation_info.c"
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

#line 2414 "ll_backend.continuation_info.c"
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

#line 2429 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_proc_layout_info_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_proc_layout_info_0_0
};

#line 2434 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_proc_layout_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_proc_layout_info_0_0
  }
};

#line 2443 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_proc_layout_info_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_proc_layout_info_0_0
};

#line 2448 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_proc_layout_info_0[1] = {
  (MR_Integer) 0
};

#line 2453 "ll_backend.continuation_info.c"
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

#line 2470 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_proc_layout_table_info_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_table_io_info_0
};

#line 2475 "ll_backend.continuation_info.c"
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

#line 2490 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_proc_layout_table_info_0_1[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_table_struct_info_0
};

#line 2495 "ll_backend.continuation_info.c"
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

#line 2510 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_proc_layout_table_info_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_proc_layout_table_info_0_0
};

#line 2515 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_proc_layout_table_info_0_1[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_proc_layout_table_info_0_1
};

#line 2520 "ll_backend.continuation_info.c"
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

#line 2534 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_proc_layout_table_info_0[2] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_proc_layout_table_info_0_0,
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_proc_layout_table_info_0_1
};

#line 2540 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_proc_layout_table_info_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2546 "ll_backend.continuation_info.c"
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

#line 2563 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__continuation_info__pair__ti_pair_2term__type_ctor_info_context_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0,
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
  }
};

#line 2572 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__continuation_info__pair__ti_pair_2ll_backend__llds__type_ctor_info_code_addr_0pair__ti_pair_2term__type_ctor_info_context_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0,
    (MR_TypeInfo) &ll_backend__continuation_info__pair__ti_pair_2term__type_ctor_info_context_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
  }
};

#line 2581 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__list__ti_list_1pair__ti_pair_2ll_backend__llds__type_ctor_info_code_addr_0pair__ti_pair_2term__type_ctor_info_context_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__pair__ti_pair_2ll_backend__llds__type_ctor_info_code_addr_0pair__ti_pair_2term__type_ctor_info_context_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
  }
};

#line 2589 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_return_layout_info_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__list__ti_list_1pair__ti_pair_2ll_backend__llds__type_ctor_info_code_addr_0pair__ti_pair_2term__type_ctor_info_context_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_label_info_0
};

#line 2595 "ll_backend.continuation_info.c"
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

#line 2610 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_return_layout_info_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_return_layout_info_0_0
};

#line 2615 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_return_layout_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_return_layout_info_0_0
  }
};

#line 2624 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_return_layout_info_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_return_layout_info_0_0
};

#line 2629 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_return_layout_info_0[1] = {
  (MR_Integer) 0
};

#line 2634 "ll_backend.continuation_info.c"
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

#line 2651 "ll_backend.continuation_info.c"
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

#line 2666 "ll_backend.continuation_info.c"
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

#line 2681 "ll_backend.continuation_info.c"
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

#line 2696 "ll_backend.continuation_info.c"
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

#line 2711 "ll_backend.continuation_info.c"
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

#line 2726 "ll_backend.continuation_info.c"
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

#line 2741 "ll_backend.continuation_info.c"
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

#line 2756 "ll_backend.continuation_info.c"
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

#line 2771 "ll_backend.continuation_info.c"
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

#line 2786 "ll_backend.continuation_info.c"
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

#line 2801 "ll_backend.continuation_info.c"
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

#line 2816 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_slot_contents_0_11[1] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
};

#line 2821 "ll_backend.continuation_info.c"
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

#line 2836 "ll_backend.continuation_info.c"
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

#line 2851 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_slot_contents_0_1[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_11
};

#line 2856 "ll_backend.continuation_info.c"
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

#line 2870 "ll_backend.continuation_info.c"
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

#line 2886 "ll_backend.continuation_info.c"
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

#line 2902 "ll_backend.continuation_info.c"
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

#line 2919 "ll_backend.continuation_info.c"
static const MR_EnumFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__enum_functor_desc_trace_needs_body_rep_0_0 = {
  (MR_String) "trace_needs_body_rep",
  (MR_Integer) 0
};

#line 2925 "ll_backend.continuation_info.c"
static const MR_EnumFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__enum_functor_desc_trace_needs_body_rep_0_1 = {
  (MR_String) "trace_does_not_need_body_rep",
  (MR_Integer) 1
};

#line 2931 "ll_backend.continuation_info.c"
static const MR_EnumFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__enum_value_ordered_trace_needs_body_rep_0[2] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__enum_functor_desc_trace_needs_body_rep_0_0,
  &ll_backend__continuation_info__ll_backend__continuation_info__enum_functor_desc_trace_needs_body_rep_0_1
};

#line 2937 "ll_backend.continuation_info.c"
static const MR_EnumFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__enum_name_ordered_trace_needs_body_rep_0[2] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__enum_functor_desc_trace_needs_body_rep_0_1,
  &ll_backend__continuation_info__ll_backend__continuation_info__enum_functor_desc_trace_needs_body_rep_0_0
};

#line 2943 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_trace_needs_body_rep_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2949 "ll_backend.continuation_info.c"
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

#line 2966 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_user_event_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_user_event_info_0
  }
};

#line 2974 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_trace_port_layout_info_0_0[6] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_user_event_info_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_label_info_0
};

#line 2984 "ll_backend.continuation_info.c"
static const MR_ConstString ll_backend__continuation_info__ll_backend__continuation_info__field_names_trace_port_layout_info_0_0[6] = {
  (MR_String) "port_context",
  (MR_String) "port_type",
  (MR_String) "port_is_hidden",
  (MR_String) "port_path",
  (MR_String) "port_user",
  (MR_String) "port_label"
};

#line 2994 "ll_backend.continuation_info.c"
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

#line 3009 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_trace_port_layout_info_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_trace_port_layout_info_0_0
};

#line 3014 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_trace_port_layout_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_trace_port_layout_info_0_0
  }
};

#line 3023 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_trace_port_layout_info_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_trace_port_layout_info_0_0
};

#line 3028 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_trace_port_layout_info_0[1] = {
  (MR_Integer) 0
};

#line 3033 "ll_backend.continuation_info.c"
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

#line 3050 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_user_attribute_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 3056 "ll_backend.continuation_info.c"
static const MR_ConstString ll_backend__continuation_info__ll_backend__continuation_info__field_names_user_attribute_0_0[2] = {
  (MR_String) "attr_locn",
  (MR_String) "attr_var"
};

#line 3062 "ll_backend.continuation_info.c"
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

#line 3077 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_user_attribute_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_user_attribute_0_0
};

#line 3082 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_user_attribute_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_user_attribute_0_0
  }
};

#line 3091 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_user_attribute_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_user_attribute_0_0
};

#line 3096 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_user_attribute_0[1] = {
  (MR_Integer) 0
};

#line 3101 "ll_backend.continuation_info.c"
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

#line 3118 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_user_attribute_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_user_attribute_0
  }
};

#line 3126 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__list__ti_list_1maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_user_attribute_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_user_attribute_0
  }
};

#line 3134 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_user_event_info_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__list__ti_list_1maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_user_attribute_0
};

#line 3140 "ll_backend.continuation_info.c"
static const MR_ConstString ll_backend__continuation_info__ll_backend__continuation_info__field_names_user_event_info_0_0[2] = {
  (MR_String) "user_port_number",
  (MR_String) "user_attributes"
};

#line 3146 "ll_backend.continuation_info.c"
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

#line 3161 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_user_event_info_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_user_event_info_0_0
};

#line 3166 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_user_event_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_user_event_info_0_0
  }
};

#line 3175 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_user_event_info_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_user_event_info_0_0
};

#line 3180 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_user_event_info_0[1] = {
  (MR_Integer) 0
};

#line 3185 "ll_backend.continuation_info.c"
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

#line 3202 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____call_info_0_0_10001(
#line 3205 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3207 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3209 "ll_backend.continuation_info.c"
{
#line 3211 "ll_backend.continuation_info.c"
  {
#line 3213 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3216 "ll_backend.continuation_info.c"
    {
#line 3218 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____call_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3221 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3223 "ll_backend.continuation_info.c"
  }
#line 3225 "ll_backend.continuation_info.c"
}

#line 3228 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____call_info_0_0_10001(
#line 3231 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3233 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3235 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3237 "ll_backend.continuation_info.c"
{
#line 3239 "ll_backend.continuation_info.c"
  {
#line 3241 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3244 "ll_backend.continuation_info.c"
    {
#line 3246 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____call_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3249 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3251 "ll_backend.continuation_info.c"
  }
#line 3253 "ll_backend.continuation_info.c"
}

#line 3256 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____closure_arg_info_0_0_10001(
#line 3259 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3261 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3263 "ll_backend.continuation_info.c"
{
#line 3265 "ll_backend.continuation_info.c"
  {
#line 3267 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3270 "ll_backend.continuation_info.c"
    {
#line 3272 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____closure_arg_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3275 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3277 "ll_backend.continuation_info.c"
  }
#line 3279 "ll_backend.continuation_info.c"
}

#line 3282 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____closure_arg_info_0_0_10001(
#line 3285 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3287 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3289 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3291 "ll_backend.continuation_info.c"
{
#line 3293 "ll_backend.continuation_info.c"
  {
#line 3295 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3298 "ll_backend.continuation_info.c"
    {
#line 3300 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____closure_arg_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3303 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3305 "ll_backend.continuation_info.c"
  }
#line 3307 "ll_backend.continuation_info.c"
}

#line 3310 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____closure_layout_info_0_0_10001(
#line 3313 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3315 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3317 "ll_backend.continuation_info.c"
{
#line 3319 "ll_backend.continuation_info.c"
  {
#line 3321 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3324 "ll_backend.continuation_info.c"
    {
#line 3326 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____closure_layout_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3329 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3331 "ll_backend.continuation_info.c"
  }
#line 3333 "ll_backend.continuation_info.c"
}

#line 3336 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____closure_layout_info_0_0_10001(
#line 3339 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3341 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3343 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3345 "ll_backend.continuation_info.c"
{
#line 3347 "ll_backend.continuation_info.c"
  {
#line 3349 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3352 "ll_backend.continuation_info.c"
    {
#line 3354 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____closure_layout_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3357 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3359 "ll_backend.continuation_info.c"
  }
#line 3361 "ll_backend.continuation_info.c"
}

#line 3364 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____internal_layout_info_0_0_10001(
#line 3367 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3369 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3371 "ll_backend.continuation_info.c"
{
#line 3373 "ll_backend.continuation_info.c"
  {
#line 3375 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3378 "ll_backend.continuation_info.c"
    {
#line 3380 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____internal_layout_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3383 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3385 "ll_backend.continuation_info.c"
  }
#line 3387 "ll_backend.continuation_info.c"
}

#line 3390 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____internal_layout_info_0_0_10001(
#line 3393 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3395 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3397 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3399 "ll_backend.continuation_info.c"
{
#line 3401 "ll_backend.continuation_info.c"
  {
#line 3403 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3406 "ll_backend.continuation_info.c"
    {
#line 3408 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____internal_layout_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3411 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3413 "ll_backend.continuation_info.c"
  }
#line 3415 "ll_backend.continuation_info.c"
}

#line 3418 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____layout_label_info_0_0_10001(
#line 3421 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3423 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3425 "ll_backend.continuation_info.c"
{
#line 3427 "ll_backend.continuation_info.c"
  {
#line 3429 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3432 "ll_backend.continuation_info.c"
    {
#line 3434 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____layout_label_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3437 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3439 "ll_backend.continuation_info.c"
  }
#line 3441 "ll_backend.continuation_info.c"
}

#line 3444 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____layout_label_info_0_0_10001(
#line 3447 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3449 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3451 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3453 "ll_backend.continuation_info.c"
{
#line 3455 "ll_backend.continuation_info.c"
  {
#line 3457 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3460 "ll_backend.continuation_info.c"
    {
#line 3462 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____layout_label_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3465 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3467 "ll_backend.continuation_info.c"
  }
#line 3469 "ll_backend.continuation_info.c"
}

#line 3472 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____layout_var_info_0_0_10001(
#line 3475 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3477 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3479 "ll_backend.continuation_info.c"
{
#line 3481 "ll_backend.continuation_info.c"
  {
#line 3483 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3486 "ll_backend.continuation_info.c"
    {
#line 3488 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____layout_var_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3491 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3493 "ll_backend.continuation_info.c"
  }
#line 3495 "ll_backend.continuation_info.c"
}

#line 3498 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____layout_var_info_0_0_10001(
#line 3501 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3503 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3505 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3507 "ll_backend.continuation_info.c"
{
#line 3509 "ll_backend.continuation_info.c"
  {
#line 3511 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3514 "ll_backend.continuation_info.c"
    {
#line 3516 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____layout_var_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3519 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3521 "ll_backend.continuation_info.c"
  }
#line 3523 "ll_backend.continuation_info.c"
}

#line 3526 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____proc_deep_prof_info_0_0_10001(
#line 3529 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3531 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3533 "ll_backend.continuation_info.c"
{
#line 3535 "ll_backend.continuation_info.c"
  {
#line 3537 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3540 "ll_backend.continuation_info.c"
    {
#line 3542 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____proc_deep_prof_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3545 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3547 "ll_backend.continuation_info.c"
  }
#line 3549 "ll_backend.continuation_info.c"
}

#line 3552 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____proc_deep_prof_info_0_0_10001(
#line 3555 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3557 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3559 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3561 "ll_backend.continuation_info.c"
{
#line 3563 "ll_backend.continuation_info.c"
  {
#line 3565 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3568 "ll_backend.continuation_info.c"
    {
#line 3570 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____proc_deep_prof_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3573 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3575 "ll_backend.continuation_info.c"
  }
#line 3577 "ll_backend.continuation_info.c"
}

#line 3580 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____proc_label_layout_info_0_0_10001(
#line 3583 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3585 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3587 "ll_backend.continuation_info.c"
{
#line 3589 "ll_backend.continuation_info.c"
  {
#line 3591 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3594 "ll_backend.continuation_info.c"
    {
#line 3596 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____proc_label_layout_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3599 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3601 "ll_backend.continuation_info.c"
  }
#line 3603 "ll_backend.continuation_info.c"
}

#line 3606 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____proc_label_layout_info_0_0_10001(
#line 3609 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3611 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3613 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3615 "ll_backend.continuation_info.c"
{
#line 3617 "ll_backend.continuation_info.c"
  {
#line 3619 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3622 "ll_backend.continuation_info.c"
    {
#line 3624 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____proc_label_layout_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3627 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3629 "ll_backend.continuation_info.c"
  }
#line 3631 "ll_backend.continuation_info.c"
}

#line 3634 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____proc_layout_info_0_0_10001(
#line 3637 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3639 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3641 "ll_backend.continuation_info.c"
{
#line 3643 "ll_backend.continuation_info.c"
  {
#line 3645 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3648 "ll_backend.continuation_info.c"
    {
#line 3650 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____proc_layout_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3653 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3655 "ll_backend.continuation_info.c"
  }
#line 3657 "ll_backend.continuation_info.c"
}

#line 3660 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____proc_layout_info_0_0_10001(
#line 3663 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3665 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3667 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3669 "ll_backend.continuation_info.c"
{
#line 3671 "ll_backend.continuation_info.c"
  {
#line 3673 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3676 "ll_backend.continuation_info.c"
    {
#line 3678 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____proc_layout_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3681 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3683 "ll_backend.continuation_info.c"
  }
#line 3685 "ll_backend.continuation_info.c"
}

#line 3688 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____proc_layout_table_info_0_0_10001(
#line 3691 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3693 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3695 "ll_backend.continuation_info.c"
{
#line 3697 "ll_backend.continuation_info.c"
  {
#line 3699 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3702 "ll_backend.continuation_info.c"
    {
#line 3704 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____proc_layout_table_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3707 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3709 "ll_backend.continuation_info.c"
  }
#line 3711 "ll_backend.continuation_info.c"
}

#line 3714 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____proc_layout_table_info_0_0_10001(
#line 3717 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3719 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3721 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3723 "ll_backend.continuation_info.c"
{
#line 3725 "ll_backend.continuation_info.c"
  {
#line 3727 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3730 "ll_backend.continuation_info.c"
    {
#line 3732 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____proc_layout_table_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3735 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3737 "ll_backend.continuation_info.c"
  }
#line 3739 "ll_backend.continuation_info.c"
}

#line 3742 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____return_layout_info_0_0_10001(
#line 3745 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3747 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3749 "ll_backend.continuation_info.c"
{
#line 3751 "ll_backend.continuation_info.c"
  {
#line 3753 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3756 "ll_backend.continuation_info.c"
    {
#line 3758 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____return_layout_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3761 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3763 "ll_backend.continuation_info.c"
  }
#line 3765 "ll_backend.continuation_info.c"
}

#line 3768 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____return_layout_info_0_0_10001(
#line 3771 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3773 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3775 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3777 "ll_backend.continuation_info.c"
{
#line 3779 "ll_backend.continuation_info.c"
  {
#line 3781 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3784 "ll_backend.continuation_info.c"
    {
#line 3786 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____return_layout_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3789 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3791 "ll_backend.continuation_info.c"
  }
#line 3793 "ll_backend.continuation_info.c"
}

#line 3796 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____slot_contents_0_0_10001(
#line 3799 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3801 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3803 "ll_backend.continuation_info.c"
{
#line 3805 "ll_backend.continuation_info.c"
  {
#line 3807 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3810 "ll_backend.continuation_info.c"
    {
#line 3812 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____slot_contents_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3815 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3817 "ll_backend.continuation_info.c"
  }
#line 3819 "ll_backend.continuation_info.c"
}

#line 3822 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____slot_contents_0_0_10001(
#line 3825 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3827 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3829 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3831 "ll_backend.continuation_info.c"
{
#line 3833 "ll_backend.continuation_info.c"
  {
#line 3835 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3838 "ll_backend.continuation_info.c"
    {
#line 3840 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____slot_contents_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3843 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3845 "ll_backend.continuation_info.c"
  }
#line 3847 "ll_backend.continuation_info.c"
}

#line 3850 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____trace_needs_body_rep_0_0_10001(
#line 3853 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3855 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3857 "ll_backend.continuation_info.c"
{
#line 3859 "ll_backend.continuation_info.c"
  {
#line 3861 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3864 "ll_backend.continuation_info.c"
    {
#line 3866 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____trace_needs_body_rep_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3869 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3871 "ll_backend.continuation_info.c"
  }
#line 3873 "ll_backend.continuation_info.c"
}

#line 3876 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____trace_needs_body_rep_0_0_10001(
#line 3879 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3881 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3883 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3885 "ll_backend.continuation_info.c"
{
#line 3887 "ll_backend.continuation_info.c"
  {
#line 3889 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3892 "ll_backend.continuation_info.c"
    {
#line 3894 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____trace_needs_body_rep_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3897 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3899 "ll_backend.continuation_info.c"
  }
#line 3901 "ll_backend.continuation_info.c"
}

#line 3904 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____trace_port_layout_info_0_0_10001(
#line 3907 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3909 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3911 "ll_backend.continuation_info.c"
{
#line 3913 "ll_backend.continuation_info.c"
  {
#line 3915 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3918 "ll_backend.continuation_info.c"
    {
#line 3920 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____trace_port_layout_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3923 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3925 "ll_backend.continuation_info.c"
  }
#line 3927 "ll_backend.continuation_info.c"
}

#line 3930 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____trace_port_layout_info_0_0_10001(
#line 3933 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3935 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3937 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3939 "ll_backend.continuation_info.c"
{
#line 3941 "ll_backend.continuation_info.c"
  {
#line 3943 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3946 "ll_backend.continuation_info.c"
    {
#line 3948 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____trace_port_layout_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3951 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3953 "ll_backend.continuation_info.c"
  }
#line 3955 "ll_backend.continuation_info.c"
}

#line 3958 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____user_attribute_0_0_10001(
#line 3961 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3963 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3965 "ll_backend.continuation_info.c"
{
#line 3967 "ll_backend.continuation_info.c"
  {
#line 3969 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3972 "ll_backend.continuation_info.c"
    {
#line 3974 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____user_attribute_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3977 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3979 "ll_backend.continuation_info.c"
  }
#line 3981 "ll_backend.continuation_info.c"
}

#line 3984 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____user_attribute_0_0_10001(
#line 3987 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3989 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3991 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3993 "ll_backend.continuation_info.c"
{
#line 3995 "ll_backend.continuation_info.c"
  {
#line 3997 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 4000 "ll_backend.continuation_info.c"
    {
#line 4002 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____user_attribute_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 4005 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 4007 "ll_backend.continuation_info.c"
  }
#line 4009 "ll_backend.continuation_info.c"
}

#line 4012 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____user_event_info_0_0_10001(
#line 4015 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 4017 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 4019 "ll_backend.continuation_info.c"
{
#line 4021 "ll_backend.continuation_info.c"
  {
#line 4023 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 4026 "ll_backend.continuation_info.c"
    {
#line 4028 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____user_event_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 4031 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 4033 "ll_backend.continuation_info.c"
  }
#line 4035 "ll_backend.continuation_info.c"
}

#line 4038 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____user_event_info_0_0_10001(
#line 4041 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 4043 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 4045 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 4047 "ll_backend.continuation_info.c"
{
#line 4049 "ll_backend.continuation_info.c"
  {
#line 4051 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 4054 "ll_backend.continuation_info.c"
    {
#line 4056 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____user_event_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 4059 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 4061 "ll_backend.continuation_info.c"
  }
#line 4063 "ll_backend.continuation_info.c"
}

#line 744 "continuation_info.m"
static MR_bool MR_CALL 
ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_117_109_101_95_108_97_121_111_117_116_95_102_111_114_95_118_97_114_115_95_95_91_50_93_95_48_9_p_0_3(
#line 744 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg)
#line 744 "continuation_info.m"
{
#line 744 "continuation_info.m"
  {
#line 744 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 744 "continuation_info.m"
    MR_Box ll_backend__continuation_info__closure = ll_backend__continuation_info__closure_arg;

#line 744 "continuation_info.m"
    {
#line 744 "continuation_info.m"
      ll_backend__continuation_info__succeeded = mercury__int__f_greater_than_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__closure, (MR_Integer) 4))));
    }
#line 744 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 744 "continuation_info.m"
  }
#line 744 "continuation_info.m"
}

#line 742 "continuation_info.m"
static MR_bool MR_CALL 
ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_117_109_101_95_108_97_121_111_117_116_95_102_111_114_95_118_97_114_115_95_95_91_50_93_95_48_9_p_0_2(
#line 742 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg)
#line 742 "continuation_info.m"
{
#line 742 "continuation_info.m"
  {
#line 742 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 742 "continuation_info.m"
    MR_Box ll_backend__continuation_info__closure = ll_backend__continuation_info__closure_arg;

#line 742 "continuation_info.m"
    {
#line 742 "continuation_info.m"
      ll_backend__continuation_info__succeeded = mercury__int__f_greater_than_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__closure, (MR_Integer) 4))));
    }
#line 742 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 742 "continuation_info.m"
  }
#line 742 "continuation_info.m"
}

#line 740 "continuation_info.m"
static MR_bool MR_CALL 
ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_117_109_101_95_108_97_121_111_117_116_95_102_111_114_95_118_97_114_115_95_95_91_50_93_95_48_9_p_0_1(
#line 740 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg)
#line 740 "continuation_info.m"
{
#line 740 "continuation_info.m"
  {
#line 740 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 740 "continuation_info.m"
    MR_Box ll_backend__continuation_info__closure = ll_backend__continuation_info__closure_arg;

#line 740 "continuation_info.m"
    {
#line 740 "continuation_info.m"
      ll_backend__continuation_info__succeeded = mercury__int__f_greater_than_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__closure, (MR_Integer) 4))));
    }
#line 740 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 740 "continuation_info.m"
  }
#line 740 "continuation_info.m"
}

#line 704 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_117_109_101_95_108_97_121_111_117_116_95_102_111_114_95_118_97_114_115_95_95_91_50_93_95_48_9_p_0(
#line 704 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 704 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarTypes_3,
#line 704 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ProcInfo_4,
#line 704 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ModuleInfo_5,
#line 704 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_VarInfos_0_6,
#line 704 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_VarInfos_7,
#line 704 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_TVars_0_8,
#line 704 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_TVars_9)
#line 704 "continuation_info.m"
{
#line 709 "continuation_info.m"
  while (MR_TRUE)
#line 709 "continuation_info.m"
    {
#line 709 "continuation_info.m"
      /* tailcall optimized into a loop */
#line 709 "continuation_info.m"
      {
#line 709 "continuation_info.m"
        MR_bool ll_backend__continuation_info__succeeded;

#line 709 "continuation_info.m"
        if ((ll_backend__continuation_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 709 "continuation_info.m"
          {
#line 709 "continuation_info.m"
            *ll_backend__continuation_info__STATE_VARIABLE_TVars_9 = ll_backend__continuation_info__STATE_VARIABLE_TVars_0_8;
#line 709 "continuation_info.m"
            *ll_backend__continuation_info__STATE_VARIABLE_VarInfos_7 = ll_backend__continuation_info__STATE_VARIABLE_VarInfos_0_6;
#line 709 "continuation_info.m"
          }
#line 709 "continuation_info.m"
        else
#line 711 "continuation_info.m"
          {
#line 711 "continuation_info.m"
            MR_Word ll_backend__continuation_info__Var_20;
#line 711 "continuation_info.m"
            MR_Word ll_backend__continuation_info__LvalSet_21;
#line 711 "continuation_info.m"
            MR_Word ll_backend__continuation_info__VarLvals_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 711 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 711 "continuation_info.m"
            MR_Word ll_backend__continuation_info__STATE_VARIABLE_TVars_38_38;
#line 711 "continuation_info.m"
            MR_Word ll_backend__continuation_info__STATE_VARIABLE_VarInfos_39_39;
#line 713 "continuation_info.m"
            MR_Word ll_backend__continuation_info__Type_29;
#line 713 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_37_37;

#line 710 "continuation_info.m"
            ll_backend__continuation_info__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_36_36, (MR_Integer) 0)));
#line 710 "continuation_info.m"
            ll_backend__continuation_info__LvalSet_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_36_36, (MR_Integer) 1)));
#line 713 "continuation_info.m"
            {
#line 713 "continuation_info.m"
              hlds__vartypes__lookup_var_type_3_p_0(ll_backend__continuation_info__VarTypes_3, ll_backend__continuation_info__Var_20, &ll_backend__continuation_info__Type_29);
            }
#line 714 "continuation_info.m"
            {
#line 714 "continuation_info.m"
              ll_backend__continuation_info__V_37_37 = check_hlds__type_util__check_dummy_type_2_f_0(ll_backend__continuation_info__ModuleInfo_5, ll_backend__continuation_info__Type_29);
            }
#line 714 "continuation_info.m"
            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_37_37 == (MR_Integer) 0);
#line 712 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 716 "continuation_info.m"
              {
#line 716 "continuation_info.m"
                ll_backend__continuation_info__STATE_VARIABLE_TVars_38_38 = ll_backend__continuation_info__STATE_VARIABLE_TVars_0_8;
#line 716 "continuation_info.m"
                ll_backend__continuation_info__STATE_VARIABLE_VarInfos_39_39 = ll_backend__continuation_info__STATE_VARIABLE_VarInfos_0_6;
#line 716 "continuation_info.m"
              }
#line 712 "continuation_info.m"
            else
#line 719 "continuation_info.m"
              {
#line 719 "continuation_info.m"
                MR_Word ll_backend__continuation_info__VarInfo_30;
#line 719 "continuation_info.m"
                MR_Word ll_backend__continuation_info__TypeVars_31;
#line 719 "continuation_info.m"
                MR_Word ll_backend__continuation_info__LvalList_50;
#line 719 "continuation_info.m"
                MR_Word ll_backend__continuation_info__Lval_52;
#line 719 "continuation_info.m"
                MR_Word ll_backend__continuation_info__LiveValueType_55;
#line 719 "continuation_info.m"
                MR_Word ll_backend__continuation_info__V_75_75;
#line 719 "continuation_info.m"
                MR_Word ll_backend__continuation_info__VarSet_86;
#line 719 "continuation_info.m"
                MR_Word ll_backend__continuation_info__VarTypes_87;
#line 719 "continuation_info.m"
                MR_String ll_backend__continuation_info__Name_89;
#line 719 "continuation_info.m"
                MR_Word ll_backend__continuation_info__Type_90;
#line 733 "continuation_info.m"
                MR_Word ll_backend__continuation_info__LvalPrime_51;
#line 733 "continuation_info.m"
                MR_Word ll_backend__continuation_info__V_56_56;
#line 739 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__N_53;
#line 773 "continuation_info.m"
                MR_String ll_backend__continuation_info__GivenName_88;

#line 732 "continuation_info.m"
                {
#line 732 "continuation_info.m"
                  mercury__set__to_sorted_list_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__continuation_info__LvalSet_21, &ll_backend__continuation_info__LvalList_50);
                }
#line 733 "continuation_info.m"
                ll_backend__continuation_info__succeeded = ((MR_tag((MR_Word) ll_backend__continuation_info__LvalList_50)) == (MR_mktag((MR_Integer) 1)));
#line 733 "continuation_info.m"
                if (ll_backend__continuation_info__succeeded)
#line 733 "continuation_info.m"
                  {
#line 733 "continuation_info.m"
                    ll_backend__continuation_info__LvalPrime_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__LvalList_50, (MR_Integer) 0)));
#line 733 "continuation_info.m"
                    ll_backend__continuation_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__LvalList_50, (MR_Integer) 1)));
#line 733 "continuation_info.m"
                    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_56_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 733 "continuation_info.m"
                  }
#line 733 "continuation_info.m"
                if (ll_backend__continuation_info__succeeded)
#line 734 "continuation_info.m"
                  ll_backend__continuation_info__Lval_52 = ll_backend__continuation_info__LvalPrime_51;
#line 733 "continuation_info.m"
                else
#line 736 "continuation_info.m"
                  {
#line 736 "continuation_info.m"
                    {
#line 736 "continuation_info.m"
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.continuation_info", (MR_String) "predicate \140ll_backend.continuation_info.generate_resume_layout_for_var\'/7", (MR_String) "var has more than one lval in stack resume map");
#line 736 "continuation_info.m"
                      return;
                    }
#line 736 "continuation_info.m"
                  }
#line 739 "continuation_info.m"
                ll_backend__continuation_info__succeeded = ((((MR_tag((MR_Word) ll_backend__continuation_info__Lval_52)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__continuation_info__Lval_52, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 739 "continuation_info.m"
                if (ll_backend__continuation_info__succeeded)
#line 739 "continuation_info.m"
                  {
#line 739 "continuation_info.m"
                    ll_backend__continuation_info__N_53 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__continuation_info__Lval_52, (MR_Integer) 1)));
#line 740 "continuation_info.m"
                    {
#line 740 "continuation_info.m"
                      MR_Word ll_backend__continuation_info__V_60_60;

#line 740 "continuation_info.m"
                      {
#line 740 "continuation_info.m"
                        ll_backend__continuation_info__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 740 "continuation_info.m"
                        MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_60_60, 0) = ((MR_Box) (&ll_backend__continuation_info_scalar_common_6[3]));
#line 740 "continuation_info.m"
                        MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_60_60, 1) = ((MR_Box) (ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_117_109_101_95_108_97_121_111_117_116_95_102_111_114_95_118_97_114_115_95_95_91_50_93_95_48_9_p_0_1));
#line 740 "continuation_info.m"
                        MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 740 "continuation_info.m"
                        MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_60_60, 3) = ((MR_Box) (ll_backend__continuation_info__N_53));
#line 740 "continuation_info.m"
                        MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_60_60, 4) = ((MR_Box) ((MR_Integer) 0));
#line 740 "continuation_info.m"
                      }
#line 740 "continuation_info.m"
                      {
#line 740 "continuation_info.m"
                        mercury__require__expect_4_p_0(ll_backend__continuation_info__V_60_60, (MR_String) "ll_backend.continuation_info", (MR_String) "predicate \140ll_backend.continuation_info.generate_resume_layout_for_var\'/7", (MR_String) "bad stackvar");
                      }
#line 740 "continuation_info.m"
                    }
#line 739 "continuation_info.m"
                  }
#line 739 "continuation_info.m"
                else
#line 741 "continuation_info.m"
                  {
#line 741 "continuation_info.m"
                    MR_Integer ll_backend__continuation_info__N_78;

#line 741 "continuation_info.m"
                    ll_backend__continuation_info__succeeded = ((((MR_tag((MR_Word) ll_backend__continuation_info__Lval_52)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__continuation_info__Lval_52, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 741 "continuation_info.m"
                    if (ll_backend__continuation_info__succeeded)
#line 741 "continuation_info.m"
                      {
#line 741 "continuation_info.m"
                        ll_backend__continuation_info__N_78 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__continuation_info__Lval_52, (MR_Integer) 1)));
#line 742 "continuation_info.m"
                        {
#line 742 "continuation_info.m"
                          MR_Word ll_backend__continuation_info__V_65_65;

#line 742 "continuation_info.m"
                          {
#line 742 "continuation_info.m"
                            ll_backend__continuation_info__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 742 "continuation_info.m"
                            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_65_65, 0) = ((MR_Box) (&ll_backend__continuation_info_scalar_common_6[3]));
#line 742 "continuation_info.m"
                            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_65_65, 1) = ((MR_Box) (ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_117_109_101_95_108_97_121_111_117_116_95_102_111_114_95_118_97_114_115_95_95_91_50_93_95_48_9_p_0_2));
#line 742 "continuation_info.m"
                            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_65_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 742 "continuation_info.m"
                            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_65_65, 3) = ((MR_Box) (ll_backend__continuation_info__N_78));
#line 742 "continuation_info.m"
                            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_65_65, 4) = ((MR_Box) ((MR_Integer) 0));
#line 742 "continuation_info.m"
                          }
#line 742 "continuation_info.m"
                          {
#line 742 "continuation_info.m"
                            mercury__require__expect_4_p_0(ll_backend__continuation_info__V_65_65, (MR_String) "ll_backend.continuation_info", (MR_String) "predicate \140ll_backend.continuation_info.generate_resume_layout_for_var\'/7", (MR_String) "bad framevar");
                          }
#line 742 "continuation_info.m"
                        }
#line 741 "continuation_info.m"
                      }
#line 741 "continuation_info.m"
                    else
#line 743 "continuation_info.m"
                      {
#line 743 "continuation_info.m"
                        MR_Integer ll_backend__continuation_info__N_77;
#line 743 "continuation_info.m"
                        MR_Word ll_backend__continuation_info__V_54_54;

#line 743 "continuation_info.m"
                        ll_backend__continuation_info__succeeded = ((((MR_tag((MR_Word) ll_backend__continuation_info__Lval_52)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__continuation_info__Lval_52, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 743 "continuation_info.m"
                        if (ll_backend__continuation_info__succeeded)
#line 743 "continuation_info.m"
                          {
#line 743 "continuation_info.m"
                            ll_backend__continuation_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__continuation_info__Lval_52, (MR_Integer) 1)));
#line 743 "continuation_info.m"
                            ll_backend__continuation_info__N_77 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__continuation_info__Lval_52, (MR_Integer) 2)));
#line 744 "continuation_info.m"
                            {
#line 744 "continuation_info.m"
                              MR_Word ll_backend__continuation_info__V_70_70;

#line 744 "continuation_info.m"
                              {
#line 744 "continuation_info.m"
                                ll_backend__continuation_info__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 744 "continuation_info.m"
                                MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_70_70, 0) = ((MR_Box) (&ll_backend__continuation_info_scalar_common_6[3]));
#line 744 "continuation_info.m"
                                MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_70_70, 1) = ((MR_Box) (ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_117_109_101_95_108_97_121_111_117_116_95_102_111_114_95_118_97_114_115_95_95_91_50_93_95_48_9_p_0_3));
#line 744 "continuation_info.m"
                                MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_70_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 744 "continuation_info.m"
                                MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_70_70, 3) = ((MR_Box) (ll_backend__continuation_info__N_77));
#line 744 "continuation_info.m"
                                MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_70_70, 4) = ((MR_Box) ((MR_Integer) 0));
#line 744 "continuation_info.m"
                              }
#line 744 "continuation_info.m"
                              {
#line 744 "continuation_info.m"
                                mercury__require__expect_4_p_0(ll_backend__continuation_info__V_70_70, (MR_String) "ll_backend.continuation_info", (MR_String) "predicate \140ll_backend.continuation_info.generate_resume_layout_for_var\'/7", (MR_String) "bad stackvar");
                              }
#line 744 "continuation_info.m"
                            }
#line 743 "continuation_info.m"
                          }
#line 743 "continuation_info.m"
                        else
#line 746 "continuation_info.m"
                          {
#line 746 "continuation_info.m"
                          }
#line 743 "continuation_info.m"
                      }
#line 741 "continuation_info.m"
                  }
#line 771 "continuation_info.m"
                {
#line 771 "continuation_info.m"
                  hlds__hlds_pred__proc_info_get_varset_2_p_0(ll_backend__continuation_info__ProcInfo_4, &ll_backend__continuation_info__VarSet_86);
                }
#line 772 "continuation_info.m"
                {
#line 772 "continuation_info.m"
                  hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__continuation_info__ProcInfo_4, &ll_backend__continuation_info__VarTypes_87);
                }
#line 773 "continuation_info.m"
                {
#line 773 "continuation_info.m"
                  ll_backend__continuation_info__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__continuation_info__VarSet_86, ll_backend__continuation_info__Var_20, &ll_backend__continuation_info__GivenName_88);
                }
#line 773 "continuation_info.m"
                if (ll_backend__continuation_info__succeeded)
#line 774 "continuation_info.m"
                  ll_backend__continuation_info__Name_89 = ll_backend__continuation_info__GivenName_88;
#line 773 "continuation_info.m"
                else
#line 776 "continuation_info.m"
                  ll_backend__continuation_info__Name_89 = (MR_String) "";
#line 778 "continuation_info.m"
                {
#line 778 "continuation_info.m"
                  hlds__vartypes__lookup_var_type_3_p_0(ll_backend__continuation_info__VarTypes_87, ll_backend__continuation_info__Var_20, &ll_backend__continuation_info__Type_90);
                }
#line 801 "continuation_info.m"
                mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 802 "continuation_info.m"
                {
#line 802 "continuation_info.m"
                  ll_backend__continuation_info__LiveValueType_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 802 "continuation_info.m"
                  MR_hl_field(MR_mktag(1), ll_backend__continuation_info__LiveValueType_55, 0) = ((MR_Box) (ll_backend__continuation_info__Var_20));
#line 802 "continuation_info.m"
                  MR_hl_field(MR_mktag(1), ll_backend__continuation_info__LiveValueType_55, 1) = ((MR_Box) (ll_backend__continuation_info__Name_89));
#line 802 "continuation_info.m"
                  MR_hl_field(MR_mktag(1), ll_backend__continuation_info__LiveValueType_55, 2) = ((MR_Box) (ll_backend__continuation_info__Type_90));
#line 802 "continuation_info.m"
                  MR_hl_field(MR_mktag(1), ll_backend__continuation_info__LiveValueType_55, 3) = NULL;
#line 802 "continuation_info.m"
                }
#line 803 "continuation_info.m"
                {
#line 803 "continuation_info.m"
                  parse_tree__prog_type__type_vars_2_p_0(ll_backend__continuation_info__Type_90, &ll_backend__continuation_info__TypeVars_31);
                }
#line 750 "continuation_info.m"
                {
#line 750 "continuation_info.m"
                  ll_backend__continuation_info__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 750 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_75_75, 0) = ((MR_Box) (ll_backend__continuation_info__Lval_52));
#line 750 "continuation_info.m"
                }
#line 750 "continuation_info.m"
                {
#line 750 "continuation_info.m"
                  ll_backend__continuation_info__VarInfo_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 750 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__VarInfo_30, 0) = ((MR_Box) (ll_backend__continuation_info__V_75_75));
#line 750 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__VarInfo_30, 1) = ((MR_Box) (ll_backend__continuation_info__LiveValueType_55));
#line 750 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__VarInfo_30, 2) = ((MR_Box) ((MR_String) "generate_result_layout_for_var"));
#line 750 "continuation_info.m"
                }
#line 720 "continuation_info.m"
                {
#line 720 "continuation_info.m"
                  mercury__set__insert_list_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[2], ll_backend__continuation_info__TypeVars_31, ll_backend__continuation_info__STATE_VARIABLE_TVars_0_8, &ll_backend__continuation_info__STATE_VARIABLE_TVars_38_38);
                }
#line 721 "continuation_info.m"
                {
#line 721 "continuation_info.m"
                  ll_backend__continuation_info__STATE_VARIABLE_VarInfos_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 721 "continuation_info.m"
                  MR_hl_field(MR_mktag(1), ll_backend__continuation_info__STATE_VARIABLE_VarInfos_39_39, 0) = ((MR_Box) (ll_backend__continuation_info__VarInfo_30));
#line 721 "continuation_info.m"
                  MR_hl_field(MR_mktag(1), ll_backend__continuation_info__STATE_VARIABLE_VarInfos_39_39, 1) = ((MR_Box) (ll_backend__continuation_info__STATE_VARIABLE_VarInfos_0_6));
#line 721 "continuation_info.m"
                }
#line 719 "continuation_info.m"
              }
#line 723 "continuation_info.m"
            /* direct tailcall eliminated */
#line 723 "continuation_info.m"
            {
#line 723 "continuation_info.m"
              MR_Word ll_backend__continuation_info__HeadVar__1__tmp_copy_1 = ll_backend__continuation_info__VarLvals_22;
#line 723 "continuation_info.m"
              MR_Word ll_backend__continuation_info__STATE_VARIABLE_VarInfos_0__tmp_copy_6 = ll_backend__continuation_info__STATE_VARIABLE_VarInfos_39_39;
#line 723 "continuation_info.m"
              MR_Word ll_backend__continuation_info__STATE_VARIABLE_TVars_0__tmp_copy_8 = ll_backend__continuation_info__STATE_VARIABLE_TVars_38_38;

#line 723 "continuation_info.m"
              ll_backend__continuation_info__STATE_VARIABLE_TVars_0_8 = ll_backend__continuation_info__STATE_VARIABLE_TVars_0__tmp_copy_8;
#line 723 "continuation_info.m"
              ll_backend__continuation_info__STATE_VARIABLE_VarInfos_0_6 = ll_backend__continuation_info__STATE_VARIABLE_VarInfos_0__tmp_copy_6;
#line 723 "continuation_info.m"
              ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__HeadVar__1__tmp_copy_1;
#line 723 "continuation_info.m"
            }
#line 723 "continuation_info.m"
            continue;
#line 711 "continuation_info.m"
          }
#line 709 "continuation_info.m"
      }
#line 709 "continuation_info.m"
      break;
#line 709 "continuation_info.m"
    }
#line 704 "continuation_info.m"
}

#line 666 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_118_97_114_95_108_105_118_101_95_108_118_97_108_117_101_115_95_95_91_50_44_32_53_93_95_48_7_p_0(
#line 666 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 666 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarLocs_3,
#line 666 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ProcInfo_4,
#line 666 "continuation_info.m"
  MR_Word ll_backend__continuation_info__WantReturnVarLayout_6,
#line 666 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__7_7)
#line 666 "continuation_info.m"
{
#line 670 "continuation_info.m"
  {
#line 670 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;

#line 670 "continuation_info.m"
    if ((ll_backend__continuation_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 670 "continuation_info.m"
      *ll_backend__continuation_info__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 670 "continuation_info.m"
    else
#line 672 "continuation_info.m"
      {
#line 672 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Var_13;
#line 672 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Lval_14;
#line 672 "continuation_info.m"
        MR_Word ll_backend__continuation_info__VarLvals_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 672 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Live_21;
#line 672 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Lives_22;
#line 672 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));

#line 671 "continuation_info.m"
        ll_backend__continuation_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_27_27, (MR_Integer) 0)));
#line 671 "continuation_info.m"
        ll_backend__continuation_info__Lval_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_27_27, (MR_Integer) 1)));
#line 679 "continuation_info.m"
#line 679 "continuation_info.m"
        switch (ll_backend__continuation_info__WantReturnVarLayout_6) {
#line 679 "continuation_info.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 679 "continuation_info.m"
          case (MR_Integer) 0:
#line 680 "continuation_info.m"
            {
#line 680 "continuation_info.m"
              MR_Word ll_backend__continuation_info__Empty_26;
#line 680 "continuation_info.m"
              MR_Word ll_backend__continuation_info__V_28_28;

#line 681 "continuation_info.m"
              {
#line 681 "continuation_info.m"
                mercury__map__init_1_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[2], (MR_Word) &ll_backend__continuation_info_scalar_common_1[3], &ll_backend__continuation_info__Empty_26);
              }
#line 682 "continuation_info.m"
              {
#line 682 "continuation_info.m"
                ll_backend__continuation_info__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 682 "continuation_info.m"
                MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_28_28, 0) = ((MR_Box) (ll_backend__continuation_info__Lval_14));
#line 682 "continuation_info.m"
              }
#line 682 "continuation_info.m"
              {
#line 682 "continuation_info.m"
                ll_backend__continuation_info__Live_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 682 "continuation_info.m"
                MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Live_21, 0) = ((MR_Box) (ll_backend__continuation_info__V_28_28));
#line 682 "continuation_info.m"
                MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Live_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
#line 682 "continuation_info.m"
                MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Live_21, 2) = ((MR_Box) (ll_backend__continuation_info__Empty_26));
#line 682 "continuation_info.m"
              }
#line 680 "continuation_info.m"
            }
#line 679 "continuation_info.m"
            break;
#line 679 "continuation_info.m"
          case (MR_Integer) 1:
#line 674 "continuation_info.m"
            {
#line 674 "continuation_info.m"
              MR_Word ll_backend__continuation_info__LiveValueType_23;
#line 674 "continuation_info.m"
              MR_Word ll_backend__continuation_info__TypeVars_24;
#line 674 "continuation_info.m"
              MR_Word ll_backend__continuation_info__TypeParams_25;
#line 674 "continuation_info.m"
              MR_Word ll_backend__continuation_info__V_30_30;
#line 674 "continuation_info.m"
              MR_Word ll_backend__continuation_info__VarSet_39;
#line 674 "continuation_info.m"
              MR_Word ll_backend__continuation_info__VarTypes_40;
#line 674 "continuation_info.m"
              MR_String ll_backend__continuation_info__Name_42;
#line 674 "continuation_info.m"
              MR_Word ll_backend__continuation_info__Type_43;
#line 773 "continuation_info.m"
              MR_String ll_backend__continuation_info__GivenName_41;

#line 771 "continuation_info.m"
              {
#line 771 "continuation_info.m"
                hlds__hlds_pred__proc_info_get_varset_2_p_0(ll_backend__continuation_info__ProcInfo_4, &ll_backend__continuation_info__VarSet_39);
              }
#line 772 "continuation_info.m"
              {
#line 772 "continuation_info.m"
                hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__continuation_info__ProcInfo_4, &ll_backend__continuation_info__VarTypes_40);
              }
#line 773 "continuation_info.m"
              {
#line 773 "continuation_info.m"
                ll_backend__continuation_info__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__continuation_info__VarSet_39, ll_backend__continuation_info__Var_13, &ll_backend__continuation_info__GivenName_41);
              }
#line 773 "continuation_info.m"
              if (ll_backend__continuation_info__succeeded)
#line 774 "continuation_info.m"
                ll_backend__continuation_info__Name_42 = ll_backend__continuation_info__GivenName_41;
#line 773 "continuation_info.m"
              else
#line 776 "continuation_info.m"
                ll_backend__continuation_info__Name_42 = (MR_String) "";
#line 778 "continuation_info.m"
              {
#line 778 "continuation_info.m"
                hlds__vartypes__lookup_var_type_3_p_0(ll_backend__continuation_info__VarTypes_40, ll_backend__continuation_info__Var_13, &ll_backend__continuation_info__Type_43);
              }
#line 801 "continuation_info.m"
              mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 802 "continuation_info.m"
              {
#line 802 "continuation_info.m"
                ll_backend__continuation_info__LiveValueType_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 802 "continuation_info.m"
                MR_hl_field(MR_mktag(1), ll_backend__continuation_info__LiveValueType_23, 0) = ((MR_Box) (ll_backend__continuation_info__Var_13));
#line 802 "continuation_info.m"
                MR_hl_field(MR_mktag(1), ll_backend__continuation_info__LiveValueType_23, 1) = ((MR_Box) (ll_backend__continuation_info__Name_42));
#line 802 "continuation_info.m"
                MR_hl_field(MR_mktag(1), ll_backend__continuation_info__LiveValueType_23, 2) = ((MR_Box) (ll_backend__continuation_info__Type_43));
#line 802 "continuation_info.m"
                MR_hl_field(MR_mktag(1), ll_backend__continuation_info__LiveValueType_23, 3) = NULL;
#line 802 "continuation_info.m"
              }
#line 803 "continuation_info.m"
              {
#line 803 "continuation_info.m"
                parse_tree__prog_type__type_vars_2_p_0(ll_backend__continuation_info__Type_43, &ll_backend__continuation_info__TypeVars_24);
              }
#line 677 "continuation_info.m"
              {
#line 677 "continuation_info.m"
                ll_backend__continuation_info__find_typeinfos_for_tvars_4_p_0(ll_backend__continuation_info__TypeVars_24, ll_backend__continuation_info__VarLocs_3, ll_backend__continuation_info__ProcInfo_4, &ll_backend__continuation_info__TypeParams_25);
              }
#line 678 "continuation_info.m"
              {
#line 678 "continuation_info.m"
                ll_backend__continuation_info__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 678 "continuation_info.m"
                MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_30_30, 0) = ((MR_Box) (ll_backend__continuation_info__Lval_14));
#line 678 "continuation_info.m"
              }
#line 678 "continuation_info.m"
              {
#line 678 "continuation_info.m"
                ll_backend__continuation_info__Live_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 678 "continuation_info.m"
                MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Live_21, 0) = ((MR_Box) (ll_backend__continuation_info__V_30_30));
#line 678 "continuation_info.m"
                MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Live_21, 1) = ((MR_Box) (ll_backend__continuation_info__LiveValueType_23));
#line 678 "continuation_info.m"
                MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Live_21, 2) = ((MR_Box) (ll_backend__continuation_info__TypeParams_25));
#line 678 "continuation_info.m"
              }
#line 674 "continuation_info.m"
            }
#line 679 "continuation_info.m"
            break;
#line 679 "continuation_info.m"
        }
#line 684 "continuation_info.m"
        {
#line 684 "continuation_info.m"
          ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_118_97_114_95_108_105_118_101_95_108_118_97_108_117_101_115_95_95_91_50_44_32_53_93_95_48_7_p_0(ll_backend__continuation_info__VarLvals_15, ll_backend__continuation_info__VarLocs_3, ll_backend__continuation_info__ProcInfo_4, ll_backend__continuation_info__WantReturnVarLayout_6, &ll_backend__continuation_info__Lives_22);
        }
#line 672 "continuation_info.m"
        {
#line 672 "continuation_info.m"
          MR_Word base;
#line 672 "continuation_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 672 "continuation_info.m"
          *ll_backend__continuation_info__HeadVar__7_7 = base;
#line 672 "continuation_info.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__continuation_info__Live_21));
#line 672 "continuation_info.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__continuation_info__Lives_22));
#line 672 "continuation_info.m"
        }
#line 672 "continuation_info.m"
      }
#line 670 "continuation_info.m"
  }
#line 666 "continuation_info.m"
}

#line 390 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_117_109_101_95_108_97_121_111_117_116_95_95_91_51_93_95_48_6_p_0(
#line 390 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ResumeMap_7,
#line 390 "continuation_info.m"
  MR_Word ll_backend__continuation_info__Temps_8,
#line 390 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ProcInfo_10,
#line 390 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ModuleInfo_11,
#line 390 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__Layout_12)
#line 390 "continuation_info.m"
{
#line 690 "continuation_info.m"
  {
#line 690 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 690 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeInfo_27_27;
#line 690 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeCtorInfo_28_28;
#line 690 "continuation_info.m"
    MR_Word ll_backend__continuation_info__ResumeList_13;
#line 690 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TVars0_14;
#line 690 "continuation_info.m"
    MR_Word ll_backend__continuation_info__VarTypes_15;
#line 690 "continuation_info.m"
    MR_Word ll_backend__continuation_info__VarInfos_16;
#line 690 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TVars_17;
#line 690 "continuation_info.m"
    MR_Word ll_backend__continuation_info__VarInfoSet_18;
#line 690 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TVarList_19;
#line 690 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TVarInfoMap_20;
#line 690 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TempInfos_21;
#line 690 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TempInfoSet_22;
#line 690 "continuation_info.m"
    MR_Word ll_backend__continuation_info__AllInfoSet_23;

#line 691 "continuation_info.m"
    {
#line 691 "continuation_info.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[0], (MR_Word) &ll_backend__continuation_info_scalar_common_1[1], ll_backend__continuation_info__ResumeMap_7, &ll_backend__continuation_info__ResumeList_13);
    }
#line 4830 "ll_backend.continuation_info.c"
    ll_backend__continuation_info__TypeInfo_27_27 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[2];
#line 692 "continuation_info.m"
    {
#line 692 "continuation_info.m"
      mercury__set__init_1_p_0(ll_backend__continuation_info__TypeInfo_27_27, &ll_backend__continuation_info__TVars0_14);
    }
#line 693 "continuation_info.m"
    {
#line 693 "continuation_info.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__continuation_info__ProcInfo_10, &ll_backend__continuation_info__VarTypes_15);
    }
#line 694 "continuation_info.m"
    {
#line 694 "continuation_info.m"
      ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_117_109_101_95_108_97_121_111_117_116_95_102_111_114_95_118_97_114_115_95_95_91_50_93_95_48_9_p_0(ll_backend__continuation_info__ResumeList_13, ll_backend__continuation_info__VarTypes_15, ll_backend__continuation_info__ProcInfo_10, ll_backend__continuation_info__ModuleInfo_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__continuation_info__VarInfos_16, ll_backend__continuation_info__TVars0_14, &ll_backend__continuation_info__TVars_17);
    }
#line 4847 "ll_backend.continuation_info.c"
    ll_backend__continuation_info__TypeCtorInfo_28_28 = (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0;
#line 696 "continuation_info.m"
    {
#line 696 "continuation_info.m"
      mercury__set__list_to_set_2_p_0(ll_backend__continuation_info__TypeCtorInfo_28_28, ll_backend__continuation_info__VarInfos_16, &ll_backend__continuation_info__VarInfoSet_18);
    }
#line 697 "continuation_info.m"
    {
#line 697 "continuation_info.m"
      mercury__set__to_sorted_list_2_p_0(ll_backend__continuation_info__TypeInfo_27_27, ll_backend__continuation_info__TVars_17, &ll_backend__continuation_info__TVarList_19);
    }
#line 698 "continuation_info.m"
    {
#line 698 "continuation_info.m"
      ll_backend__continuation_info__find_typeinfos_for_tvars_4_p_0(ll_backend__continuation_info__TVarList_19, ll_backend__continuation_info__ResumeMap_7, ll_backend__continuation_info__ProcInfo_10, &ll_backend__continuation_info__TVarInfoMap_20);
    }
#line 699 "continuation_info.m"
    {
#line 699 "continuation_info.m"
      ll_backend__continuation_info__generate_temp_var_infos_2_p_0(ll_backend__continuation_info__Temps_8, &ll_backend__continuation_info__TempInfos_21);
    }
#line 700 "continuation_info.m"
    {
#line 700 "continuation_info.m"
      mercury__set__list_to_set_2_p_0(ll_backend__continuation_info__TypeCtorInfo_28_28, ll_backend__continuation_info__TempInfos_21, &ll_backend__continuation_info__TempInfoSet_22);
    }
#line 701 "continuation_info.m"
    {
#line 701 "continuation_info.m"
      mercury__set__union_3_p_0(ll_backend__continuation_info__TypeCtorInfo_28_28, ll_backend__continuation_info__VarInfoSet_18, ll_backend__continuation_info__TempInfoSet_22, &ll_backend__continuation_info__AllInfoSet_23);
    }
#line 702 "continuation_info.m"
    {
#line 702 "continuation_info.m"
      MR_Word base;
#line 702 "continuation_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 702 "continuation_info.m"
      *ll_backend__continuation_info__Layout_12 = base;
#line 702 "continuation_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__continuation_info__AllInfoSet_23));
#line 702 "continuation_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__continuation_info__TVarInfoMap_20));
#line 702 "continuation_info.m"
    }
#line 690 "continuation_info.m"
  }
#line 390 "continuation_info.m"
}

#line 382 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_116_117_114_110_95_108_105_118_101_95_108_118_97_108_117_101_115_95_95_91_50_44_32_55_93_95_48_10_p_0(
#line 382 "continuation_info.m"
  MR_Word ll_backend__continuation_info__OutputArgLocs_11,
#line 382 "continuation_info.m"
  MR_Word ll_backend__continuation_info__Vars_13,
#line 382 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarLocs_14,
#line 382 "continuation_info.m"
  MR_Word ll_backend__continuation_info__Temps_15,
#line 382 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ProcInfo_16,
#line 382 "continuation_info.m"
  MR_Word ll_backend__continuation_info__Globals_18,
#line 382 "continuation_info.m"
  MR_Word ll_backend__continuation_info__OkToDeleteAny_19,
#line 382 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__LiveLvalues_20)
#line 382 "continuation_info.m"
{
#line 619 "continuation_info.m"
  {
#line 619 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 619 "continuation_info.m"
    MR_Word ll_backend__continuation_info__WantReturnVarLayout_21;
#line 619 "continuation_info.m"
    MR_Word ll_backend__continuation_info__StackSlots_22;
#line 619 "continuation_info.m"
    MR_Word ll_backend__continuation_info__VarLvals_23;
#line 619 "continuation_info.m"
    MR_Word ll_backend__continuation_info__VarLiveLvalues_24;
#line 619 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TempLiveLvalues_25;

#line 620 "continuation_info.m"
    {
#line 620 "continuation_info.m"
      libs__globals__want_return_var_layouts_2_p_0(ll_backend__continuation_info__Globals_18, &ll_backend__continuation_info__WantReturnVarLayout_21);
    }
#line 621 "continuation_info.m"
    {
#line 621 "continuation_info.m"
      hlds__hlds_pred__proc_info_get_stack_slots_2_p_0(ll_backend__continuation_info__ProcInfo_16, &ll_backend__continuation_info__StackSlots_22);
    }
#line 622 "continuation_info.m"
    {
#line 622 "continuation_info.m"
      ll_backend__continuation_info__find_return_var_lvals_5_p_0(ll_backend__continuation_info__Vars_13, ll_backend__continuation_info__StackSlots_22, ll_backend__continuation_info__OkToDeleteAny_19, ll_backend__continuation_info__OutputArgLocs_11, &ll_backend__continuation_info__VarLvals_23);
    }
#line 624 "continuation_info.m"
    {
#line 624 "continuation_info.m"
      ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_118_97_114_95_108_105_118_101_95_108_118_97_108_117_101_115_95_95_91_50_44_32_53_93_95_48_7_p_0(ll_backend__continuation_info__VarLvals_23, ll_backend__continuation_info__VarLocs_14, ll_backend__continuation_info__ProcInfo_16, ll_backend__continuation_info__WantReturnVarLayout_21, &ll_backend__continuation_info__VarLiveLvalues_24);
    }
#line 626 "continuation_info.m"
    {
#line 626 "continuation_info.m"
      ll_backend__continuation_info__generate_temp_live_lvalues_2_p_0(ll_backend__continuation_info__Temps_15, &ll_backend__continuation_info__TempLiveLvalues_25);
    }
#line 627 "continuation_info.m"
    {
#line 627 "continuation_info.m"
      mercury__list__append_3_p_1((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_liveinfo_0, ll_backend__continuation_info__VarLiveLvalues_24, ll_backend__continuation_info__TempLiveLvalues_25, ll_backend__continuation_info__LiveLvalues_20);
    }
#line 619 "continuation_info.m"
  }
#line 382 "continuation_info.m"
}

#line 945 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars_table__945__1_4_p_0(
#line 945 "continuation_info.m"
  MR_Word ll_backend__continuation_info__NumberedVars_6,
#line 945 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarSet_9,
#line 945 "continuation_info.m"
  MR_Word ll_backend__continuation_info__LambdaHeadVar__1_22,
#line 945 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__LambdaHeadVar__2_23)
#line 945 "continuation_info.m"
{
#line 945 "continuation_info.m"
  {
#line 945 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 945 "continuation_info.m"
    MR_Word ll_backend__continuation_info__LocnPrime_18;

#line 950 "continuation_info.m"
    if (((MR_tag((MR_Word) ll_backend__continuation_info__LambdaHeadVar__1_22)) == (MR_mktag((MR_Integer) 0))))
#line 951 "continuation_info.m"
      {
#line 951 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfoVar_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__LambdaHeadVar__1_22, (MR_Integer) 0)));
#line 951 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__Slot_29;
#line 952 "continuation_info.m"
        MR_Box ll_backend__continuation_info__conv0_Slot_29;

#line 952 "continuation_info.m"
        {
#line 952 "continuation_info.m"
          ll_backend__continuation_info__succeeded = mercury__assoc_list__search_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__continuation_info__NumberedVars_6, ((MR_Box) (ll_backend__continuation_info__TypeInfoVar_28)), &ll_backend__continuation_info__conv0_Slot_29);
        }
#line 952 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 952 "continuation_info.m"
          {
#line 952 "continuation_info.m"
            ll_backend__continuation_info__Slot_29 = ((MR_Integer) ll_backend__continuation_info__conv0_Slot_29);
#line 952 "continuation_info.m"
            ll_backend__continuation_info__succeeded = MR_TRUE;
#line 952 "continuation_info.m"
          }
#line 951 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 951 "continuation_info.m"
          {
#line 953 "continuation_info.m"
            {
#line 953 "continuation_info.m"
              ll_backend__continuation_info__LocnPrime_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 953 "continuation_info.m"
              MR_hl_field(MR_mktag(0), ll_backend__continuation_info__LocnPrime_18, 0) = ((MR_Box) (ll_backend__continuation_info__Slot_29));
#line 953 "continuation_info.m"
            }
#line 953 "continuation_info.m"
            ll_backend__continuation_info__succeeded = MR_TRUE;
#line 951 "continuation_info.m"
          }
#line 951 "continuation_info.m"
      }
#line 950 "continuation_info.m"
    else
#line 947 "continuation_info.m"
      {
#line 947 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfoVar_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__LambdaHeadVar__1_22, (MR_Integer) 0)));
#line 947 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__FieldNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__LambdaHeadVar__1_22, (MR_Integer) 1)));
#line 947 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__Slot_17;
#line 948 "continuation_info.m"
        MR_Box ll_backend__continuation_info__conv1_Slot_17;

#line 948 "continuation_info.m"
        {
#line 948 "continuation_info.m"
          ll_backend__continuation_info__succeeded = mercury__assoc_list__search_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__continuation_info__NumberedVars_6, ((MR_Box) (ll_backend__continuation_info__TypeInfoVar_15)), &ll_backend__continuation_info__conv1_Slot_17);
        }
#line 948 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 948 "continuation_info.m"
          {
#line 948 "continuation_info.m"
            ll_backend__continuation_info__Slot_17 = ((MR_Integer) ll_backend__continuation_info__conv1_Slot_17);
#line 948 "continuation_info.m"
            ll_backend__continuation_info__succeeded = MR_TRUE;
#line 948 "continuation_info.m"
          }
#line 947 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 947 "continuation_info.m"
          {
#line 949 "continuation_info.m"
            {
#line 949 "continuation_info.m"
              ll_backend__continuation_info__LocnPrime_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 949 "continuation_info.m"
              MR_hl_field(MR_mktag(1), ll_backend__continuation_info__LocnPrime_18, 0) = ((MR_Box) (ll_backend__continuation_info__Slot_17));
#line 949 "continuation_info.m"
              MR_hl_field(MR_mktag(1), ll_backend__continuation_info__LocnPrime_18, 1) = ((MR_Box) (ll_backend__continuation_info__FieldNum_16));
#line 949 "continuation_info.m"
            }
#line 949 "continuation_info.m"
            ll_backend__continuation_info__succeeded = MR_TRUE;
#line 947 "continuation_info.m"
          }
#line 947 "continuation_info.m"
      }
#line 945 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 956 "continuation_info.m"
      *ll_backend__continuation_info__LambdaHeadVar__2_23 = ll_backend__continuation_info__LocnPrime_18;
#line 945 "continuation_info.m"
    else
#line 958 "continuation_info.m"
      {
#line 958 "continuation_info.m"
        MR_String ll_backend__continuation_info__VarName_19;
#line 958 "continuation_info.m"
        MR_String ll_backend__continuation_info__V_26_26;
#line 958 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfoVar_30;

#line 958 "continuation_info.m"
        {
#line 958 "continuation_info.m"
          hlds__hlds_rtti__type_info_locn_var_2_p_0(ll_backend__continuation_info__LambdaHeadVar__1_22, &ll_backend__continuation_info__TypeInfoVar_30);
        }
#line 959 "continuation_info.m"
        {
#line 959 "continuation_info.m"
          mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__continuation_info__VarSet_9, ll_backend__continuation_info__TypeInfoVar_30, &ll_backend__continuation_info__VarName_19);
        }
#line 961 "continuation_info.m"
        {
#line 961 "continuation_info.m"
          ll_backend__continuation_info__V_26_26 = mercury__string__f_43_43_2_f_0((MR_String) "can\'t find slot for type_info var ", ll_backend__continuation_info__VarName_19);
        }
#line 960 "continuation_info.m"
        {
#line 960 "continuation_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.continuation_info", (MR_String) "predicate \140ll_backend.continuation_info.find_typeinfos_for_tvars_table\'/4", ll_backend__continuation_info__V_26_26);
#line 960 "continuation_info.m"
          return;
        }
#line 958 "continuation_info.m"
      }
#line 945 "continuation_info.m"
  }
#line 945 "continuation_info.m"
}

#line 568 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__567__1_3_p_0_1(
#line 568 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 568 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 568 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 568 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_3)
#line 568 "continuation_info.m"
{
#line 568 "continuation_info.m"
  {
#line 568 "continuation_info.m"
    MR_Box ll_backend__continuation_info__closure = ll_backend__continuation_info__closure_arg;
#line 568 "continuation_info.m"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__3_47;

#line 568 "continuation_info.m"
    {
#line 568 "continuation_info.m"
      ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__568__1_3_p_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), &ll_backend__continuation_info__conv0_HeadVar__3_47);
    }
#line 568 "continuation_info.m"
    *ll_backend__continuation_info__wrapper_arg_3 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__3_47));
#line 568 "continuation_info.m"
  }
#line 568 "continuation_info.m"
}

#line 567 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__567__1_3_p_0(
#line 567 "continuation_info.m"
  MR_Word ll_backend__continuation_info__LambdaHeadVar__1_29,
#line 567 "continuation_info.m"
  MR_Word ll_backend__continuation_info__LambdaHeadVar__2_30,
#line 567 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__LambdaHeadVar__3_31)
#line 567 "continuation_info.m"
{
#line 567 "continuation_info.m"
  {
#line 567 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;

#line 568 "continuation_info.m"
    {
#line 568 "continuation_info.m"
      mercury__map__union_4_p_1((MR_Word) &ll_backend__continuation_info_scalar_common_1[3], (MR_Word) &ll_backend__continuation_info_scalar_common_1[2], (MR_Word) &ll_backend__continuation_info_scalar_common_2[10], ll_backend__continuation_info__LambdaHeadVar__1_29, ll_backend__continuation_info__LambdaHeadVar__2_30, ll_backend__continuation_info__LambdaHeadVar__3_31);
    }
#line 567 "continuation_info.m"
  }
#line 567 "continuation_info.m"
}

#line 568 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__568__1_3_p_0(
#line 568 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_45,
#line 568 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_46,
#line 568 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__3_47)
#line 568 "continuation_info.m"
{
#line 568 "continuation_info.m"
  {
#line 568 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;

#line 568 "continuation_info.m"
    {
#line 568 "continuation_info.m"
      mercury__set__intersect_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0, ll_backend__continuation_info__HeadVar__1_45, ll_backend__continuation_info__HeadVar__2_46, ll_backend__continuation_info__HeadVar__3_47);
    }
#line 568 "continuation_info.m"
  }
#line 568 "continuation_info.m"
}

#line 563 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__563__1_2_p_0(
#line 563 "continuation_info.m"
  MR_Word ll_backend__continuation_info__LambdaHeadVar__1_26,
#line 563 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__LambdaHeadVar__2_27)
#line 563 "continuation_info.m"
{
#line 563 "continuation_info.m"
  {
#line 563 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 563 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__LambdaHeadVar__1_26, (MR_Integer) 0)));
#line 563 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__LambdaHeadVar__1_26, (MR_Integer) 1)));

#line 563 "continuation_info.m"
    *ll_backend__continuation_info__LambdaHeadVar__2_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__LambdaHeadVar__1_26, (MR_Integer) 2)));
#line 563 "continuation_info.m"
  }
#line 563 "continuation_info.m"
}

#line 557 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__557__1_2_p_0(
#line 557 "continuation_info.m"
  MR_Word ll_backend__continuation_info__LambdaHeadVar__1_23,
#line 557 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__LambdaHeadVar__2_24)
#line 557 "continuation_info.m"
{
#line 557 "continuation_info.m"
  {
#line 557 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 557 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Lval_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__LambdaHeadVar__1_23, (MR_Integer) 0)));
#line 557 "continuation_info.m"
    MR_Word ll_backend__continuation_info__LiveValueType_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__LambdaHeadVar__1_23, (MR_Integer) 1)));
#line 558 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__LambdaHeadVar__1_23, (MR_Integer) 2)));

#line 559 "continuation_info.m"
    {
#line 559 "continuation_info.m"
      MR_Word base;
#line 559 "continuation_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 559 "continuation_info.m"
      *ll_backend__continuation_info__LambdaHeadVar__2_24 = base;
#line 559 "continuation_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__continuation_info__Lval_10));
#line 559 "continuation_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__continuation_info__LiveValueType_11));
#line 559 "continuation_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_String) "convert_return_data"));
#line 559 "continuation_info.m"
    }
#line 557 "continuation_info.m"
  }
#line 557 "continuation_info.m"
}

#line 538 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__collect_continuation__538__1_3_p_0(
#line 538 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_54,
#line 538 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_55,
#line 538 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__3_56)
#line 538 "continuation_info.m"
{
#line 538 "continuation_info.m"
  {
#line 538 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;

#line 538 "continuation_info.m"
    {
#line 538 "continuation_info.m"
      mercury__set__intersect_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0, ll_backend__continuation_info__HeadVar__1_54, ll_backend__continuation_info__HeadVar__2_55, ll_backend__continuation_info__HeadVar__3_56);
    }
#line 538 "continuation_info.m"
  }
#line 538 "continuation_info.m"
}

#line 309 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info____Compare____user_event_info_0_0(
#line 309 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 309 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 309 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3)
#line 309 "continuation_info.m"
{
#line 309 "continuation_info.m"
  {
#line 309 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 309 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_9 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;
#line 309 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_10 = (MR_Integer) ll_backend__continuation_info__HeadVar__3_3;

#line 309 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_9 == ll_backend__continuation_info__CastY_10);
#line 309 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 5325 "ll_backend.continuation_info.c"
      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 309 "continuation_info.m"
    else
#line 309 "continuation_info.m"
      {
#line 309 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 309 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 309 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));
#line 309 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 1)));
#line 309 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8;

#line 309 "continuation_info.m"
        {
#line 309 "continuation_info.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__continuation_info__V_8_8, ll_backend__continuation_info__V_4_4, ll_backend__continuation_info__V_6_6);
        }
#line 5347 "ll_backend.continuation_info.c"
        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_8_8 == (MR_Integer) 0);
#line 309 "continuation_info.m"
        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 309 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 309 "continuation_info.m"
          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_8_8;
#line 309 "continuation_info.m"
        else
#line 309 "continuation_info.m"
          {
#line 309 "continuation_info.m"
            {
#line 309 "continuation_info.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[22], ll_backend__continuation_info__HeadVar__1_1, ((MR_Box) (ll_backend__continuation_info__V_5_5)), ((MR_Box) (ll_backend__continuation_info__V_7_7)));
            }
#line 309 "continuation_info.m"
          }
#line 309 "continuation_info.m"
      }
#line 309 "continuation_info.m"
  }
#line 309 "continuation_info.m"
}

#line 309 "continuation_info.m"
MR_bool MR_CALL 
ll_backend__continuation_info____Unify____user_event_info_0_0(
#line 309 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 309 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2)
#line 309 "continuation_info.m"
{
#line 309 "continuation_info.m"
  {
#line 309 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 309 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_7 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 309 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_8 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 309 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_7 == ll_backend__continuation_info__CastY_8);
#line 309 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 309 "continuation_info.m"
      ll_backend__continuation_info__succeeded = MR_TRUE;
#line 309 "continuation_info.m"
    else
#line 309 "continuation_info.m"
      {
#line 309 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_9_9;
#line 309 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 309 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 309 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 309 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));

#line 5412 "ll_backend.continuation_info.c"
        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_3_3 == ll_backend__continuation_info__V_5_5);
#line 309 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 309 "continuation_info.m"
          {
#line 5418 "ll_backend.continuation_info.c"
            ll_backend__continuation_info__TypeInfo_9_9 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[22];
#line 5420 "ll_backend.continuation_info.c"
            {
#line 5422 "ll_backend.continuation_info.c"
              ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_9_9, ((MR_Box) (ll_backend__continuation_info__V_4_4)), ((MR_Box) (ll_backend__continuation_info__V_6_6)));
            }
#line 309 "continuation_info.m"
          }
#line 309 "continuation_info.m"
      }
#line 309 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 309 "continuation_info.m"
  }
#line 309 "continuation_info.m"
}

#line 303 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info____Compare____user_attribute_0_0(
#line 303 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 303 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 303 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3)
#line 303 "continuation_info.m"
{
#line 303 "continuation_info.m"
  {
#line 303 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 303 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_9 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;
#line 303 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_10 = (MR_Integer) ll_backend__continuation_info__HeadVar__3_3;

#line 303 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_9 == ll_backend__continuation_info__CastY_10);
#line 303 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 5460 "ll_backend.continuation_info.c"
      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 303 "continuation_info.m"
    else
#line 303 "continuation_info.m"
      {
#line 303 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 303 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 303 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));
#line 303 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 1)));
#line 303 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8;

#line 303 "continuation_info.m"
        {
#line 303 "continuation_info.m"
          ll_backend__llds____Compare____rval_0_0(&ll_backend__continuation_info__V_8_8, ll_backend__continuation_info__V_4_4, ll_backend__continuation_info__V_6_6);
        }
#line 5482 "ll_backend.continuation_info.c"
        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_8_8 == (MR_Integer) 0);
#line 303 "continuation_info.m"
        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 303 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 303 "continuation_info.m"
          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_8_8;
#line 303 "continuation_info.m"
        else
#line 303 "continuation_info.m"
          {
#line 303 "continuation_info.m"
            {
#line 303 "continuation_info.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[0], ll_backend__continuation_info__HeadVar__1_1, ((MR_Box) (ll_backend__continuation_info__V_5_5)), ((MR_Box) (ll_backend__continuation_info__V_7_7)));
            }
#line 303 "continuation_info.m"
          }
#line 303 "continuation_info.m"
      }
#line 303 "continuation_info.m"
  }
#line 303 "continuation_info.m"
}

#line 303 "continuation_info.m"
MR_bool MR_CALL 
ll_backend__continuation_info____Unify____user_attribute_0_0(
#line 303 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 303 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2)
#line 303 "continuation_info.m"
{
#line 303 "continuation_info.m"
  {
#line 303 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 303 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_7 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 303 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_8 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 303 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_7 == ll_backend__continuation_info__CastY_8);
#line 303 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 303 "continuation_info.m"
      ll_backend__continuation_info__succeeded = MR_TRUE;
#line 303 "continuation_info.m"
    else
#line 303 "continuation_info.m"
      {
#line 303 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_10_10;
#line 303 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 303 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 303 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 303 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));

#line 5547 "ll_backend.continuation_info.c"
        {
#line 5549 "ll_backend.continuation_info.c"
          ll_backend__continuation_info__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__continuation_info__V_3_3, ll_backend__continuation_info__V_5_5);
        }
#line 303 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 303 "continuation_info.m"
          {
#line 5556 "ll_backend.continuation_info.c"
            ll_backend__continuation_info__TypeInfo_10_10 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[0];
#line 5558 "ll_backend.continuation_info.c"
            {
#line 5560 "ll_backend.continuation_info.c"
              ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_10_10, ((MR_Box) (ll_backend__continuation_info__V_4_4)), ((MR_Box) (ll_backend__continuation_info__V_6_6)));
            }
#line 303 "continuation_info.m"
          }
#line 303 "continuation_info.m"
      }
#line 303 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 303 "continuation_info.m"
  }
#line 303 "continuation_info.m"
}

#line 268 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info____Compare____trace_port_layout_info_0_0(
#line 268 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 268 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 268 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3)
#line 268 "continuation_info.m"
{
#line 268 "continuation_info.m"
  {
#line 268 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 268 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_21 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;
#line 268 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_22 = (MR_Integer) ll_backend__continuation_info__HeadVar__3_3;

#line 268 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_21 == ll_backend__continuation_info__CastY_22);
#line 268 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 5598 "ll_backend.continuation_info.c"
      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 268 "continuation_info.m"
    else
#line 268 "continuation_info.m"
      {
#line 268 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 268 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 268 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 2)));
#line 268 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 3)));
#line 268 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 4)));
#line 268 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 5)));
#line 268 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));
#line 268 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 1)));
#line 268 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 2)));
#line 268 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 3)));
#line 268 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 4)));
#line 268 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 5)));
#line 268 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_16_16;

#line 268 "continuation_info.m"
        {
#line 268 "continuation_info.m"
          mercury__term____Compare____context_0_0(&ll_backend__continuation_info__V_16_16, ll_backend__continuation_info__V_4_4, ll_backend__continuation_info__V_10_10);
        }
#line 5636 "ll_backend.continuation_info.c"
        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_16_16 == (MR_Integer) 0);
#line 268 "continuation_info.m"
        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 268 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 268 "continuation_info.m"
          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_16_16;
#line 268 "continuation_info.m"
        else
#line 268 "continuation_info.m"
          {
#line 268 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_17_17;
#line 268 "continuation_info.m"
            MR_Integer ll_backend__continuation_info__V_29_29 = (MR_Integer) ll_backend__continuation_info__V_5_5;
#line 268 "continuation_info.m"
            MR_Integer ll_backend__continuation_info__V_30_30 = (MR_Integer) ll_backend__continuation_info__V_11_11;

#line 268 "continuation_info.m"
            {
#line 268 "continuation_info.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__continuation_info__V_17_17, ll_backend__continuation_info__V_29_29, ll_backend__continuation_info__V_30_30);
            }
#line 5660 "ll_backend.continuation_info.c"
            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_17_17 == (MR_Integer) 0);
#line 268 "continuation_info.m"
            ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 268 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 268 "continuation_info.m"
              *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_17_17;
#line 268 "continuation_info.m"
            else
#line 268 "continuation_info.m"
              {
#line 268 "continuation_info.m"
                MR_Word ll_backend__continuation_info__V_18_18;
#line 268 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__V_31_31 = (MR_Integer) ll_backend__continuation_info__V_6_6;
#line 268 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__V_32_32 = (MR_Integer) ll_backend__continuation_info__V_12_12;

#line 268 "continuation_info.m"
                {
#line 268 "continuation_info.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__continuation_info__V_18_18, ll_backend__continuation_info__V_31_31, ll_backend__continuation_info__V_32_32);
                }
#line 5684 "ll_backend.continuation_info.c"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_18_18 == (MR_Integer) 0);
#line 268 "continuation_info.m"
                ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 268 "continuation_info.m"
                if (ll_backend__continuation_info__succeeded)
#line 268 "continuation_info.m"
                  *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_18_18;
#line 268 "continuation_info.m"
                else
#line 268 "continuation_info.m"
                  {
#line 268 "continuation_info.m"
                    MR_Word ll_backend__continuation_info__V_19_19;

#line 268 "continuation_info.m"
                    {
#line 268 "continuation_info.m"
                      mdbcomp__goal_path____Compare____forward_goal_path_0_0(&ll_backend__continuation_info__V_19_19, ll_backend__continuation_info__V_7_7, ll_backend__continuation_info__V_13_13);
                    }
#line 5704 "ll_backend.continuation_info.c"
                    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_19_19 == (MR_Integer) 0);
#line 268 "continuation_info.m"
                    ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 268 "continuation_info.m"
                    if (ll_backend__continuation_info__succeeded)
#line 268 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_19_19;
#line 268 "continuation_info.m"
                    else
#line 268 "continuation_info.m"
                      {
#line 268 "continuation_info.m"
                        MR_Word ll_backend__continuation_info__V_20_20;

#line 268 "continuation_info.m"
                        {
#line 268 "continuation_info.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[20], &ll_backend__continuation_info__V_20_20, ((MR_Box) (ll_backend__continuation_info__V_8_8)), ((MR_Box) (ll_backend__continuation_info__V_14_14)));
                        }
#line 5724 "ll_backend.continuation_info.c"
                        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_20_20 == (MR_Integer) 0);
#line 268 "continuation_info.m"
                        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 268 "continuation_info.m"
                        if (ll_backend__continuation_info__succeeded)
#line 268 "continuation_info.m"
                          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_20_20;
#line 268 "continuation_info.m"
                        else
#line 268 "continuation_info.m"
                          {
#line 268 "continuation_info.m"
                            ll_backend__continuation_info____Compare____layout_label_info_0_0(ll_backend__continuation_info__HeadVar__1_1, ll_backend__continuation_info__V_9_9, ll_backend__continuation_info__V_15_15);
                          }
#line 268 "continuation_info.m"
                      }
#line 268 "continuation_info.m"
                  }
#line 268 "continuation_info.m"
              }
#line 268 "continuation_info.m"
          }
#line 268 "continuation_info.m"
      }
#line 268 "continuation_info.m"
  }
#line 268 "continuation_info.m"
}

#line 268 "continuation_info.m"
MR_bool MR_CALL 
ll_backend__continuation_info____Unify____trace_port_layout_info_0_0(
#line 268 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 268 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2)
#line 268 "continuation_info.m"
{
#line 268 "continuation_info.m"
  {
#line 268 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 268 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_15 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 268 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_16 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 268 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_15 == ll_backend__continuation_info__CastY_16);
#line 268 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 268 "continuation_info.m"
      ll_backend__continuation_info__succeeded = MR_TRUE;
#line 268 "continuation_info.m"
    else
#line 268 "continuation_info.m"
      {
#line 268 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_19_19;
#line 268 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 268 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 268 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 2)));
#line 268 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 3)));
#line 268 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 4)));
#line 268 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 5)));
#line 268 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 268 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 268 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 2)));
#line 268 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 3)));
#line 268 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 4)));
#line 268 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 5)));

#line 5809 "ll_backend.continuation_info.c"
        {
#line 5811 "ll_backend.continuation_info.c"
          ll_backend__continuation_info__succeeded = mercury__term____Unify____context_0_0(ll_backend__continuation_info__V_3_3, ll_backend__continuation_info__V_9_9);
        }
#line 268 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 268 "continuation_info.m"
          {
#line 5818 "ll_backend.continuation_info.c"
            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_4_4 == ll_backend__continuation_info__V_10_10);
#line 268 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 268 "continuation_info.m"
              {
#line 5824 "ll_backend.continuation_info.c"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_5_5 == ll_backend__continuation_info__V_11_11);
#line 268 "continuation_info.m"
                if (ll_backend__continuation_info__succeeded)
#line 268 "continuation_info.m"
                  {
#line 5830 "ll_backend.continuation_info.c"
                    {
#line 5832 "ll_backend.continuation_info.c"
                      ll_backend__continuation_info__succeeded = mdbcomp__goal_path____Unify____forward_goal_path_0_0(ll_backend__continuation_info__V_6_6, ll_backend__continuation_info__V_12_12);
                    }
#line 268 "continuation_info.m"
                    if (ll_backend__continuation_info__succeeded)
#line 268 "continuation_info.m"
                      {
#line 5839 "ll_backend.continuation_info.c"
                        ll_backend__continuation_info__TypeInfo_19_19 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[20];
#line 5841 "ll_backend.continuation_info.c"
                        {
#line 5843 "ll_backend.continuation_info.c"
                          ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_19_19, ((MR_Box) (ll_backend__continuation_info__V_7_7)), ((MR_Box) (ll_backend__continuation_info__V_13_13)));
                        }
#line 268 "continuation_info.m"
                        if (ll_backend__continuation_info__succeeded)
#line 5848 "ll_backend.continuation_info.c"
                          {
#line 5850 "ll_backend.continuation_info.c"
                            ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____layout_label_info_0_0(ll_backend__continuation_info__V_8_8, ll_backend__continuation_info__V_14_14);
                          }
#line 268 "continuation_info.m"
                      }
#line 268 "continuation_info.m"
                  }
#line 268 "continuation_info.m"
              }
#line 268 "continuation_info.m"
          }
#line 268 "continuation_info.m"
      }
#line 268 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 268 "continuation_info.m"
  }
#line 268 "continuation_info.m"
}

#line 178 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info____Compare____trace_needs_body_rep_0_0(
#line 178 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 178 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 178 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3)
#line 178 "continuation_info.m"
{
#line 178 "continuation_info.m"
  {
#line 178 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 178 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__Cast_HeadVar1_4 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;
#line 178 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__Cast_HeadVar2_5 = (MR_Integer) ll_backend__continuation_info__HeadVar__3_3;

#line 178 "continuation_info.m"
    {
#line 178 "continuation_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__continuation_info__HeadVar__1_1, ll_backend__continuation_info__Cast_HeadVar1_4, ll_backend__continuation_info__Cast_HeadVar2_5);
    }
#line 178 "continuation_info.m"
  }
#line 178 "continuation_info.m"
}

#line 178 "continuation_info.m"
MR_bool MR_CALL 
ll_backend__continuation_info____Unify____trace_needs_body_rep_0_0(
#line 178 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_1,
#line 178 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2)
#line 178 "continuation_info.m"
{
#line 5909 "ll_backend.continuation_info.c"
  {
#line 5911 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__HeadVar__2_1 == ll_backend__continuation_info__HeadVar__2_2);

#line 5914 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 5916 "ll_backend.continuation_info.c"
  }
#line 178 "continuation_info.m"
}

#line 341 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info____Compare____slot_contents_0_0(
#line 341 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 341 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 341 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3)
#line 341 "continuation_info.m"
{
#line 341 "continuation_info.m"
  {
#line 341 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 341 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_28 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;
#line 341 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_29 = (MR_Integer) ll_backend__continuation_info__HeadVar__3_3;

#line 341 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_28 == ll_backend__continuation_info__CastY_29);
#line 341 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 5945 "ll_backend.continuation_info.c"
      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 341 "continuation_info.m"
    else
#line 341 "continuation_info.m"
#line 341 "continuation_info.m"
      switch (MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__2_2)) {
#line 341 "continuation_info.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 341 "continuation_info.m"
        case (MR_Integer) 0:
#line 341 "continuation_info.m"
#line 341 "continuation_info.m"
          switch (MR_unmkbody(ll_backend__continuation_info__HeadVar__2_2)) {
#line 341 "continuation_info.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 341 "continuation_info.m"
            case (MR_Integer) 0:
#line 341 "continuation_info.m"
#line 341 "continuation_info.m"
              switch (MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__3_3)) {
#line 341 "continuation_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 341 "continuation_info.m"
                case (MR_Integer) 0:
#line 341 "continuation_info.m"
#line 341 "continuation_info.m"
                  switch (MR_unmkbody(ll_backend__continuation_info__HeadVar__3_3)) {
#line 341 "continuation_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 341 "continuation_info.m"
                    case (MR_Integer) 0:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 1:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 2:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 3:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 4:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 5:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 6:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 7:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 8:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 9:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 10:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                  }
#line 341 "continuation_info.m"
                  break;
#line 341 "continuation_info.m"
                case (MR_Integer) 1:
#line 6047 "ll_backend.continuation_info.c"
                  *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                  break;
#line 341 "continuation_info.m"
              }
#line 341 "continuation_info.m"
              break;
#line 341 "continuation_info.m"
            case (MR_Integer) 1:
#line 341 "continuation_info.m"
#line 341 "continuation_info.m"
              switch (MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__3_3)) {
#line 341 "continuation_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 341 "continuation_info.m"
                case (MR_Integer) 0:
#line 341 "continuation_info.m"
#line 341 "continuation_info.m"
                  switch (MR_unmkbody(ll_backend__continuation_info__HeadVar__3_3)) {
#line 341 "continuation_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 341 "continuation_info.m"
                    case (MR_Integer) 0:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 1:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 2:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 3:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 4:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 5:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 6:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 7:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 8:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 9:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 10:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                  }
#line 341 "continuation_info.m"
                  break;
#line 341 "continuation_info.m"
                case (MR_Integer) 1:
#line 6141 "ll_backend.continuation_info.c"
                  *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                  break;
#line 341 "continuation_info.m"
              }
#line 341 "continuation_info.m"
              break;
#line 341 "continuation_info.m"
            case (MR_Integer) 2:
#line 341 "continuation_info.m"
#line 341 "continuation_info.m"
              switch (MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__3_3)) {
#line 341 "continuation_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 341 "continuation_info.m"
                case (MR_Integer) 0:
#line 341 "continuation_info.m"
#line 341 "continuation_info.m"
                  switch (MR_unmkbody(ll_backend__continuation_info__HeadVar__3_3)) {
#line 341 "continuation_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 341 "continuation_info.m"
                    case (MR_Integer) 0:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 1:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 2:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 3:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 4:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 5:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 6:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 7:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 8:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 9:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 10:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                  }
#line 341 "continuation_info.m"
                  break;
#line 341 "continuation_info.m"
                case (MR_Integer) 1:
#line 6235 "ll_backend.continuation_info.c"
                  *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                  break;
#line 341 "continuation_info.m"
              }
#line 341 "continuation_info.m"
              break;
#line 341 "continuation_info.m"
            case (MR_Integer) 3:
#line 341 "continuation_info.m"
#line 341 "continuation_info.m"
              switch (MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__3_3)) {
#line 341 "continuation_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 341 "continuation_info.m"
                case (MR_Integer) 0:
#line 341 "continuation_info.m"
#line 341 "continuation_info.m"
                  switch (MR_unmkbody(ll_backend__continuation_info__HeadVar__3_3)) {
#line 341 "continuation_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 341 "continuation_info.m"
                    case (MR_Integer) 0:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 1:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 2:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 3:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 4:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 5:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 6:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 7:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 8:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 9:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 10:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                  }
#line 341 "continuation_info.m"
                  break;
#line 341 "continuation_info.m"
                case (MR_Integer) 1:
#line 6329 "ll_backend.continuation_info.c"
                  *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                  break;
#line 341 "continuation_info.m"
              }
#line 341 "continuation_info.m"
              break;
#line 341 "continuation_info.m"
            case (MR_Integer) 4:
#line 341 "continuation_info.m"
#line 341 "continuation_info.m"
              switch (MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__3_3)) {
#line 341 "continuation_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 341 "continuation_info.m"
                case (MR_Integer) 0:
#line 341 "continuation_info.m"
#line 341 "continuation_info.m"
                  switch (MR_unmkbody(ll_backend__continuation_info__HeadVar__3_3)) {
#line 341 "continuation_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 341 "continuation_info.m"
                    case (MR_Integer) 0:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 1:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 2:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 3:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 4:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 5:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 6:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 7:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 8:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 9:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 10:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                  }
#line 341 "continuation_info.m"
                  break;
#line 341 "continuation_info.m"
                case (MR_Integer) 1:
#line 6423 "ll_backend.continuation_info.c"
                  *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                  break;
#line 341 "continuation_info.m"
              }
#line 341 "continuation_info.m"
              break;
#line 341 "continuation_info.m"
            case (MR_Integer) 5:
#line 341 "continuation_info.m"
#line 341 "continuation_info.m"
              switch (MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__3_3)) {
#line 341 "continuation_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 341 "continuation_info.m"
                case (MR_Integer) 0:
#line 341 "continuation_info.m"
#line 341 "continuation_info.m"
                  switch (MR_unmkbody(ll_backend__continuation_info__HeadVar__3_3)) {
#line 341 "continuation_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 341 "continuation_info.m"
                    case (MR_Integer) 0:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 1:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 2:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 3:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 4:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 5:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 6:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 7:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 8:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 9:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 10:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                  }
#line 341 "continuation_info.m"
                  break;
#line 341 "continuation_info.m"
                case (MR_Integer) 1:
#line 6517 "ll_backend.continuation_info.c"
                  *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                  break;
#line 341 "continuation_info.m"
              }
#line 341 "continuation_info.m"
              break;
#line 341 "continuation_info.m"
            case (MR_Integer) 6:
#line 341 "continuation_info.m"
#line 341 "continuation_info.m"
              switch (MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__3_3)) {
#line 341 "continuation_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 341 "continuation_info.m"
                case (MR_Integer) 0:
#line 341 "continuation_info.m"
#line 341 "continuation_info.m"
                  switch (MR_unmkbody(ll_backend__continuation_info__HeadVar__3_3)) {
#line 341 "continuation_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 341 "continuation_info.m"
                    case (MR_Integer) 0:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 1:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 2:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 3:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 4:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 5:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 6:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 7:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 8:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 9:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 10:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                  }
#line 341 "continuation_info.m"
                  break;
#line 341 "continuation_info.m"
                case (MR_Integer) 1:
#line 6611 "ll_backend.continuation_info.c"
                  *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                  break;
#line 341 "continuation_info.m"
              }
#line 341 "continuation_info.m"
              break;
#line 341 "continuation_info.m"
            case (MR_Integer) 7:
#line 341 "continuation_info.m"
#line 341 "continuation_info.m"
              switch (MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__3_3)) {
#line 341 "continuation_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 341 "continuation_info.m"
                case (MR_Integer) 0:
#line 341 "continuation_info.m"
#line 341 "continuation_info.m"
                  switch (MR_unmkbody(ll_backend__continuation_info__HeadVar__3_3)) {
#line 341 "continuation_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 341 "continuation_info.m"
                    case (MR_Integer) 0:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 1:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 2:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 3:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 4:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 5:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 6:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 7:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 8:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 9:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 10:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                  }
#line 341 "continuation_info.m"
                  break;
#line 341 "continuation_info.m"
                case (MR_Integer) 1:
#line 6705 "ll_backend.continuation_info.c"
                  *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                  break;
#line 341 "continuation_info.m"
              }
#line 341 "continuation_info.m"
              break;
#line 341 "continuation_info.m"
            case (MR_Integer) 8:
#line 341 "continuation_info.m"
#line 341 "continuation_info.m"
              switch (MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__3_3)) {
#line 341 "continuation_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 341 "continuation_info.m"
                case (MR_Integer) 0:
#line 341 "continuation_info.m"
#line 341 "continuation_info.m"
                  switch (MR_unmkbody(ll_backend__continuation_info__HeadVar__3_3)) {
#line 341 "continuation_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 341 "continuation_info.m"
                    case (MR_Integer) 0:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 1:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 2:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 3:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 4:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 5:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 6:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 7:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 8:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 9:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 10:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                  }
#line 341 "continuation_info.m"
                  break;
#line 341 "continuation_info.m"
                case (MR_Integer) 1:
#line 6799 "ll_backend.continuation_info.c"
                  *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                  break;
#line 341 "continuation_info.m"
              }
#line 341 "continuation_info.m"
              break;
#line 341 "continuation_info.m"
            case (MR_Integer) 9:
#line 341 "continuation_info.m"
#line 341 "continuation_info.m"
              switch (MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__3_3)) {
#line 341 "continuation_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 341 "continuation_info.m"
                case (MR_Integer) 0:
#line 341 "continuation_info.m"
#line 341 "continuation_info.m"
                  switch (MR_unmkbody(ll_backend__continuation_info__HeadVar__3_3)) {
#line 341 "continuation_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 341 "continuation_info.m"
                    case (MR_Integer) 0:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 1:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 2:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 3:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 4:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 5:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 6:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 7:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 8:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 9:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 10:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                  }
#line 341 "continuation_info.m"
                  break;
#line 341 "continuation_info.m"
                case (MR_Integer) 1:
#line 6893 "ll_backend.continuation_info.c"
                  *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                  break;
#line 341 "continuation_info.m"
              }
#line 341 "continuation_info.m"
              break;
#line 341 "continuation_info.m"
            case (MR_Integer) 10:
#line 341 "continuation_info.m"
#line 341 "continuation_info.m"
              switch (MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__3_3)) {
#line 341 "continuation_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 341 "continuation_info.m"
                case (MR_Integer) 0:
#line 341 "continuation_info.m"
#line 341 "continuation_info.m"
                  switch (MR_unmkbody(ll_backend__continuation_info__HeadVar__3_3)) {
#line 341 "continuation_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 341 "continuation_info.m"
                    case (MR_Integer) 0:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 1:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 2:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 3:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 4:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 5:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 6:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 7:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 8:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 9:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                    case (MR_Integer) 10:
#line 341 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 341 "continuation_info.m"
                      break;
#line 341 "continuation_info.m"
                  }
#line 341 "continuation_info.m"
                  break;
#line 341 "continuation_info.m"
                case (MR_Integer) 1:
#line 6987 "ll_backend.continuation_info.c"
                  *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 341 "continuation_info.m"
                  break;
#line 341 "continuation_info.m"
              }
#line 341 "continuation_info.m"
              break;
#line 341 "continuation_info.m"
          }
#line 341 "continuation_info.m"
          break;
#line 341 "continuation_info.m"
        case (MR_Integer) 1:
#line 341 "continuation_info.m"
          {
#line 341 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));

#line 341 "continuation_info.m"
#line 341 "continuation_info.m"
            switch (MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__3_3)) {
#line 341 "continuation_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 341 "continuation_info.m"
              case (MR_Integer) 0:
#line 341 "continuation_info.m"
#line 341 "continuation_info.m"
                switch (MR_unmkbody(ll_backend__continuation_info__HeadVar__3_3)) {
#line 341 "continuation_info.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 341 "continuation_info.m"
                  case (MR_Integer) 0:
#line 7020 "ll_backend.continuation_info.c"
                    *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                    break;
#line 341 "continuation_info.m"
                  case (MR_Integer) 1:
#line 7026 "ll_backend.continuation_info.c"
                    *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                    break;
#line 341 "continuation_info.m"
                  case (MR_Integer) 2:
#line 7032 "ll_backend.continuation_info.c"
                    *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                    break;
#line 341 "continuation_info.m"
                  case (MR_Integer) 3:
#line 7038 "ll_backend.continuation_info.c"
                    *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                    break;
#line 341 "continuation_info.m"
                  case (MR_Integer) 4:
#line 7044 "ll_backend.continuation_info.c"
                    *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                    break;
#line 341 "continuation_info.m"
                  case (MR_Integer) 5:
#line 7050 "ll_backend.continuation_info.c"
                    *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                    break;
#line 341 "continuation_info.m"
                  case (MR_Integer) 6:
#line 7056 "ll_backend.continuation_info.c"
                    *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                    break;
#line 341 "continuation_info.m"
                  case (MR_Integer) 7:
#line 7062 "ll_backend.continuation_info.c"
                    *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                    break;
#line 341 "continuation_info.m"
                  case (MR_Integer) 8:
#line 7068 "ll_backend.continuation_info.c"
                    *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                    break;
#line 341 "continuation_info.m"
                  case (MR_Integer) 9:
#line 7074 "ll_backend.continuation_info.c"
                    *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                    break;
#line 341 "continuation_info.m"
                  case (MR_Integer) 10:
#line 7080 "ll_backend.continuation_info.c"
                    *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 341 "continuation_info.m"
                    break;
#line 341 "continuation_info.m"
                }
#line 341 "continuation_info.m"
                break;
#line 341 "continuation_info.m"
              case (MR_Integer) 1:
#line 341 "continuation_info.m"
                {
#line 341 "continuation_info.m"
                  MR_Word ll_backend__continuation_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));

#line 341 "continuation_info.m"
                  {
#line 341 "continuation_info.m"
                    ll_backend__llds____Compare____lval_0_0(ll_backend__continuation_info__HeadVar__1_1, ll_backend__continuation_info__V_31_31, ll_backend__continuation_info__V_27_27);
                  }
#line 341 "continuation_info.m"
                }
#line 341 "continuation_info.m"
                break;
#line 341 "continuation_info.m"
            }
#line 341 "continuation_info.m"
          }
#line 341 "continuation_info.m"
          break;
#line 341 "continuation_info.m"
      }
#line 341 "continuation_info.m"
  }
#line 341 "continuation_info.m"
}

#line 341 "continuation_info.m"
MR_bool MR_CALL 
ll_backend__continuation_info____Unify____slot_contents_0_0(
#line 341 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 341 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2)
#line 341 "continuation_info.m"
{
#line 341 "continuation_info.m"
  {
#line 341 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 341 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_27 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 341 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_28 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 341 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_27 == ll_backend__continuation_info__CastY_28);
#line 341 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 341 "continuation_info.m"
      ll_backend__continuation_info__succeeded = MR_TRUE;
#line 341 "continuation_info.m"
    else
#line 341 "continuation_info.m"
#line 341 "continuation_info.m"
      switch (MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__1_1)) {
#line 341 "continuation_info.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 341 "continuation_info.m"
        case (MR_Integer) 0:
#line 341 "continuation_info.m"
#line 341 "continuation_info.m"
          switch (MR_unmkbody(ll_backend__continuation_info__HeadVar__1_1)) {
#line 341 "continuation_info.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 341 "continuation_info.m"
            case (MR_Integer) 0:
#line 341 "continuation_info.m"
              {
#line 341 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastX_3 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 341 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastY_4 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 341 "continuation_info.m"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastY_4 == ll_backend__continuation_info__CastX_3);
#line 341 "continuation_info.m"
              }
#line 341 "continuation_info.m"
              break;
#line 341 "continuation_info.m"
            case (MR_Integer) 1:
#line 341 "continuation_info.m"
              {
#line 341 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastX_5 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 341 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastY_6 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 341 "continuation_info.m"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastY_6 == ll_backend__continuation_info__CastX_5);
#line 341 "continuation_info.m"
              }
#line 341 "continuation_info.m"
              break;
#line 341 "continuation_info.m"
            case (MR_Integer) 2:
#line 341 "continuation_info.m"
              {
#line 341 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastX_7 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 341 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastY_8 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 341 "continuation_info.m"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastY_8 == ll_backend__continuation_info__CastX_7);
#line 341 "continuation_info.m"
              }
#line 341 "continuation_info.m"
              break;
#line 341 "continuation_info.m"
            case (MR_Integer) 3:
#line 341 "continuation_info.m"
              {
#line 341 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastX_9 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 341 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastY_10 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 341 "continuation_info.m"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastY_10 == ll_backend__continuation_info__CastX_9);
#line 341 "continuation_info.m"
              }
#line 341 "continuation_info.m"
              break;
#line 341 "continuation_info.m"
            case (MR_Integer) 4:
#line 341 "continuation_info.m"
              {
#line 341 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastX_11 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 341 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastY_12 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 341 "continuation_info.m"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastY_12 == ll_backend__continuation_info__CastX_11);
#line 341 "continuation_info.m"
              }
#line 341 "continuation_info.m"
              break;
#line 341 "continuation_info.m"
            case (MR_Integer) 5:
#line 341 "continuation_info.m"
              {
#line 341 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastX_13 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 341 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastY_14 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 341 "continuation_info.m"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastY_14 == ll_backend__continuation_info__CastX_13);
#line 341 "continuation_info.m"
              }
#line 341 "continuation_info.m"
              break;
#line 341 "continuation_info.m"
            case (MR_Integer) 6:
#line 341 "continuation_info.m"
              {
#line 341 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastX_15 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 341 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastY_16 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 341 "continuation_info.m"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastY_16 == ll_backend__continuation_info__CastX_15);
#line 341 "continuation_info.m"
              }
#line 341 "continuation_info.m"
              break;
#line 341 "continuation_info.m"
            case (MR_Integer) 7:
#line 341 "continuation_info.m"
              {
#line 341 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastX_17 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 341 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastY_18 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 341 "continuation_info.m"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastY_18 == ll_backend__continuation_info__CastX_17);
#line 341 "continuation_info.m"
              }
#line 341 "continuation_info.m"
              break;
#line 341 "continuation_info.m"
            case (MR_Integer) 8:
#line 341 "continuation_info.m"
              {
#line 341 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastX_19 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 341 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastY_20 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 341 "continuation_info.m"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastY_20 == ll_backend__continuation_info__CastX_19);
#line 341 "continuation_info.m"
              }
#line 341 "continuation_info.m"
              break;
#line 341 "continuation_info.m"
            case (MR_Integer) 9:
#line 341 "continuation_info.m"
              {
#line 341 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastX_21 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 341 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastY_22 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 341 "continuation_info.m"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastY_22 == ll_backend__continuation_info__CastX_21);
#line 341 "continuation_info.m"
              }
#line 341 "continuation_info.m"
              break;
#line 341 "continuation_info.m"
            case (MR_Integer) 10:
#line 341 "continuation_info.m"
              {
#line 341 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastX_23 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 341 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastY_24 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 341 "continuation_info.m"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastY_24 == ll_backend__continuation_info__CastX_23);
#line 341 "continuation_info.m"
              }
#line 341 "continuation_info.m"
              break;
#line 341 "continuation_info.m"
          }
#line 341 "continuation_info.m"
          break;
#line 341 "continuation_info.m"
        case (MR_Integer) 1:
#line 341 "continuation_info.m"
          {
#line 341 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 341 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_26_26;

#line 341 "continuation_info.m"
            ll_backend__continuation_info__succeeded = ((MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 341 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 341 "continuation_info.m"
              {
#line 341 "continuation_info.m"
                ll_backend__continuation_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 7341 "ll_backend.continuation_info.c"
                {
#line 7343 "ll_backend.continuation_info.c"
                  ll_backend__continuation_info__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__continuation_info__V_25_25, ll_backend__continuation_info__V_26_26);
                }
#line 341 "continuation_info.m"
              }
#line 341 "continuation_info.m"
          }
#line 341 "continuation_info.m"
          break;
#line 341 "continuation_info.m"
      }
#line 341 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 341 "continuation_info.m"
  }
#line 341 "continuation_info.m"
}

#line 278 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info____Compare____return_layout_info_0_0(
#line 278 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 278 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 278 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3)
#line 278 "continuation_info.m"
{
#line 278 "continuation_info.m"
  {
#line 278 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 278 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_9 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;
#line 278 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_10 = (MR_Integer) ll_backend__continuation_info__HeadVar__3_3;

#line 278 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_9 == ll_backend__continuation_info__CastY_10);
#line 278 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 7385 "ll_backend.continuation_info.c"
      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 278 "continuation_info.m"
    else
#line 278 "continuation_info.m"
      {
#line 278 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 278 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 278 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));
#line 278 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 1)));
#line 278 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8;

#line 278 "continuation_info.m"
        {
#line 278 "continuation_info.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[19], &ll_backend__continuation_info__V_8_8, ((MR_Box) (ll_backend__continuation_info__V_4_4)), ((MR_Box) (ll_backend__continuation_info__V_6_6)));
        }
#line 7407 "ll_backend.continuation_info.c"
        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_8_8 == (MR_Integer) 0);
#line 278 "continuation_info.m"
        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 278 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 278 "continuation_info.m"
          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_8_8;
#line 278 "continuation_info.m"
        else
#line 278 "continuation_info.m"
          {
#line 278 "continuation_info.m"
            ll_backend__continuation_info____Compare____layout_label_info_0_0(ll_backend__continuation_info__HeadVar__1_1, ll_backend__continuation_info__V_5_5, ll_backend__continuation_info__V_7_7);
          }
#line 278 "continuation_info.m"
      }
#line 278 "continuation_info.m"
  }
#line 278 "continuation_info.m"
}

#line 278 "continuation_info.m"
MR_bool MR_CALL 
ll_backend__continuation_info____Unify____return_layout_info_0_0(
#line 278 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 278 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2)
#line 278 "continuation_info.m"
{
#line 278 "continuation_info.m"
  {
#line 278 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 278 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_7 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 278 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_8 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 278 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_7 == ll_backend__continuation_info__CastY_8);
#line 278 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 278 "continuation_info.m"
      ll_backend__continuation_info__succeeded = MR_TRUE;
#line 278 "continuation_info.m"
    else
#line 278 "continuation_info.m"
      {
#line 278 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 278 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 278 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 278 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));

#line 7466 "ll_backend.continuation_info.c"
        {
#line 7468 "ll_backend.continuation_info.c"
          ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[19], ((MR_Box) (ll_backend__continuation_info__V_3_3)), ((MR_Box) (ll_backend__continuation_info__V_5_5)));
        }
#line 278 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 7473 "ll_backend.continuation_info.c"
          {
#line 7475 "ll_backend.continuation_info.c"
            ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____layout_label_info_0_0(ll_backend__continuation_info__V_4_4, ll_backend__continuation_info__V_6_6);
          }
#line 278 "continuation_info.m"
      }
#line 278 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 278 "continuation_info.m"
  }
#line 278 "continuation_info.m"
}

#line 170 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info____Compare____proc_layout_table_info_0_0(
#line 170 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 170 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 170 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3)
#line 170 "continuation_info.m"
{
#line 170 "continuation_info.m"
  {
#line 170 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 170 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_12 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;
#line 170 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_13 = (MR_Integer) ll_backend__continuation_info__HeadVar__3_3;

#line 170 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_12 == ll_backend__continuation_info__CastY_13);
#line 170 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 7511 "ll_backend.continuation_info.c"
      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 170 "continuation_info.m"
    else
#line 170 "continuation_info.m"
    if (((MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 170 "continuation_info.m"
      {
#line 170 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));

#line 170 "continuation_info.m"
        if (((MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 170 "continuation_info.m"
          {
#line 170 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));

#line 170 "continuation_info.m"
            {
#line 170 "continuation_info.m"
              hlds__hlds_pred____Compare____proc_table_io_info_0_0(ll_backend__continuation_info__HeadVar__1_1, ll_backend__continuation_info__V_16_16, ll_backend__continuation_info__V_5_5);
            }
#line 170 "continuation_info.m"
          }
#line 170 "continuation_info.m"
        else
#line 7538 "ll_backend.continuation_info.c"
          *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 170 "continuation_info.m"
      }
#line 170 "continuation_info.m"
    else
#line 170 "continuation_info.m"
      {
#line 170 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));

#line 170 "continuation_info.m"
        if (((MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 7551 "ll_backend.continuation_info.c"
          *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 170 "continuation_info.m"
        else
#line 170 "continuation_info.m"
          {
#line 170 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));

#line 170 "continuation_info.m"
            {
#line 170 "continuation_info.m"
              hlds__hlds_pred____Compare____proc_table_struct_info_0_0(ll_backend__continuation_info__HeadVar__1_1, ll_backend__continuation_info__V_17_17, ll_backend__continuation_info__V_11_11);
            }
#line 170 "continuation_info.m"
          }
#line 170 "continuation_info.m"
      }
#line 170 "continuation_info.m"
  }
#line 170 "continuation_info.m"
}

#line 170 "continuation_info.m"
MR_bool MR_CALL 
ll_backend__continuation_info____Unify____proc_layout_table_info_0_0(
#line 170 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 170 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2)
#line 170 "continuation_info.m"
{
#line 170 "continuation_info.m"
  {
#line 170 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 170 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_7 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 170 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_8 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 170 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_7 == ll_backend__continuation_info__CastY_8);
#line 170 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 170 "continuation_info.m"
      ll_backend__continuation_info__succeeded = MR_TRUE;
#line 170 "continuation_info.m"
    else
#line 170 "continuation_info.m"
    if (((MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 170 "continuation_info.m"
      {
#line 170 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 170 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4;

#line 170 "continuation_info.m"
        ll_backend__continuation_info__succeeded = ((MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 170 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 170 "continuation_info.m"
          {
#line 170 "continuation_info.m"
            ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 7617 "ll_backend.continuation_info.c"
            {
#line 7619 "ll_backend.continuation_info.c"
              ll_backend__continuation_info__succeeded = hlds__hlds_pred____Unify____proc_table_io_info_0_0(ll_backend__continuation_info__V_3_3, ll_backend__continuation_info__V_4_4);
            }
#line 170 "continuation_info.m"
          }
#line 170 "continuation_info.m"
      }
#line 170 "continuation_info.m"
    else
#line 170 "continuation_info.m"
      {
#line 170 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 170 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6;

#line 170 "continuation_info.m"
        ll_backend__continuation_info__succeeded = ((MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 170 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 170 "continuation_info.m"
          {
#line 170 "continuation_info.m"
            ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 7643 "ll_backend.continuation_info.c"
            {
#line 7645 "ll_backend.continuation_info.c"
              ll_backend__continuation_info__succeeded = hlds__hlds_pred____Unify____proc_table_struct_info_0_0(ll_backend__continuation_info__V_5_5, ll_backend__continuation_info__V_6_6);
            }
#line 170 "continuation_info.m"
          }
#line 170 "continuation_info.m"
      }
#line 170 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 170 "continuation_info.m"
  }
#line 170 "continuation_info.m"
}

#line 86 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info____Compare____proc_layout_info_0_0(
#line 86 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 86 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 86 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3)
#line 86 "continuation_info.m"
{
#line 86 "continuation_info.m"
  {
#line 86 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 86 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_75 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;
#line 86 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_76 = (MR_Integer) ll_backend__continuation_info__HeadVar__3_3;

#line 86 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_75 == ll_backend__continuation_info__CastY_76);
#line 86 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 7683 "ll_backend.continuation_info.c"
      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 86 "continuation_info.m"
    else
#line 86 "continuation_info.m"
      {
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 2)));
#line 86 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 3)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 4)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 5)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 6)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 7)));
#line 86 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 8)));
#line 86 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 9)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 10)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 11)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 12)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 13)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 14)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 15)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 16)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 17)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 18)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 19)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 20)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 21)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 22)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 23)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 1)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 2)));
#line 86 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 3)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 4)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 5)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 6)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 7)));
#line 86 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 8)));
#line 86 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 9)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 10)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 11)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 12)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 13)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 14)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 15)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 16)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 17)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 18)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 19)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 20)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 21)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 22)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 23)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_52_52;

#line 86 "continuation_info.m"
        {
#line 86 "continuation_info.m"
          hlds__hlds_rtti____Compare____rtti_proc_label_0_0(&ll_backend__continuation_info__V_52_52, ll_backend__continuation_info__V_4_4, ll_backend__continuation_info__V_28_28);
        }
#line 7793 "ll_backend.continuation_info.c"
        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_52_52 == (MR_Integer) 0);
#line 86 "continuation_info.m"
        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 86 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 86 "continuation_info.m"
          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_52_52;
#line 86 "continuation_info.m"
        else
#line 86 "continuation_info.m"
          {
#line 86 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_53_53;

#line 86 "continuation_info.m"
            {
#line 86 "continuation_info.m"
              ll_backend__llds____Compare____label_0_0(&ll_backend__continuation_info__V_53_53, ll_backend__continuation_info__V_5_5, ll_backend__continuation_info__V_29_29);
            }
#line 7813 "ll_backend.continuation_info.c"
            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_53_53 == (MR_Integer) 0);
#line 86 "continuation_info.m"
            ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 86 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 86 "continuation_info.m"
              *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_53_53;
#line 86 "continuation_info.m"
            else
#line 86 "continuation_info.m"
              {
#line 86 "continuation_info.m"
                MR_Word ll_backend__continuation_info__V_54_54;
#line 86 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__V_101_101 = (MR_Integer) ll_backend__continuation_info__V_6_6;
#line 86 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__V_102_102 = (MR_Integer) ll_backend__continuation_info__V_30_30;

#line 86 "continuation_info.m"
                {
#line 86 "continuation_info.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__continuation_info__V_54_54, ll_backend__continuation_info__V_101_101, ll_backend__continuation_info__V_102_102);
                }
#line 7837 "ll_backend.continuation_info.c"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_54_54 == (MR_Integer) 0);
#line 86 "continuation_info.m"
                ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 86 "continuation_info.m"
                if (ll_backend__continuation_info__succeeded)
#line 86 "continuation_info.m"
                  *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_54_54;
#line 86 "continuation_info.m"
                else
#line 86 "continuation_info.m"
                  {
#line 86 "continuation_info.m"
                    MR_Word ll_backend__continuation_info__V_55_55;

#line 86 "continuation_info.m"
                    {
#line 86 "continuation_info.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__continuation_info__V_55_55, ll_backend__continuation_info__V_7_7, ll_backend__continuation_info__V_31_31);
                    }
#line 7857 "ll_backend.continuation_info.c"
                    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_55_55 == (MR_Integer) 0);
#line 86 "continuation_info.m"
                    ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 86 "continuation_info.m"
                    if (ll_backend__continuation_info__succeeded)
#line 86 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_55_55;
#line 86 "continuation_info.m"
                    else
#line 86 "continuation_info.m"
                      {
#line 86 "continuation_info.m"
                        MR_Word ll_backend__continuation_info__V_56_56;

#line 86 "continuation_info.m"
                        {
#line 86 "continuation_info.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[11], &ll_backend__continuation_info__V_56_56, ((MR_Box) (ll_backend__continuation_info__V_8_8)), ((MR_Box) (ll_backend__continuation_info__V_32_32)));
                        }
#line 7877 "ll_backend.continuation_info.c"
                        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_56_56 == (MR_Integer) 0);
#line 86 "continuation_info.m"
                        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 86 "continuation_info.m"
                        if (ll_backend__continuation_info__succeeded)
#line 86 "continuation_info.m"
                          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_56_56;
#line 86 "continuation_info.m"
                        else
#line 86 "continuation_info.m"
                          {
#line 86 "continuation_info.m"
                            MR_Word ll_backend__continuation_info__V_57_57;

#line 86 "continuation_info.m"
                            {
#line 86 "continuation_info.m"
                              parse_tree__prog_data____Compare____eval_method_0_0(&ll_backend__continuation_info__V_57_57, ll_backend__continuation_info__V_9_9, ll_backend__continuation_info__V_33_33);
                            }
#line 7897 "ll_backend.continuation_info.c"
                            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_57_57 == (MR_Integer) 0);
#line 86 "continuation_info.m"
                            ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 86 "continuation_info.m"
                            if (ll_backend__continuation_info__succeeded)
#line 86 "continuation_info.m"
                              *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_57_57;
#line 86 "continuation_info.m"
                            else
#line 86 "continuation_info.m"
                              {
#line 86 "continuation_info.m"
                                MR_Word ll_backend__continuation_info__V_58_58;

#line 86 "continuation_info.m"
                                {
#line 86 "continuation_info.m"
                                  libs__trace_params____Compare____trace_level_0_0(&ll_backend__continuation_info__V_58_58, ll_backend__continuation_info__V_10_10, ll_backend__continuation_info__V_34_34);
                                }
#line 7917 "ll_backend.continuation_info.c"
                                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_58_58 == (MR_Integer) 0);
#line 86 "continuation_info.m"
                                ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 86 "continuation_info.m"
                                if (ll_backend__continuation_info__succeeded)
#line 86 "continuation_info.m"
                                  *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_58_58;
#line 86 "continuation_info.m"
                                else
#line 86 "continuation_info.m"
                                  {
#line 86 "continuation_info.m"
                                    MR_Word ll_backend__continuation_info__V_59_59;

#line 86 "continuation_info.m"
                                    {
#line 86 "continuation_info.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[12], &ll_backend__continuation_info__V_59_59, ((MR_Box) (ll_backend__continuation_info__V_11_11)), ((MR_Box) (ll_backend__continuation_info__V_35_35)));
                                    }
#line 7937 "ll_backend.continuation_info.c"
                                    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_59_59 == (MR_Integer) 0);
#line 86 "continuation_info.m"
                                    ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 86 "continuation_info.m"
                                    if (ll_backend__continuation_info__succeeded)
#line 86 "continuation_info.m"
                                      *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_59_59;
#line 86 "continuation_info.m"
                                    else
#line 86 "continuation_info.m"
                                      {
#line 86 "continuation_info.m"
                                        MR_Word ll_backend__continuation_info__V_60_60;

#line 86 "continuation_info.m"
                                        {
#line 86 "continuation_info.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__continuation_info__V_60_60, ll_backend__continuation_info__V_12_12, ll_backend__continuation_info__V_36_36);
                                        }
#line 7957 "ll_backend.continuation_info.c"
                                        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_60_60 == (MR_Integer) 0);
#line 86 "continuation_info.m"
                                        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 86 "continuation_info.m"
                                        if (ll_backend__continuation_info__succeeded)
#line 86 "continuation_info.m"
                                          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_60_60;
#line 86 "continuation_info.m"
                                        else
#line 86 "continuation_info.m"
                                          {
#line 86 "continuation_info.m"
                                            MR_Word ll_backend__continuation_info__V_61_61;

#line 86 "continuation_info.m"
                                            {
#line 86 "continuation_info.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__continuation_info__V_61_61, ll_backend__continuation_info__V_13_13, ll_backend__continuation_info__V_37_37);
                                            }
#line 7977 "ll_backend.continuation_info.c"
                                            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_61_61 == (MR_Integer) 0);
#line 86 "continuation_info.m"
                                            ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 86 "continuation_info.m"
                                            if (ll_backend__continuation_info__succeeded)
#line 86 "continuation_info.m"
                                              *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_61_61;
#line 86 "continuation_info.m"
                                            else
#line 86 "continuation_info.m"
                                              {
#line 86 "continuation_info.m"
                                                MR_Word ll_backend__continuation_info__V_62_62;

#line 86 "continuation_info.m"
                                                {
#line 86 "continuation_info.m"
                                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[13], &ll_backend__continuation_info__V_62_62, ((MR_Box) (ll_backend__continuation_info__V_14_14)), ((MR_Box) (ll_backend__continuation_info__V_38_38)));
                                                }
#line 7997 "ll_backend.continuation_info.c"
                                                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_62_62 == (MR_Integer) 0);
#line 86 "continuation_info.m"
                                                ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 86 "continuation_info.m"
                                                if (ll_backend__continuation_info__succeeded)
#line 86 "continuation_info.m"
                                                  *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_62_62;
#line 86 "continuation_info.m"
                                                else
#line 86 "continuation_info.m"
                                                  {
#line 86 "continuation_info.m"
                                                    MR_Word ll_backend__continuation_info__V_63_63;

#line 86 "continuation_info.m"
                                                    {
#line 86 "continuation_info.m"
                                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[14], &ll_backend__continuation_info__V_63_63, ((MR_Box) (ll_backend__continuation_info__V_15_15)), ((MR_Box) (ll_backend__continuation_info__V_39_39)));
                                                    }
#line 8017 "ll_backend.continuation_info.c"
                                                    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_63_63 == (MR_Integer) 0);
#line 86 "continuation_info.m"
                                                    ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 86 "continuation_info.m"
                                                    if (ll_backend__continuation_info__succeeded)
#line 86 "continuation_info.m"
                                                      *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_63_63;
#line 86 "continuation_info.m"
                                                    else
#line 86 "continuation_info.m"
                                                      {
#line 86 "continuation_info.m"
                                                        MR_Word ll_backend__continuation_info__V_64_64;

#line 86 "continuation_info.m"
                                                        {
#line 86 "continuation_info.m"
                                                          hlds__hlds_goal____Compare____hlds_goal_0_0(&ll_backend__continuation_info__V_64_64, ll_backend__continuation_info__V_16_16, ll_backend__continuation_info__V_40_40);
                                                        }
#line 8037 "ll_backend.continuation_info.c"
                                                        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_64_64 == (MR_Integer) 0);
#line 86 "continuation_info.m"
                                                        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 86 "continuation_info.m"
                                                        if (ll_backend__continuation_info__succeeded)
#line 86 "continuation_info.m"
                                                          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_64_64;
#line 86 "continuation_info.m"
                                                        else
#line 86 "continuation_info.m"
                                                          {
#line 86 "continuation_info.m"
                                                            MR_Word ll_backend__continuation_info__V_65_65;
#line 86 "continuation_info.m"
                                                            MR_Integer ll_backend__continuation_info__V_103_103 = (MR_Integer) ll_backend__continuation_info__V_17_17;
#line 86 "continuation_info.m"
                                                            MR_Integer ll_backend__continuation_info__V_104_104 = (MR_Integer) ll_backend__continuation_info__V_41_41;

#line 86 "continuation_info.m"
                                                            {
#line 86 "continuation_info.m"
                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__continuation_info__V_65_65, ll_backend__continuation_info__V_103_103, ll_backend__continuation_info__V_104_104);
                                                            }
#line 8061 "ll_backend.continuation_info.c"
                                                            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_65_65 == (MR_Integer) 0);
#line 86 "continuation_info.m"
                                                            ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 86 "continuation_info.m"
                                                            if (ll_backend__continuation_info__succeeded)
#line 86 "continuation_info.m"
                                                              *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_65_65;
#line 86 "continuation_info.m"
                                                            else
#line 86 "continuation_info.m"
                                                              {
#line 86 "continuation_info.m"
                                                                MR_Word ll_backend__continuation_info__V_66_66;

#line 86 "continuation_info.m"
                                                                {
#line 86 "continuation_info.m"
                                                                  hlds__instmap____Compare____instmap_0_0(&ll_backend__continuation_info__V_66_66, ll_backend__continuation_info__V_18_18, ll_backend__continuation_info__V_42_42);
                                                                }
#line 8081 "ll_backend.continuation_info.c"
                                                                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_66_66 == (MR_Integer) 0);
#line 86 "continuation_info.m"
                                                                ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 86 "continuation_info.m"
                                                                if (ll_backend__continuation_info__succeeded)
#line 86 "continuation_info.m"
                                                                  *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_66_66;
#line 86 "continuation_info.m"
                                                                else
#line 86 "continuation_info.m"
                                                                  {
#line 86 "continuation_info.m"
                                                                    MR_Word ll_backend__continuation_info__V_67_67;

#line 86 "continuation_info.m"
                                                                    {
#line 86 "continuation_info.m"
                                                                      ll_backend__trace_gen____Compare____trace_slot_info_0_0(&ll_backend__continuation_info__V_67_67, ll_backend__continuation_info__V_19_19, ll_backend__continuation_info__V_43_43);
                                                                    }
#line 8101 "ll_backend.continuation_info.c"
                                                                    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_67_67 == (MR_Integer) 0);
#line 86 "continuation_info.m"
                                                                    ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 86 "continuation_info.m"
                                                                    if (ll_backend__continuation_info__succeeded)
#line 86 "continuation_info.m"
                                                                      *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_67_67;
#line 86 "continuation_info.m"
                                                                    else
#line 86 "continuation_info.m"
                                                                      {
#line 86 "continuation_info.m"
                                                                        MR_Word ll_backend__continuation_info__V_68_68;
#line 86 "continuation_info.m"
                                                                        MR_Integer ll_backend__continuation_info__V_105_105 = (MR_Integer) ll_backend__continuation_info__V_20_20;
#line 86 "continuation_info.m"
                                                                        MR_Integer ll_backend__continuation_info__V_106_106 = (MR_Integer) ll_backend__continuation_info__V_44_44;

#line 86 "continuation_info.m"
                                                                        {
#line 86 "continuation_info.m"
                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__continuation_info__V_68_68, ll_backend__continuation_info__V_105_105, ll_backend__continuation_info__V_106_106);
                                                                        }
#line 8125 "ll_backend.continuation_info.c"
                                                                        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_68_68 == (MR_Integer) 0);
#line 86 "continuation_info.m"
                                                                        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 86 "continuation_info.m"
                                                                        if (ll_backend__continuation_info__succeeded)
#line 86 "continuation_info.m"
                                                                          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_68_68;
#line 86 "continuation_info.m"
                                                                        else
#line 86 "continuation_info.m"
                                                                          {
#line 86 "continuation_info.m"
                                                                            MR_Word ll_backend__continuation_info__V_69_69;

#line 86 "continuation_info.m"
                                                                            {
#line 86 "continuation_info.m"
                                                                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[15], &ll_backend__continuation_info__V_69_69, ((MR_Box) (ll_backend__continuation_info__V_21_21)), ((MR_Box) (ll_backend__continuation_info__V_45_45)));
                                                                            }
#line 8145 "ll_backend.continuation_info.c"
                                                                            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_69_69 == (MR_Integer) 0);
#line 86 "continuation_info.m"
                                                                            ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 86 "continuation_info.m"
                                                                            if (ll_backend__continuation_info__succeeded)
#line 86 "continuation_info.m"
                                                                              *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_69_69;
#line 86 "continuation_info.m"
                                                                            else
#line 86 "continuation_info.m"
                                                                              {
#line 86 "continuation_info.m"
                                                                                MR_Word ll_backend__continuation_info__V_70_70;

#line 86 "continuation_info.m"
                                                                                {
#line 86 "continuation_info.m"
                                                                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_2[2], &ll_backend__continuation_info__V_70_70, ((MR_Box) (ll_backend__continuation_info__V_22_22)), ((MR_Box) (ll_backend__continuation_info__V_46_46)));
                                                                                }
#line 8165 "ll_backend.continuation_info.c"
                                                                                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_70_70 == (MR_Integer) 0);
#line 86 "continuation_info.m"
                                                                                ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 86 "continuation_info.m"
                                                                                if (ll_backend__continuation_info__succeeded)
#line 86 "continuation_info.m"
                                                                                  *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_70_70;
#line 86 "continuation_info.m"
                                                                                else
#line 86 "continuation_info.m"
                                                                                  {
#line 86 "continuation_info.m"
                                                                                    MR_Word ll_backend__continuation_info__V_71_71;

#line 86 "continuation_info.m"
                                                                                    {
#line 86 "continuation_info.m"
                                                                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_2[1], &ll_backend__continuation_info__V_71_71, ((MR_Box) (ll_backend__continuation_info__V_23_23)), ((MR_Box) (ll_backend__continuation_info__V_47_47)));
                                                                                    }
#line 8185 "ll_backend.continuation_info.c"
                                                                                    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_71_71 == (MR_Integer) 0);
#line 86 "continuation_info.m"
                                                                                    ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 86 "continuation_info.m"
                                                                                    if (ll_backend__continuation_info__succeeded)
#line 86 "continuation_info.m"
                                                                                      *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_71_71;
#line 86 "continuation_info.m"
                                                                                    else
#line 86 "continuation_info.m"
                                                                                      {
#line 86 "continuation_info.m"
                                                                                        MR_Word ll_backend__continuation_info__V_72_72;

#line 86 "continuation_info.m"
                                                                                        {
#line 86 "continuation_info.m"
                                                                                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[16], &ll_backend__continuation_info__V_72_72, ((MR_Box) (ll_backend__continuation_info__V_24_24)), ((MR_Box) (ll_backend__continuation_info__V_48_48)));
                                                                                        }
#line 8205 "ll_backend.continuation_info.c"
                                                                                        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_72_72 == (MR_Integer) 0);
#line 86 "continuation_info.m"
                                                                                        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 86 "continuation_info.m"
                                                                                        if (ll_backend__continuation_info__succeeded)
#line 86 "continuation_info.m"
                                                                                          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_72_72;
#line 86 "continuation_info.m"
                                                                                        else
#line 86 "continuation_info.m"
                                                                                          {
#line 86 "continuation_info.m"
                                                                                            MR_Word ll_backend__continuation_info__V_73_73;
#line 86 "continuation_info.m"
                                                                                            MR_Integer ll_backend__continuation_info__V_107_107 = (MR_Integer) ll_backend__continuation_info__V_25_25;
#line 86 "continuation_info.m"
                                                                                            MR_Integer ll_backend__continuation_info__V_108_108 = (MR_Integer) ll_backend__continuation_info__V_49_49;

#line 86 "continuation_info.m"
                                                                                            {
#line 86 "continuation_info.m"
                                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__continuation_info__V_73_73, ll_backend__continuation_info__V_107_107, ll_backend__continuation_info__V_108_108);
                                                                                            }
#line 8229 "ll_backend.continuation_info.c"
                                                                                            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_73_73 == (MR_Integer) 0);
#line 86 "continuation_info.m"
                                                                                            ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 86 "continuation_info.m"
                                                                                            if (ll_backend__continuation_info__succeeded)
#line 86 "continuation_info.m"
                                                                                              *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_73_73;
#line 86 "continuation_info.m"
                                                                                            else
#line 86 "continuation_info.m"
                                                                                              {
#line 86 "continuation_info.m"
                                                                                                MR_Word ll_backend__continuation_info__V_74_74;

#line 86 "continuation_info.m"
                                                                                                {
#line 86 "continuation_info.m"
                                                                                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[17], &ll_backend__continuation_info__V_74_74, ((MR_Box) (ll_backend__continuation_info__V_26_26)), ((MR_Box) (ll_backend__continuation_info__V_50_50)));
                                                                                                }
#line 8249 "ll_backend.continuation_info.c"
                                                                                                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_74_74 == (MR_Integer) 0);
#line 86 "continuation_info.m"
                                                                                                ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 86 "continuation_info.m"
                                                                                                if (ll_backend__continuation_info__succeeded)
#line 86 "continuation_info.m"
                                                                                                  *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_74_74;
#line 86 "continuation_info.m"
                                                                                                else
#line 86 "continuation_info.m"
                                                                                                  {
#line 86 "continuation_info.m"
                                                                                                    {
#line 86 "continuation_info.m"
                                                                                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[18], ll_backend__continuation_info__HeadVar__1_1, ((MR_Box) (ll_backend__continuation_info__V_27_27)), ((MR_Box) (ll_backend__continuation_info__V_51_51)));
                                                                                                    }
#line 86 "continuation_info.m"
                                                                                                  }
#line 86 "continuation_info.m"
                                                                                              }
#line 86 "continuation_info.m"
                                                                                          }
#line 86 "continuation_info.m"
                                                                                      }
#line 86 "continuation_info.m"
                                                                                  }
#line 86 "continuation_info.m"
                                                                              }
#line 86 "continuation_info.m"
                                                                          }
#line 86 "continuation_info.m"
                                                                      }
#line 86 "continuation_info.m"
                                                                  }
#line 86 "continuation_info.m"
                                                              }
#line 86 "continuation_info.m"
                                                          }
#line 86 "continuation_info.m"
                                                      }
#line 86 "continuation_info.m"
                                                  }
#line 86 "continuation_info.m"
                                              }
#line 86 "continuation_info.m"
                                          }
#line 86 "continuation_info.m"
                                      }
#line 86 "continuation_info.m"
                                  }
#line 86 "continuation_info.m"
                              }
#line 86 "continuation_info.m"
                          }
#line 86 "continuation_info.m"
                      }
#line 86 "continuation_info.m"
                  }
#line 86 "continuation_info.m"
              }
#line 86 "continuation_info.m"
          }
#line 86 "continuation_info.m"
      }
#line 86 "continuation_info.m"
  }
#line 86 "continuation_info.m"
}

#line 86 "continuation_info.m"
MR_bool MR_CALL 
ll_backend__continuation_info____Unify____proc_layout_info_0_0(
#line 86 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 86 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2)
#line 86 "continuation_info.m"
{
#line 86 "continuation_info.m"
  {
#line 86 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 86 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_51 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 86 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_52 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 86 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_51 == ll_backend__continuation_info__CastY_52);
#line 86 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 86 "continuation_info.m"
      ll_backend__continuation_info__succeeded = MR_TRUE;
#line 86 "continuation_info.m"
    else
#line 86 "continuation_info.m"
      {
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_55_55;
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_58_58;
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_59_59;
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_60_60;
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_64_64;
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_65_65;
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_66_66;
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_67_67;
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_68_68;
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_69_69;
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 2)));
#line 86 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 3)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 4)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 5)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 6)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 7)));
#line 86 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 8)));
#line 86 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 9)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 10)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 11)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 12)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 13)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 14)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 15)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 16)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 17)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 18)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 19)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 20)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 21)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 22)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 23)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 2)));
#line 86 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 3)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 4)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 5)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 6)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 7)));
#line 86 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 8)));
#line 86 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 9)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 10)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 11)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 12)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 13)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 14)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 15)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 16)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 17)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 18)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 19)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 20)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 21)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 22)));
#line 86 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 23)));

#line 8464 "ll_backend.continuation_info.c"
        {
#line 8466 "ll_backend.continuation_info.c"
          ll_backend__continuation_info__succeeded = hlds__hlds_rtti____Unify____rtti_proc_label_0_0(ll_backend__continuation_info__V_3_3, ll_backend__continuation_info__V_27_27);
        }
#line 86 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 86 "continuation_info.m"
          {
#line 8473 "ll_backend.continuation_info.c"
            {
#line 8475 "ll_backend.continuation_info.c"
              ll_backend__continuation_info__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__continuation_info__V_4_4, ll_backend__continuation_info__V_28_28);
            }
#line 86 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 86 "continuation_info.m"
              {
#line 8482 "ll_backend.continuation_info.c"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_5_5 == ll_backend__continuation_info__V_29_29);
#line 86 "continuation_info.m"
                if (ll_backend__continuation_info__succeeded)
#line 86 "continuation_info.m"
                  {
#line 8488 "ll_backend.continuation_info.c"
                    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_6_6 == ll_backend__continuation_info__V_30_30);
#line 86 "continuation_info.m"
                    if (ll_backend__continuation_info__succeeded)
#line 86 "continuation_info.m"
                      {
#line 8494 "ll_backend.continuation_info.c"
                        ll_backend__continuation_info__TypeInfo_55_55 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[11];
#line 8496 "ll_backend.continuation_info.c"
                        {
#line 8498 "ll_backend.continuation_info.c"
                          ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_55_55, ((MR_Box) (ll_backend__continuation_info__V_7_7)), ((MR_Box) (ll_backend__continuation_info__V_31_31)));
                        }
#line 86 "continuation_info.m"
                        if (ll_backend__continuation_info__succeeded)
#line 86 "continuation_info.m"
                          {
#line 8505 "ll_backend.continuation_info.c"
                            {
#line 8507 "ll_backend.continuation_info.c"
                              ll_backend__continuation_info__succeeded = parse_tree__prog_data____Unify____eval_method_0_0(ll_backend__continuation_info__V_8_8, ll_backend__continuation_info__V_32_32);
                            }
#line 86 "continuation_info.m"
                            if (ll_backend__continuation_info__succeeded)
#line 86 "continuation_info.m"
                              {
#line 8514 "ll_backend.continuation_info.c"
                                {
#line 8516 "ll_backend.continuation_info.c"
                                  ll_backend__continuation_info__succeeded = libs__trace_params____Unify____trace_level_0_0(ll_backend__continuation_info__V_9_9, ll_backend__continuation_info__V_33_33);
                                }
#line 86 "continuation_info.m"
                                if (ll_backend__continuation_info__succeeded)
#line 86 "continuation_info.m"
                                  {
#line 8523 "ll_backend.continuation_info.c"
                                    ll_backend__continuation_info__TypeInfo_58_58 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[12];
#line 8525 "ll_backend.continuation_info.c"
                                    {
#line 8527 "ll_backend.continuation_info.c"
                                      ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_58_58, ((MR_Box) (ll_backend__continuation_info__V_10_10)), ((MR_Box) (ll_backend__continuation_info__V_34_34)));
                                    }
#line 86 "continuation_info.m"
                                    if (ll_backend__continuation_info__succeeded)
#line 86 "continuation_info.m"
                                      {
#line 8534 "ll_backend.continuation_info.c"
                                        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_11_11 == ll_backend__continuation_info__V_35_35);
#line 86 "continuation_info.m"
                                        if (ll_backend__continuation_info__succeeded)
#line 86 "continuation_info.m"
                                          {
#line 8540 "ll_backend.continuation_info.c"
                                            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_12_12 == ll_backend__continuation_info__V_36_36);
#line 86 "continuation_info.m"
                                            if (ll_backend__continuation_info__succeeded)
#line 86 "continuation_info.m"
                                              {
#line 8546 "ll_backend.continuation_info.c"
                                                ll_backend__continuation_info__TypeInfo_59_59 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[13];
#line 8548 "ll_backend.continuation_info.c"
                                                {
#line 8550 "ll_backend.continuation_info.c"
                                                  ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_59_59, ((MR_Box) (ll_backend__continuation_info__V_13_13)), ((MR_Box) (ll_backend__continuation_info__V_37_37)));
                                                }
#line 86 "continuation_info.m"
                                                if (ll_backend__continuation_info__succeeded)
#line 86 "continuation_info.m"
                                                  {
#line 8557 "ll_backend.continuation_info.c"
                                                    ll_backend__continuation_info__TypeInfo_60_60 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[14];
#line 8559 "ll_backend.continuation_info.c"
                                                    {
#line 8561 "ll_backend.continuation_info.c"
                                                      ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_60_60, ((MR_Box) (ll_backend__continuation_info__V_14_14)), ((MR_Box) (ll_backend__continuation_info__V_38_38)));
                                                    }
#line 86 "continuation_info.m"
                                                    if (ll_backend__continuation_info__succeeded)
#line 86 "continuation_info.m"
                                                      {
#line 8568 "ll_backend.continuation_info.c"
                                                        {
#line 8570 "ll_backend.continuation_info.c"
                                                          ll_backend__continuation_info__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(ll_backend__continuation_info__V_15_15, ll_backend__continuation_info__V_39_39);
                                                        }
#line 86 "continuation_info.m"
                                                        if (ll_backend__continuation_info__succeeded)
#line 86 "continuation_info.m"
                                                          {
#line 8577 "ll_backend.continuation_info.c"
                                                            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_16_16 == ll_backend__continuation_info__V_40_40);
#line 86 "continuation_info.m"
                                                            if (ll_backend__continuation_info__succeeded)
#line 86 "continuation_info.m"
                                                              {
#line 8583 "ll_backend.continuation_info.c"
                                                                {
#line 8585 "ll_backend.continuation_info.c"
                                                                  ll_backend__continuation_info__succeeded = hlds__instmap____Unify____instmap_0_0(ll_backend__continuation_info__V_17_17, ll_backend__continuation_info__V_41_41);
                                                                }
#line 86 "continuation_info.m"
                                                                if (ll_backend__continuation_info__succeeded)
#line 86 "continuation_info.m"
                                                                  {
#line 8592 "ll_backend.continuation_info.c"
                                                                    {
#line 8594 "ll_backend.continuation_info.c"
                                                                      ll_backend__continuation_info__succeeded = ll_backend__trace_gen____Unify____trace_slot_info_0_0(ll_backend__continuation_info__V_18_18, ll_backend__continuation_info__V_42_42);
                                                                    }
#line 86 "continuation_info.m"
                                                                    if (ll_backend__continuation_info__succeeded)
#line 86 "continuation_info.m"
                                                                      {
#line 8601 "ll_backend.continuation_info.c"
                                                                        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_19_19 == ll_backend__continuation_info__V_43_43);
#line 86 "continuation_info.m"
                                                                        if (ll_backend__continuation_info__succeeded)
#line 86 "continuation_info.m"
                                                                          {
#line 8607 "ll_backend.continuation_info.c"
                                                                            ll_backend__continuation_info__TypeInfo_64_64 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[15];
#line 8609 "ll_backend.continuation_info.c"
                                                                            {
#line 8611 "ll_backend.continuation_info.c"
                                                                              ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_64_64, ((MR_Box) (ll_backend__continuation_info__V_20_20)), ((MR_Box) (ll_backend__continuation_info__V_44_44)));
                                                                            }
#line 86 "continuation_info.m"
                                                                            if (ll_backend__continuation_info__succeeded)
#line 86 "continuation_info.m"
                                                                              {
#line 8618 "ll_backend.continuation_info.c"
                                                                                ll_backend__continuation_info__TypeInfo_65_65 = (MR_Word) &ll_backend__continuation_info_scalar_common_2[2];
#line 8620 "ll_backend.continuation_info.c"
                                                                                {
#line 8622 "ll_backend.continuation_info.c"
                                                                                  ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_65_65, ((MR_Box) (ll_backend__continuation_info__V_21_21)), ((MR_Box) (ll_backend__continuation_info__V_45_45)));
                                                                                }
#line 86 "continuation_info.m"
                                                                                if (ll_backend__continuation_info__succeeded)
#line 86 "continuation_info.m"
                                                                                  {
#line 8629 "ll_backend.continuation_info.c"
                                                                                    ll_backend__continuation_info__TypeInfo_66_66 = (MR_Word) &ll_backend__continuation_info_scalar_common_2[1];
#line 8631 "ll_backend.continuation_info.c"
                                                                                    {
#line 8633 "ll_backend.continuation_info.c"
                                                                                      ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_66_66, ((MR_Box) (ll_backend__continuation_info__V_22_22)), ((MR_Box) (ll_backend__continuation_info__V_46_46)));
                                                                                    }
#line 86 "continuation_info.m"
                                                                                    if (ll_backend__continuation_info__succeeded)
#line 86 "continuation_info.m"
                                                                                      {
#line 8640 "ll_backend.continuation_info.c"
                                                                                        ll_backend__continuation_info__TypeInfo_67_67 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[16];
#line 8642 "ll_backend.continuation_info.c"
                                                                                        {
#line 8644 "ll_backend.continuation_info.c"
                                                                                          ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_67_67, ((MR_Box) (ll_backend__continuation_info__V_23_23)), ((MR_Box) (ll_backend__continuation_info__V_47_47)));
                                                                                        }
#line 86 "continuation_info.m"
                                                                                        if (ll_backend__continuation_info__succeeded)
#line 86 "continuation_info.m"
                                                                                          {
#line 8651 "ll_backend.continuation_info.c"
                                                                                            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_24_24 == ll_backend__continuation_info__V_48_48);
#line 86 "continuation_info.m"
                                                                                            if (ll_backend__continuation_info__succeeded)
#line 86 "continuation_info.m"
                                                                                              {
#line 8657 "ll_backend.continuation_info.c"
                                                                                                ll_backend__continuation_info__TypeInfo_68_68 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[17];
#line 8659 "ll_backend.continuation_info.c"
                                                                                                {
#line 8661 "ll_backend.continuation_info.c"
                                                                                                  ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_68_68, ((MR_Box) (ll_backend__continuation_info__V_25_25)), ((MR_Box) (ll_backend__continuation_info__V_49_49)));
                                                                                                }
#line 86 "continuation_info.m"
                                                                                                if (ll_backend__continuation_info__succeeded)
#line 86 "continuation_info.m"
                                                                                                  {
#line 8668 "ll_backend.continuation_info.c"
                                                                                                    ll_backend__continuation_info__TypeInfo_69_69 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[18];
#line 8670 "ll_backend.continuation_info.c"
                                                                                                    {
#line 8672 "ll_backend.continuation_info.c"
                                                                                                      ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_69_69, ((MR_Box) (ll_backend__continuation_info__V_26_26)), ((MR_Box) (ll_backend__continuation_info__V_50_50)));
                                                                                                    }
#line 86 "continuation_info.m"
                                                                                                  }
#line 86 "continuation_info.m"
                                                                                              }
#line 86 "continuation_info.m"
                                                                                          }
#line 86 "continuation_info.m"
                                                                                      }
#line 86 "continuation_info.m"
                                                                                  }
#line 86 "continuation_info.m"
                                                                              }
#line 86 "continuation_info.m"
                                                                          }
#line 86 "continuation_info.m"
                                                                      }
#line 86 "continuation_info.m"
                                                                  }
#line 86 "continuation_info.m"
                                                              }
#line 86 "continuation_info.m"
                                                          }
#line 86 "continuation_info.m"
                                                      }
#line 86 "continuation_info.m"
                                                  }
#line 86 "continuation_info.m"
                                              }
#line 86 "continuation_info.m"
                                          }
#line 86 "continuation_info.m"
                                      }
#line 86 "continuation_info.m"
                                  }
#line 86 "continuation_info.m"
                              }
#line 86 "continuation_info.m"
                          }
#line 86 "continuation_info.m"
                      }
#line 86 "continuation_info.m"
                  }
#line 86 "continuation_info.m"
              }
#line 86 "continuation_info.m"
          }
#line 86 "continuation_info.m"
      }
#line 86 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 86 "continuation_info.m"
  }
#line 86 "continuation_info.m"
}

#line 184 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info____Compare____proc_label_layout_info_0_0(
#line 184 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 184 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 184 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3)
#line 184 "continuation_info.m"
{
#line 184 "continuation_info.m"
  {
#line 184 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 184 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Cast_HeadVar1_4 = ll_backend__continuation_info__HeadVar__2_2;
#line 184 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Cast_HeadVar2_5 = ll_backend__continuation_info__HeadVar__3_3;

#line 184 "continuation_info.m"
    {
#line 184 "continuation_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_2[1], ll_backend__continuation_info__HeadVar__1_1, ((MR_Box) (ll_backend__continuation_info__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__continuation_info__Cast_HeadVar2_5)));
    }
#line 184 "continuation_info.m"
  }
#line 184 "continuation_info.m"
}

#line 184 "continuation_info.m"
MR_bool MR_CALL 
ll_backend__continuation_info____Unify____proc_label_layout_info_0_0(
#line 184 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 184 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2)
#line 184 "continuation_info.m"
{
#line 184 "continuation_info.m"
  {
#line 184 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 184 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Cast_HeadVar1_3 = ll_backend__continuation_info__HeadVar__1_1;
#line 184 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Cast_HeadVar2_4 = ll_backend__continuation_info__HeadVar__2_2;

#line 184 "continuation_info.m"
    {
#line 184 "continuation_info.m"
      ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_2[1], ((MR_Box) (ll_backend__continuation_info__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__continuation_info__Cast_HeadVar2_4)));
    }
#line 184 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 184 "continuation_info.m"
  }
#line 184 "continuation_info.m"
}

#line 163 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info____Compare____proc_deep_prof_info_0_0(
#line 163 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 163 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 163 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3)
#line 163 "continuation_info.m"
{
#line 163 "continuation_info.m"
  {
#line 163 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 163 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_12 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;
#line 163 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_13 = (MR_Integer) ll_backend__continuation_info__HeadVar__3_3;

#line 163 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_12 == ll_backend__continuation_info__CastY_13);
#line 163 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 8814 "ll_backend.continuation_info.c"
      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 163 "continuation_info.m"
    else
#line 163 "continuation_info.m"
      {
#line 163 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 163 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 163 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 2)));
#line 163 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));
#line 163 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 1)));
#line 163 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 2)));
#line 163 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_10_10;

#line 163 "continuation_info.m"
        {
#line 163 "continuation_info.m"
          hlds__hlds_pred____Compare____hlds_proc_static_0_0(&ll_backend__continuation_info__V_10_10, ll_backend__continuation_info__V_4_4, ll_backend__continuation_info__V_7_7);
        }
#line 8840 "ll_backend.continuation_info.c"
        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_10_10 == (MR_Integer) 0);
#line 163 "continuation_info.m"
        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 163 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 163 "continuation_info.m"
          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_10_10;
#line 163 "continuation_info.m"
        else
#line 163 "continuation_info.m"
          {
#line 163 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_11_11;

#line 163 "continuation_info.m"
            {
#line 163 "continuation_info.m"
              ll_backend__layout____Compare____deep_excp_slots_0_0(&ll_backend__continuation_info__V_11_11, ll_backend__continuation_info__V_5_5, ll_backend__continuation_info__V_8_8);
            }
#line 8860 "ll_backend.continuation_info.c"
            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_11_11 == (MR_Integer) 0);
#line 163 "continuation_info.m"
            ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 163 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 163 "continuation_info.m"
              *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_11_11;
#line 163 "continuation_info.m"
            else
#line 163 "continuation_info.m"
              {
#line 163 "continuation_info.m"
                hlds__hlds_pred____Compare____deep_original_body_0_0(ll_backend__continuation_info__HeadVar__1_1, ll_backend__continuation_info__V_6_6, ll_backend__continuation_info__V_9_9);
              }
#line 163 "continuation_info.m"
          }
#line 163 "continuation_info.m"
      }
#line 163 "continuation_info.m"
  }
#line 163 "continuation_info.m"
}

#line 163 "continuation_info.m"
MR_bool MR_CALL 
ll_backend__continuation_info____Unify____proc_deep_prof_info_0_0(
#line 163 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 163 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2)
#line 163 "continuation_info.m"
{
#line 163 "continuation_info.m"
  {
#line 163 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 163 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_9 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 163 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_10 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 163 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_9 == ll_backend__continuation_info__CastY_10);
#line 163 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 163 "continuation_info.m"
      ll_backend__continuation_info__succeeded = MR_TRUE;
#line 163 "continuation_info.m"
    else
#line 163 "continuation_info.m"
      {
#line 163 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 163 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 163 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 2)));
#line 163 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 163 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 163 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 2)));

#line 8925 "ll_backend.continuation_info.c"
        {
#line 8927 "ll_backend.continuation_info.c"
          ll_backend__continuation_info__succeeded = hlds__hlds_pred____Unify____hlds_proc_static_0_0(ll_backend__continuation_info__V_3_3, ll_backend__continuation_info__V_6_6);
        }
#line 163 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 163 "continuation_info.m"
          {
#line 8934 "ll_backend.continuation_info.c"
            {
#line 8936 "ll_backend.continuation_info.c"
              ll_backend__continuation_info__succeeded = ll_backend__layout____Unify____deep_excp_slots_0_0(ll_backend__continuation_info__V_4_4, ll_backend__continuation_info__V_7_7);
            }
#line 163 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 8941 "ll_backend.continuation_info.c"
              {
#line 8943 "ll_backend.continuation_info.c"
                ll_backend__continuation_info__succeeded = hlds__hlds_pred____Unify____deep_original_body_0_0(ll_backend__continuation_info__V_5_5, ll_backend__continuation_info__V_8_8);
              }
#line 163 "continuation_info.m"
          }
#line 163 "continuation_info.m"
      }
#line 163 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 163 "continuation_info.m"
  }
#line 163 "continuation_info.m"
}

#line 295 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info____Compare____layout_var_info_0_0(
#line 295 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 295 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 295 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3)
#line 295 "continuation_info.m"
{
#line 295 "continuation_info.m"
  {
#line 295 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 295 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_12 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;
#line 295 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_13 = (MR_Integer) ll_backend__continuation_info__HeadVar__3_3;

#line 295 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_12 == ll_backend__continuation_info__CastY_13);
#line 295 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 8981 "ll_backend.continuation_info.c"
      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 295 "continuation_info.m"
    else
#line 295 "continuation_info.m"
      {
#line 295 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 295 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 295 "continuation_info.m"
        MR_String ll_backend__continuation_info__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 2)));
#line 295 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));
#line 295 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 1)));
#line 295 "continuation_info.m"
        MR_String ll_backend__continuation_info__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 2)));
#line 295 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_10_10;

#line 295 "continuation_info.m"
        {
#line 295 "continuation_info.m"
          ll_backend__llds____Compare____layout_locn_0_0(&ll_backend__continuation_info__V_10_10, ll_backend__continuation_info__V_4_4, ll_backend__continuation_info__V_7_7);
        }
#line 9007 "ll_backend.continuation_info.c"
        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_10_10 == (MR_Integer) 0);
#line 295 "continuation_info.m"
        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 295 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 295 "continuation_info.m"
          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_10_10;
#line 295 "continuation_info.m"
        else
#line 295 "continuation_info.m"
          {
#line 295 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_11_11;

#line 295 "continuation_info.m"
            {
#line 295 "continuation_info.m"
              ll_backend__llds____Compare____live_value_type_0_0(&ll_backend__continuation_info__V_11_11, ll_backend__continuation_info__V_5_5, ll_backend__continuation_info__V_8_8);
            }
#line 9027 "ll_backend.continuation_info.c"
            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_11_11 == (MR_Integer) 0);
#line 295 "continuation_info.m"
            ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 295 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 295 "continuation_info.m"
              *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_11_11;
#line 295 "continuation_info.m"
            else
#line 295 "continuation_info.m"
              {
#line 295 "continuation_info.m"
                mercury__private_builtin__builtin_compare_string_3_p_0(ll_backend__continuation_info__HeadVar__1_1, ll_backend__continuation_info__V_6_6, ll_backend__continuation_info__V_9_9);
              }
#line 295 "continuation_info.m"
          }
#line 295 "continuation_info.m"
      }
#line 295 "continuation_info.m"
  }
#line 295 "continuation_info.m"
}

#line 295 "continuation_info.m"
MR_bool MR_CALL 
ll_backend__continuation_info____Unify____layout_var_info_0_0(
#line 295 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 295 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2)
#line 295 "continuation_info.m"
{
#line 295 "continuation_info.m"
  {
#line 295 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 295 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_9 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 295 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_10 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 295 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_9 == ll_backend__continuation_info__CastY_10);
#line 295 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 295 "continuation_info.m"
      ll_backend__continuation_info__succeeded = MR_TRUE;
#line 295 "continuation_info.m"
    else
#line 295 "continuation_info.m"
      {
#line 295 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 295 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 295 "continuation_info.m"
        MR_String ll_backend__continuation_info__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 2)));
#line 295 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 295 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 295 "continuation_info.m"
        MR_String ll_backend__continuation_info__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 2)));

#line 9092 "ll_backend.continuation_info.c"
        {
#line 9094 "ll_backend.continuation_info.c"
          ll_backend__continuation_info__succeeded = ll_backend__llds____Unify____layout_locn_0_0(ll_backend__continuation_info__V_3_3, ll_backend__continuation_info__V_6_6);
        }
#line 295 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 295 "continuation_info.m"
          {
#line 9101 "ll_backend.continuation_info.c"
            {
#line 9103 "ll_backend.continuation_info.c"
              ll_backend__continuation_info__succeeded = ll_backend__llds____Unify____live_value_type_0_0(ll_backend__continuation_info__V_4_4, ll_backend__continuation_info__V_7_7);
            }
#line 295 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 9108 "ll_backend.continuation_info.c"
              ll_backend__continuation_info__succeeded = (strcmp(ll_backend__continuation_info__V_5_5, ll_backend__continuation_info__V_8_8) == 0);
#line 295 "continuation_info.m"
          }
#line 295 "continuation_info.m"
      }
#line 295 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 295 "continuation_info.m"
  }
#line 295 "continuation_info.m"
}

#line 286 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info____Compare____layout_label_info_0_0(
#line 286 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 286 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 286 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3)
#line 286 "continuation_info.m"
{
#line 286 "continuation_info.m"
  {
#line 286 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 286 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_9 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;
#line 286 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_10 = (MR_Integer) ll_backend__continuation_info__HeadVar__3_3;

#line 286 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_9 == ll_backend__continuation_info__CastY_10);
#line 286 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 9145 "ll_backend.continuation_info.c"
      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 286 "continuation_info.m"
    else
#line 286 "continuation_info.m"
      {
#line 286 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 286 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 286 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));
#line 286 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 1)));
#line 286 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8;

#line 286 "continuation_info.m"
        {
#line 286 "continuation_info.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[10], &ll_backend__continuation_info__V_8_8, ((MR_Box) (ll_backend__continuation_info__V_4_4)), ((MR_Box) (ll_backend__continuation_info__V_6_6)));
        }
#line 9167 "ll_backend.continuation_info.c"
        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_8_8 == (MR_Integer) 0);
#line 286 "continuation_info.m"
        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 286 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 286 "continuation_info.m"
          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_8_8;
#line 286 "continuation_info.m"
        else
#line 286 "continuation_info.m"
          {
#line 286 "continuation_info.m"
            {
#line 286 "continuation_info.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_2[0], ll_backend__continuation_info__HeadVar__1_1, ((MR_Box) (ll_backend__continuation_info__V_5_5)), ((MR_Box) (ll_backend__continuation_info__V_7_7)));
            }
#line 286 "continuation_info.m"
          }
#line 286 "continuation_info.m"
      }
#line 286 "continuation_info.m"
  }
#line 286 "continuation_info.m"
}

#line 286 "continuation_info.m"
MR_bool MR_CALL 
ll_backend__continuation_info____Unify____layout_label_info_0_0(
#line 286 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 286 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2)
#line 286 "continuation_info.m"
{
#line 286 "continuation_info.m"
  {
#line 286 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 286 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_7 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 286 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_8 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 286 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_7 == ll_backend__continuation_info__CastY_8);
#line 286 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 286 "continuation_info.m"
      ll_backend__continuation_info__succeeded = MR_TRUE;
#line 286 "continuation_info.m"
    else
#line 286 "continuation_info.m"
      {
#line 286 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_10_10;
#line 286 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 286 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 286 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 286 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));

#line 9232 "ll_backend.continuation_info.c"
        {
#line 9234 "ll_backend.continuation_info.c"
          ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[10], ((MR_Box) (ll_backend__continuation_info__V_3_3)), ((MR_Box) (ll_backend__continuation_info__V_5_5)));
        }
#line 286 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 286 "continuation_info.m"
          {
#line 9241 "ll_backend.continuation_info.c"
            ll_backend__continuation_info__TypeInfo_10_10 = (MR_Word) &ll_backend__continuation_info_scalar_common_2[0];
#line 9243 "ll_backend.continuation_info.c"
            {
#line 9245 "ll_backend.continuation_info.c"
              ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_10_10, ((MR_Box) (ll_backend__continuation_info__V_4_4)), ((MR_Box) (ll_backend__continuation_info__V_6_6)));
            }
#line 286 "continuation_info.m"
          }
#line 286 "continuation_info.m"
      }
#line 286 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 286 "continuation_info.m"
  }
#line 286 "continuation_info.m"
}

#line 261 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info____Compare____internal_layout_info_0_0(
#line 261 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 261 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 261 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3)
#line 261 "continuation_info.m"
{
#line 261 "continuation_info.m"
  {
#line 261 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 261 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_12 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;
#line 261 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_13 = (MR_Integer) ll_backend__continuation_info__HeadVar__3_3;

#line 261 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_12 == ll_backend__continuation_info__CastY_13);
#line 261 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 9283 "ll_backend.continuation_info.c"
      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 261 "continuation_info.m"
    else
#line 261 "continuation_info.m"
      {
#line 261 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 261 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 261 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 2)));
#line 261 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));
#line 261 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 1)));
#line 261 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 2)));
#line 261 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_10_10;

#line 261 "continuation_info.m"
        {
#line 261 "continuation_info.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[7], &ll_backend__continuation_info__V_10_10, ((MR_Box) (ll_backend__continuation_info__V_4_4)), ((MR_Box) (ll_backend__continuation_info__V_7_7)));
        }
#line 9309 "ll_backend.continuation_info.c"
        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_10_10 == (MR_Integer) 0);
#line 261 "continuation_info.m"
        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 261 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 261 "continuation_info.m"
          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_10_10;
#line 261 "continuation_info.m"
        else
#line 261 "continuation_info.m"
          {
#line 261 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_11_11;

#line 261 "continuation_info.m"
            {
#line 261 "continuation_info.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[8], &ll_backend__continuation_info__V_11_11, ((MR_Box) (ll_backend__continuation_info__V_5_5)), ((MR_Box) (ll_backend__continuation_info__V_8_8)));
            }
#line 9329 "ll_backend.continuation_info.c"
            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_11_11 == (MR_Integer) 0);
#line 261 "continuation_info.m"
            ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 261 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 261 "continuation_info.m"
              *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_11_11;
#line 261 "continuation_info.m"
            else
#line 261 "continuation_info.m"
              {
#line 261 "continuation_info.m"
                {
#line 261 "continuation_info.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[9], ll_backend__continuation_info__HeadVar__1_1, ((MR_Box) (ll_backend__continuation_info__V_6_6)), ((MR_Box) (ll_backend__continuation_info__V_9_9)));
                }
#line 261 "continuation_info.m"
              }
#line 261 "continuation_info.m"
          }
#line 261 "continuation_info.m"
      }
#line 261 "continuation_info.m"
  }
#line 261 "continuation_info.m"
}

#line 261 "continuation_info.m"
MR_bool MR_CALL 
ll_backend__continuation_info____Unify____internal_layout_info_0_0(
#line 261 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 261 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2)
#line 261 "continuation_info.m"
{
#line 261 "continuation_info.m"
  {
#line 261 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 261 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_9 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 261 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_10 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 261 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_9 == ll_backend__continuation_info__CastY_10);
#line 261 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 261 "continuation_info.m"
      ll_backend__continuation_info__succeeded = MR_TRUE;
#line 261 "continuation_info.m"
    else
#line 261 "continuation_info.m"
      {
#line 261 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_12_12;
#line 261 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_13_13;
#line 261 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 261 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 261 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 2)));
#line 261 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 261 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 261 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 2)));

#line 9402 "ll_backend.continuation_info.c"
        {
#line 9404 "ll_backend.continuation_info.c"
          ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[7], ((MR_Box) (ll_backend__continuation_info__V_3_3)), ((MR_Box) (ll_backend__continuation_info__V_6_6)));
        }
#line 261 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 261 "continuation_info.m"
          {
#line 9411 "ll_backend.continuation_info.c"
            ll_backend__continuation_info__TypeInfo_12_12 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[8];
#line 9413 "ll_backend.continuation_info.c"
            {
#line 9415 "ll_backend.continuation_info.c"
              ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_12_12, ((MR_Box) (ll_backend__continuation_info__V_4_4)), ((MR_Box) (ll_backend__continuation_info__V_7_7)));
            }
#line 261 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 261 "continuation_info.m"
              {
#line 9422 "ll_backend.continuation_info.c"
                ll_backend__continuation_info__TypeInfo_13_13 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[9];
#line 9424 "ll_backend.continuation_info.c"
                {
#line 9426 "ll_backend.continuation_info.c"
                  ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_13_13, ((MR_Box) (ll_backend__continuation_info__V_5_5)), ((MR_Box) (ll_backend__continuation_info__V_8_8)));
                }
#line 261 "continuation_info.m"
              }
#line 261 "continuation_info.m"
          }
#line 261 "continuation_info.m"
      }
#line 261 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 261 "continuation_info.m"
  }
#line 261 "continuation_info.m"
}

#line 315 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info____Compare____closure_layout_info_0_0(
#line 315 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 315 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 315 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3)
#line 315 "continuation_info.m"
{
#line 315 "continuation_info.m"
  {
#line 315 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 315 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_9 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;
#line 315 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_10 = (MR_Integer) ll_backend__continuation_info__HeadVar__3_3;

#line 315 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_9 == ll_backend__continuation_info__CastY_10);
#line 315 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 9466 "ll_backend.continuation_info.c"
      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 315 "continuation_info.m"
    else
#line 315 "continuation_info.m"
      {
#line 315 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 315 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 315 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));
#line 315 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 1)));
#line 315 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8;

#line 315 "continuation_info.m"
        {
#line 315 "continuation_info.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[6], &ll_backend__continuation_info__V_8_8, ((MR_Box) (ll_backend__continuation_info__V_4_4)), ((MR_Box) (ll_backend__continuation_info__V_6_6)));
        }
#line 9488 "ll_backend.continuation_info.c"
        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_8_8 == (MR_Integer) 0);
#line 315 "continuation_info.m"
        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 315 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 315 "continuation_info.m"
          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_8_8;
#line 315 "continuation_info.m"
        else
#line 315 "continuation_info.m"
          {
#line 315 "continuation_info.m"
            {
#line 315 "continuation_info.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_2[0], ll_backend__continuation_info__HeadVar__1_1, ((MR_Box) (ll_backend__continuation_info__V_5_5)), ((MR_Box) (ll_backend__continuation_info__V_7_7)));
            }
#line 315 "continuation_info.m"
          }
#line 315 "continuation_info.m"
      }
#line 315 "continuation_info.m"
  }
#line 315 "continuation_info.m"
}

#line 315 "continuation_info.m"
MR_bool MR_CALL 
ll_backend__continuation_info____Unify____closure_layout_info_0_0(
#line 315 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 315 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2)
#line 315 "continuation_info.m"
{
#line 315 "continuation_info.m"
  {
#line 315 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 315 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_7 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 315 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_8 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 315 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_7 == ll_backend__continuation_info__CastY_8);
#line 315 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 315 "continuation_info.m"
      ll_backend__continuation_info__succeeded = MR_TRUE;
#line 315 "continuation_info.m"
    else
#line 315 "continuation_info.m"
      {
#line 315 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_10_10;
#line 315 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 315 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 315 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 315 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));

#line 9553 "ll_backend.continuation_info.c"
        {
#line 9555 "ll_backend.continuation_info.c"
          ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[6], ((MR_Box) (ll_backend__continuation_info__V_3_3)), ((MR_Box) (ll_backend__continuation_info__V_5_5)));
        }
#line 315 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 315 "continuation_info.m"
          {
#line 9562 "ll_backend.continuation_info.c"
            ll_backend__continuation_info__TypeInfo_10_10 = (MR_Word) &ll_backend__continuation_info_scalar_common_2[0];
#line 9564 "ll_backend.continuation_info.c"
            {
#line 9566 "ll_backend.continuation_info.c"
              ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_10_10, ((MR_Box) (ll_backend__continuation_info__V_4_4)), ((MR_Box) (ll_backend__continuation_info__V_6_6)));
            }
#line 315 "continuation_info.m"
          }
#line 315 "continuation_info.m"
      }
#line 315 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 315 "continuation_info.m"
  }
#line 315 "continuation_info.m"
}

#line 326 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info____Compare____closure_arg_info_0_0(
#line 326 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 326 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 326 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3)
#line 326 "continuation_info.m"
{
#line 326 "continuation_info.m"
  {
#line 326 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 326 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_9 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;
#line 326 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_10 = (MR_Integer) ll_backend__continuation_info__HeadVar__3_3;

#line 326 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_9 == ll_backend__continuation_info__CastY_10);
#line 326 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 9604 "ll_backend.continuation_info.c"
      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 326 "continuation_info.m"
    else
#line 326 "continuation_info.m"
      {
#line 326 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 326 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 326 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));
#line 326 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 1)));
#line 326 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8;

#line 326 "continuation_info.m"
        {
#line 326 "continuation_info.m"
          parse_tree__prog_data____Compare____mer_type_0_0(&ll_backend__continuation_info__V_8_8, ll_backend__continuation_info__V_4_4, ll_backend__continuation_info__V_6_6);
        }
#line 9626 "ll_backend.continuation_info.c"
        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_8_8 == (MR_Integer) 0);
#line 326 "continuation_info.m"
        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 326 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 326 "continuation_info.m"
          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_8_8;
#line 326 "continuation_info.m"
        else
#line 326 "continuation_info.m"
          {
#line 326 "continuation_info.m"
            parse_tree__prog_data____Compare____mer_inst_0_0(ll_backend__continuation_info__HeadVar__1_1, ll_backend__continuation_info__V_5_5, ll_backend__continuation_info__V_7_7);
          }
#line 326 "continuation_info.m"
      }
#line 326 "continuation_info.m"
  }
#line 326 "continuation_info.m"
}

#line 326 "continuation_info.m"
MR_bool MR_CALL 
ll_backend__continuation_info____Unify____closure_arg_info_0_0(
#line 326 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 326 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2)
#line 326 "continuation_info.m"
{
#line 326 "continuation_info.m"
  {
#line 326 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 326 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_7 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 326 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_8 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 326 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_7 == ll_backend__continuation_info__CastY_8);
#line 326 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 326 "continuation_info.m"
      ll_backend__continuation_info__succeeded = MR_TRUE;
#line 326 "continuation_info.m"
    else
#line 326 "continuation_info.m"
      {
#line 326 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 326 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 326 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 326 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));

#line 9685 "ll_backend.continuation_info.c"
        {
#line 9687 "ll_backend.continuation_info.c"
          ll_backend__continuation_info__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ll_backend__continuation_info__V_3_3, ll_backend__continuation_info__V_5_5);
        }
#line 326 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 9692 "ll_backend.continuation_info.c"
          {
#line 9694 "ll_backend.continuation_info.c"
            ll_backend__continuation_info__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ll_backend__continuation_info__V_4_4, ll_backend__continuation_info__V_6_6);
          }
#line 326 "continuation_info.m"
      }
#line 326 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 326 "continuation_info.m"
  }
#line 326 "continuation_info.m"
}

#line 451 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info____Compare____call_info_0_0(
#line 451 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 451 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 451 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3)
#line 451 "continuation_info.m"
{
#line 451 "continuation_info.m"
  {
#line 451 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 451 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_18 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;
#line 451 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_19 = (MR_Integer) ll_backend__continuation_info__HeadVar__3_3;

#line 451 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_18 == ll_backend__continuation_info__CastY_19);
#line 451 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 9730 "ll_backend.continuation_info.c"
      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 451 "continuation_info.m"
    else
#line 451 "continuation_info.m"
      {
#line 451 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 451 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 451 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 2)));
#line 451 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 3)));
#line 451 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 4)));
#line 451 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));
#line 451 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 1)));
#line 451 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 2)));
#line 451 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 3)));
#line 451 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 4)));
#line 451 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_14_14;

#line 451 "continuation_info.m"
        {
#line 451 "continuation_info.m"
          ll_backend__llds____Compare____label_0_0(&ll_backend__continuation_info__V_14_14, ll_backend__continuation_info__V_4_4, ll_backend__continuation_info__V_9_9);
        }
#line 9764 "ll_backend.continuation_info.c"
        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_14_14 == (MR_Integer) 0);
#line 451 "continuation_info.m"
        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 451 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 451 "continuation_info.m"
          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_14_14;
#line 451 "continuation_info.m"
        else
#line 451 "continuation_info.m"
          {
#line 451 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_15_15;

#line 451 "continuation_info.m"
            {
#line 451 "continuation_info.m"
              ll_backend__llds____Compare____code_addr_0_0(&ll_backend__continuation_info__V_15_15, ll_backend__continuation_info__V_5_5, ll_backend__continuation_info__V_10_10);
            }
#line 9784 "ll_backend.continuation_info.c"
            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_15_15 == (MR_Integer) 0);
#line 451 "continuation_info.m"
            ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 451 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 451 "continuation_info.m"
              *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_15_15;
#line 451 "continuation_info.m"
            else
#line 451 "continuation_info.m"
              {
#line 451 "continuation_info.m"
                MR_Word ll_backend__continuation_info__V_16_16;

#line 451 "continuation_info.m"
                {
#line 451 "continuation_info.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[4], &ll_backend__continuation_info__V_16_16, ((MR_Box) (ll_backend__continuation_info__V_6_6)), ((MR_Box) (ll_backend__continuation_info__V_11_11)));
                }
#line 9804 "ll_backend.continuation_info.c"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_16_16 == (MR_Integer) 0);
#line 451 "continuation_info.m"
                ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 451 "continuation_info.m"
                if (ll_backend__continuation_info__succeeded)
#line 451 "continuation_info.m"
                  *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_16_16;
#line 451 "continuation_info.m"
                else
#line 451 "continuation_info.m"
                  {
#line 451 "continuation_info.m"
                    MR_Word ll_backend__continuation_info__V_17_17;

#line 451 "continuation_info.m"
                    {
#line 451 "continuation_info.m"
                      mercury__term____Compare____context_0_0(&ll_backend__continuation_info__V_17_17, ll_backend__continuation_info__V_7_7, ll_backend__continuation_info__V_12_12);
                    }
#line 9824 "ll_backend.continuation_info.c"
                    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_17_17 == (MR_Integer) 0);
#line 451 "continuation_info.m"
                    ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 451 "continuation_info.m"
                    if (ll_backend__continuation_info__succeeded)
#line 451 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_17_17;
#line 451 "continuation_info.m"
                    else
#line 451 "continuation_info.m"
                      {
#line 451 "continuation_info.m"
                        {
#line 451 "continuation_info.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[5], ll_backend__continuation_info__HeadVar__1_1, ((MR_Box) (ll_backend__continuation_info__V_8_8)), ((MR_Box) (ll_backend__continuation_info__V_13_13)));
                        }
#line 451 "continuation_info.m"
                      }
#line 451 "continuation_info.m"
                  }
#line 451 "continuation_info.m"
              }
#line 451 "continuation_info.m"
          }
#line 451 "continuation_info.m"
      }
#line 451 "continuation_info.m"
  }
#line 451 "continuation_info.m"
}

#line 451 "continuation_info.m"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____call_info_0_0(
#line 451 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 451 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2)
#line 451 "continuation_info.m"
{
#line 451 "continuation_info.m"
  {
#line 451 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 451 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_13 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 451 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_14 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 451 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_13 == ll_backend__continuation_info__CastY_14);
#line 451 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 451 "continuation_info.m"
      ll_backend__continuation_info__succeeded = MR_TRUE;
#line 451 "continuation_info.m"
    else
#line 451 "continuation_info.m"
      {
#line 451 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_17_17;
#line 451 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_19_19;
#line 451 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 451 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 451 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 2)));
#line 451 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 3)));
#line 451 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 4)));
#line 451 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 451 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 451 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 2)));
#line 451 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 3)));
#line 451 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 4)));

#line 9909 "ll_backend.continuation_info.c"
        {
#line 9911 "ll_backend.continuation_info.c"
          ll_backend__continuation_info__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__continuation_info__V_3_3, ll_backend__continuation_info__V_8_8);
        }
#line 451 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 451 "continuation_info.m"
          {
#line 9918 "ll_backend.continuation_info.c"
            {
#line 9920 "ll_backend.continuation_info.c"
              ll_backend__continuation_info__succeeded = ll_backend__llds____Unify____code_addr_0_0(ll_backend__continuation_info__V_4_4, ll_backend__continuation_info__V_9_9);
            }
#line 451 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 451 "continuation_info.m"
              {
#line 9927 "ll_backend.continuation_info.c"
                ll_backend__continuation_info__TypeInfo_17_17 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[4];
#line 9929 "ll_backend.continuation_info.c"
                {
#line 9931 "ll_backend.continuation_info.c"
                  ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_17_17, ((MR_Box) (ll_backend__continuation_info__V_5_5)), ((MR_Box) (ll_backend__continuation_info__V_10_10)));
                }
#line 451 "continuation_info.m"
                if (ll_backend__continuation_info__succeeded)
#line 451 "continuation_info.m"
                  {
#line 9938 "ll_backend.continuation_info.c"
                    {
#line 9940 "ll_backend.continuation_info.c"
                      ll_backend__continuation_info__succeeded = mercury__term____Unify____context_0_0(ll_backend__continuation_info__V_6_6, ll_backend__continuation_info__V_11_11);
                    }
#line 451 "continuation_info.m"
                    if (ll_backend__continuation_info__succeeded)
#line 451 "continuation_info.m"
                      {
#line 9947 "ll_backend.continuation_info.c"
                        ll_backend__continuation_info__TypeInfo_19_19 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[5];
#line 9949 "ll_backend.continuation_info.c"
                        {
#line 9951 "ll_backend.continuation_info.c"
                          ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_19_19, ((MR_Box) (ll_backend__continuation_info__V_7_7)), ((MR_Box) (ll_backend__continuation_info__V_12_12)));
                        }
#line 451 "continuation_info.m"
                      }
#line 451 "continuation_info.m"
                  }
#line 451 "continuation_info.m"
              }
#line 451 "continuation_info.m"
          }
#line 451 "continuation_info.m"
      }
#line 451 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 451 "continuation_info.m"
  }
#line 451 "continuation_info.m"
}

#line 916 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__build_table_arg_info_6_p_0(
#line 916 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarSet_1,
#line 916 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarTypes_2,
#line 916 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3,
#line 916 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__4_4,
#line 916 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_TypeVars_0_5,
#line 916 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_TypeVars_6)
#line 916 "continuation_info.m"
{
#line 920 "continuation_info.m"
  {
#line 920 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;

#line 920 "continuation_info.m"
    if ((ll_backend__continuation_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 920 "continuation_info.m"
      {
#line 920 "continuation_info.m"
        *ll_backend__continuation_info__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 920 "continuation_info.m"
        *ll_backend__continuation_info__STATE_VARIABLE_TypeVars_6 = ll_backend__continuation_info__STATE_VARIABLE_TypeVars_0_5;
#line 920 "continuation_info.m"
      }
#line 920 "continuation_info.m"
    else
#line 922 "continuation_info.m"
      {
#line 922 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeCtorInfo_29_29;
#line 922 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Var_14;
#line 922 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__SlotNum_15;
#line 922 "continuation_info.m"
        MR_Word ll_backend__continuation_info__NumberedVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 1)));
#line 922 "continuation_info.m"
        MR_Word ll_backend__continuation_info__ArgLayout_17;
#line 922 "continuation_info.m"
        MR_Word ll_backend__continuation_info__ArgLayouts_18;
#line 922 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__VarNum_20;
#line 922 "continuation_info.m"
        MR_String ll_backend__continuation_info__VarName_21;
#line 922 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Type_22;
#line 922 "continuation_info.m"
        MR_Word ll_backend__continuation_info__VarTypeVars_23;
#line 922 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));
#line 922 "continuation_info.m"
        MR_Word ll_backend__continuation_info__STATE_VARIABLE_TypeVars_27_27;

#line 921 "continuation_info.m"
        ll_backend__continuation_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_26_26, (MR_Integer) 0)));
#line 921 "continuation_info.m"
        ll_backend__continuation_info__SlotNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_26_26, (MR_Integer) 1)));
#line 10036 "ll_backend.continuation_info.c"
        ll_backend__continuation_info__TypeCtorInfo_29_29 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 923 "continuation_info.m"
        {
#line 923 "continuation_info.m"
          mercury__term__var_to_int_2_p_0(ll_backend__continuation_info__TypeCtorInfo_29_29, ll_backend__continuation_info__Var_14, &ll_backend__continuation_info__VarNum_20);
        }
#line 924 "continuation_info.m"
        {
#line 924 "continuation_info.m"
          mercury__varset__lookup_name_3_p_0(ll_backend__continuation_info__TypeCtorInfo_29_29, ll_backend__continuation_info__VarSet_1, ll_backend__continuation_info__Var_14, &ll_backend__continuation_info__VarName_21);
        }
#line 925 "continuation_info.m"
        {
#line 925 "continuation_info.m"
          hlds__vartypes__lookup_var_type_3_p_0(ll_backend__continuation_info__VarTypes_2, ll_backend__continuation_info__Var_14, &ll_backend__continuation_info__Type_22);
        }
#line 926 "continuation_info.m"
        {
#line 926 "continuation_info.m"
          ll_backend__continuation_info__ArgLayout_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 926 "continuation_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ArgLayout_17, 0) = ((MR_Box) (ll_backend__continuation_info__VarNum_20));
#line 926 "continuation_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ArgLayout_17, 1) = ((MR_Box) (ll_backend__continuation_info__VarName_21));
#line 926 "continuation_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ArgLayout_17, 2) = ((MR_Box) (ll_backend__continuation_info__SlotNum_15));
#line 926 "continuation_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ArgLayout_17, 3) = ((MR_Box) (ll_backend__continuation_info__Type_22));
#line 926 "continuation_info.m"
        }
#line 927 "continuation_info.m"
        {
#line 927 "continuation_info.m"
          parse_tree__prog_type__type_vars_2_p_0(ll_backend__continuation_info__Type_22, &ll_backend__continuation_info__VarTypeVars_23);
        }
#line 928 "continuation_info.m"
        {
#line 928 "continuation_info.m"
          mercury__set__insert_list_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[2], ll_backend__continuation_info__VarTypeVars_23, ll_backend__continuation_info__STATE_VARIABLE_TypeVars_0_5, &ll_backend__continuation_info__STATE_VARIABLE_TypeVars_27_27);
        }
#line 929 "continuation_info.m"
        {
#line 929 "continuation_info.m"
          ll_backend__continuation_info__build_table_arg_info_6_p_0(ll_backend__continuation_info__VarSet_1, ll_backend__continuation_info__VarTypes_2, ll_backend__continuation_info__NumberedVars_16, &ll_backend__continuation_info__ArgLayouts_18, ll_backend__continuation_info__STATE_VARIABLE_TypeVars_27_27, ll_backend__continuation_info__STATE_VARIABLE_TypeVars_6);
        }
#line 922 "continuation_info.m"
        {
#line 922 "continuation_info.m"
          MR_Word base;
#line 922 "continuation_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 922 "continuation_info.m"
          *ll_backend__continuation_info__HeadVar__4_4 = base;
#line 922 "continuation_info.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__continuation_info__ArgLayout_17));
#line 922 "continuation_info.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__continuation_info__ArgLayouts_18));
#line 922 "continuation_info.m"
        }
#line 922 "continuation_info.m"
      }
#line 920 "continuation_info.m"
  }
#line 916 "continuation_info.m"
}

#line 890 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__gather_type_info_layout_locn_4_p_0(
#line 890 "continuation_info.m"
  MR_Word ll_backend__continuation_info__TypeInfoLocn_5,
#line 890 "continuation_info.m"
  MR_Word ll_backend__continuation_info__Lval_6,
#line 890 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_Locns_0_12,
#line 890 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_Locns_13)
#line 890 "continuation_info.m"
{
#line 893 "continuation_info.m"
  {
#line 893 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 893 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Locn_10;

#line 897 "continuation_info.m"
    if (((MR_tag((MR_Word) ll_backend__continuation_info__TypeInfoLocn_5)) == (MR_mktag((MR_Integer) 0))))
#line 899 "continuation_info.m"
      {
#line 899 "continuation_info.m"
        ll_backend__continuation_info__Locn_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 899 "continuation_info.m"
        MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Locn_10, 0) = ((MR_Box) (ll_backend__continuation_info__Lval_6));
#line 899 "continuation_info.m"
      }
#line 897 "continuation_info.m"
    else
#line 895 "continuation_info.m"
      {
#line 895 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__FieldNum_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__TypeInfoLocn_5, (MR_Integer) 1)));
#line 895 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__TypeInfoLocn_5, (MR_Integer) 0)));

#line 896 "continuation_info.m"
        {
#line 896 "continuation_info.m"
          ll_backend__continuation_info__Locn_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 896 "continuation_info.m"
          MR_hl_field(MR_mktag(1), ll_backend__continuation_info__Locn_10, 0) = ((MR_Box) (ll_backend__continuation_info__Lval_6));
#line 896 "continuation_info.m"
          MR_hl_field(MR_mktag(1), ll_backend__continuation_info__Locn_10, 1) = ((MR_Box) (ll_backend__continuation_info__FieldNum_9));
#line 896 "continuation_info.m"
        }
#line 895 "continuation_info.m"
      }
#line 901 "continuation_info.m"
    {
#line 901 "continuation_info.m"
      mercury__set__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0, ((MR_Box) (ll_backend__continuation_info__Locn_10)), ll_backend__continuation_info__STATE_VARIABLE_Locns_0_12, ll_backend__continuation_info__STATE_VARIABLE_Locns_13);
    }
#line 893 "continuation_info.m"
  }
#line 890 "continuation_info.m"
}

#line 881 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__gather_type_info_layout_locns_for_tvar_6_p_0_1(
#line 881 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 881 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 881 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 881 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_3)
#line 881 "continuation_info.m"
{
#line 881 "continuation_info.m"
  {
#line 881 "continuation_info.m"
    MR_Box ll_backend__continuation_info__closure = ll_backend__continuation_info__closure_arg;
#line 881 "continuation_info.m"
    MR_Word ll_backend__continuation_info__conv1_STATE_VARIABLE_Locns_13;

#line 881 "continuation_info.m"
    {
#line 881 "continuation_info.m"
      ll_backend__continuation_info__gather_type_info_layout_locn_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), &ll_backend__continuation_info__conv1_STATE_VARIABLE_Locns_13);
    }
#line 881 "continuation_info.m"
    *ll_backend__continuation_info__wrapper_arg_3 = ((MR_Box) (ll_backend__continuation_info__conv1_STATE_VARIABLE_Locns_13));
#line 881 "continuation_info.m"
  }
#line 881 "continuation_info.m"
}

#line 872 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__gather_type_info_layout_locns_for_tvar_6_p_0(
#line 872 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarSet_7,
#line 872 "continuation_info.m"
  MR_Word ll_backend__continuation_info__RttiVarMaps_8,
#line 872 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarLocs_9,
#line 872 "continuation_info.m"
  MR_Word ll_backend__continuation_info__TypeVar_10,
#line 872 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_TypeInfoDataMap_0_17,
#line 872 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_TypeInfoDataMap_18)
#line 872 "continuation_info.m"
{
#line 877 "continuation_info.m"
  {
#line 877 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 877 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeInfoLocn_12;
#line 877 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeInfoVar_13;
#line 880 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeInfoLvalSet_14;
#line 880 "continuation_info.m"
    MR_Box ll_backend__continuation_info__conv0_TypeInfoLvalSet_14;

#line 878 "continuation_info.m"
    {
#line 878 "continuation_info.m"
      hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(ll_backend__continuation_info__RttiVarMaps_8, ll_backend__continuation_info__TypeVar_10, &ll_backend__continuation_info__TypeInfoLocn_12);
    }
#line 879 "continuation_info.m"
    {
#line 879 "continuation_info.m"
      hlds__hlds_rtti__type_info_locn_var_2_p_0(ll_backend__continuation_info__TypeInfoLocn_12, &ll_backend__continuation_info__TypeInfoVar_13);
    }
#line 880 "continuation_info.m"
    {
#line 880 "continuation_info.m"
      ll_backend__continuation_info__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[0], (MR_Word) &ll_backend__continuation_info_scalar_common_1[1], ll_backend__continuation_info__VarLocs_9, ((MR_Box) (ll_backend__continuation_info__TypeInfoVar_13)), &ll_backend__continuation_info__conv0_TypeInfoLvalSet_14);
    }
#line 880 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 880 "continuation_info.m"
      {
#line 880 "continuation_info.m"
        ll_backend__continuation_info__TypeInfoLvalSet_14 = ((MR_Word) ll_backend__continuation_info__conv0_TypeInfoLvalSet_14);
#line 880 "continuation_info.m"
        ll_backend__continuation_info__succeeded = MR_TRUE;
#line 880 "continuation_info.m"
      }
#line 880 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 882 "continuation_info.m"
      {
#line 882 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_33_33;
#line 882 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Locns_15;
#line 882 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_19_19;
#line 882 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_20_20;
#line 881 "continuation_info.m"
        MR_Box ll_backend__continuation_info__conv2_Locns_15;

#line 881 "continuation_info.m"
        {
#line 881 "continuation_info.m"
          ll_backend__continuation_info__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 881 "continuation_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_19_19, 0) = ((MR_Box) (&ll_backend__continuation_info_scalar_common_5[2]));
#line 881 "continuation_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_19_19, 1) = ((MR_Box) (ll_backend__continuation_info__gather_type_info_layout_locns_for_tvar_6_p_0_1));
#line 881 "continuation_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 881 "continuation_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_19_19, 3) = ((MR_Box) (ll_backend__continuation_info__TypeInfoLocn_12));
#line 881 "continuation_info.m"
        }
#line 882 "continuation_info.m"
        {
#line 882 "continuation_info.m"
          ll_backend__continuation_info__V_20_20 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0);
        }
#line 10285 "ll_backend.continuation_info.c"
        ll_backend__continuation_info__TypeInfo_33_33 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[3];
#line 881 "continuation_info.m"
        {
#line 881 "continuation_info.m"
          mercury__set__fold_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__continuation_info__TypeInfo_33_33, ll_backend__continuation_info__V_19_19, ll_backend__continuation_info__TypeInfoLvalSet_14, ((MR_Box) (ll_backend__continuation_info__V_20_20)), &ll_backend__continuation_info__conv2_Locns_15);
        }
#line 881 "continuation_info.m"
        ll_backend__continuation_info__Locns_15 = ((MR_Word) ll_backend__continuation_info__conv2_Locns_15);
#line 883 "continuation_info.m"
        {
#line 883 "continuation_info.m"
          mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[2], ll_backend__continuation_info__TypeInfo_33_33, ((MR_Box) (ll_backend__continuation_info__TypeVar_10)), ((MR_Box) (ll_backend__continuation_info__Locns_15)), ll_backend__continuation_info__STATE_VARIABLE_TypeInfoDataMap_0_17, ll_backend__continuation_info__STATE_VARIABLE_TypeInfoDataMap_18);
        }
#line 882 "continuation_info.m"
      }
#line 880 "continuation_info.m"
    else
#line 885 "continuation_info.m"
      {
#line 885 "continuation_info.m"
        MR_String ll_backend__continuation_info__VarName_16;
#line 885 "continuation_info.m"
        MR_String ll_backend__continuation_info__V_24_24;

#line 885 "continuation_info.m"
        {
#line 885 "continuation_info.m"
          mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__continuation_info__VarSet_7, ll_backend__continuation_info__TypeInfoVar_13, &ll_backend__continuation_info__VarName_16);
        }
#line 887 "continuation_info.m"
        {
#line 887 "continuation_info.m"
          ll_backend__continuation_info__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) "can\'t find rval for type_info var ", ll_backend__continuation_info__VarName_16);
        }
#line 886 "continuation_info.m"
        {
#line 886 "continuation_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.continuation_info", (MR_String) "predicate \140ll_backend.continuation_info.gather_type_info_layout_locns_for_tvar\'/6", ll_backend__continuation_info__V_24_24);
#line 886 "continuation_info.m"
          return;
        }
#line 885 "continuation_info.m"
      }
#line 877 "continuation_info.m"
  }
#line 872 "continuation_info.m"
}

#line 830 "continuation_info.m"
static MR_bool MR_CALL 
ll_backend__continuation_info__build_closure_info_10_p_0(
#line 830 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 830 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 830 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3,
#line 830 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__4_4,
#line 830 "continuation_info.m"
  MR_Word ll_backend__continuation_info__InstMap_5,
#line 830 "continuation_info.m"
  MR_Word ll_backend__continuation_info__UseFloatRegs_6,
#line 830 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_VarLocs_0_7,
#line 830 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_VarLocs_8,
#line 830 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_TypeVars_0_9,
#line 830 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_TypeVars_10)
#line 830 "continuation_info.m"
{
#line 836 "continuation_info.m"
  {
#line 836 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;

#line 836 "continuation_info.m"
    if ((ll_backend__continuation_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 836 "continuation_info.m"
      {
#line 836 "continuation_info.m"
        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 836 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 836 "continuation_info.m"
          {
#line 836 "continuation_info.m"
            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 836 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 836 "continuation_info.m"
              {
#line 836 "continuation_info.m"
                *ll_backend__continuation_info__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 836 "continuation_info.m"
                *ll_backend__continuation_info__STATE_VARIABLE_TypeVars_10 = ll_backend__continuation_info__STATE_VARIABLE_TypeVars_0_9;
#line 836 "continuation_info.m"
                *ll_backend__continuation_info__STATE_VARIABLE_VarLocs_8 = ll_backend__continuation_info__STATE_VARIABLE_VarLocs_0_7;
#line 836 "continuation_info.m"
                ll_backend__continuation_info__succeeded = MR_TRUE;
#line 836 "continuation_info.m"
              }
#line 836 "continuation_info.m"
          }
#line 836 "continuation_info.m"
      }
#line 836 "continuation_info.m"
    else
#line 839 "continuation_info.m"
      {
#line 839 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeCtorInfo_48_48;
#line 839 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_49_49;
#line 839 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_50_50;
#line 839 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_51_51;
#line 839 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 839 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Vars_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 839 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Type0_21;
#line 839 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Types_22;
#line 839 "continuation_info.m"
        MR_Word ll_backend__continuation_info__ArgInfo_23;
#line 839 "continuation_info.m"
        MR_Word ll_backend__continuation_info__ArgInfos_24;
#line 839 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Layout_25;
#line 839 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Layouts_26;
#line 839 "continuation_info.m"
        MR_Word ll_backend__continuation_info__ArgLoc_31;
#line 839 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Type_34;
#line 839 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Inst_35;
#line 839 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Reg_36;
#line 839 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Locations_37;
#line 839 "continuation_info.m"
        MR_Word ll_backend__continuation_info__VarTypeVars_38;
#line 839 "continuation_info.m"
        MR_Word ll_backend__continuation_info__STATE_VARIABLE_VarLocs_44_44;
#line 839 "continuation_info.m"
        MR_Word ll_backend__continuation_info__STATE_VARIABLE_TypeVars_45_45;
#line 840 "continuation_info.m"
        MR_Word ll_backend__continuation_info___ArgMode_32;
#line 845 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_43_43;
#line 845 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_52_52;
#line 847 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_33_33;

#line 837 "continuation_info.m"
        ll_backend__continuation_info__succeeded = ((MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 837 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 837 "continuation_info.m"
          {
#line 837 "continuation_info.m"
            ll_backend__continuation_info__Type0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 837 "continuation_info.m"
            ll_backend__continuation_info__Types_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 838 "continuation_info.m"
            ll_backend__continuation_info__succeeded = ((MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 838 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 838 "continuation_info.m"
              {
#line 838 "continuation_info.m"
                ll_backend__continuation_info__ArgInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));
#line 838 "continuation_info.m"
                ll_backend__continuation_info__ArgInfos_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 1)));
#line 840 "continuation_info.m"
                ll_backend__continuation_info__ArgLoc_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ArgInfo_23, (MR_Integer) 0)));
#line 840 "continuation_info.m"
                ll_backend__continuation_info___ArgMode_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ArgInfo_23, (MR_Integer) 1)));
#line 845 "continuation_info.m"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__UseFloatRegs_6 == (MR_Integer) 1);
#line 845 "continuation_info.m"
                if (ll_backend__continuation_info__succeeded)
#line 845 "continuation_info.m"
                  {
#line 846 "continuation_info.m"
                    {
#line 846 "continuation_info.m"
                      ll_backend__continuation_info__V_52_52 = parse_tree__builtin_lib_types__float_type_0_f_0();
                    }
#line 846 "continuation_info.m"
                    {
#line 846 "continuation_info.m"
                      ll_backend__continuation_info__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ll_backend__continuation_info__Type0_21, ll_backend__continuation_info__V_52_52);
                    }
#line 845 "continuation_info.m"
                    if (ll_backend__continuation_info__succeeded)
#line 845 "continuation_info.m"
                      {
#line 847 "continuation_info.m"
                        ll_backend__continuation_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ArgLoc_31, (MR_Integer) 0)));
#line 847 "continuation_info.m"
                        ll_backend__continuation_info__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ArgLoc_31, (MR_Integer) 1)));
#line 847 "continuation_info.m"
                        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_43_43 == (MR_Integer) 0);
#line 845 "continuation_info.m"
                      }
#line 845 "continuation_info.m"
                  }
#line 844 "continuation_info.m"
                if (ll_backend__continuation_info__succeeded)
#line 849 "continuation_info.m"
                  {
#line 849 "continuation_info.m"
                    ll_backend__continuation_info__Type_34 = parse_tree__builtin_lib_types__float_box_type_0_f_0();
                  }
#line 844 "continuation_info.m"
                else
#line 851 "continuation_info.m"
                  ll_backend__continuation_info__Type_34 = ll_backend__continuation_info__Type0_21;
#line 853 "continuation_info.m"
                {
#line 853 "continuation_info.m"
                  hlds__instmap__instmap_lookup_var_3_p_0(ll_backend__continuation_info__InstMap_5, ll_backend__continuation_info__Var_19, &ll_backend__continuation_info__Inst_35);
                }
#line 854 "continuation_info.m"
                {
#line 854 "continuation_info.m"
                  ll_backend__continuation_info__Layout_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 854 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Layout_25, 0) = ((MR_Box) (ll_backend__continuation_info__Type_34));
#line 854 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Layout_25, 1) = ((MR_Box) (ll_backend__continuation_info__Inst_35));
#line 854 "continuation_info.m"
                }
#line 855 "continuation_info.m"
                {
#line 855 "continuation_info.m"
                  ll_backend__code_util__arg_loc_to_register_2_p_0(ll_backend__continuation_info__ArgLoc_31, &ll_backend__continuation_info__Reg_36);
                }
#line 10532 "ll_backend.continuation_info.c"
                ll_backend__continuation_info__TypeCtorInfo_48_48 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 856 "continuation_info.m"
                {
#line 856 "continuation_info.m"
                  ll_backend__continuation_info__Locations_37 = mercury__set__make_singleton_set_1_f_0(ll_backend__continuation_info__TypeCtorInfo_48_48, ((MR_Box) (ll_backend__continuation_info__Reg_36)));
                }
#line 10539 "ll_backend.continuation_info.c"
                ll_backend__continuation_info__TypeInfo_49_49 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[0];
#line 10541 "ll_backend.continuation_info.c"
                ll_backend__continuation_info__TypeInfo_50_50 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[1];
#line 857 "continuation_info.m"
                {
#line 857 "continuation_info.m"
                  mercury__map__det_insert_4_p_0(ll_backend__continuation_info__TypeInfo_49_49, ll_backend__continuation_info__TypeInfo_50_50, ((MR_Box) (ll_backend__continuation_info__Var_19)), ((MR_Box) (ll_backend__continuation_info__Locations_37)), ll_backend__continuation_info__STATE_VARIABLE_VarLocs_0_7, &ll_backend__continuation_info__STATE_VARIABLE_VarLocs_44_44);
                }
#line 858 "continuation_info.m"
                {
#line 858 "continuation_info.m"
                  parse_tree__prog_type__type_vars_2_p_0(ll_backend__continuation_info__Type_34, &ll_backend__continuation_info__VarTypeVars_38);
                }
#line 10553 "ll_backend.continuation_info.c"
                ll_backend__continuation_info__TypeInfo_51_51 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[2];
#line 859 "continuation_info.m"
                {
#line 859 "continuation_info.m"
                  mercury__set__insert_list_3_p_0(ll_backend__continuation_info__TypeInfo_51_51, ll_backend__continuation_info__VarTypeVars_38, ll_backend__continuation_info__STATE_VARIABLE_TypeVars_0_9, &ll_backend__continuation_info__STATE_VARIABLE_TypeVars_45_45);
                }
#line 860 "continuation_info.m"
                {
#line 860 "continuation_info.m"
                  ll_backend__continuation_info__succeeded = ll_backend__continuation_info__build_closure_info_10_p_0(ll_backend__continuation_info__Vars_20, ll_backend__continuation_info__Types_22, ll_backend__continuation_info__ArgInfos_24, &ll_backend__continuation_info__Layouts_26, ll_backend__continuation_info__InstMap_5, ll_backend__continuation_info__UseFloatRegs_6, ll_backend__continuation_info__STATE_VARIABLE_VarLocs_44_44, ll_backend__continuation_info__STATE_VARIABLE_VarLocs_8, ll_backend__continuation_info__STATE_VARIABLE_TypeVars_45_45, ll_backend__continuation_info__STATE_VARIABLE_TypeVars_10);
                }
#line 839 "continuation_info.m"
                if (ll_backend__continuation_info__succeeded)
#line 839 "continuation_info.m"
                  {
#line 838 "continuation_info.m"
                    {
#line 838 "continuation_info.m"
                      MR_Word base;
#line 838 "continuation_info.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 838 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__4_4 = base;
#line 838 "continuation_info.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__continuation_info__Layout_25));
#line 838 "continuation_info.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__continuation_info__Layouts_26));
#line 838 "continuation_info.m"
                    }
#line 838 "continuation_info.m"
                    ll_backend__continuation_info__succeeded = MR_TRUE;
#line 839 "continuation_info.m"
                  }
#line 838 "continuation_info.m"
              }
#line 837 "continuation_info.m"
          }
#line 839 "continuation_info.m"
      }
#line 836 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 836 "continuation_info.m"
  }
#line 830 "continuation_info.m"
}

#line 753 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__generate_temp_var_infos_2_p_0(
#line 753 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 753 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__2_2)
#line 753 "continuation_info.m"
{
#line 756 "continuation_info.m"
  {
#line 756 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;

#line 756 "continuation_info.m"
    if ((ll_backend__continuation_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 756 "continuation_info.m"
      *ll_backend__continuation_info__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 756 "continuation_info.m"
    else
#line 757 "continuation_info.m"
      {
#line 757 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Temp_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 757 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Temps_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 757 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Live_5;
#line 757 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Lives_6;
#line 757 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Slot_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Temp_3, (MR_Integer) 0)));
#line 757 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Contents_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Temp_3, (MR_Integer) 1)));
#line 757 "continuation_info.m"
        MR_Word ll_backend__continuation_info__LiveLvalueType_9;
#line 757 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_10_10;

#line 971 "continuation_info.m"
#line 971 "continuation_info.m"
        switch (MR_tag((MR_Word) ll_backend__continuation_info__Contents_8)) {
#line 971 "continuation_info.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 971 "continuation_info.m"
          case (MR_Integer) 0:
#line 971 "continuation_info.m"
#line 971 "continuation_info.m"
            switch (MR_unmkbody(ll_backend__continuation_info__Contents_8)) {
#line 971 "continuation_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 971 "continuation_info.m"
              case (MR_Integer) 0:
#line 993 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 971 "continuation_info.m"
                break;
#line 971 "continuation_info.m"
              case (MR_Integer) 1:
#line 996 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 971 "continuation_info.m"
                break;
#line 971 "continuation_info.m"
              case (MR_Integer) 2:
#line 1001 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 971 "continuation_info.m"
                break;
#line 971 "continuation_info.m"
              case (MR_Integer) 3:
#line 997 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 971 "continuation_info.m"
                break;
#line 971 "continuation_info.m"
              case (MR_Integer) 4:
#line 998 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 971 "continuation_info.m"
                break;
#line 971 "continuation_info.m"
              case (MR_Integer) 5:
#line 999 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 971 "continuation_info.m"
                break;
#line 971 "continuation_info.m"
              case (MR_Integer) 6:
#line 1000 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 971 "continuation_info.m"
                break;
#line 971 "continuation_info.m"
              case (MR_Integer) 7:
#line 1002 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 971 "continuation_info.m"
                break;
#line 971 "continuation_info.m"
              case (MR_Integer) 8:
#line 1003 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 971 "continuation_info.m"
                break;
#line 971 "continuation_info.m"
              case (MR_Integer) 9:
#line 1004 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
#line 971 "continuation_info.m"
                break;
#line 971 "continuation_info.m"
              case (MR_Integer) 10:
#line 992 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 971 "continuation_info.m"
                break;
#line 971 "continuation_info.m"
            }
#line 971 "continuation_info.m"
            break;
#line 971 "continuation_info.m"
          case (MR_Integer) 1:
#line 971 "continuation_info.m"
            {
#line 971 "continuation_info.m"
              MR_Word ll_backend__continuation_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__Contents_8, (MR_Integer) 0)));

#line 971 "continuation_info.m"
#line 971 "continuation_info.m"
              switch (MR_tag((MR_Word) ll_backend__continuation_info__V_53_53)) {
#line 971 "continuation_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 971 "continuation_info.m"
                case (MR_Integer) 0:
#line 971 "continuation_info.m"
#line 971 "continuation_info.m"
                  switch (MR_unmkbody(ll_backend__continuation_info__V_53_53)) {
#line 971 "continuation_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 971 "continuation_info.m"
                    case (MR_Integer) 0:
#line 971 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 971 "continuation_info.m"
                      break;
#line 971 "continuation_info.m"
                    case (MR_Integer) 1:
#line 973 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 971 "continuation_info.m"
                      break;
#line 971 "continuation_info.m"
                    case (MR_Integer) 2:
#line 974 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 971 "continuation_info.m"
                      break;
#line 971 "continuation_info.m"
                    case (MR_Integer) 3:
#line 972 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 971 "continuation_info.m"
                      break;
#line 971 "continuation_info.m"
                    case (MR_Integer) 4:
#line 980 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 971 "continuation_info.m"
                      break;
#line 971 "continuation_info.m"
                    case (MR_Integer) 5:
#line 981 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 971 "continuation_info.m"
                      break;
#line 971 "continuation_info.m"
                  }
#line 971 "continuation_info.m"
                  break;
#line 971 "continuation_info.m"
                case (MR_Integer) 1:
#line 985 "continuation_info.m"
                  ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 971 "continuation_info.m"
                  break;
#line 971 "continuation_info.m"
                case (MR_Integer) 2:
#line 984 "continuation_info.m"
                  ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 971 "continuation_info.m"
                  break;
#line 971 "continuation_info.m"
                case (MR_Integer) 3:
#line 971 "continuation_info.m"
#line 971 "continuation_info.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__continuation_info__V_53_53, (MR_Integer) 0)))) {
#line 971 "continuation_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 971 "continuation_info.m"
                    case (MR_Integer) 0:
#line 986 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 971 "continuation_info.m"
                      break;
#line 971 "continuation_info.m"
                    case (MR_Integer) 1:
#line 987 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 971 "continuation_info.m"
                      break;
#line 971 "continuation_info.m"
                    case (MR_Integer) 2:
#line 988 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 971 "continuation_info.m"
                      break;
#line 971 "continuation_info.m"
                    case (MR_Integer) 3:
#line 989 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 971 "continuation_info.m"
                      break;
#line 971 "continuation_info.m"
                    case (MR_Integer) 4:
#line 979 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 971 "continuation_info.m"
                      break;
#line 971 "continuation_info.m"
                    case (MR_Integer) 5:
#line 975 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 971 "continuation_info.m"
                      break;
#line 971 "continuation_info.m"
                    case (MR_Integer) 6:
#line 978 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 971 "continuation_info.m"
                      break;
#line 971 "continuation_info.m"
                    case (MR_Integer) 7:
#line 977 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 971 "continuation_info.m"
                      break;
#line 971 "continuation_info.m"
                    case (MR_Integer) 8:
#line 976 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 971 "continuation_info.m"
                      break;
#line 971 "continuation_info.m"
                    case (MR_Integer) 9:
#line 983 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 971 "continuation_info.m"
                      break;
#line 971 "continuation_info.m"
                    case (MR_Integer) 10:
#line 990 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 971 "continuation_info.m"
                      break;
#line 971 "continuation_info.m"
                    case (MR_Integer) 11:
#line 991 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 971 "continuation_info.m"
                      break;
#line 971 "continuation_info.m"
                    case (MR_Integer) 12:
#line 982 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 971 "continuation_info.m"
                      break;
#line 971 "continuation_info.m"
                  }
#line 971 "continuation_info.m"
                  break;
#line 971 "continuation_info.m"
              }
#line 971 "continuation_info.m"
            }
#line 971 "continuation_info.m"
            break;
#line 971 "continuation_info.m"
        }
#line 760 "continuation_info.m"
        {
#line 760 "continuation_info.m"
          ll_backend__continuation_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 760 "continuation_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_10_10, 0) = ((MR_Box) (ll_backend__continuation_info__Slot_7));
#line 760 "continuation_info.m"
        }
#line 760 "continuation_info.m"
        {
#line 760 "continuation_info.m"
          ll_backend__continuation_info__Live_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 760 "continuation_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Live_5, 0) = ((MR_Box) (ll_backend__continuation_info__V_10_10));
#line 760 "continuation_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Live_5, 1) = ((MR_Box) (ll_backend__continuation_info__LiveLvalueType_9));
#line 760 "continuation_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Live_5, 2) = ((MR_Box) ((MR_String) "generate_temp_var_infos"));
#line 760 "continuation_info.m"
        }
#line 762 "continuation_info.m"
        {
#line 762 "continuation_info.m"
          ll_backend__continuation_info__generate_temp_var_infos_2_p_0(ll_backend__continuation_info__Temps_4, &ll_backend__continuation_info__Lives_6);
        }
#line 757 "continuation_info.m"
        {
#line 757 "continuation_info.m"
          MR_Word base;
#line 757 "continuation_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 757 "continuation_info.m"
          *ll_backend__continuation_info__HeadVar__2_2 = base;
#line 757 "continuation_info.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__continuation_info__Live_5));
#line 757 "continuation_info.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__continuation_info__Lives_6));
#line 757 "continuation_info.m"
        }
#line 757 "continuation_info.m"
      }
#line 756 "continuation_info.m"
  }
#line 753 "continuation_info.m"
}

#line 655 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__generate_temp_live_lvalues_2_p_0(
#line 655 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 655 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__2_2)
#line 655 "continuation_info.m"
{
#line 658 "continuation_info.m"
  {
#line 658 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;

#line 658 "continuation_info.m"
    if ((ll_backend__continuation_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 658 "continuation_info.m"
      *ll_backend__continuation_info__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 658 "continuation_info.m"
    else
#line 659 "continuation_info.m"
      {
#line 659 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Temp_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 659 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Temps_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 659 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Live_5;
#line 659 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Lives_6;
#line 659 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Slot_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Temp_3, (MR_Integer) 0)));
#line 659 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Contents_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Temp_3, (MR_Integer) 1)));
#line 659 "continuation_info.m"
        MR_Word ll_backend__continuation_info__LiveLvalueType_9;
#line 659 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Empty_10;
#line 659 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_11_11;

#line 971 "continuation_info.m"
#line 971 "continuation_info.m"
        switch (MR_tag((MR_Word) ll_backend__continuation_info__Contents_8)) {
#line 971 "continuation_info.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 971 "continuation_info.m"
          case (MR_Integer) 0:
#line 971 "continuation_info.m"
#line 971 "continuation_info.m"
            switch (MR_unmkbody(ll_backend__continuation_info__Contents_8)) {
#line 971 "continuation_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 971 "continuation_info.m"
              case (MR_Integer) 0:
#line 993 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 971 "continuation_info.m"
                break;
#line 971 "continuation_info.m"
              case (MR_Integer) 1:
#line 996 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 971 "continuation_info.m"
                break;
#line 971 "continuation_info.m"
              case (MR_Integer) 2:
#line 1001 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 971 "continuation_info.m"
                break;
#line 971 "continuation_info.m"
              case (MR_Integer) 3:
#line 997 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 971 "continuation_info.m"
                break;
#line 971 "continuation_info.m"
              case (MR_Integer) 4:
#line 998 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 971 "continuation_info.m"
                break;
#line 971 "continuation_info.m"
              case (MR_Integer) 5:
#line 999 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 971 "continuation_info.m"
                break;
#line 971 "continuation_info.m"
              case (MR_Integer) 6:
#line 1000 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 971 "continuation_info.m"
                break;
#line 971 "continuation_info.m"
              case (MR_Integer) 7:
#line 1002 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 971 "continuation_info.m"
                break;
#line 971 "continuation_info.m"
              case (MR_Integer) 8:
#line 1003 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 971 "continuation_info.m"
                break;
#line 971 "continuation_info.m"
              case (MR_Integer) 9:
#line 1004 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
#line 971 "continuation_info.m"
                break;
#line 971 "continuation_info.m"
              case (MR_Integer) 10:
#line 992 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 971 "continuation_info.m"
                break;
#line 971 "continuation_info.m"
            }
#line 971 "continuation_info.m"
            break;
#line 971 "continuation_info.m"
          case (MR_Integer) 1:
#line 971 "continuation_info.m"
            {
#line 971 "continuation_info.m"
              MR_Word ll_backend__continuation_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__Contents_8, (MR_Integer) 0)));

#line 971 "continuation_info.m"
#line 971 "continuation_info.m"
              switch (MR_tag((MR_Word) ll_backend__continuation_info__V_55_55)) {
#line 971 "continuation_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 971 "continuation_info.m"
                case (MR_Integer) 0:
#line 971 "continuation_info.m"
#line 971 "continuation_info.m"
                  switch (MR_unmkbody(ll_backend__continuation_info__V_55_55)) {
#line 971 "continuation_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 971 "continuation_info.m"
                    case (MR_Integer) 0:
#line 971 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 971 "continuation_info.m"
                      break;
#line 971 "continuation_info.m"
                    case (MR_Integer) 1:
#line 973 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 971 "continuation_info.m"
                      break;
#line 971 "continuation_info.m"
                    case (MR_Integer) 2:
#line 974 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 971 "continuation_info.m"
                      break;
#line 971 "continuation_info.m"
                    case (MR_Integer) 3:
#line 972 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 971 "continuation_info.m"
                      break;
#line 971 "continuation_info.m"
                    case (MR_Integer) 4:
#line 980 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 971 "continuation_info.m"
                      break;
#line 971 "continuation_info.m"
                    case (MR_Integer) 5:
#line 981 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 971 "continuation_info.m"
                      break;
#line 971 "continuation_info.m"
                  }
#line 971 "continuation_info.m"
                  break;
#line 971 "continuation_info.m"
                case (MR_Integer) 1:
#line 985 "continuation_info.m"
                  ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 971 "continuation_info.m"
                  break;
#line 971 "continuation_info.m"
                case (MR_Integer) 2:
#line 984 "continuation_info.m"
                  ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 971 "continuation_info.m"
                  break;
#line 971 "continuation_info.m"
                case (MR_Integer) 3:
#line 971 "continuation_info.m"
#line 971 "continuation_info.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__continuation_info__V_55_55, (MR_Integer) 0)))) {
#line 971 "continuation_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 971 "continuation_info.m"
                    case (MR_Integer) 0:
#line 986 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 971 "continuation_info.m"
                      break;
#line 971 "continuation_info.m"
                    case (MR_Integer) 1:
#line 987 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 971 "continuation_info.m"
                      break;
#line 971 "continuation_info.m"
                    case (MR_Integer) 2:
#line 988 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 971 "continuation_info.m"
                      break;
#line 971 "continuation_info.m"
                    case (MR_Integer) 3:
#line 989 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 971 "continuation_info.m"
                      break;
#line 971 "continuation_info.m"
                    case (MR_Integer) 4:
#line 979 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 971 "continuation_info.m"
                      break;
#line 971 "continuation_info.m"
                    case (MR_Integer) 5:
#line 975 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 971 "continuation_info.m"
                      break;
#line 971 "continuation_info.m"
                    case (MR_Integer) 6:
#line 978 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 971 "continuation_info.m"
                      break;
#line 971 "continuation_info.m"
                    case (MR_Integer) 7:
#line 977 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 971 "continuation_info.m"
                      break;
#line 971 "continuation_info.m"
                    case (MR_Integer) 8:
#line 976 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 971 "continuation_info.m"
                      break;
#line 971 "continuation_info.m"
                    case (MR_Integer) 9:
#line 983 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 971 "continuation_info.m"
                      break;
#line 971 "continuation_info.m"
                    case (MR_Integer) 10:
#line 990 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 971 "continuation_info.m"
                      break;
#line 971 "continuation_info.m"
                    case (MR_Integer) 11:
#line 991 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 971 "continuation_info.m"
                      break;
#line 971 "continuation_info.m"
                    case (MR_Integer) 12:
#line 982 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 971 "continuation_info.m"
                      break;
#line 971 "continuation_info.m"
                  }
#line 971 "continuation_info.m"
                  break;
#line 971 "continuation_info.m"
              }
#line 971 "continuation_info.m"
            }
#line 971 "continuation_info.m"
            break;
#line 971 "continuation_info.m"
        }
#line 662 "continuation_info.m"
        {
#line 662 "continuation_info.m"
          mercury__map__init_1_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[2], (MR_Word) &ll_backend__continuation_info_scalar_common_1[3], &ll_backend__continuation_info__Empty_10);
        }
#line 663 "continuation_info.m"
        {
#line 663 "continuation_info.m"
          ll_backend__continuation_info__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 663 "continuation_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_11_11, 0) = ((MR_Box) (ll_backend__continuation_info__Slot_7));
#line 663 "continuation_info.m"
        }
#line 663 "continuation_info.m"
        {
#line 663 "continuation_info.m"
          ll_backend__continuation_info__Live_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 663 "continuation_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Live_5, 0) = ((MR_Box) (ll_backend__continuation_info__V_11_11));
#line 663 "continuation_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Live_5, 1) = ((MR_Box) (ll_backend__continuation_info__LiveLvalueType_9));
#line 663 "continuation_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Live_5, 2) = ((MR_Box) (ll_backend__continuation_info__Empty_10));
#line 663 "continuation_info.m"
        }
#line 664 "continuation_info.m"
        {
#line 664 "continuation_info.m"
          ll_backend__continuation_info__generate_temp_live_lvalues_2_p_0(ll_backend__continuation_info__Temps_4, &ll_backend__continuation_info__Lives_6);
        }
#line 659 "continuation_info.m"
        {
#line 659 "continuation_info.m"
          MR_Word base;
#line 659 "continuation_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 659 "continuation_info.m"
          *ll_backend__continuation_info__HeadVar__2_2 = base;
#line 659 "continuation_info.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__continuation_info__Live_5));
#line 659 "continuation_info.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__continuation_info__Lives_6));
#line 659 "continuation_info.m"
        }
#line 659 "continuation_info.m"
      }
#line 658 "continuation_info.m"
  }
#line 655 "continuation_info.m"
}

#line 629 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__find_return_var_lvals_5_p_0(
#line 629 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 629 "continuation_info.m"
  MR_Word ll_backend__continuation_info__StackSlots_2,
#line 629 "continuation_info.m"
  MR_Word ll_backend__continuation_info__OkToDeleteAny_3,
#line 629 "continuation_info.m"
  MR_Word ll_backend__continuation_info__OutputArgLocs_4,
#line 629 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__5_5)
#line 629 "continuation_info.m"
{
#line 633 "continuation_info.m"
  {
#line 633 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;

#line 633 "continuation_info.m"
    if ((ll_backend__continuation_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 633 "continuation_info.m"
      *ll_backend__continuation_info__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 633 "continuation_info.m"
    else
#line 635 "continuation_info.m"
      {
#line 635 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 635 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Vars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 635 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TailVarLvals_15;
#line 638 "continuation_info.m"
        MR_Word ll_backend__continuation_info__ArgLoc_16;
#line 638 "continuation_info.m"
        MR_Box ll_backend__continuation_info__conv0_ArgLoc_16;

#line 636 "continuation_info.m"
        {
#line 636 "continuation_info.m"
          ll_backend__continuation_info__find_return_var_lvals_5_p_0(ll_backend__continuation_info__Vars_10, ll_backend__continuation_info__StackSlots_2, ll_backend__continuation_info__OkToDeleteAny_3, ll_backend__continuation_info__OutputArgLocs_4, &ll_backend__continuation_info__TailVarLvals_15);
        }
#line 638 "continuation_info.m"
        {
#line 638 "continuation_info.m"
          ll_backend__continuation_info__succeeded = mercury__assoc_list__search_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[0], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_loc_0, ll_backend__continuation_info__OutputArgLocs_4, ((MR_Box) (ll_backend__continuation_info__Var_9)), &ll_backend__continuation_info__conv0_ArgLoc_16);
        }
#line 638 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 638 "continuation_info.m"
          {
#line 638 "continuation_info.m"
            ll_backend__continuation_info__ArgLoc_16 = ((MR_Word) ll_backend__continuation_info__conv0_ArgLoc_16);
#line 638 "continuation_info.m"
            ll_backend__continuation_info__succeeded = MR_TRUE;
#line 638 "continuation_info.m"
          }
#line 638 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 640 "continuation_info.m"
          {
#line 640 "continuation_info.m"
            MR_Word ll_backend__continuation_info__Lval_17;
#line 640 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_19_19;

#line 640 "continuation_info.m"
            {
#line 640 "continuation_info.m"
              ll_backend__code_util__arg_loc_to_register_2_p_0(ll_backend__continuation_info__ArgLoc_16, &ll_backend__continuation_info__Lval_17);
            }
#line 641 "continuation_info.m"
            {
#line 641 "continuation_info.m"
              ll_backend__continuation_info__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 641 "continuation_info.m"
              MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_19_19, 0) = ((MR_Box) (ll_backend__continuation_info__Var_9));
#line 641 "continuation_info.m"
              MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_19_19, 1) = ((MR_Box) (ll_backend__continuation_info__Lval_17));
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
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__continuation_info__V_19_19));
#line 641 "continuation_info.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__continuation_info__TailVarLvals_15));
#line 641 "continuation_info.m"
            }
#line 640 "continuation_info.m"
          }
#line 638 "continuation_info.m"
        else
#line 642 "continuation_info.m"
          {
#line 642 "continuation_info.m"
            MR_Word ll_backend__continuation_info__Slot_18;
#line 642 "continuation_info.m"
            MR_Box ll_backend__continuation_info__conv1_Slot_18;

#line 642 "continuation_info.m"
            {
#line 642 "continuation_info.m"
              ll_backend__continuation_info__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0, ll_backend__continuation_info__StackSlots_2, ((MR_Box) (ll_backend__continuation_info__Var_9)), &ll_backend__continuation_info__conv1_Slot_18);
            }
#line 642 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 642 "continuation_info.m"
              {
#line 642 "continuation_info.m"
                ll_backend__continuation_info__Slot_18 = ((MR_Word) ll_backend__continuation_info__conv1_Slot_18);
#line 642 "continuation_info.m"
                ll_backend__continuation_info__succeeded = MR_TRUE;
#line 642 "continuation_info.m"
              }
#line 642 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 644 "continuation_info.m"
              {
#line 644 "continuation_info.m"
                MR_Word ll_backend__continuation_info__V_20_20;
#line 644 "continuation_info.m"
                MR_Word ll_backend__continuation_info__V_21_21;

#line 644 "continuation_info.m"
                {
#line 644 "continuation_info.m"
                  ll_backend__continuation_info__V_21_21 = ll_backend__llds__stack_slot_to_lval_1_f_0(ll_backend__continuation_info__Slot_18);
                }
#line 644 "continuation_info.m"
                {
#line 644 "continuation_info.m"
                  ll_backend__continuation_info__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 644 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_20_20, 0) = ((MR_Box) (ll_backend__continuation_info__Var_9));
#line 644 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_20_20, 1) = ((MR_Box) (ll_backend__continuation_info__V_21_21));
#line 644 "continuation_info.m"
                }
#line 644 "continuation_info.m"
                {
#line 644 "continuation_info.m"
                  MR_Word base;
#line 644 "continuation_info.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 644 "continuation_info.m"
                  *ll_backend__continuation_info__HeadVar__5_5 = base;
#line 644 "continuation_info.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__continuation_info__V_20_20));
#line 644 "continuation_info.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__continuation_info__TailVarLvals_15));
#line 644 "continuation_info.m"
                }
#line 644 "continuation_info.m"
              }
#line 642 "continuation_info.m"
            else
#line 649 "continuation_info.m"
#line 649 "continuation_info.m"
              switch (ll_backend__continuation_info__OkToDeleteAny_3) {
#line 649 "continuation_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 649 "continuation_info.m"
                case (MR_Integer) 0:
#line 650 "continuation_info.m"
                  {
#line 651 "continuation_info.m"
                    {
#line 651 "continuation_info.m"
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.continuation_info", (MR_String) "predicate \140ll_backend.continuation_info.find_return_var_lvals\'/5", (MR_String) "no slot");
#line 651 "continuation_info.m"
                      return;
                    }
#line 650 "continuation_info.m"
                  }
#line 649 "continuation_info.m"
                  break;
#line 649 "continuation_info.m"
                case (MR_Integer) 1:
#line 648 "continuation_info.m"
                  *ll_backend__continuation_info__HeadVar__5_5 = ll_backend__continuation_info__TailVarLvals_15;
#line 649 "continuation_info.m"
                  break;
#line 649 "continuation_info.m"
              }
#line 642 "continuation_info.m"
          }
#line 635 "continuation_info.m"
      }
#line 633 "continuation_info.m"
  }
#line 629 "continuation_info.m"
}

#line 567 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__convert_return_data_3_p_0_3(
#line 567 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 567 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 567 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 567 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_3)
#line 567 "continuation_info.m"
{
#line 567 "continuation_info.m"
  {
#line 567 "continuation_info.m"
    MR_Box ll_backend__continuation_info__closure = ll_backend__continuation_info__closure_arg;
#line 567 "continuation_info.m"
    MR_Word ll_backend__continuation_info__conv2_LambdaHeadVar__3_31;

#line 567 "continuation_info.m"
    {
#line 567 "continuation_info.m"
      ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__567__1_3_p_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), &ll_backend__continuation_info__conv2_LambdaHeadVar__3_31);
    }
#line 567 "continuation_info.m"
    *ll_backend__continuation_info__wrapper_arg_3 = ((MR_Box) (ll_backend__continuation_info__conv2_LambdaHeadVar__3_31));
#line 567 "continuation_info.m"
  }
#line 567 "continuation_info.m"
}

#line 562 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__convert_return_data_3_p_0_2(
#line 562 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 562 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 562 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_2)
#line 562 "continuation_info.m"
{
#line 562 "continuation_info.m"
  {
#line 562 "continuation_info.m"
    MR_Box ll_backend__continuation_info__closure = ll_backend__continuation_info__closure_arg;
#line 562 "continuation_info.m"
    MR_Word ll_backend__continuation_info__conv1_LambdaHeadVar__2_27;

#line 562 "continuation_info.m"
    {
#line 562 "continuation_info.m"
      ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__563__1_2_p_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), &ll_backend__continuation_info__conv1_LambdaHeadVar__2_27);
    }
#line 562 "continuation_info.m"
    *ll_backend__continuation_info__wrapper_arg_2 = ((MR_Box) (ll_backend__continuation_info__conv1_LambdaHeadVar__2_27));
#line 562 "continuation_info.m"
  }
#line 562 "continuation_info.m"
}

#line 557 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__convert_return_data_3_p_0_1(
#line 557 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 557 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 557 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_2)
#line 557 "continuation_info.m"
{
#line 557 "continuation_info.m"
  {
#line 557 "continuation_info.m"
    MR_Box ll_backend__continuation_info__closure = ll_backend__continuation_info__closure_arg;
#line 557 "continuation_info.m"
    MR_Word ll_backend__continuation_info__conv0_LambdaHeadVar__2_24;

#line 557 "continuation_info.m"
    {
#line 557 "continuation_info.m"
      ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__557__1_2_p_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), &ll_backend__continuation_info__conv0_LambdaHeadVar__2_24);
    }
#line 557 "continuation_info.m"
    *ll_backend__continuation_info__wrapper_arg_2 = ((MR_Box) (ll_backend__continuation_info__conv0_LambdaHeadVar__2_24));
#line 557 "continuation_info.m"
  }
#line 557 "continuation_info.m"
}

#line 553 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__convert_return_data_3_p_0(
#line 553 "continuation_info.m"
  MR_Word ll_backend__continuation_info__LiveInfos_4,
#line 553 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__VarInfoSet_5,
#line 553 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__TypeInfoMap_6)
#line 553 "continuation_info.m"
{
#line 556 "continuation_info.m"
  {
#line 556 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 556 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeCtorInfo_40_40 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_liveinfo_0;
#line 556 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeCtorInfo_41_41 = (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0;
#line 556 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeInfo_42_42;
#line 556 "continuation_info.m"
    MR_Word ll_backend__continuation_info__VarInfoList_13;
#line 556 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeInfoMapList_18;
#line 556 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Empty_19;
#line 567 "continuation_info.m"
    MR_Box ll_backend__continuation_info__conv3_TypeInfoMap_6;

#line 561 "continuation_info.m"
    {
#line 561 "continuation_info.m"
      mercury__list__map_3_p_0(ll_backend__continuation_info__TypeCtorInfo_40_40, ll_backend__continuation_info__TypeCtorInfo_41_41, (MR_Word) &ll_backend__continuation_info_scalar_common_2[7], ll_backend__continuation_info__LiveInfos_4, &ll_backend__continuation_info__VarInfoList_13);
    }
#line 11606 "ll_backend.continuation_info.c"
    ll_backend__continuation_info__TypeInfo_42_42 = (MR_Word) &ll_backend__continuation_info_scalar_common_2[0];
#line 565 "continuation_info.m"
    {
#line 565 "continuation_info.m"
      mercury__list__map_3_p_0(ll_backend__continuation_info__TypeCtorInfo_40_40, ll_backend__continuation_info__TypeInfo_42_42, (MR_Word) &ll_backend__continuation_info_scalar_common_2[8], ll_backend__continuation_info__LiveInfos_4, &ll_backend__continuation_info__TypeInfoMapList_18);
    }
#line 566 "continuation_info.m"
    {
#line 566 "continuation_info.m"
      mercury__map__init_1_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[2], (MR_Word) &ll_backend__continuation_info_scalar_common_1[3], &ll_backend__continuation_info__Empty_19);
    }
#line 567 "continuation_info.m"
    {
#line 567 "continuation_info.m"
      mercury__list__foldl_4_p_0(ll_backend__continuation_info__TypeInfo_42_42, ll_backend__continuation_info__TypeInfo_42_42, (MR_Word) &ll_backend__continuation_info_scalar_common_2[9], ll_backend__continuation_info__TypeInfoMapList_18, ((MR_Box) (ll_backend__continuation_info__Empty_19)), &ll_backend__continuation_info__conv3_TypeInfoMap_6);
    }
#line 567 "continuation_info.m"
    *ll_backend__continuation_info__TypeInfoMap_6 = ((MR_Word) ll_backend__continuation_info__conv3_TypeInfoMap_6);
#line 570 "continuation_info.m"
    {
#line 570 "continuation_info.m"
      mercury__set__list_to_set_2_p_0(ll_backend__continuation_info__TypeCtorInfo_41_41, ll_backend__continuation_info__VarInfoList_13, ll_backend__continuation_info__VarInfoSet_5);
    }
#line 556 "continuation_info.m"
  }
#line 553 "continuation_info.m"
}

#line 538 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__collect_continuation_4_p_0_1(
#line 538 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 538 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 538 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 538 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_3)
#line 538 "continuation_info.m"
{
#line 538 "continuation_info.m"
  {
#line 538 "continuation_info.m"
    MR_Box ll_backend__continuation_info__closure = ll_backend__continuation_info__closure_arg;
#line 538 "continuation_info.m"
    MR_Word ll_backend__continuation_info__conv1_HeadVar__3_56;

#line 538 "continuation_info.m"
    {
#line 538 "continuation_info.m"
      ll_backend__continuation_info__IntroducedFrom__pred__collect_continuation__538__1_3_p_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), &ll_backend__continuation_info__conv1_HeadVar__3_56);
    }
#line 538 "continuation_info.m"
    *ll_backend__continuation_info__wrapper_arg_3 = ((MR_Box) (ll_backend__continuation_info__conv1_HeadVar__3_56));
#line 538 "continuation_info.m"
  }
#line 538 "continuation_info.m"
}

#line 492 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__collect_continuation_4_p_0(
#line 492 "continuation_info.m"
  MR_Word ll_backend__continuation_info__WantReturnInfo_5,
#line 492 "continuation_info.m"
  MR_Word ll_backend__continuation_info__CallInfo_6,
#line 492 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_Internals_0_36,
#line 492 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_Internals_37)
#line 492 "continuation_info.m"
{
#line 495 "continuation_info.m"
  {
#line 495 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 495 "continuation_info.m"
    MR_Word ll_backend__continuation_info__ReturnLabel_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CallInfo_6, (MR_Integer) 0)));
#line 495 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Target_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CallInfo_6, (MR_Integer) 1)));
#line 495 "continuation_info.m"
    MR_Word ll_backend__continuation_info__LiveInfoList_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CallInfo_6, (MR_Integer) 2)));
#line 495 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CallInfo_6, (MR_Integer) 3)));
#line 495 "continuation_info.m"
    MR_Word ll_backend__continuation_info__MaybeGoalPath_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CallInfo_6, (MR_Integer) 4)));
#line 495 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__ReturnLabelNum_13;
#line 495 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Port0_18;
#line 495 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Resume0_19;
#line 495 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Return0_20;
#line 495 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Return_21;
#line 495 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Internal_35;
#line 507 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Internal0_17;
#line 507 "continuation_info.m"
    MR_Box ll_backend__continuation_info__conv0_Internal0_17;

#line 503 "continuation_info.m"
    if (((MR_tag((MR_Word) ll_backend__continuation_info__ReturnLabel_8)) == (MR_mktag((MR_Integer) 1))))
#line 504 "continuation_info.m"
      {
#line 505 "continuation_info.m"
        {
#line 505 "continuation_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.continuation_info", (MR_String) "predicate \140ll_backend.continuation_info.collect_continuation\'/4", (MR_String) "bad return");
#line 505 "continuation_info.m"
          return;
        }
#line 504 "continuation_info.m"
      }
#line 503 "continuation_info.m"
    else
#line 502 "continuation_info.m"
      {
#line 502 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_14_14;

#line 502 "continuation_info.m"
        ll_backend__continuation_info__ReturnLabelNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ReturnLabel_8, (MR_Integer) 0)));
#line 502 "continuation_info.m"
        ll_backend__continuation_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ReturnLabel_8, (MR_Integer) 1)));
#line 502 "continuation_info.m"
      }
#line 507 "continuation_info.m"
    {
#line 507 "continuation_info.m"
      ll_backend__continuation_info__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0, ll_backend__continuation_info__STATE_VARIABLE_Internals_0_36, ll_backend__continuation_info__ReturnLabelNum_13, &ll_backend__continuation_info__conv0_Internal0_17);
    }
#line 507 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 507 "continuation_info.m"
      {
#line 507 "continuation_info.m"
        ll_backend__continuation_info__Internal0_17 = ((MR_Word) ll_backend__continuation_info__conv0_Internal0_17);
#line 507 "continuation_info.m"
        ll_backend__continuation_info__succeeded = MR_TRUE;
#line 507 "continuation_info.m"
      }
#line 507 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 508 "continuation_info.m"
      {
#line 508 "continuation_info.m"
        ll_backend__continuation_info__Port0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Internal0_17, (MR_Integer) 0)));
#line 508 "continuation_info.m"
        ll_backend__continuation_info__Resume0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Internal0_17, (MR_Integer) 1)));
#line 508 "continuation_info.m"
        ll_backend__continuation_info__Return0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Internal0_17, (MR_Integer) 2)));
#line 508 "continuation_info.m"
      }
#line 507 "continuation_info.m"
    else
#line 510 "continuation_info.m"
      {
#line 510 "continuation_info.m"
        ll_backend__continuation_info__Port0_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 511 "continuation_info.m"
        ll_backend__continuation_info__Resume0_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 512 "continuation_info.m"
        ll_backend__continuation_info__Return0_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 510 "continuation_info.m"
      }
#line 546 "continuation_info.m"
#line 546 "continuation_info.m"
    switch (ll_backend__continuation_info__WantReturnInfo_5) {
#line 546 "continuation_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 546 "continuation_info.m"
      case (MR_Integer) 0:
#line 548 "continuation_info.m"
        ll_backend__continuation_info__Return_21 = ll_backend__continuation_info__Return0_20;
#line 546 "continuation_info.m"
        break;
#line 546 "continuation_info.m"
      case (MR_Integer) 1:
#line 521 "continuation_info.m"
        if ((ll_backend__continuation_info__MaybeGoalPath_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 520 "continuation_info.m"
          ll_backend__continuation_info__Return_21 = ll_backend__continuation_info__Return0_20;
#line 521 "continuation_info.m"
        else
#line 522 "continuation_info.m"
          {
#line 522 "continuation_info.m"
            MR_Word ll_backend__continuation_info__GoalPath_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__MaybeGoalPath_12, (MR_Integer) 0)));
#line 522 "continuation_info.m"
            MR_Word ll_backend__continuation_info__VarInfoSet_23;
#line 522 "continuation_info.m"
            MR_Word ll_backend__continuation_info__TypeInfoMap_24;

#line 523 "continuation_info.m"
            {
#line 523 "continuation_info.m"
              ll_backend__continuation_info__convert_return_data_3_p_0(ll_backend__continuation_info__LiveInfoList_10, &ll_backend__continuation_info__VarInfoSet_23, &ll_backend__continuation_info__TypeInfoMap_24);
            }
#line 530 "continuation_info.m"
            if ((ll_backend__continuation_info__Return0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 525 "continuation_info.m"
              {
#line 525 "continuation_info.m"
                MR_Word ll_backend__continuation_info__Layout_25;
#line 525 "continuation_info.m"
                MR_Word ll_backend__continuation_info__ReturnInfo_26;
#line 525 "continuation_info.m"
                MR_Word ll_backend__continuation_info__V_44_44;
#line 525 "continuation_info.m"
                MR_Word ll_backend__continuation_info__V_45_45;
#line 525 "continuation_info.m"
                MR_Word ll_backend__continuation_info__V_46_46;

#line 526 "continuation_info.m"
                {
#line 526 "continuation_info.m"
                  ll_backend__continuation_info__Layout_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 526 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Layout_25, 0) = ((MR_Box) (ll_backend__continuation_info__VarInfoSet_23));
#line 526 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Layout_25, 1) = ((MR_Box) (ll_backend__continuation_info__TypeInfoMap_24));
#line 526 "continuation_info.m"
                }
#line 528 "continuation_info.m"
                {
#line 528 "continuation_info.m"
                  ll_backend__continuation_info__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 528 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_46_46, 0) = ((MR_Box) (ll_backend__continuation_info__Context_11));
#line 528 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_46_46, 1) = ((MR_Box) (ll_backend__continuation_info__GoalPath_22));
#line 528 "continuation_info.m"
                }
#line 528 "continuation_info.m"
                {
#line 528 "continuation_info.m"
                  ll_backend__continuation_info__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 528 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_45_45, 0) = ((MR_Box) (ll_backend__continuation_info__Target_9));
#line 528 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_45_45, 1) = ((MR_Box) (ll_backend__continuation_info__V_46_46));
#line 528 "continuation_info.m"
                }
#line 528 "continuation_info.m"
                {
#line 528 "continuation_info.m"
                  ll_backend__continuation_info__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 528 "continuation_info.m"
                  MR_hl_field(MR_mktag(1), ll_backend__continuation_info__V_44_44, 0) = ((MR_Box) (ll_backend__continuation_info__V_45_45));
#line 528 "continuation_info.m"
                  MR_hl_field(MR_mktag(1), ll_backend__continuation_info__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 528 "continuation_info.m"
                }
#line 527 "continuation_info.m"
                {
#line 527 "continuation_info.m"
                  ll_backend__continuation_info__ReturnInfo_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 527 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ReturnInfo_26, 0) = ((MR_Box) (ll_backend__continuation_info__V_44_44));
#line 527 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ReturnInfo_26, 1) = ((MR_Box) (ll_backend__continuation_info__Layout_25));
#line 527 "continuation_info.m"
                }
#line 529 "continuation_info.m"
                {
#line 529 "continuation_info.m"
                  ll_backend__continuation_info__Return_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 529 "continuation_info.m"
                  MR_hl_field(MR_mktag(1), ll_backend__continuation_info__Return_21, 0) = ((MR_Box) (ll_backend__continuation_info__ReturnInfo_26));
#line 529 "continuation_info.m"
                }
#line 525 "continuation_info.m"
              }
#line 530 "continuation_info.m"
            else
#line 534 "continuation_info.m"
              {
#line 534 "continuation_info.m"
                MR_Word ll_backend__continuation_info__ReturnInfo0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__Return0_20, (MR_Integer) 0)));
#line 534 "continuation_info.m"
                MR_Word ll_backend__continuation_info__TargetsContexts0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ReturnInfo0_27, (MR_Integer) 0)));
#line 534 "continuation_info.m"
                MR_Word ll_backend__continuation_info__Layout0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ReturnInfo0_27, (MR_Integer) 1)));
#line 534 "continuation_info.m"
                MR_Word ll_backend__continuation_info__LV0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Layout0_29, (MR_Integer) 0)));
#line 534 "continuation_info.m"
                MR_Word ll_backend__continuation_info__TV0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Layout0_29, (MR_Integer) 1)));
#line 534 "continuation_info.m"
                MR_Word ll_backend__continuation_info__LV_32;
#line 534 "continuation_info.m"
                MR_Word ll_backend__continuation_info__TV_33;
#line 534 "continuation_info.m"
                MR_Word ll_backend__continuation_info__TargetContexts_34;
#line 534 "continuation_info.m"
                MR_Word ll_backend__continuation_info__V_42_42;
#line 534 "continuation_info.m"
                MR_Word ll_backend__continuation_info__V_43_43;
#line 534 "continuation_info.m"
                MR_Word ll_backend__continuation_info__Layout_49;
#line 534 "continuation_info.m"
                MR_Word ll_backend__continuation_info__ReturnInfo_50;

#line 537 "continuation_info.m"
                {
#line 537 "continuation_info.m"
                  mercury__set__intersect_3_p_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0, ll_backend__continuation_info__LV0_30, ll_backend__continuation_info__VarInfoSet_23, &ll_backend__continuation_info__LV_32);
                }
#line 538 "continuation_info.m"
                {
#line 538 "continuation_info.m"
                  mercury__map__intersect_4_p_1((MR_Word) &ll_backend__continuation_info_scalar_common_1[3], (MR_Word) &ll_backend__continuation_info_scalar_common_1[2], (MR_Word) &ll_backend__continuation_info_scalar_common_2[6], ll_backend__continuation_info__TV0_31, ll_backend__continuation_info__TypeInfoMap_24, &ll_backend__continuation_info__TV_33);
                }
#line 539 "continuation_info.m"
                {
#line 539 "continuation_info.m"
                  ll_backend__continuation_info__Layout_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 539 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Layout_49, 0) = ((MR_Box) (ll_backend__continuation_info__LV_32));
#line 539 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Layout_49, 1) = ((MR_Box) (ll_backend__continuation_info__TV_33));
#line 539 "continuation_info.m"
                }
#line 540 "continuation_info.m"
                {
#line 540 "continuation_info.m"
                  ll_backend__continuation_info__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 540 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_43_43, 0) = ((MR_Box) (ll_backend__continuation_info__Context_11));
#line 540 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_43_43, 1) = ((MR_Box) (ll_backend__continuation_info__GoalPath_22));
#line 540 "continuation_info.m"
                }
#line 540 "continuation_info.m"
                {
#line 540 "continuation_info.m"
                  ll_backend__continuation_info__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 540 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_42_42, 0) = ((MR_Box) (ll_backend__continuation_info__Target_9));
#line 540 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_42_42, 1) = ((MR_Box) (ll_backend__continuation_info__V_43_43));
#line 540 "continuation_info.m"
                }
#line 541 "continuation_info.m"
                {
#line 541 "continuation_info.m"
                  ll_backend__continuation_info__TargetContexts_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 541 "continuation_info.m"
                  MR_hl_field(MR_mktag(1), ll_backend__continuation_info__TargetContexts_34, 0) = ((MR_Box) (ll_backend__continuation_info__V_42_42));
#line 541 "continuation_info.m"
                  MR_hl_field(MR_mktag(1), ll_backend__continuation_info__TargetContexts_34, 1) = ((MR_Box) (ll_backend__continuation_info__TargetsContexts0_28));
#line 541 "continuation_info.m"
                }
#line 542 "continuation_info.m"
                {
#line 542 "continuation_info.m"
                  ll_backend__continuation_info__ReturnInfo_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 542 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ReturnInfo_50, 0) = ((MR_Box) (ll_backend__continuation_info__TargetContexts_34));
#line 542 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ReturnInfo_50, 1) = ((MR_Box) (ll_backend__continuation_info__Layout_49));
#line 542 "continuation_info.m"
                }
#line 543 "continuation_info.m"
                {
#line 543 "continuation_info.m"
                  ll_backend__continuation_info__Return_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 543 "continuation_info.m"
                  MR_hl_field(MR_mktag(1), ll_backend__continuation_info__Return_21, 0) = ((MR_Box) (ll_backend__continuation_info__ReturnInfo_50));
#line 543 "continuation_info.m"
                }
#line 534 "continuation_info.m"
              }
#line 522 "continuation_info.m"
          }
#line 546 "continuation_info.m"
        break;
#line 546 "continuation_info.m"
    }
#line 550 "continuation_info.m"
    {
#line 550 "continuation_info.m"
      ll_backend__continuation_info__Internal_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 550 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Internal_35, 0) = ((MR_Box) (ll_backend__continuation_info__Port0_18));
#line 550 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Internal_35, 1) = ((MR_Box) (ll_backend__continuation_info__Resume0_19));
#line 550 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Internal_35, 2) = ((MR_Box) (ll_backend__continuation_info__Return_21));
#line 550 "continuation_info.m"
    }
#line 551 "continuation_info.m"
    {
#line 551 "continuation_info.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0, ll_backend__continuation_info__ReturnLabelNum_13, ((MR_Box) (ll_backend__continuation_info__Internal_35)), ll_backend__continuation_info__STATE_VARIABLE_Internals_0_36, ll_backend__continuation_info__STATE_VARIABLE_Internals_37);
    }
#line 495 "continuation_info.m"
  }
#line 492 "continuation_info.m"
}

#line 479 "continuation_info.m"
static MR_bool MR_CALL 
ll_backend__continuation_info__get_call_info_2_p_0(
#line 479 "continuation_info.m"
  MR_Word ll_backend__continuation_info__Instr_3,
#line 479 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__CallInfo_4)
#line 479 "continuation_info.m"
{
#line 481 "continuation_info.m"
  {
#line 481 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 481 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Uinstr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Instr_3, (MR_Integer) 0)));
#line 481 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Target_7;
#line 481 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Return_8;
#line 481 "continuation_info.m"
    MR_Word ll_backend__continuation_info__LiveInfo_9;
#line 481 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Context_10;
#line 481 "continuation_info.m"
    MR_Word ll_backend__continuation_info__GoalPath_11;
#line 481 "continuation_info.m"
    MR_Word ll_backend__continuation_info__ReturnLabel_13;
#line 482 "continuation_info.m"
    MR_String ll_backend__continuation_info___Comment_6 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Instr_3, (MR_Integer) 1)));
#line 483 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_12_12;

#line 483 "continuation_info.m"
    ll_backend__continuation_info__succeeded = ((((MR_tag((MR_Word) ll_backend__continuation_info__Uinstr_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__continuation_info__Uinstr_5, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 483 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 483 "continuation_info.m"
      {
#line 483 "continuation_info.m"
        ll_backend__continuation_info__Target_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__continuation_info__Uinstr_5, (MR_Integer) 1)));
#line 483 "continuation_info.m"
        ll_backend__continuation_info__Return_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__continuation_info__Uinstr_5, (MR_Integer) 2)));
#line 483 "continuation_info.m"
        ll_backend__continuation_info__LiveInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__continuation_info__Uinstr_5, (MR_Integer) 3)));
#line 483 "continuation_info.m"
        ll_backend__continuation_info__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__continuation_info__Uinstr_5, (MR_Integer) 4)));
#line 483 "continuation_info.m"
        ll_backend__continuation_info__GoalPath_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__continuation_info__Uinstr_5, (MR_Integer) 5)));
#line 483 "continuation_info.m"
        ll_backend__continuation_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__continuation_info__Uinstr_5, (MR_Integer) 6)));
#line 484 "continuation_info.m"
        ll_backend__continuation_info__succeeded = ((MR_tag((MR_Word) ll_backend__continuation_info__Return_8)) == (MR_mktag((MR_Integer) 1)));
#line 484 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 484 "continuation_info.m"
          {
#line 484 "continuation_info.m"
            ll_backend__continuation_info__ReturnLabel_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__Return_8, (MR_Integer) 0)));
#line 485 "continuation_info.m"
            {
#line 485 "continuation_info.m"
              MR_Word base;
#line 485 "continuation_info.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 485 "continuation_info.m"
              *ll_backend__continuation_info__CallInfo_4 = base;
#line 485 "continuation_info.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__continuation_info__ReturnLabel_13));
#line 485 "continuation_info.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__continuation_info__Target_7));
#line 485 "continuation_info.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__continuation_info__LiveInfo_9));
#line 485 "continuation_info.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__continuation_info__Context_10));
#line 485 "continuation_info.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__continuation_info__GoalPath_11));
#line 485 "continuation_info.m"
            }
#line 485 "continuation_info.m"
            ll_backend__continuation_info__succeeded = MR_TRUE;
#line 484 "continuation_info.m"
          }
#line 483 "continuation_info.m"
      }
#line 481 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 481 "continuation_info.m"
  }
#line 479 "continuation_info.m"
}

#line 474 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__collect_call_continuations_in_cproc_4_p_0_2(
#line 474 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 474 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 474 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 474 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_3)
#line 474 "continuation_info.m"
{
#line 474 "continuation_info.m"
  {
#line 474 "continuation_info.m"
    MR_Box ll_backend__continuation_info__closure = ll_backend__continuation_info__closure_arg;
#line 474 "continuation_info.m"
    MR_Word ll_backend__continuation_info__conv1_STATE_VARIABLE_Internals_37;

#line 474 "continuation_info.m"
    {
#line 474 "continuation_info.m"
      ll_backend__continuation_info__collect_continuation_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), &ll_backend__continuation_info__conv1_STATE_VARIABLE_Internals_37);
    }
#line 474 "continuation_info.m"
    *ll_backend__continuation_info__wrapper_arg_3 = ((MR_Box) (ll_backend__continuation_info__conv1_STATE_VARIABLE_Internals_37));
#line 474 "continuation_info.m"
  }
#line 474 "continuation_info.m"
}

#line 473 "continuation_info.m"
static MR_bool MR_CALL 
ll_backend__continuation_info__collect_call_continuations_in_cproc_4_p_0_1(
#line 473 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 473 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 473 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_2)
#line 473 "continuation_info.m"
{
#line 473 "continuation_info.m"
  {
#line 473 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 473 "continuation_info.m"
    MR_Box ll_backend__continuation_info__closure = ll_backend__continuation_info__closure_arg;
#line 473 "continuation_info.m"
    MR_Word ll_backend__continuation_info__conv0_CallInfo_4;

#line 473 "continuation_info.m"
    {
#line 473 "continuation_info.m"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info__get_call_info_2_p_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), &ll_backend__continuation_info__conv0_CallInfo_4);
    }
#line 473 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 473 "continuation_info.m"
      {
#line 473 "continuation_info.m"
        *ll_backend__continuation_info__wrapper_arg_2 = ((MR_Box) (ll_backend__continuation_info__conv0_CallInfo_4));
#line 473 "continuation_info.m"
        ll_backend__continuation_info__succeeded = MR_TRUE;
#line 473 "continuation_info.m"
      }
#line 473 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 473 "continuation_info.m"
  }
#line 473 "continuation_info.m"
}

#line 465 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__collect_call_continuations_in_cproc_4_p_0(
#line 465 "continuation_info.m"
  MR_Word ll_backend__continuation_info__WantReturnInfo_5,
#line 465 "continuation_info.m"
  MR_Word ll_backend__continuation_info__CProc_6,
#line 465 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_GlobalData_0_15,
#line 465 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_GlobalData_16)
#line 465 "continuation_info.m"
{
#line 468 "continuation_info.m"
  {
#line 468 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 468 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeCtorInfo_86_86;
#line 468 "continuation_info.m"
    MR_Word ll_backend__continuation_info__PredProcId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 2)));
#line 468 "continuation_info.m"
    MR_Word ll_backend__continuation_info__ProcLayoutInfo0_9;
#line 468 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Instrs_10;
#line 468 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Internals0_11;
#line 468 "continuation_info.m"
    MR_Word ll_backend__continuation_info__CallInfos_12;
#line 468 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Internals_13;
#line 468 "continuation_info.m"
    MR_Word ll_backend__continuation_info__ProcLayoutInfo_14;
#line 468 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_18_18;
#line 469 "continuation_info.m"
    MR_String ll_backend__continuation_info__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 0)));
#line 469 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 1)));
#line 469 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 3)));
#line 469 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 4)));
#line 469 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 5)));
#line 469 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 6)));
#line 469 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 7)));
#line 469 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 8)));
#line 471 "continuation_info.m"
    MR_String ll_backend__continuation_info__V_28_28;
#line 471 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__V_29_29;
#line 471 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_30_30;
#line 471 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_31_31;
#line 471 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_32_32;
#line 471 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_33_33;
#line 471 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_34_34;
#line 471 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_35_35;
#line 472 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_36_36;
#line 472 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_37_37;
#line 472 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_38_38;
#line 472 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__V_39_39;
#line 472 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_40_40;
#line 472 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_41_41;
#line 472 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_42_42;
#line 472 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_43_43;
#line 472 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__V_44_44;
#line 472 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__V_45_45;
#line 472 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_46_46;
#line 472 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_47_47;
#line 472 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_48_48;
#line 472 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_49_49;
#line 472 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_50_50;
#line 472 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_51_51;
#line 472 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_52_52;
#line 472 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_53_53;
#line 472 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_54_54;
#line 472 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_55_55;
#line 472 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_56_56;
#line 472 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_57_57;
#line 472 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_58_58;
#line 474 "continuation_info.m"
    MR_Box ll_backend__continuation_info__conv2_Internals_13;
#line 476 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_59_59;
#line 476 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_60_60;
#line 476 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_61_61;
#line 476 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__V_62_62;
#line 476 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_63_63;
#line 476 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_64_64;
#line 476 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_65_65;
#line 476 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_66_66;
#line 476 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__V_67_67;
#line 476 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__V_68_68;
#line 476 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_69_69;
#line 476 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_70_70;
#line 476 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_71_71;
#line 476 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_72_72;
#line 476 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_73_73;
#line 476 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_74_74;
#line 476 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_75_75;
#line 476 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_76_76;
#line 476 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_77_77;
#line 476 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_79_79;
#line 476 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_80_80;
#line 476 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_81_81;
#line 476 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_82_82;
#line 476 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_78_78;

#line 470 "continuation_info.m"
    {
#line 470 "continuation_info.m"
      ll_backend__global_data__global_data_get_proc_layout_3_p_0(ll_backend__continuation_info__STATE_VARIABLE_GlobalData_0_15, ll_backend__continuation_info__PredProcId_8, &ll_backend__continuation_info__ProcLayoutInfo0_9);
    }
#line 471 "continuation_info.m"
    ll_backend__continuation_info__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 0)));
#line 471 "continuation_info.m"
    ll_backend__continuation_info__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 1)));
#line 471 "continuation_info.m"
    ll_backend__continuation_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 2)));
#line 471 "continuation_info.m"
    ll_backend__continuation_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 3)));
#line 471 "continuation_info.m"
    ll_backend__continuation_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 4)));
#line 471 "continuation_info.m"
    ll_backend__continuation_info__Instrs_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 5)));
#line 471 "continuation_info.m"
    ll_backend__continuation_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 6)));
#line 471 "continuation_info.m"
    ll_backend__continuation_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 7)));
#line 471 "continuation_info.m"
    ll_backend__continuation_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 8)));
#line 472 "continuation_info.m"
    ll_backend__continuation_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 0)));
#line 472 "continuation_info.m"
    ll_backend__continuation_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 1)));
#line 472 "continuation_info.m"
    ll_backend__continuation_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 2)));
#line 472 "continuation_info.m"
    ll_backend__continuation_info__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 3)));
#line 472 "continuation_info.m"
    ll_backend__continuation_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 4)));
#line 472 "continuation_info.m"
    ll_backend__continuation_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 5)));
#line 472 "continuation_info.m"
    ll_backend__continuation_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 6)));
#line 472 "continuation_info.m"
    ll_backend__continuation_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 7)));
#line 472 "continuation_info.m"
    ll_backend__continuation_info__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 8)));
#line 472 "continuation_info.m"
    ll_backend__continuation_info__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 9)));
#line 472 "continuation_info.m"
    ll_backend__continuation_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 10)));
#line 472 "continuation_info.m"
    ll_backend__continuation_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 11)));
#line 472 "continuation_info.m"
    ll_backend__continuation_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 12)));
#line 472 "continuation_info.m"
    ll_backend__continuation_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 13)));
#line 472 "continuation_info.m"
    ll_backend__continuation_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 14)));
#line 472 "continuation_info.m"
    ll_backend__continuation_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 15)));
#line 472 "continuation_info.m"
    ll_backend__continuation_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 16)));
#line 472 "continuation_info.m"
    ll_backend__continuation_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 17)));
#line 472 "continuation_info.m"
    ll_backend__continuation_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 18)));
#line 472 "continuation_info.m"
    ll_backend__continuation_info__Internals0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 19)));
#line 472 "continuation_info.m"
    ll_backend__continuation_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 20)));
#line 472 "continuation_info.m"
    ll_backend__continuation_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 21)));
#line 472 "continuation_info.m"
    ll_backend__continuation_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 22)));
#line 472 "continuation_info.m"
    ll_backend__continuation_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 23)));
#line 12411 "ll_backend.continuation_info.c"
    ll_backend__continuation_info__TypeCtorInfo_86_86 = (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_call_info_0;
#line 473 "continuation_info.m"
    {
#line 473 "continuation_info.m"
      mercury__list__filter_map_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__continuation_info__TypeCtorInfo_86_86, (MR_Word) &ll_backend__continuation_info_scalar_common_2[5], ll_backend__continuation_info__Instrs_10, &ll_backend__continuation_info__CallInfos_12);
    }
#line 474 "continuation_info.m"
    {
#line 474 "continuation_info.m"
      ll_backend__continuation_info__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 474 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_18_18, 0) = ((MR_Box) (&ll_backend__continuation_info_scalar_common_5[1]));
#line 474 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_18_18, 1) = ((MR_Box) (ll_backend__continuation_info__collect_call_continuations_in_cproc_4_p_0_2));
#line 474 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 474 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_18_18, 3) = ((MR_Box) (ll_backend__continuation_info__WantReturnInfo_5));
#line 474 "continuation_info.m"
    }
#line 474 "continuation_info.m"
    {
#line 474 "continuation_info.m"
      mercury__list__foldl_4_p_0(ll_backend__continuation_info__TypeCtorInfo_86_86, (MR_Word) &ll_backend__continuation_info_scalar_common_2[1], ll_backend__continuation_info__V_18_18, ll_backend__continuation_info__CallInfos_12, ((MR_Box) (ll_backend__continuation_info__Internals0_11)), &ll_backend__continuation_info__conv2_Internals_13);
    }
#line 474 "continuation_info.m"
    ll_backend__continuation_info__Internals_13 = ((MR_Word) ll_backend__continuation_info__conv2_Internals_13);
#line 476 "continuation_info.m"
    ll_backend__continuation_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 0)));
#line 476 "continuation_info.m"
    ll_backend__continuation_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 1)));
#line 476 "continuation_info.m"
    ll_backend__continuation_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 2)));
#line 476 "continuation_info.m"
    ll_backend__continuation_info__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 3)));
#line 476 "continuation_info.m"
    ll_backend__continuation_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 4)));
#line 476 "continuation_info.m"
    ll_backend__continuation_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 5)));
#line 476 "continuation_info.m"
    ll_backend__continuation_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 6)));
#line 476 "continuation_info.m"
    ll_backend__continuation_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 7)));
#line 476 "continuation_info.m"
    ll_backend__continuation_info__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 8)));
#line 476 "continuation_info.m"
    ll_backend__continuation_info__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 9)));
#line 476 "continuation_info.m"
    ll_backend__continuation_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 10)));
#line 476 "continuation_info.m"
    ll_backend__continuation_info__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 11)));
#line 476 "continuation_info.m"
    ll_backend__continuation_info__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 12)));
#line 476 "continuation_info.m"
    ll_backend__continuation_info__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 13)));
#line 476 "continuation_info.m"
    ll_backend__continuation_info__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 14)));
#line 476 "continuation_info.m"
    ll_backend__continuation_info__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 15)));
#line 476 "continuation_info.m"
    ll_backend__continuation_info__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 16)));
#line 476 "continuation_info.m"
    ll_backend__continuation_info__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 17)));
#line 476 "continuation_info.m"
    ll_backend__continuation_info__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 18)));
#line 476 "continuation_info.m"
    ll_backend__continuation_info__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 19)));
#line 476 "continuation_info.m"
    ll_backend__continuation_info__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 20)));
#line 476 "continuation_info.m"
    ll_backend__continuation_info__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 21)));
#line 476 "continuation_info.m"
    ll_backend__continuation_info__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 22)));
#line 476 "continuation_info.m"
    ll_backend__continuation_info__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_9, (MR_Integer) 23)));
#line 476 "continuation_info.m"
    {
#line 476 "continuation_info.m"
      ll_backend__continuation_info__ProcLayoutInfo_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 24 * sizeof(MR_Word)), NULL, NULL);
#line 476 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_14, 0) = ((MR_Box) (ll_backend__continuation_info__V_59_59));
#line 476 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_14, 1) = ((MR_Box) (ll_backend__continuation_info__V_60_60));
#line 476 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_14, 2) = ((MR_Box) (ll_backend__continuation_info__V_61_61));
#line 476 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_14, 3) = ((MR_Box) (ll_backend__continuation_info__V_62_62));
#line 476 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_14, 4) = ((MR_Box) (ll_backend__continuation_info__V_63_63));
#line 476 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_14, 5) = ((MR_Box) (ll_backend__continuation_info__V_64_64));
#line 476 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_14, 6) = ((MR_Box) (ll_backend__continuation_info__V_65_65));
#line 476 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_14, 7) = ((MR_Box) (ll_backend__continuation_info__V_66_66));
#line 476 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_14, 8) = ((MR_Box) (ll_backend__continuation_info__V_67_67));
#line 476 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_14, 9) = ((MR_Box) (ll_backend__continuation_info__V_68_68));
#line 476 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_14, 10) = ((MR_Box) (ll_backend__continuation_info__V_69_69));
#line 476 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_14, 11) = ((MR_Box) (ll_backend__continuation_info__V_70_70));
#line 476 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_14, 12) = ((MR_Box) (ll_backend__continuation_info__V_71_71));
#line 476 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_14, 13) = ((MR_Box) (ll_backend__continuation_info__V_72_72));
#line 476 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_14, 14) = ((MR_Box) (ll_backend__continuation_info__V_73_73));
#line 476 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_14, 15) = ((MR_Box) (ll_backend__continuation_info__V_74_74));
#line 476 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_14, 16) = ((MR_Box) (ll_backend__continuation_info__V_75_75));
#line 476 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_14, 17) = ((MR_Box) (ll_backend__continuation_info__V_76_76));
#line 476 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_14, 18) = ((MR_Box) (ll_backend__continuation_info__V_77_77));
#line 476 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_14, 19) = ((MR_Box) (ll_backend__continuation_info__Internals_13));
#line 476 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_14, 20) = ((MR_Box) (ll_backend__continuation_info__V_79_79));
#line 476 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_14, 21) = ((MR_Box) (ll_backend__continuation_info__V_80_80));
#line 476 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_14, 22) = ((MR_Box) (ll_backend__continuation_info__V_81_81));
#line 476 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_14, 23) = ((MR_Box) (ll_backend__continuation_info__V_82_82));
#line 476 "continuation_info.m"
    }
#line 477 "continuation_info.m"
    {
#line 477 "continuation_info.m"
      ll_backend__global_data__global_data_update_proc_layout_4_p_0(ll_backend__continuation_info__PredProcId_8, ll_backend__continuation_info__ProcLayoutInfo_14, ll_backend__continuation_info__STATE_VARIABLE_GlobalData_0_15, ll_backend__continuation_info__STATE_VARIABLE_GlobalData_16);
    }
#line 468 "continuation_info.m"
  }
#line 465 "continuation_info.m"
}

#line 944 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__generate_table_arg_type_info_3_p_0_2(
#line 944 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 944 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 944 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_2)
#line 944 "continuation_info.m"
{
#line 944 "continuation_info.m"
  {
#line 944 "continuation_info.m"
    MR_Box ll_backend__continuation_info__closure = ll_backend__continuation_info__closure_arg;
#line 944 "continuation_info.m"
    MR_Word ll_backend__continuation_info__conv1_LambdaHeadVar__2_23;

#line 944 "continuation_info.m"
    {
#line 944 "continuation_info.m"
      ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars_table__945__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__continuation_info__wrapper_arg_1), &ll_backend__continuation_info__conv1_LambdaHeadVar__2_23);
    }
#line 944 "continuation_info.m"
    *ll_backend__continuation_info__wrapper_arg_2 = ((MR_Box) (ll_backend__continuation_info__conv1_LambdaHeadVar__2_23));
#line 944 "continuation_info.m"
  }
#line 944 "continuation_info.m"
}

#line 942 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__generate_table_arg_type_info_3_p_0_1(
#line 942 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 942 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 942 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_2)
#line 942 "continuation_info.m"
{
#line 942 "continuation_info.m"
  {
#line 942 "continuation_info.m"
    MR_Box ll_backend__continuation_info__closure = ll_backend__continuation_info__closure_arg;
#line 942 "continuation_info.m"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__3_3;

#line 942 "continuation_info.m"
    {
#line 942 "continuation_info.m"
      hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__continuation_info__wrapper_arg_1), &ll_backend__continuation_info__conv0_HeadVar__3_3);
    }
#line 942 "continuation_info.m"
    *ll_backend__continuation_info__wrapper_arg_2 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__3_3));
#line 942 "continuation_info.m"
  }
#line 942 "continuation_info.m"
}

#line 405 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info__generate_table_arg_type_info_3_p_0(
#line 405 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ProcInfo_4,
#line 405 "continuation_info.m"
  MR_Word ll_backend__continuation_info__NumberedVars_5,
#line 405 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__TableArgInfos_6)
#line 405 "continuation_info.m"
{
#line 905 "continuation_info.m"
  {
#line 905 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 905 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeInfo_14_14;
#line 905 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeInfo_35_45;
#line 905 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeCtorInfo_36_46;
#line 905 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeCtorInfo_42_52;
#line 905 "continuation_info.m"
    MR_Word ll_backend__continuation_info__VarSet_7;
#line 905 "continuation_info.m"
    MR_Word ll_backend__continuation_info__VarTypes_8;
#line 905 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeVars0_9;
#line 905 "continuation_info.m"
    MR_Word ll_backend__continuation_info__ArgLayouts_10;
#line 905 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeVars_11;
#line 905 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeVarsList_12;
#line 905 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeInfoDataMap_13;
#line 905 "continuation_info.m"
    MR_Word ll_backend__continuation_info__VarSet_19;
#line 905 "continuation_info.m"
    MR_Word ll_backend__continuation_info__RttiVarMaps_20;
#line 905 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeInfoLocns_21;
#line 905 "continuation_info.m"
    MR_Word ll_backend__continuation_info__FindLocn_22;
#line 905 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeInfoVarLocns_30;
#line 905 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_31_31;

#line 906 "continuation_info.m"
    {
#line 906 "continuation_info.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(ll_backend__continuation_info__ProcInfo_4, &ll_backend__continuation_info__VarSet_7);
    }
#line 907 "continuation_info.m"
    {
#line 907 "continuation_info.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__continuation_info__ProcInfo_4, &ll_backend__continuation_info__VarTypes_8);
    }
#line 12671 "ll_backend.continuation_info.c"
    ll_backend__continuation_info__TypeInfo_14_14 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[2];
#line 908 "continuation_info.m"
    {
#line 908 "continuation_info.m"
      mercury__set__init_1_p_0(ll_backend__continuation_info__TypeInfo_14_14, &ll_backend__continuation_info__TypeVars0_9);
    }
#line 909 "continuation_info.m"
    {
#line 909 "continuation_info.m"
      ll_backend__continuation_info__build_table_arg_info_6_p_0(ll_backend__continuation_info__VarSet_7, ll_backend__continuation_info__VarTypes_8, ll_backend__continuation_info__NumberedVars_5, &ll_backend__continuation_info__ArgLayouts_10, ll_backend__continuation_info__TypeVars0_9, &ll_backend__continuation_info__TypeVars_11);
    }
#line 911 "continuation_info.m"
    {
#line 911 "continuation_info.m"
      mercury__set__to_sorted_list_2_p_0(ll_backend__continuation_info__TypeInfo_14_14, ll_backend__continuation_info__TypeVars_11, &ll_backend__continuation_info__TypeVarsList_12);
    }
#line 940 "continuation_info.m"
    {
#line 940 "continuation_info.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(ll_backend__continuation_info__ProcInfo_4, &ll_backend__continuation_info__VarSet_19);
    }
#line 941 "continuation_info.m"
    {
#line 941 "continuation_info.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ll_backend__continuation_info__ProcInfo_4, &ll_backend__continuation_info__RttiVarMaps_20);
    }
#line 942 "continuation_info.m"
    {
#line 942 "continuation_info.m"
      ll_backend__continuation_info__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 942 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_31_31, 0) = ((MR_Box) (&ll_backend__continuation_info_scalar_common_4[0]));
#line 942 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_31_31, 1) = ((MR_Box) (ll_backend__continuation_info__generate_table_arg_type_info_3_p_0_1));
#line 942 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 942 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_31_31, 3) = ((MR_Box) (ll_backend__continuation_info__RttiVarMaps_20));
#line 942 "continuation_info.m"
    }
#line 12712 "ll_backend.continuation_info.c"
    ll_backend__continuation_info__TypeInfo_35_45 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[2];
#line 12714 "ll_backend.continuation_info.c"
    ll_backend__continuation_info__TypeCtorInfo_36_46 = (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0;
#line 942 "continuation_info.m"
    {
#line 942 "continuation_info.m"
      mercury__list__map_3_p_0(ll_backend__continuation_info__TypeInfo_35_45, ll_backend__continuation_info__TypeCtorInfo_36_46, ll_backend__continuation_info__V_31_31, ll_backend__continuation_info__TypeVarsList_12, &ll_backend__continuation_info__TypeInfoLocns_21);
    }
#line 944 "continuation_info.m"
    {
#line 944 "continuation_info.m"
      ll_backend__continuation_info__FindLocn_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 944 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__FindLocn_22, 0) = ((MR_Box) (&ll_backend__continuation_info_scalar_common_5[0]));
#line 944 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__FindLocn_22, 1) = ((MR_Box) (ll_backend__continuation_info__generate_table_arg_type_info_3_p_0_2));
#line 944 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__FindLocn_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 944 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__FindLocn_22, 3) = ((MR_Box) (ll_backend__continuation_info__NumberedVars_5));
#line 944 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__FindLocn_22, 4) = ((MR_Box) (ll_backend__continuation_info__VarSet_19));
#line 944 "continuation_info.m"
    }
#line 12737 "ll_backend.continuation_info.c"
    ll_backend__continuation_info__TypeCtorInfo_42_52 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_locn_0;
#line 964 "continuation_info.m"
    {
#line 964 "continuation_info.m"
      mercury__list__map_3_p_0(ll_backend__continuation_info__TypeCtorInfo_36_46, ll_backend__continuation_info__TypeCtorInfo_42_52, ll_backend__continuation_info__FindLocn_22, ll_backend__continuation_info__TypeInfoLocns_21, &ll_backend__continuation_info__TypeInfoVarLocns_30);
    }
#line 965 "continuation_info.m"
    {
#line 965 "continuation_info.m"
      mercury__map__from_corresponding_lists_3_p_0(ll_backend__continuation_info__TypeInfo_35_45, ll_backend__continuation_info__TypeCtorInfo_42_52, ll_backend__continuation_info__TypeVarsList_12, ll_backend__continuation_info__TypeInfoVarLocns_30, &ll_backend__continuation_info__TypeInfoDataMap_13);
    }
#line 914 "continuation_info.m"
    {
#line 914 "continuation_info.m"
      MR_Word base;
#line 914 "continuation_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 914 "continuation_info.m"
      *ll_backend__continuation_info__TableArgInfos_6 = base;
#line 914 "continuation_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__continuation_info__ArgLayouts_10));
#line 914 "continuation_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__continuation_info__TypeInfoDataMap_13));
#line 914 "continuation_info.m"
    }
#line 905 "continuation_info.m"
  }
#line 405 "continuation_info.m"
}

#line 869 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__find_typeinfos_for_tvars_4_p_0_1(
#line 869 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 869 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 869 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 869 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_3)
#line 869 "continuation_info.m"
{
#line 869 "continuation_info.m"
  {
#line 869 "continuation_info.m"
    MR_Box ll_backend__continuation_info__closure = ll_backend__continuation_info__closure_arg;
#line 869 "continuation_info.m"
    MR_Word ll_backend__continuation_info__conv0_STATE_VARIABLE_TypeInfoDataMap_18;

#line 869 "continuation_info.m"
    {
#line 869 "continuation_info.m"
      ll_backend__continuation_info__gather_type_info_layout_locns_for_tvar_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__closure, (MR_Integer) 5))), ((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), &ll_backend__continuation_info__conv0_STATE_VARIABLE_TypeInfoDataMap_18);
    }
#line 869 "continuation_info.m"
    *ll_backend__continuation_info__wrapper_arg_3 = ((MR_Box) (ll_backend__continuation_info__conv0_STATE_VARIABLE_TypeInfoDataMap_18));
#line 869 "continuation_info.m"
  }
#line 869 "continuation_info.m"
}

#line 402 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info__find_typeinfos_for_tvars_4_p_0(
#line 402 "continuation_info.m"
  MR_Word ll_backend__continuation_info__TypeVars_5,
#line 402 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarLocs_6,
#line 402 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ProcInfo_7,
#line 402 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__TypeInfoDataMap_8)
#line 402 "continuation_info.m"
{
#line 865 "continuation_info.m"
  {
#line 865 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 865 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeInfo_16_16;
#line 865 "continuation_info.m"
    MR_Word ll_backend__continuation_info__VarSet_9;
#line 865 "continuation_info.m"
    MR_Word ll_backend__continuation_info__RttiVarMaps_10;
#line 865 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_11_11;
#line 865 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_12_12;
#line 868 "continuation_info.m"
    MR_Box ll_backend__continuation_info__conv1_TypeInfoDataMap_8;

#line 866 "continuation_info.m"
    {
#line 866 "continuation_info.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(ll_backend__continuation_info__ProcInfo_7, &ll_backend__continuation_info__VarSet_9);
    }
#line 867 "continuation_info.m"
    {
#line 867 "continuation_info.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ll_backend__continuation_info__ProcInfo_7, &ll_backend__continuation_info__RttiVarMaps_10);
    }
#line 869 "continuation_info.m"
    {
#line 869 "continuation_info.m"
      ll_backend__continuation_info__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 869 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_11_11, 0) = ((MR_Box) (&ll_backend__continuation_info_scalar_common_3[0]));
#line 869 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_11_11, 1) = ((MR_Box) (ll_backend__continuation_info__find_typeinfos_for_tvars_4_p_0_1));
#line 869 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 869 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_11_11, 3) = ((MR_Box) (ll_backend__continuation_info__VarSet_9));
#line 869 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_11_11, 4) = ((MR_Box) (ll_backend__continuation_info__RttiVarMaps_10));
#line 869 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_11_11, 5) = ((MR_Box) (ll_backend__continuation_info__VarLocs_6));
#line 869 "continuation_info.m"
    }
#line 12858 "ll_backend.continuation_info.c"
    ll_backend__continuation_info__TypeInfo_16_16 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[2];
#line 870 "continuation_info.m"
    {
#line 870 "continuation_info.m"
      ll_backend__continuation_info__V_12_12 = mercury__map__init_0_f_0(ll_backend__continuation_info__TypeInfo_16_16, (MR_Word) &ll_backend__continuation_info_scalar_common_1[3]);
    }
#line 868 "continuation_info.m"
    {
#line 868 "continuation_info.m"
      mercury__list__foldl_4_p_0(ll_backend__continuation_info__TypeInfo_16_16, (MR_Word) &ll_backend__continuation_info_scalar_common_2[0], ll_backend__continuation_info__V_11_11, ll_backend__continuation_info__TypeVars_5, ((MR_Box) (ll_backend__continuation_info__V_12_12)), &ll_backend__continuation_info__conv1_TypeInfoDataMap_8);
    }
#line 868 "continuation_info.m"
    *ll_backend__continuation_info__TypeInfoDataMap_8 = ((MR_Word) ll_backend__continuation_info__conv1_TypeInfoDataMap_8);
#line 865 "continuation_info.m"
  }
#line 402 "continuation_info.m"
}

#line 396 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info__generate_closure_layout_4_p_0(
#line 396 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ModuleInfo_5,
#line 396 "continuation_info.m"
  MR_Word ll_backend__continuation_info__PredId_6,
#line 396 "continuation_info.m"
  MR_Integer ll_backend__continuation_info__ProcId_7,
#line 396 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__ClosureLayout_8)
#line 396 "continuation_info.m"
{
#line 807 "continuation_info.m"
  {
#line 807 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 807 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeInfo_30_30;
#line 807 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Globals_9;
#line 807 "continuation_info.m"
    MR_Word ll_backend__continuation_info__UseFloatRegs_10;
#line 807 "continuation_info.m"
    MR_Word ll_backend__continuation_info__PredInfo_11;
#line 807 "continuation_info.m"
    MR_Word ll_backend__continuation_info__ProcInfo_12;
#line 807 "continuation_info.m"
    MR_Word ll_backend__continuation_info__HeadVars_13;
#line 807 "continuation_info.m"
    MR_Word ll_backend__continuation_info__ArgInfos_14;
#line 807 "continuation_info.m"
    MR_Word ll_backend__continuation_info__ArgTypes_15;
#line 807 "continuation_info.m"
    MR_Word ll_backend__continuation_info__InstMap_16;
#line 807 "continuation_info.m"
    MR_Word ll_backend__continuation_info__VarLocs0_17;
#line 807 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeVars0_18;
#line 817 "continuation_info.m"
    MR_Word ll_backend__continuation_info__ArgLayouts_19;
#line 817 "continuation_info.m"
    MR_Word ll_backend__continuation_info__VarLocs_20;
#line 817 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeVars_21;

#line 808 "continuation_info.m"
    {
#line 808 "continuation_info.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__continuation_info__ModuleInfo_5, &ll_backend__continuation_info__Globals_9);
    }
#line 809 "continuation_info.m"
    {
#line 809 "continuation_info.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__continuation_info__Globals_9, (MR_Integer) 251, &ll_backend__continuation_info__UseFloatRegs_10);
    }
#line 810 "continuation_info.m"
    {
#line 810 "continuation_info.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(ll_backend__continuation_info__ModuleInfo_5, ll_backend__continuation_info__PredId_6, ll_backend__continuation_info__ProcId_7, &ll_backend__continuation_info__PredInfo_11, &ll_backend__continuation_info__ProcInfo_12);
    }
#line 811 "continuation_info.m"
    {
#line 811 "continuation_info.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ll_backend__continuation_info__ProcInfo_12, &ll_backend__continuation_info__HeadVars_13);
    }
#line 812 "continuation_info.m"
    {
#line 812 "continuation_info.m"
      hlds__hlds_pred__proc_info_arg_info_2_p_0(ll_backend__continuation_info__ProcInfo_12, &ll_backend__continuation_info__ArgInfos_14);
    }
#line 813 "continuation_info.m"
    {
#line 813 "continuation_info.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(ll_backend__continuation_info__PredInfo_11, &ll_backend__continuation_info__ArgTypes_15);
    }
#line 814 "continuation_info.m"
    {
#line 814 "continuation_info.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(ll_backend__continuation_info__ProcInfo_12, ll_backend__continuation_info__ModuleInfo_5, &ll_backend__continuation_info__InstMap_16);
    }
#line 815 "continuation_info.m"
    {
#line 815 "continuation_info.m"
      mercury__map__init_1_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[0], (MR_Word) &ll_backend__continuation_info_scalar_common_1[1], &ll_backend__continuation_info__VarLocs0_17);
    }
#line 12963 "ll_backend.continuation_info.c"
    ll_backend__continuation_info__TypeInfo_30_30 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[2];
#line 816 "continuation_info.m"
    {
#line 816 "continuation_info.m"
      mercury__set__init_1_p_0(ll_backend__continuation_info__TypeInfo_30_30, &ll_backend__continuation_info__TypeVars0_18);
    }
#line 818 "continuation_info.m"
    {
#line 818 "continuation_info.m"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info__build_closure_info_10_p_0(ll_backend__continuation_info__HeadVars_13, ll_backend__continuation_info__ArgTypes_15, ll_backend__continuation_info__ArgInfos_14, &ll_backend__continuation_info__ArgLayouts_19, ll_backend__continuation_info__InstMap_16, ll_backend__continuation_info__UseFloatRegs_10, ll_backend__continuation_info__VarLocs0_17, &ll_backend__continuation_info__VarLocs_20, ll_backend__continuation_info__TypeVars0_18, &ll_backend__continuation_info__TypeVars_21);
    }
#line 817 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 821 "continuation_info.m"
      {
#line 821 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeVarsList_22;
#line 821 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfoDataMap_23;

#line 821 "continuation_info.m"
        {
#line 821 "continuation_info.m"
          mercury__set__to_sorted_list_2_p_0(ll_backend__continuation_info__TypeInfo_30_30, ll_backend__continuation_info__TypeVars_21, &ll_backend__continuation_info__TypeVarsList_22);
        }
#line 822 "continuation_info.m"
        {
#line 822 "continuation_info.m"
          ll_backend__continuation_info__find_typeinfos_for_tvars_4_p_0(ll_backend__continuation_info__TypeVarsList_22, ll_backend__continuation_info__VarLocs_20, ll_backend__continuation_info__ProcInfo_12, &ll_backend__continuation_info__TypeInfoDataMap_23);
        }
#line 824 "continuation_info.m"
        {
#line 824 "continuation_info.m"
          MR_Word base;
#line 824 "continuation_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 824 "continuation_info.m"
          *ll_backend__continuation_info__ClosureLayout_8 = base;
#line 824 "continuation_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__continuation_info__ArgLayouts_19));
#line 824 "continuation_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__continuation_info__TypeInfoDataMap_23));
#line 824 "continuation_info.m"
        }
#line 821 "continuation_info.m"
      }
#line 817 "continuation_info.m"
    else
#line 826 "continuation_info.m"
      {
#line 826 "continuation_info.m"
        {
#line 826 "continuation_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.continuation_info", (MR_String) "predicate \140ll_backend.continuation_info.generate_closure_layout\'/4", (MR_String) "proc headvars and pred argtypes disagree on arity");
#line 826 "continuation_info.m"
          return;
        }
#line 826 "continuation_info.m"
      }
#line 807 "continuation_info.m"
  }
#line 396 "continuation_info.m"
}

#line 390 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info__generate_resume_layout_6_p_0(
#line 390 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ResumeMap_7,
#line 390 "continuation_info.m"
  MR_Word ll_backend__continuation_info__Temps_8,
#line 390 "continuation_info.m"
  MR_Word ll_backend__continuation_info__InstMap_9,
#line 390 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ProcInfo_10,
#line 390 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ModuleInfo_11,
#line 390 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__Layout_12)
#line 390 "continuation_info.m"
{
#line 690 "continuation_info.m"
  {
#line 690 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;

#line 690 "continuation_info.m"
    {
#line 690 "continuation_info.m"
      ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_117_109_101_95_108_97_121_111_117_116_95_95_91_51_93_95_48_6_p_0(ll_backend__continuation_info__ResumeMap_7, ll_backend__continuation_info__Temps_8, ll_backend__continuation_info__ProcInfo_10, ll_backend__continuation_info__ModuleInfo_11, ll_backend__continuation_info__Layout_12);
    }
#line 690 "continuation_info.m"
  }
#line 390 "continuation_info.m"
}

#line 382 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info__generate_return_live_lvalues_10_p_0(
#line 382 "continuation_info.m"
  MR_Word ll_backend__continuation_info__OutputArgLocs_11,
#line 382 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ReturnInstMap_12,
#line 382 "continuation_info.m"
  MR_Word ll_backend__continuation_info__Vars_13,
#line 382 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarLocs_14,
#line 382 "continuation_info.m"
  MR_Word ll_backend__continuation_info__Temps_15,
#line 382 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ProcInfo_16,
#line 382 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ModuleInfo_17,
#line 382 "continuation_info.m"
  MR_Word ll_backend__continuation_info__Globals_18,
#line 382 "continuation_info.m"
  MR_Word ll_backend__continuation_info__OkToDeleteAny_19,
#line 382 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__LiveLvalues_20)
#line 382 "continuation_info.m"
{
#line 619 "continuation_info.m"
  {
#line 619 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;

#line 619 "continuation_info.m"
    {
#line 619 "continuation_info.m"
      ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_116_117_114_110_95_108_105_118_101_95_108_118_97_108_117_101_115_95_95_91_50_44_32_55_93_95_48_10_p_0(ll_backend__continuation_info__OutputArgLocs_11, ll_backend__continuation_info__Vars_13, ll_backend__continuation_info__VarLocs_14, ll_backend__continuation_info__Temps_15, ll_backend__continuation_info__ProcInfo_16, ll_backend__continuation_info__Globals_18, ll_backend__continuation_info__OkToDeleteAny_19, ll_backend__continuation_info__LiveLvalues_20);
    }
#line 619 "continuation_info.m"
  }
#line 382 "continuation_info.m"
}

#line 612 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_1(
#line 612 "continuation_info.m"
  void * ll_backend__continuation_info__env_ptr_arg)
#line 612 "continuation_info.m"
{
#line 612 "continuation_info.m"
  {
#line 612 "continuation_info.m"
    struct ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0_s * ll_backend__continuation_info__env_ptr = (struct ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0_s *) ll_backend__continuation_info__env_ptr_arg;

#line 612 "continuation_info.m"
    MR_builtin_longjmp((ll_backend__continuation_info__env_ptr)->ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__commit_0, 1);
#line 612 "continuation_info.m"
  }
#line 612 "continuation_info.m"
}

#line 612 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_3(
#line 612 "continuation_info.m"
  void * ll_backend__continuation_info__env_ptr_arg)
#line 612 "continuation_info.m"
{
#line 612 "continuation_info.m"
  {
#line 612 "continuation_info.m"
    struct ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0_s * ll_backend__continuation_info__env_ptr = (struct ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0_s *) ll_backend__continuation_info__env_ptr_arg;

#line 612 "continuation_info.m"
    (ll_backend__continuation_info__env_ptr)->ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__Type_16 = ((MR_Word) (ll_backend__continuation_info__env_ptr)->ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__conv0_Type_16);
#line 612 "continuation_info.m"
    {
#line 612 "continuation_info.m"
      ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_2(ll_backend__continuation_info__env_ptr);
    }
#line 612 "continuation_info.m"
  }
#line 612 "continuation_info.m"
}

#line 612 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_2(
#line 612 "continuation_info.m"
  void * ll_backend__continuation_info__env_ptr_arg)
#line 612 "continuation_info.m"
{
#line 612 "continuation_info.m"
  {
#line 612 "continuation_info.m"
    struct ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0_s * ll_backend__continuation_info__env_ptr = (struct ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0_s *) ll_backend__continuation_info__env_ptr_arg;

#line 613 "continuation_info.m"
    {
#line 613 "continuation_info.m"
      (ll_backend__continuation_info__env_ptr)->ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__succeeded = parse_tree__prog_type__type_is_higher_order_1_p_0((ll_backend__continuation_info__env_ptr)->ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__Type_16);
    }
#line 613 "continuation_info.m"
    if ((ll_backend__continuation_info__env_ptr)->ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__succeeded)
#line 613 "continuation_info.m"
      {
#line 613 "continuation_info.m"
        ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_1(ll_backend__continuation_info__env_ptr);
      }
#line 612 "continuation_info.m"
  }
#line 612 "continuation_info.m"
}

#line 612 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_4(
#line 612 "continuation_info.m"
  void * ll_backend__continuation_info__env_ptr_arg)
#line 612 "continuation_info.m"
{
#line 612 "continuation_info.m"
  {
#line 612 "continuation_info.m"
    struct ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0_s * ll_backend__continuation_info__env_ptr = (struct ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0_s *) ll_backend__continuation_info__env_ptr_arg;

#line 612 "continuation_info.m"
    if (MR_builtin_setjmp((ll_backend__continuation_info__env_ptr)->ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__commit_0) == 0)
#line 612 "continuation_info.m"
      {
#line 612 "continuation_info.m"
        {
#line 612 "continuation_info.m"
          {
#line 612 "continuation_info.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &(ll_backend__continuation_info__env_ptr)->ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__conv0_Type_16, (ll_backend__continuation_info__env_ptr)->ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__ArgTypes_14, ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_3, ll_backend__continuation_info__env_ptr);
          }
#line 612 "continuation_info.m"
        }
#line 612 "continuation_info.m"
        (ll_backend__continuation_info__env_ptr)->ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__succeeded = MR_FALSE;
#line 612 "continuation_info.m"
      }
#line 612 "continuation_info.m"
    else
#line 612 "continuation_info.m"
      (ll_backend__continuation_info__env_ptr)->ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__succeeded = MR_TRUE;
#line 612 "continuation_info.m"
  }
#line 612 "continuation_info.m"
}

#line 377 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0(
#line 377 "continuation_info.m"
  MR_Word ll_backend__continuation_info__PredInfo_5,
#line 377 "continuation_info.m"
  MR_Word ll_backend__continuation_info__Globals_6,
#line 377 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__BasicLayout_7,
#line 377 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__ForceProcIdLayout_8)
#line 377 "continuation_info.m"
{
#line 377 "continuation_info.m"
  {
#line 377 "continuation_info.m"
    struct ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0_s ll_backend__continuation_info__env;

#line 592 "continuation_info.m"
    {
#line 592 "continuation_info.m"
      (ll_backend__continuation_info__env).ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__succeeded = libs__globals__lookup_bool_option_3_p_1(ll_backend__continuation_info__Globals_6, (MR_Integer) 135, (MR_Integer) 1);
    }
#line 592 "continuation_info.m"
    if ((ll_backend__continuation_info__env).ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__succeeded)
#line 592 "continuation_info.m"
      {
#line 610 "continuation_info.m"
        {
#line 610 "continuation_info.m"
          hlds__hlds_pred__pred_info_get_arg_types_2_p_0(ll_backend__continuation_info__PredInfo_5, &(ll_backend__continuation_info__env).ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__ArgTypes_14);
        }
#line 612 "continuation_info.m"
        {
#line 612 "continuation_info.m"
          ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_4(&ll_backend__continuation_info__env);
        }
#line 592 "continuation_info.m"
      }
#line 591 "continuation_info.m"
    if ((ll_backend__continuation_info__env).ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__succeeded)
#line 595 "continuation_info.m"
      {
#line 595 "continuation_info.m"
        *ll_backend__continuation_info__BasicLayout_7 = (MR_Integer) 1;
#line 596 "continuation_info.m"
        *ll_backend__continuation_info__ForceProcIdLayout_8 = (MR_Integer) 1;
#line 595 "continuation_info.m"
      }
#line 591 "continuation_info.m"
    else
#line 597 "continuation_info.m"
      {
#line 598 "continuation_info.m"
        {
#line 598 "continuation_info.m"
          (ll_backend__continuation_info__env).ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__succeeded = libs__globals__lookup_bool_option_3_p_1(ll_backend__continuation_info__Globals_6, (MR_Integer) 261, (MR_Integer) 1);
        }
#line 597 "continuation_info.m"
        if ((ll_backend__continuation_info__env).ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__succeeded)
#line 600 "continuation_info.m"
          {
#line 600 "continuation_info.m"
            *ll_backend__continuation_info__BasicLayout_7 = (MR_Integer) 1;
#line 601 "continuation_info.m"
            *ll_backend__continuation_info__ForceProcIdLayout_8 = (MR_Integer) 0;
#line 600 "continuation_info.m"
          }
#line 597 "continuation_info.m"
        else
#line 603 "continuation_info.m"
          {
#line 603 "continuation_info.m"
            *ll_backend__continuation_info__BasicLayout_7 = (MR_Integer) 0;
#line 604 "continuation_info.m"
            *ll_backend__continuation_info__ForceProcIdLayout_8 = (MR_Integer) 0;
#line 603 "continuation_info.m"
          }
#line 597 "continuation_info.m"
      }
#line 377 "continuation_info.m"
  }
#line 377 "continuation_info.m"
}

#line 370 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info__maybe_collect_call_continuations_in_cproc_4_p_0(
#line 370 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ModuleInfo_5,
#line 370 "continuation_info.m"
  MR_Word ll_backend__continuation_info__CProc_6,
#line 370 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_GlobalData_0_15,
#line 370 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_GlobalData_16)
#line 370 "continuation_info.m"
{
#line 437 "continuation_info.m"
  {
#line 437 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 437 "continuation_info.m"
    MR_Word ll_backend__continuation_info__PredId_8;
#line 437 "continuation_info.m"
    MR_Word ll_backend__continuation_info__PredInfo_10;
#line 437 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Globals_11;
#line 437 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Layout_12;
#line 437 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 2)));
#line 438 "continuation_info.m"
    MR_String ll_backend__continuation_info__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 0)));
#line 438 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 1)));
#line 438 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 3)));
#line 438 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 4)));
#line 438 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 5)));
#line 438 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 6)));
#line 438 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 7)));
#line 438 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CProc_6, (MR_Integer) 8)));
#line 438 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__V_9_9;
#line 441 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_13_13;

#line 438 "continuation_info.m"
    ll_backend__continuation_info__PredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_17_17, (MR_Integer) 0)));
#line 438 "continuation_info.m"
    ll_backend__continuation_info__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_17_17, (MR_Integer) 1)));
#line 439 "continuation_info.m"
    {
#line 439 "continuation_info.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__continuation_info__ModuleInfo_5, ll_backend__continuation_info__PredId_8, &ll_backend__continuation_info__PredInfo_10);
    }
#line 440 "continuation_info.m"
    {
#line 440 "continuation_info.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__continuation_info__ModuleInfo_5, &ll_backend__continuation_info__Globals_11);
    }
#line 441 "continuation_info.m"
    {
#line 441 "continuation_info.m"
      ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0(ll_backend__continuation_info__PredInfo_10, ll_backend__continuation_info__Globals_11, &ll_backend__continuation_info__Layout_12, &ll_backend__continuation_info__V_13_13);
    }
#line 447 "continuation_info.m"
#line 447 "continuation_info.m"
    switch (ll_backend__continuation_info__Layout_12) {
#line 447 "continuation_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 447 "continuation_info.m"
      case (MR_Integer) 0:
#line 448 "continuation_info.m"
        *ll_backend__continuation_info__STATE_VARIABLE_GlobalData_16 = ll_backend__continuation_info__STATE_VARIABLE_GlobalData_0_15;
#line 447 "continuation_info.m"
        break;
#line 447 "continuation_info.m"
      case (MR_Integer) 1:
#line 443 "continuation_info.m"
        {
#line 443 "continuation_info.m"
          MR_Word ll_backend__continuation_info__WantReturnLayout_14;

#line 444 "continuation_info.m"
          {
#line 444 "continuation_info.m"
            libs__globals__want_return_var_layouts_2_p_0(ll_backend__continuation_info__Globals_11, &ll_backend__continuation_info__WantReturnLayout_14);
          }
#line 445 "continuation_info.m"
          {
#line 445 "continuation_info.m"
            ll_backend__continuation_info__collect_call_continuations_in_cproc_4_p_0(ll_backend__continuation_info__WantReturnLayout_14, ll_backend__continuation_info__CProc_6, ll_backend__continuation_info__STATE_VARIABLE_GlobalData_0_15, ll_backend__continuation_info__STATE_VARIABLE_GlobalData_16);
          }
#line 443 "continuation_info.m"
        }
#line 447 "continuation_info.m"
        break;
#line 447 "continuation_info.m"
    }
#line 437 "continuation_info.m"
  }
#line 370 "continuation_info.m"
}

#line 361 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info__maybe_collect_call_continuations_in_cprocs_4_p_0(
#line 361 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ModuleInfo_1,
#line 361 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 361 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_GlobalData_0_3,
#line 361 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_GlobalData_4)
#line 361 "continuation_info.m"
{
#line 429 "continuation_info.m"
  while (MR_TRUE)
#line 429 "continuation_info.m"
    {
#line 429 "continuation_info.m"
      /* tailcall optimized into a loop */
#line 429 "continuation_info.m"
      {
#line 429 "continuation_info.m"
        MR_bool ll_backend__continuation_info__succeeded;

#line 429 "continuation_info.m"
        if ((ll_backend__continuation_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 429 "continuation_info.m"
          *ll_backend__continuation_info__STATE_VARIABLE_GlobalData_4 = ll_backend__continuation_info__STATE_VARIABLE_GlobalData_0_3;
#line 429 "continuation_info.m"
        else
#line 431 "continuation_info.m"
          {
#line 431 "continuation_info.m"
            MR_Word ll_backend__continuation_info__CProc_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 431 "continuation_info.m"
            MR_Word ll_backend__continuation_info__CProcs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 431 "continuation_info.m"
            MR_Word ll_backend__continuation_info__STATE_VARIABLE_GlobalData_15_15;

#line 432 "continuation_info.m"
            {
#line 432 "continuation_info.m"
              ll_backend__continuation_info__maybe_collect_call_continuations_in_cproc_4_p_0(ll_backend__continuation_info__ModuleInfo_1, ll_backend__continuation_info__CProc_10, ll_backend__continuation_info__STATE_VARIABLE_GlobalData_0_3, &ll_backend__continuation_info__STATE_VARIABLE_GlobalData_15_15);
            }
#line 434 "continuation_info.m"
            /* direct tailcall eliminated */
#line 434 "continuation_info.m"
            {
#line 434 "continuation_info.m"
              MR_Word ll_backend__continuation_info__HeadVar__2__tmp_copy_2 = ll_backend__continuation_info__CProcs_11;
#line 434 "continuation_info.m"
              MR_Word ll_backend__continuation_info__STATE_VARIABLE_GlobalData_0__tmp_copy_3 = ll_backend__continuation_info__STATE_VARIABLE_GlobalData_15_15;

#line 434 "continuation_info.m"
              ll_backend__continuation_info__STATE_VARIABLE_GlobalData_0_3 = ll_backend__continuation_info__STATE_VARIABLE_GlobalData_0__tmp_copy_3;
#line 434 "continuation_info.m"
              ll_backend__continuation_info__HeadVar__2_2 = ll_backend__continuation_info__HeadVar__2__tmp_copy_2;
#line 434 "continuation_info.m"
            }
#line 434 "continuation_info.m"
            continue;
#line 431 "continuation_info.m"
          }
#line 429 "continuation_info.m"
      }
#line 429 "continuation_info.m"
      break;
#line 429 "continuation_info.m"
    }
#line 361 "continuation_info.m"
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
