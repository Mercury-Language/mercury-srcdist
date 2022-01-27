/*
** Automatically generated from `continuation_info.m'
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


/* :- module ll_backend.continuation_info. */
/* :- implementation. */

/*
INIT mercury__ll_backend__continuation_info__init
ENDINIT
*/

#include "ll_backend.continuation_info.mih"


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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
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
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "hlds.vartypes.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 374 "continuation_info.m"
struct ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0_s {
#line 592 "continuation_info.m"
  MR_bool ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__succeeded;
#line 587 "continuation_info.m"
  MR_Word ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__ArgTypes_14;
#line 607 "continuation_info.m"
  jmp_buf ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__commit_0;
#line 607 "continuation_info.m"
  MR_Word ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__Type_16;
#line 607 "continuation_info.m"
  MR_Box ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__conv0_Type_16;
#line 374 "continuation_info.m"
};


#line 170 "ll_backend.continuation_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__continuation_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__continuation_info__type_ctor_info_internal_layout_info_0;

#line 173 "ll_backend.continuation_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__continuation_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 176 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 179 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

#line 182 "ll_backend.continuation_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__continuation_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

#line 185 "ll_backend.continuation_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__continuation_info__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 188 "ll_backend.continuation_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__continuation_info__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_layout_locn_0;

#line 191 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__continuation_info__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0;

#line 194 "ll_backend.continuation_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__continuation_info__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0;

#line 197 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 200 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0;

#line 203 "ll_backend.continuation_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__continuation_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0;

#line 206 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__list__ti_list_1ll_backend__llds__type_ctor_info_liveinfo_0;

#line 209 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1mdbcomp__goal_path__type_ctor_info_forward_goal_path_0;

#line 212 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_call_info_0_0[5];

#line 215 "ll_backend.continuation_info.c"
static const MR_ConstString ll_backend__continuation_info__ll_backend__continuation_info__field_names_call_info_0_0[5];

#line 218 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_call_info_0_0;

#line 221 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_call_info_0_0[1];

#line 224 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_call_info_0[1];

#line 227 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_call_info_0[1];

#line 230 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_call_info_0[1];

#line 233 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_closure_arg_info_0_0[2];

#line 236 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_closure_arg_info_0_0;

#line 239 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_closure_arg_info_0_0[1];

#line 242 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_closure_arg_info_0[1];

#line 245 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_closure_arg_info_0[1];

#line 248 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_closure_arg_info_0[1];

#line 251 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__list__ti_list_1ll_backend__continuation_info__type_ctor_info_closure_arg_info_0;

#line 254 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__continuation_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0;

#line 257 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_closure_layout_info_0_0[2];

#line 260 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_closure_layout_info_0_0;

#line 263 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_closure_layout_info_0_0[1];

#line 266 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_closure_layout_info_0[1];

#line 269 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_closure_layout_info_0[1];

#line 272 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_closure_layout_info_0[1];

#line 275 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_trace_port_layout_info_0;

#line 278 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_layout_label_info_0;

#line 281 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_return_layout_info_0;

#line 284 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_internal_layout_info_0_0[3];

#line 287 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_internal_layout_info_0_0;

#line 290 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_internal_layout_info_0_0[1];

#line 293 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_internal_layout_info_0[1];

#line 296 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_internal_layout_info_0[1];

#line 299 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_internal_layout_info_0[1];

#line 302 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__set_ordlist__ti_set_ordlist_1ll_backend__continuation_info__type_ctor_info_layout_var_info_0;

#line 305 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_layout_label_info_0_0[2];

#line 308 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_layout_label_info_0_0;

#line 311 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_layout_label_info_0_0[1];

#line 314 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_layout_label_info_0[1];

#line 317 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_layout_label_info_0[1];

#line 320 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_layout_label_info_0[1];

#line 323 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_layout_var_info_0_0[3];

#line 326 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_layout_var_info_0_0;

#line 329 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_layout_var_info_0_0[1];

#line 332 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_layout_var_info_0[1];

#line 335 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_layout_var_info_0[1];

#line 338 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_layout_var_info_0[1];

#line 341 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_proc_deep_prof_info_0_0[3];

#line 344 "ll_backend.continuation_info.c"
static const MR_ConstString ll_backend__continuation_info__ll_backend__continuation_info__field_names_proc_deep_prof_info_0_0[3];

#line 347 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_proc_deep_prof_info_0_0;

#line 350 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_proc_deep_prof_info_0_0[1];

#line 353 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_proc_deep_prof_info_0[1];

#line 356 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_proc_deep_prof_info_0[1];

#line 359 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_proc_deep_prof_info_0[1];

#line 362 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__continuation_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__continuation_info__type_ctor_info_internal_layout_info_0;

#line 365 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

#line 368 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0;

#line 371 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 374 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0;

#line 377 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 380 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__continuation_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 383 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_proc_layout_table_info_0;

#line 386 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0;

#line 389 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_proc_deep_prof_info_0;

#line 392 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_proc_layout_info_0_0[24];

#line 395 "ll_backend.continuation_info.c"
static const MR_ConstString ll_backend__continuation_info__ll_backend__continuation_info__field_names_proc_layout_info_0_0[24];

#line 398 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_proc_layout_info_0_0;

#line 401 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_proc_layout_info_0_0[1];

#line 404 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_proc_layout_info_0[1];

#line 407 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_proc_layout_info_0[1];

#line 410 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_proc_layout_info_0[1];

#line 413 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_proc_layout_table_info_0_0[1];

#line 416 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_proc_layout_table_info_0_0;

#line 419 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_proc_layout_table_info_0_1[1];

#line 422 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_proc_layout_table_info_0_1;

#line 425 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_proc_layout_table_info_0_0[1];

#line 428 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_proc_layout_table_info_0_1[1];

#line 431 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_proc_layout_table_info_0[2];

#line 434 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_proc_layout_table_info_0[2];

#line 437 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_proc_layout_table_info_0[2];

#line 440 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__continuation_info__pair__ti_pair_2term__type_ctor_info_context_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0;

#line 443 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__continuation_info__pair__ti_pair_2ll_backend__llds__type_ctor_info_code_addr_0pair__ti_pair_2term__type_ctor_info_context_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0;

#line 446 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__list__ti_list_1pair__ti_pair_2ll_backend__llds__type_ctor_info_code_addr_0pair__ti_pair_2term__type_ctor_info_context_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0;

#line 449 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_return_layout_info_0_0[2];

#line 452 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_return_layout_info_0_0;

#line 455 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_return_layout_info_0_0[1];

#line 458 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_return_layout_info_0[1];

#line 461 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_return_layout_info_0[1];

#line 464 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_return_layout_info_0[1];

#line 467 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_0;

#line 470 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_1;

#line 473 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_2;

#line 476 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_3;

#line 479 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_4;

#line 482 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_5;

#line 485 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_6;

#line 488 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_7;

#line 491 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_8;

#line 494 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_9;

#line 497 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_10;

#line 500 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_slot_contents_0_11[1];

#line 503 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_11;

#line 506 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_slot_contents_0_0[11];

#line 509 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_slot_contents_0_1[1];

#line 512 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_slot_contents_0[2];

#line 515 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_slot_contents_0[12];

#line 518 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_slot_contents_0[12];

#line 521 "ll_backend.continuation_info.c"
static const MR_EnumFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__enum_functor_desc_trace_needs_body_rep_0_0;

#line 524 "ll_backend.continuation_info.c"
static const MR_EnumFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__enum_functor_desc_trace_needs_body_rep_0_1;

#line 527 "ll_backend.continuation_info.c"
static const MR_EnumFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__enum_value_ordered_trace_needs_body_rep_0[2];

#line 530 "ll_backend.continuation_info.c"
static const MR_EnumFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__enum_name_ordered_trace_needs_body_rep_0[2];

#line 533 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_trace_needs_body_rep_0[2];

#line 536 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_user_event_info_0;

#line 539 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_trace_port_layout_info_0_0[6];

#line 542 "ll_backend.continuation_info.c"
static const MR_ConstString ll_backend__continuation_info__ll_backend__continuation_info__field_names_trace_port_layout_info_0_0[6];

#line 545 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_trace_port_layout_info_0_0;

#line 548 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_trace_port_layout_info_0_0[1];

#line 551 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_trace_port_layout_info_0[1];

#line 554 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_trace_port_layout_info_0[1];

#line 557 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_trace_port_layout_info_0[1];

#line 560 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_user_attribute_0_0[2];

#line 563 "ll_backend.continuation_info.c"
static const MR_ConstString ll_backend__continuation_info__ll_backend__continuation_info__field_names_user_attribute_0_0[2];

#line 566 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_user_attribute_0_0;

#line 569 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_user_attribute_0_0[1];

#line 572 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_user_attribute_0[1];

#line 575 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_user_attribute_0[1];

#line 578 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_user_attribute_0[1];

#line 581 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_user_attribute_0;

#line 584 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__list__ti_list_1maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_user_attribute_0;

#line 587 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_user_event_info_0_0[2];

#line 590 "ll_backend.continuation_info.c"
static const MR_ConstString ll_backend__continuation_info__ll_backend__continuation_info__field_names_user_event_info_0_0[2];

#line 593 "ll_backend.continuation_info.c"
static const MR_DuFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_user_event_info_0_0;

#line 596 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_user_event_info_0_0[1];

#line 599 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_user_event_info_0[1];

#line 602 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_user_event_info_0[1];

#line 605 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_user_event_info_0[1];

#line 608 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____call_info_0_0_10001(
#line 611 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 613 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2);

#line 616 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____call_info_0_0_10001(
#line 619 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 621 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 623 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3);

#line 626 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____closure_arg_info_0_0_10001(
#line 629 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 631 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2);

#line 634 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____closure_arg_info_0_0_10001(
#line 637 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 639 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 641 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3);

#line 644 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____closure_layout_info_0_0_10001(
#line 647 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 649 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2);

#line 652 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____closure_layout_info_0_0_10001(
#line 655 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 657 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 659 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3);

#line 662 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____internal_layout_info_0_0_10001(
#line 665 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 667 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2);

#line 670 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____internal_layout_info_0_0_10001(
#line 673 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 675 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 677 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3);

#line 680 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____layout_label_info_0_0_10001(
#line 683 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 685 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2);

#line 688 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____layout_label_info_0_0_10001(
#line 691 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 693 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 695 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3);

#line 698 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____layout_var_info_0_0_10001(
#line 701 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 703 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2);

#line 706 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____layout_var_info_0_0_10001(
#line 709 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 711 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 713 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3);

#line 716 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____proc_deep_prof_info_0_0_10001(
#line 719 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 721 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2);

#line 724 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____proc_deep_prof_info_0_0_10001(
#line 727 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 729 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 731 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3);

#line 734 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____proc_label_layout_info_0_0_10001(
#line 737 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 739 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2);

#line 742 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____proc_label_layout_info_0_0_10001(
#line 745 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 747 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 749 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3);

#line 752 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____proc_layout_info_0_0_10001(
#line 755 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 757 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2);

#line 760 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____proc_layout_info_0_0_10001(
#line 763 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 765 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 767 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3);

#line 770 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____proc_layout_table_info_0_0_10001(
#line 773 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 775 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2);

#line 778 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____proc_layout_table_info_0_0_10001(
#line 781 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 783 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 785 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3);

#line 788 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____return_layout_info_0_0_10001(
#line 791 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 793 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2);

#line 796 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____return_layout_info_0_0_10001(
#line 799 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 801 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 803 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3);

#line 806 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____slot_contents_0_0_10001(
#line 809 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 811 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2);

#line 814 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____slot_contents_0_0_10001(
#line 817 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 819 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 821 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3);

#line 824 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____trace_needs_body_rep_0_0_10001(
#line 827 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 829 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2);

#line 832 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____trace_needs_body_rep_0_0_10001(
#line 835 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 837 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 839 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3);

#line 842 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____trace_port_layout_info_0_0_10001(
#line 845 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 847 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2);

#line 850 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____trace_port_layout_info_0_0_10001(
#line 853 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 855 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 857 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3);

#line 860 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____user_attribute_0_0_10001(
#line 863 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 865 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2);

#line 868 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____user_attribute_0_0_10001(
#line 871 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 873 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 875 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3);

#line 878 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____user_event_info_0_0_10001(
#line 881 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 883 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2);

#line 886 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____user_event_info_0_0_10001(
#line 889 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 891 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 893 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3);

#line 739 "continuation_info.m"
static MR_bool MR_CALL 
ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_117_109_101_95_108_97_121_111_117_116_95_102_111_114_95_118_97_114_115_95_95_91_50_93_95_48_9_p_0_3(
#line 739 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg);

#line 737 "continuation_info.m"
static MR_bool MR_CALL 
ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_117_109_101_95_108_97_121_111_117_116_95_102_111_114_95_118_97_114_115_95_95_91_50_93_95_48_9_p_0_2(
#line 737 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg);

#line 735 "continuation_info.m"
static MR_bool MR_CALL 
ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_117_109_101_95_108_97_121_111_117_116_95_102_111_114_95_118_97_114_115_95_95_91_50_93_95_48_9_p_0_1(
#line 735 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg);

#line 699 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_117_109_101_95_108_97_121_111_117_116_95_102_111_114_95_118_97_114_115_95_95_91_50_93_95_48_9_p_0(
#line 699 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 699 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarTypes_3,
#line 699 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ProcInfo_4,
#line 699 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ModuleInfo_5,
#line 699 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_VarInfos_0_6,
#line 699 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_VarInfos_7,
#line 699 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_TVars_0_8,
#line 699 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_TVars_9);

#line 661 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_118_97_114_95_108_105_118_101_95_108_118_97_108_117_101_115_95_95_91_50_44_32_53_93_95_48_7_p_0(
#line 661 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 661 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarLocs_3,
#line 661 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ProcInfo_4,
#line 661 "continuation_info.m"
  MR_Word ll_backend__continuation_info__WantReturnVarLayout_6,
#line 661 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__7_7);

#line 942 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars_table__942__1_4_p_0(
#line 942 "continuation_info.m"
  MR_Word ll_backend__continuation_info__NumberedVars_6,
#line 942 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarSet_9,
#line 942 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_22,
#line 942 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__4_23);

#line 563 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__562__1_3_p_0_1(
#line 563 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 563 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 563 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 563 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_3);

#line 562 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__562__1_3_p_0(
#line 562 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_29,
#line 562 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_30,
#line 562 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__3_31);

#line 563 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__563__1_3_p_0(
#line 563 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_45,
#line 563 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_46,
#line 563 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__3_47);

#line 558 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__558__1_2_p_0(
#line 558 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_26,
#line 558 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__2_27);

#line 552 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__552__1_2_p_0(
#line 552 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_23,
#line 552 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__2_24);

#line 533 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__process_continuation__533__1_3_p_0(
#line 533 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_54,
#line 533 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_55,
#line 533 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__3_56);

#line 868 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars__865__1_4_p_0_1(
#line 868 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 868 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 868 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 868 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_3);

#line 865 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars__865__1_4_p_0(
#line 865 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarLocs_6,
#line 865 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarSet_9,
#line 865 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_28,
#line 865 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__4_29);

#line 868 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars__868__1_4_p_0(
#line 868 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_28,
#line 868 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_30,
#line 868 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_31,
#line 868 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__4_32);

#line 446 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info____Compare____call_info_0_0(
#line 446 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 446 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 446 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3);

#line 446 "continuation_info.m"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____call_info_0_0(
#line 446 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 446 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2);

#line 901 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__build_table_arg_info_6_p_0(
#line 901 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarSet_1,
#line 901 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarTypes_2,
#line 901 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3,
#line 901 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__4_4,
#line 901 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_TypeVars_0_5,
#line 901 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_TypeVars_6);

#line 825 "continuation_info.m"
static MR_bool MR_CALL 
ll_backend__continuation_info__build_closure_info_10_p_0(
#line 825 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 825 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 825 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3,
#line 825 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__4_4,
#line 825 "continuation_info.m"
  MR_Word ll_backend__continuation_info__InstMap_5,
#line 825 "continuation_info.m"
  MR_Word ll_backend__continuation_info__UseFloatRegs_6,
#line 825 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_VarLocs_0_7,
#line 825 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_VarLocs_8,
#line 825 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_TypeVars_0_9,
#line 825 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_TypeVars_10);

#line 748 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__generate_temp_var_infos_2_p_0(
#line 748 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 748 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__2_2);

#line 650 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__generate_temp_live_lvalues_2_p_0(
#line 650 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 650 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__2_2);

#line 624 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__find_return_var_lvals_5_p_0(
#line 624 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 624 "continuation_info.m"
  MR_Word ll_backend__continuation_info__StackSlots_2,
#line 624 "continuation_info.m"
  MR_Word ll_backend__continuation_info__OkToDeleteAny_3,
#line 624 "continuation_info.m"
  MR_Word ll_backend__continuation_info__OutputArgLocs_4,
#line 624 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__5_5);

#line 562 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__convert_return_data_3_p_0_3(
#line 562 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 562 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 562 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 562 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_3);

#line 557 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__convert_return_data_3_p_0_2(
#line 557 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 557 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 557 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_2);

#line 552 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__convert_return_data_3_p_0_1(
#line 552 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 552 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 552 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_2);

#line 548 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__convert_return_data_3_p_0(
#line 548 "continuation_info.m"
  MR_Word ll_backend__continuation_info__LiveInfos_4,
#line 548 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__VarInfoSet_5,
#line 548 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__TypeInfoMap_6);

#line 533 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__process_continuation_4_p_0_1(
#line 533 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 533 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 533 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 533 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_3);

#line 487 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__process_continuation_4_p_0(
#line 487 "continuation_info.m"
  MR_Word ll_backend__continuation_info__WantReturnInfo_5,
#line 487 "continuation_info.m"
  MR_Word ll_backend__continuation_info__CallInfo_6,
#line 487 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_Internals_0_36,
#line 487 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_Internals_37);

#line 474 "continuation_info.m"
static MR_bool MR_CALL 
ll_backend__continuation_info__get_call_info_2_p_0(
#line 474 "continuation_info.m"
  MR_Word ll_backend__continuation_info__Instr_3,
#line 474 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__Call_4);

#line 929 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__generate_table_arg_type_info_3_p_0_2(
#line 929 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 929 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 929 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_2);

#line 927 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__generate_table_arg_type_info_3_p_0_1(
#line 927 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 927 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 927 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_2);

#line 865 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__find_typeinfos_for_tvars_4_p_0_2(
#line 865 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 865 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 865 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_2);

#line 863 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__find_typeinfos_for_tvars_4_p_0_1(
#line 863 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 863 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 863 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_2);

#line 607 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_1(
#line 607 "continuation_info.m"
  void * ll_backend__continuation_info__env_ptr_arg);

#line 607 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_3(
#line 607 "continuation_info.m"
  void * ll_backend__continuation_info__env_ptr_arg);

#line 607 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_2(
#line 607 "continuation_info.m"
  void * ll_backend__continuation_info__env_ptr_arg);

#line 607 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_4(
#line 607 "continuation_info.m"
  void * ll_backend__continuation_info__env_ptr_arg);

#line 469 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__maybe_process_proc_llds_5_p_0_2(
#line 469 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 469 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 469 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 469 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_3);

#line 467 "continuation_info.m"
static MR_bool MR_CALL 
ll_backend__continuation_info__maybe_process_proc_llds_5_p_0_1(
#line 467 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 467 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 467 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_2);


static /* final */ const MR_Box ll_backend__continuation_info_scalar_common_1[23][2];

static /* final */ const MR_Box ll_backend__continuation_info_scalar_common_2[11][3];

static /* final */ const MR_Box ll_backend__continuation_info_scalar_common_3[4][5];

static /* final */ const MR_Box ll_backend__continuation_info_scalar_common_4[4][7];

static /* final */ const MR_Box ll_backend__continuation_info_scalar_common_5[3][6];




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
    ((MR_Box) (&ll_backend__continuation_info_scalar_common_3[0])),
    ((MR_Box) (ll_backend__continuation_info__maybe_process_proc_llds_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ll_backend__continuation_info_scalar_common_5[1])),
    ((MR_Box) (ll_backend__continuation_info__process_continuation_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ll_backend__continuation_info_scalar_common_3[1])),
    ((MR_Box) (ll_backend__continuation_info__convert_return_data_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ll_backend__continuation_info_scalar_common_3[2])),
    ((MR_Box) (ll_backend__continuation_info__convert_return_data_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ll_backend__continuation_info_scalar_common_5[2])),
    ((MR_Box) (ll_backend__continuation_info__convert_return_data_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&ll_backend__continuation_info_scalar_common_5[1])),
    ((MR_Box) (ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__562__1_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__continuation_info_scalar_common_3[4][5] = {
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

static /* final */ const MR_Box ll_backend__continuation_info_scalar_common_4[4][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_call_info_0)),
    ((MR_Box) (&ll_backend__continuation_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__continuation_info__type_ctor_info_internal_layout_info_0)),
    ((MR_Box) (&ll_backend__continuation_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__continuation_info__type_ctor_info_internal_layout_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__continuation_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__continuation_info__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0)),
    ((MR_Box) (&ll_backend__continuation_info__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_layout_locn_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__continuation_info__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__continuation_info__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_locn_0))
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

static /* final */ const MR_Box ll_backend__continuation_info_scalar_common_5[3][6] = {
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



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1620 "ll_backend.continuation_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__continuation_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__continuation_info__type_ctor_info_internal_layout_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0
  }
};

#line 1629 "ll_backend.continuation_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__continuation_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1637 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1645 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 1653 "ll_backend.continuation_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__continuation_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__continuation_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &ll_backend__continuation_info__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 1662 "ll_backend.continuation_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__continuation_info__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1670 "ll_backend.continuation_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__continuation_info__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_layout_locn_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0
  }
};

#line 1678 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__continuation_info__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1687 "ll_backend.continuation_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__continuation_info__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__continuation_info__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0
  }
};

#line 1695 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1703 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0
  }
};

#line 1711 "ll_backend.continuation_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__continuation_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__continuation_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &ll_backend__continuation_info__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0
  }
};

#line 1720 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__list__ti_list_1ll_backend__llds__type_ctor_info_liveinfo_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_liveinfo_0
  }
};

#line 1728 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
  }
};

#line 1736 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_call_info_0_0[5] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__list__ti_list_1ll_backend__llds__type_ctor_info_liveinfo_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__maybe__ti_maybe_1mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
};

#line 1745 "ll_backend.continuation_info.c"
static const MR_ConstString ll_backend__continuation_info__ll_backend__continuation_info__field_names_call_info_0_0[5] = {
  (MR_String) "call_return_label",
  (MR_String) "call_target",
  (MR_String) "call_live_on_return",
  (MR_String) "call_context",
  (MR_String) "call_goal_path"
};

#line 1754 "ll_backend.continuation_info.c"
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

#line 1769 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_call_info_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_call_info_0_0
};

#line 1774 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_call_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_call_info_0_0
  }
};

#line 1783 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_call_info_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_call_info_0_0
};

#line 1788 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_call_info_0[1] = {
  (MR_Integer) 0
};

#line 1793 "ll_backend.continuation_info.c"
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

#line 1810 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_closure_arg_info_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
};

#line 1816 "ll_backend.continuation_info.c"
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

#line 1831 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_closure_arg_info_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_closure_arg_info_0_0
};

#line 1836 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_closure_arg_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_closure_arg_info_0_0
  }
};

#line 1845 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_closure_arg_info_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_closure_arg_info_0_0
};

#line 1850 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_closure_arg_info_0[1] = {
  (MR_Integer) 0
};

#line 1855 "ll_backend.continuation_info.c"
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

#line 1872 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__list__ti_list_1ll_backend__continuation_info__type_ctor_info_closure_arg_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_closure_arg_info_0
  }
};

#line 1880 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__continuation_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_TypeInfo) &ll_backend__continuation_info__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0
  }
};

#line 1889 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_closure_layout_info_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__list__ti_list_1ll_backend__continuation_info__type_ctor_info_closure_arg_info_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0
};

#line 1895 "ll_backend.continuation_info.c"
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

#line 1910 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_closure_layout_info_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_closure_layout_info_0_0
};

#line 1915 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_closure_layout_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_closure_layout_info_0_0
  }
};

#line 1924 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_closure_layout_info_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_closure_layout_info_0_0
};

#line 1929 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_closure_layout_info_0[1] = {
  (MR_Integer) 0
};

#line 1934 "ll_backend.continuation_info.c"
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

#line 1951 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_trace_port_layout_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_trace_port_layout_info_0
  }
};

#line 1959 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_layout_label_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_label_info_0
  }
};

#line 1967 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_return_layout_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_return_layout_info_0
  }
};

#line 1975 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_internal_layout_info_0_0[3] = {
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_trace_port_layout_info_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_layout_label_info_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_return_layout_info_0
};

#line 1982 "ll_backend.continuation_info.c"
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

#line 1997 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_internal_layout_info_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_internal_layout_info_0_0
};

#line 2002 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_internal_layout_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_internal_layout_info_0_0
  }
};

#line 2011 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_internal_layout_info_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_internal_layout_info_0_0
};

#line 2016 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_internal_layout_info_0[1] = {
  (MR_Integer) 0
};

#line 2021 "ll_backend.continuation_info.c"
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

#line 2038 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__set_ordlist__ti_set_ordlist_1ll_backend__continuation_info__type_ctor_info_layout_var_info_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0
  }
};

#line 2046 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_layout_label_info_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__set_ordlist__ti_set_ordlist_1ll_backend__continuation_info__type_ctor_info_layout_var_info_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0
};

#line 2052 "ll_backend.continuation_info.c"
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

#line 2067 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_layout_label_info_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_layout_label_info_0_0
};

#line 2072 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_layout_label_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_layout_label_info_0_0
  }
};

#line 2081 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_layout_label_info_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_layout_label_info_0_0
};

#line 2086 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_layout_label_info_0[1] = {
  (MR_Integer) 0
};

#line 2091 "ll_backend.continuation_info.c"
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

#line 2108 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_layout_var_info_0_0[3] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_live_value_type_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2115 "ll_backend.continuation_info.c"
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

#line 2130 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_layout_var_info_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_layout_var_info_0_0
};

#line 2135 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_layout_var_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_layout_var_info_0_0
  }
};

#line 2144 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_layout_var_info_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_layout_var_info_0_0
};

#line 2149 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_layout_var_info_0[1] = {
  (MR_Integer) 0
};

#line 2154 "ll_backend.continuation_info.c"
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

#line 2171 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_proc_deep_prof_info_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_hlds_proc_static_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_deep_excp_slots_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_deep_original_body_0
};

#line 2178 "ll_backend.continuation_info.c"
static const MR_ConstString ll_backend__continuation_info__ll_backend__continuation_info__field_names_proc_deep_prof_info_0_0[3] = {
  (MR_String) "pdpi_proc_static",
  (MR_String) "pdpi_excp_slots",
  (MR_String) "pdpi_orig_body"
};

#line 2185 "ll_backend.continuation_info.c"
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

#line 2200 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_proc_deep_prof_info_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_proc_deep_prof_info_0_0
};

#line 2205 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_proc_deep_prof_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_proc_deep_prof_info_0_0
  }
};

#line 2214 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_proc_deep_prof_info_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_proc_deep_prof_info_0_0
};

#line 2219 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_proc_deep_prof_info_0[1] = {
  (MR_Integer) 0
};

#line 2224 "ll_backend.continuation_info.c"
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

#line 2241 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__continuation_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__continuation_info__type_ctor_info_internal_layout_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0
  }
};

#line 2250 "ll_backend.continuation_info.c"
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

#line 2267 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2275 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 2283 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2291 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

#line 2299 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2307 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__continuation_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2316 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_proc_layout_table_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_layout_table_info_0
  }
};

#line 2324 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0
  }
};

#line 2332 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_proc_deep_prof_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_deep_prof_info_0
  }
};

#line 2340 "ll_backend.continuation_info.c"
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

#line 2368 "ll_backend.continuation_info.c"
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

#line 2396 "ll_backend.continuation_info.c"
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

#line 2411 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_proc_layout_info_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_proc_layout_info_0_0
};

#line 2416 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_proc_layout_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_proc_layout_info_0_0
  }
};

#line 2425 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_proc_layout_info_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_proc_layout_info_0_0
};

#line 2430 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_proc_layout_info_0[1] = {
  (MR_Integer) 0
};

#line 2435 "ll_backend.continuation_info.c"
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

#line 2452 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_proc_layout_table_info_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_table_io_info_0
};

#line 2457 "ll_backend.continuation_info.c"
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

#line 2472 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_proc_layout_table_info_0_1[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_table_struct_info_0
};

#line 2477 "ll_backend.continuation_info.c"
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

#line 2492 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_proc_layout_table_info_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_proc_layout_table_info_0_0
};

#line 2497 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_proc_layout_table_info_0_1[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_proc_layout_table_info_0_1
};

#line 2502 "ll_backend.continuation_info.c"
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

#line 2516 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_proc_layout_table_info_0[2] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_proc_layout_table_info_0_0,
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_proc_layout_table_info_0_1
};

#line 2522 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_proc_layout_table_info_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2528 "ll_backend.continuation_info.c"
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

#line 2545 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__continuation_info__pair__ti_pair_2term__type_ctor_info_context_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0,
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
  }
};

#line 2554 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__continuation_info__pair__ti_pair_2ll_backend__llds__type_ctor_info_code_addr_0pair__ti_pair_2term__type_ctor_info_context_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0,
    (MR_TypeInfo) &ll_backend__continuation_info__pair__ti_pair_2term__type_ctor_info_context_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
  }
};

#line 2563 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__list__ti_list_1pair__ti_pair_2ll_backend__llds__type_ctor_info_code_addr_0pair__ti_pair_2term__type_ctor_info_context_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__pair__ti_pair_2ll_backend__llds__type_ctor_info_code_addr_0pair__ti_pair_2term__type_ctor_info_context_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
  }
};

#line 2571 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_return_layout_info_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__list__ti_list_1pair__ti_pair_2ll_backend__llds__type_ctor_info_code_addr_0pair__ti_pair_2term__type_ctor_info_context_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_label_info_0
};

#line 2577 "ll_backend.continuation_info.c"
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

#line 2592 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_return_layout_info_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_return_layout_info_0_0
};

#line 2597 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_return_layout_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_return_layout_info_0_0
  }
};

#line 2606 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_return_layout_info_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_return_layout_info_0_0
};

#line 2611 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_return_layout_info_0[1] = {
  (MR_Integer) 0
};

#line 2616 "ll_backend.continuation_info.c"
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

#line 2633 "ll_backend.continuation_info.c"
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

#line 2648 "ll_backend.continuation_info.c"
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

#line 2663 "ll_backend.continuation_info.c"
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

#line 2678 "ll_backend.continuation_info.c"
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

#line 2693 "ll_backend.continuation_info.c"
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

#line 2708 "ll_backend.continuation_info.c"
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

#line 2723 "ll_backend.continuation_info.c"
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

#line 2738 "ll_backend.continuation_info.c"
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

#line 2753 "ll_backend.continuation_info.c"
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

#line 2768 "ll_backend.continuation_info.c"
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

#line 2783 "ll_backend.continuation_info.c"
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

#line 2798 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_slot_contents_0_11[1] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
};

#line 2803 "ll_backend.continuation_info.c"
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

#line 2818 "ll_backend.continuation_info.c"
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

#line 2833 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_slot_contents_0_1[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_11
};

#line 2838 "ll_backend.continuation_info.c"
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

#line 2852 "ll_backend.continuation_info.c"
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

#line 2868 "ll_backend.continuation_info.c"
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

#line 2884 "ll_backend.continuation_info.c"
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

#line 2901 "ll_backend.continuation_info.c"
static const MR_EnumFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__enum_functor_desc_trace_needs_body_rep_0_0 = {
  (MR_String) "trace_needs_body_rep",
  (MR_Integer) 0
};

#line 2907 "ll_backend.continuation_info.c"
static const MR_EnumFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__enum_functor_desc_trace_needs_body_rep_0_1 = {
  (MR_String) "trace_does_not_need_body_rep",
  (MR_Integer) 1
};

#line 2913 "ll_backend.continuation_info.c"
static const MR_EnumFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__enum_value_ordered_trace_needs_body_rep_0[2] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__enum_functor_desc_trace_needs_body_rep_0_0,
  &ll_backend__continuation_info__ll_backend__continuation_info__enum_functor_desc_trace_needs_body_rep_0_1
};

#line 2919 "ll_backend.continuation_info.c"
static const MR_EnumFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__enum_name_ordered_trace_needs_body_rep_0[2] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__enum_functor_desc_trace_needs_body_rep_0_1,
  &ll_backend__continuation_info__ll_backend__continuation_info__enum_functor_desc_trace_needs_body_rep_0_0
};

#line 2925 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_trace_needs_body_rep_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2931 "ll_backend.continuation_info.c"
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

#line 2948 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_user_event_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_user_event_info_0
  }
};

#line 2956 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_trace_port_layout_info_0_0[6] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_user_event_info_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_label_info_0
};

#line 2966 "ll_backend.continuation_info.c"
static const MR_ConstString ll_backend__continuation_info__ll_backend__continuation_info__field_names_trace_port_layout_info_0_0[6] = {
  (MR_String) "port_context",
  (MR_String) "port_type",
  (MR_String) "port_is_hidden",
  (MR_String) "port_path",
  (MR_String) "port_user",
  (MR_String) "port_label"
};

#line 2976 "ll_backend.continuation_info.c"
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

#line 2991 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_trace_port_layout_info_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_trace_port_layout_info_0_0
};

#line 2996 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_trace_port_layout_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_trace_port_layout_info_0_0
  }
};

#line 3005 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_trace_port_layout_info_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_trace_port_layout_info_0_0
};

#line 3010 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_trace_port_layout_info_0[1] = {
  (MR_Integer) 0
};

#line 3015 "ll_backend.continuation_info.c"
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

#line 3032 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_user_attribute_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 3038 "ll_backend.continuation_info.c"
static const MR_ConstString ll_backend__continuation_info__ll_backend__continuation_info__field_names_user_attribute_0_0[2] = {
  (MR_String) "attr_locn",
  (MR_String) "attr_var"
};

#line 3044 "ll_backend.continuation_info.c"
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

#line 3059 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_user_attribute_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_user_attribute_0_0
};

#line 3064 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_user_attribute_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_user_attribute_0_0
  }
};

#line 3073 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_user_attribute_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_user_attribute_0_0
};

#line 3078 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_user_attribute_0[1] = {
  (MR_Integer) 0
};

#line 3083 "ll_backend.continuation_info.c"
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

#line 3100 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_user_attribute_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_user_attribute_0
  }
};

#line 3108 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__list__ti_list_1maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_user_attribute_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_user_attribute_0
  }
};

#line 3116 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_user_event_info_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__list__ti_list_1maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_user_attribute_0
};

#line 3122 "ll_backend.continuation_info.c"
static const MR_ConstString ll_backend__continuation_info__ll_backend__continuation_info__field_names_user_event_info_0_0[2] = {
  (MR_String) "user_port_number",
  (MR_String) "user_attributes"
};

#line 3128 "ll_backend.continuation_info.c"
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

#line 3143 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_user_event_info_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_user_event_info_0_0
};

#line 3148 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_user_event_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_user_event_info_0_0
  }
};

#line 3157 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_user_event_info_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_user_event_info_0_0
};

#line 3162 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_user_event_info_0[1] = {
  (MR_Integer) 0
};

#line 3167 "ll_backend.continuation_info.c"
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

#line 3184 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____call_info_0_0_10001(
#line 3187 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3189 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3191 "ll_backend.continuation_info.c"
{
#line 3193 "ll_backend.continuation_info.c"
  {
#line 3195 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3198 "ll_backend.continuation_info.c"
    {
#line 3200 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____call_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3203 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3205 "ll_backend.continuation_info.c"
  }
#line 3207 "ll_backend.continuation_info.c"
}

#line 3210 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____call_info_0_0_10001(
#line 3213 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3215 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3217 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3219 "ll_backend.continuation_info.c"
{
#line 3221 "ll_backend.continuation_info.c"
  {
#line 3223 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3226 "ll_backend.continuation_info.c"
    {
#line 3228 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____call_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3231 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3233 "ll_backend.continuation_info.c"
  }
#line 3235 "ll_backend.continuation_info.c"
}

#line 3238 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____closure_arg_info_0_0_10001(
#line 3241 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3243 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3245 "ll_backend.continuation_info.c"
{
#line 3247 "ll_backend.continuation_info.c"
  {
#line 3249 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3252 "ll_backend.continuation_info.c"
    {
#line 3254 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____closure_arg_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3257 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3259 "ll_backend.continuation_info.c"
  }
#line 3261 "ll_backend.continuation_info.c"
}

#line 3264 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____closure_arg_info_0_0_10001(
#line 3267 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3269 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3271 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3273 "ll_backend.continuation_info.c"
{
#line 3275 "ll_backend.continuation_info.c"
  {
#line 3277 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3280 "ll_backend.continuation_info.c"
    {
#line 3282 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____closure_arg_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3285 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3287 "ll_backend.continuation_info.c"
  }
#line 3289 "ll_backend.continuation_info.c"
}

#line 3292 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____closure_layout_info_0_0_10001(
#line 3295 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3297 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3299 "ll_backend.continuation_info.c"
{
#line 3301 "ll_backend.continuation_info.c"
  {
#line 3303 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3306 "ll_backend.continuation_info.c"
    {
#line 3308 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____closure_layout_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3311 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3313 "ll_backend.continuation_info.c"
  }
#line 3315 "ll_backend.continuation_info.c"
}

#line 3318 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____closure_layout_info_0_0_10001(
#line 3321 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3323 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3325 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3327 "ll_backend.continuation_info.c"
{
#line 3329 "ll_backend.continuation_info.c"
  {
#line 3331 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3334 "ll_backend.continuation_info.c"
    {
#line 3336 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____closure_layout_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3339 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3341 "ll_backend.continuation_info.c"
  }
#line 3343 "ll_backend.continuation_info.c"
}

#line 3346 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____internal_layout_info_0_0_10001(
#line 3349 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3351 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3353 "ll_backend.continuation_info.c"
{
#line 3355 "ll_backend.continuation_info.c"
  {
#line 3357 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3360 "ll_backend.continuation_info.c"
    {
#line 3362 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____internal_layout_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3365 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3367 "ll_backend.continuation_info.c"
  }
#line 3369 "ll_backend.continuation_info.c"
}

#line 3372 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____internal_layout_info_0_0_10001(
#line 3375 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3377 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3379 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3381 "ll_backend.continuation_info.c"
{
#line 3383 "ll_backend.continuation_info.c"
  {
#line 3385 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3388 "ll_backend.continuation_info.c"
    {
#line 3390 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____internal_layout_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3393 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3395 "ll_backend.continuation_info.c"
  }
#line 3397 "ll_backend.continuation_info.c"
}

#line 3400 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____layout_label_info_0_0_10001(
#line 3403 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3405 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3407 "ll_backend.continuation_info.c"
{
#line 3409 "ll_backend.continuation_info.c"
  {
#line 3411 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3414 "ll_backend.continuation_info.c"
    {
#line 3416 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____layout_label_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3419 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3421 "ll_backend.continuation_info.c"
  }
#line 3423 "ll_backend.continuation_info.c"
}

#line 3426 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____layout_label_info_0_0_10001(
#line 3429 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3431 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3433 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3435 "ll_backend.continuation_info.c"
{
#line 3437 "ll_backend.continuation_info.c"
  {
#line 3439 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3442 "ll_backend.continuation_info.c"
    {
#line 3444 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____layout_label_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3447 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3449 "ll_backend.continuation_info.c"
  }
#line 3451 "ll_backend.continuation_info.c"
}

#line 3454 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____layout_var_info_0_0_10001(
#line 3457 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3459 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3461 "ll_backend.continuation_info.c"
{
#line 3463 "ll_backend.continuation_info.c"
  {
#line 3465 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3468 "ll_backend.continuation_info.c"
    {
#line 3470 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____layout_var_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3473 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3475 "ll_backend.continuation_info.c"
  }
#line 3477 "ll_backend.continuation_info.c"
}

#line 3480 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____layout_var_info_0_0_10001(
#line 3483 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3485 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3487 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3489 "ll_backend.continuation_info.c"
{
#line 3491 "ll_backend.continuation_info.c"
  {
#line 3493 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3496 "ll_backend.continuation_info.c"
    {
#line 3498 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____layout_var_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3501 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3503 "ll_backend.continuation_info.c"
  }
#line 3505 "ll_backend.continuation_info.c"
}

#line 3508 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____proc_deep_prof_info_0_0_10001(
#line 3511 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3513 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3515 "ll_backend.continuation_info.c"
{
#line 3517 "ll_backend.continuation_info.c"
  {
#line 3519 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3522 "ll_backend.continuation_info.c"
    {
#line 3524 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____proc_deep_prof_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3527 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3529 "ll_backend.continuation_info.c"
  }
#line 3531 "ll_backend.continuation_info.c"
}

#line 3534 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____proc_deep_prof_info_0_0_10001(
#line 3537 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3539 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3541 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3543 "ll_backend.continuation_info.c"
{
#line 3545 "ll_backend.continuation_info.c"
  {
#line 3547 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3550 "ll_backend.continuation_info.c"
    {
#line 3552 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____proc_deep_prof_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3555 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3557 "ll_backend.continuation_info.c"
  }
#line 3559 "ll_backend.continuation_info.c"
}

#line 3562 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____proc_label_layout_info_0_0_10001(
#line 3565 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3567 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3569 "ll_backend.continuation_info.c"
{
#line 3571 "ll_backend.continuation_info.c"
  {
#line 3573 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3576 "ll_backend.continuation_info.c"
    {
#line 3578 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____proc_label_layout_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3581 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3583 "ll_backend.continuation_info.c"
  }
#line 3585 "ll_backend.continuation_info.c"
}

#line 3588 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____proc_label_layout_info_0_0_10001(
#line 3591 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3593 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3595 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3597 "ll_backend.continuation_info.c"
{
#line 3599 "ll_backend.continuation_info.c"
  {
#line 3601 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3604 "ll_backend.continuation_info.c"
    {
#line 3606 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____proc_label_layout_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3609 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3611 "ll_backend.continuation_info.c"
  }
#line 3613 "ll_backend.continuation_info.c"
}

#line 3616 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____proc_layout_info_0_0_10001(
#line 3619 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3621 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3623 "ll_backend.continuation_info.c"
{
#line 3625 "ll_backend.continuation_info.c"
  {
#line 3627 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3630 "ll_backend.continuation_info.c"
    {
#line 3632 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____proc_layout_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3635 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3637 "ll_backend.continuation_info.c"
  }
#line 3639 "ll_backend.continuation_info.c"
}

#line 3642 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____proc_layout_info_0_0_10001(
#line 3645 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3647 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3649 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3651 "ll_backend.continuation_info.c"
{
#line 3653 "ll_backend.continuation_info.c"
  {
#line 3655 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3658 "ll_backend.continuation_info.c"
    {
#line 3660 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____proc_layout_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3663 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3665 "ll_backend.continuation_info.c"
  }
#line 3667 "ll_backend.continuation_info.c"
}

#line 3670 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____proc_layout_table_info_0_0_10001(
#line 3673 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3675 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3677 "ll_backend.continuation_info.c"
{
#line 3679 "ll_backend.continuation_info.c"
  {
#line 3681 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3684 "ll_backend.continuation_info.c"
    {
#line 3686 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____proc_layout_table_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3689 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3691 "ll_backend.continuation_info.c"
  }
#line 3693 "ll_backend.continuation_info.c"
}

#line 3696 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____proc_layout_table_info_0_0_10001(
#line 3699 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3701 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3703 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3705 "ll_backend.continuation_info.c"
{
#line 3707 "ll_backend.continuation_info.c"
  {
#line 3709 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3712 "ll_backend.continuation_info.c"
    {
#line 3714 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____proc_layout_table_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3717 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3719 "ll_backend.continuation_info.c"
  }
#line 3721 "ll_backend.continuation_info.c"
}

#line 3724 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____return_layout_info_0_0_10001(
#line 3727 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3729 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3731 "ll_backend.continuation_info.c"
{
#line 3733 "ll_backend.continuation_info.c"
  {
#line 3735 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3738 "ll_backend.continuation_info.c"
    {
#line 3740 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____return_layout_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3743 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3745 "ll_backend.continuation_info.c"
  }
#line 3747 "ll_backend.continuation_info.c"
}

#line 3750 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____return_layout_info_0_0_10001(
#line 3753 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3755 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3757 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3759 "ll_backend.continuation_info.c"
{
#line 3761 "ll_backend.continuation_info.c"
  {
#line 3763 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3766 "ll_backend.continuation_info.c"
    {
#line 3768 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____return_layout_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3771 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3773 "ll_backend.continuation_info.c"
  }
#line 3775 "ll_backend.continuation_info.c"
}

#line 3778 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____slot_contents_0_0_10001(
#line 3781 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3783 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3785 "ll_backend.continuation_info.c"
{
#line 3787 "ll_backend.continuation_info.c"
  {
#line 3789 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3792 "ll_backend.continuation_info.c"
    {
#line 3794 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____slot_contents_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3797 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3799 "ll_backend.continuation_info.c"
  }
#line 3801 "ll_backend.continuation_info.c"
}

#line 3804 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____slot_contents_0_0_10001(
#line 3807 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3809 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3811 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3813 "ll_backend.continuation_info.c"
{
#line 3815 "ll_backend.continuation_info.c"
  {
#line 3817 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3820 "ll_backend.continuation_info.c"
    {
#line 3822 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____slot_contents_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3825 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3827 "ll_backend.continuation_info.c"
  }
#line 3829 "ll_backend.continuation_info.c"
}

#line 3832 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____trace_needs_body_rep_0_0_10001(
#line 3835 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3837 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3839 "ll_backend.continuation_info.c"
{
#line 3841 "ll_backend.continuation_info.c"
  {
#line 3843 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3846 "ll_backend.continuation_info.c"
    {
#line 3848 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____trace_needs_body_rep_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3851 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3853 "ll_backend.continuation_info.c"
  }
#line 3855 "ll_backend.continuation_info.c"
}

#line 3858 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____trace_needs_body_rep_0_0_10001(
#line 3861 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3863 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3865 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3867 "ll_backend.continuation_info.c"
{
#line 3869 "ll_backend.continuation_info.c"
  {
#line 3871 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3874 "ll_backend.continuation_info.c"
    {
#line 3876 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____trace_needs_body_rep_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3879 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3881 "ll_backend.continuation_info.c"
  }
#line 3883 "ll_backend.continuation_info.c"
}

#line 3886 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____trace_port_layout_info_0_0_10001(
#line 3889 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3891 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3893 "ll_backend.continuation_info.c"
{
#line 3895 "ll_backend.continuation_info.c"
  {
#line 3897 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3900 "ll_backend.continuation_info.c"
    {
#line 3902 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____trace_port_layout_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3905 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3907 "ll_backend.continuation_info.c"
  }
#line 3909 "ll_backend.continuation_info.c"
}

#line 3912 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____trace_port_layout_info_0_0_10001(
#line 3915 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3917 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3919 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3921 "ll_backend.continuation_info.c"
{
#line 3923 "ll_backend.continuation_info.c"
  {
#line 3925 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3928 "ll_backend.continuation_info.c"
    {
#line 3930 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____trace_port_layout_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3933 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3935 "ll_backend.continuation_info.c"
  }
#line 3937 "ll_backend.continuation_info.c"
}

#line 3940 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____user_attribute_0_0_10001(
#line 3943 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3945 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3947 "ll_backend.continuation_info.c"
{
#line 3949 "ll_backend.continuation_info.c"
  {
#line 3951 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3954 "ll_backend.continuation_info.c"
    {
#line 3956 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____user_attribute_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3959 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3961 "ll_backend.continuation_info.c"
  }
#line 3963 "ll_backend.continuation_info.c"
}

#line 3966 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____user_attribute_0_0_10001(
#line 3969 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3971 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3973 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3975 "ll_backend.continuation_info.c"
{
#line 3977 "ll_backend.continuation_info.c"
  {
#line 3979 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3982 "ll_backend.continuation_info.c"
    {
#line 3984 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____user_attribute_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3987 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3989 "ll_backend.continuation_info.c"
  }
#line 3991 "ll_backend.continuation_info.c"
}

#line 3994 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____user_event_info_0_0_10001(
#line 3997 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3999 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 4001 "ll_backend.continuation_info.c"
{
#line 4003 "ll_backend.continuation_info.c"
  {
#line 4005 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 4008 "ll_backend.continuation_info.c"
    {
#line 4010 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____user_event_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 4013 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 4015 "ll_backend.continuation_info.c"
  }
#line 4017 "ll_backend.continuation_info.c"
}

#line 4020 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____user_event_info_0_0_10001(
#line 4023 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 4025 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 4027 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 4029 "ll_backend.continuation_info.c"
{
#line 4031 "ll_backend.continuation_info.c"
  {
#line 4033 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 4036 "ll_backend.continuation_info.c"
    {
#line 4038 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____user_event_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 4041 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 4043 "ll_backend.continuation_info.c"
  }
#line 4045 "ll_backend.continuation_info.c"
}

#line 739 "continuation_info.m"
static MR_bool MR_CALL 
ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_117_109_101_95_108_97_121_111_117_116_95_102_111_114_95_118_97_114_115_95_95_91_50_93_95_48_9_p_0_3(
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
ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_117_109_101_95_108_97_121_111_117_116_95_102_111_114_95_118_97_114_115_95_95_91_50_93_95_48_9_p_0_2(
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

#line 735 "continuation_info.m"
static MR_bool MR_CALL 
ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_117_109_101_95_108_97_121_111_117_116_95_102_111_114_95_118_97_114_115_95_95_91_50_93_95_48_9_p_0_1(
#line 735 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg)
#line 735 "continuation_info.m"
{
#line 735 "continuation_info.m"
  {
#line 735 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 735 "continuation_info.m"
    MR_Box ll_backend__continuation_info__closure = ll_backend__continuation_info__closure_arg;

#line 735 "continuation_info.m"
    {
#line 735 "continuation_info.m"
      return ll_backend__continuation_info__succeeded = mercury__int__f_greater_than_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__closure, (MR_Integer) 4))));
    }
#line 735 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 735 "continuation_info.m"
  }
#line 735 "continuation_info.m"
}

#line 699 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_117_109_101_95_108_97_121_111_117_116_95_102_111_114_95_118_97_114_115_95_95_91_50_93_95_48_9_p_0(
#line 699 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 699 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarTypes_3,
#line 699 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ProcInfo_4,
#line 699 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ModuleInfo_5,
#line 699 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_VarInfos_0_6,
#line 699 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_VarInfos_7,
#line 699 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_TVars_0_8,
#line 699 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_TVars_9)
#line 699 "continuation_info.m"
{
#line 704 "continuation_info.m"
  while (MR_TRUE)
#line 704 "continuation_info.m"
    {
#line 704 "continuation_info.m"
      /* tailcall optimized into a loop */
#line 704 "continuation_info.m"
      {
#line 704 "continuation_info.m"
        MR_bool ll_backend__continuation_info__succeeded;

#line 704 "continuation_info.m"
        if ((ll_backend__continuation_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 704 "continuation_info.m"
          {
#line 704 "continuation_info.m"
            *ll_backend__continuation_info__STATE_VARIABLE_TVars_9 = ll_backend__continuation_info__STATE_VARIABLE_TVars_0_8;
#line 704 "continuation_info.m"
            *ll_backend__continuation_info__STATE_VARIABLE_VarInfos_7 = ll_backend__continuation_info__STATE_VARIABLE_VarInfos_0_6;
#line 704 "continuation_info.m"
          }
#line 704 "continuation_info.m"
        else
#line 706 "continuation_info.m"
          {
#line 706 "continuation_info.m"
            MR_Word ll_backend__continuation_info__Var_20;
#line 706 "continuation_info.m"
            MR_Word ll_backend__continuation_info__LvalSet_21;
#line 706 "continuation_info.m"
            MR_Word ll_backend__continuation_info__VarLvals_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 706 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 706 "continuation_info.m"
            MR_Word ll_backend__continuation_info__STATE_VARIABLE_TVars_38_38;
#line 706 "continuation_info.m"
            MR_Word ll_backend__continuation_info__STATE_VARIABLE_VarInfos_39_39;
#line 708 "continuation_info.m"
            MR_Word ll_backend__continuation_info__Type_29;
#line 708 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_37_37;

#line 705 "continuation_info.m"
            ll_backend__continuation_info__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_36_36, (MR_Integer) 0)));
#line 705 "continuation_info.m"
            ll_backend__continuation_info__LvalSet_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_36_36, (MR_Integer) 1)));
#line 708 "continuation_info.m"
            {
#line 708 "continuation_info.m"
              hlds__vartypes__lookup_var_type_3_p_0(ll_backend__continuation_info__VarTypes_3, ll_backend__continuation_info__Var_20, &ll_backend__continuation_info__Type_29);
            }
#line 709 "continuation_info.m"
            {
#line 709 "continuation_info.m"
              ll_backend__continuation_info__V_37_37 = check_hlds__type_util__check_dummy_type_2_f_0(ll_backend__continuation_info__ModuleInfo_5, ll_backend__continuation_info__Type_29);
            }
#line 709 "continuation_info.m"
            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_37_37 == (MR_Integer) 0);
#line 712 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 711 "continuation_info.m"
              {
#line 711 "continuation_info.m"
                ll_backend__continuation_info__STATE_VARIABLE_TVars_38_38 = ll_backend__continuation_info__STATE_VARIABLE_TVars_0_8;
#line 711 "continuation_info.m"
                ll_backend__continuation_info__STATE_VARIABLE_VarInfos_39_39 = ll_backend__continuation_info__STATE_VARIABLE_VarInfos_0_6;
#line 711 "continuation_info.m"
              }
#line 712 "continuation_info.m"
            else
#line 714 "continuation_info.m"
              {
#line 714 "continuation_info.m"
                MR_Word ll_backend__continuation_info__VarInfo_30;
#line 714 "continuation_info.m"
                MR_Word ll_backend__continuation_info__TypeVars_31;
#line 714 "continuation_info.m"
                MR_Word ll_backend__continuation_info__LvalList_50;
#line 714 "continuation_info.m"
                MR_Word ll_backend__continuation_info__Lval_52;
#line 714 "continuation_info.m"
                MR_Word ll_backend__continuation_info__LiveValueType_55;
#line 714 "continuation_info.m"
                MR_Word ll_backend__continuation_info__V_75_75;
#line 714 "continuation_info.m"
                MR_Word ll_backend__continuation_info__VarSet_86;
#line 714 "continuation_info.m"
                MR_Word ll_backend__continuation_info__VarTypes_87;
#line 714 "continuation_info.m"
                MR_String ll_backend__continuation_info__Name_89;
#line 714 "continuation_info.m"
                MR_Word ll_backend__continuation_info__Type_90;
#line 730 "continuation_info.m"
                MR_Word ll_backend__continuation_info__LvalPrime_51;
#line 728 "continuation_info.m"
                MR_Word ll_backend__continuation_info__V_56_56;
#line 736 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__N_53;
#line 770 "continuation_info.m"
                MR_String ll_backend__continuation_info__GivenName_88;

#line 727 "continuation_info.m"
                {
#line 727 "continuation_info.m"
                  mercury__set__to_sorted_list_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__continuation_info__LvalSet_21, &ll_backend__continuation_info__LvalList_50);
                }
#line 728 "continuation_info.m"
                ll_backend__continuation_info__succeeded = ((MR_tag((MR_Word) ll_backend__continuation_info__LvalList_50)) == (MR_mktag((MR_Integer) 1)));
#line 728 "continuation_info.m"
                if (ll_backend__continuation_info__succeeded)
#line 728 "continuation_info.m"
                  {
#line 728 "continuation_info.m"
                    ll_backend__continuation_info__LvalPrime_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__LvalList_50, (MR_Integer) 0)));
#line 728 "continuation_info.m"
                    ll_backend__continuation_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__LvalList_50, (MR_Integer) 1)));
#line 728 "continuation_info.m"
                    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_56_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 728 "continuation_info.m"
                  }
#line 730 "continuation_info.m"
                if (ll_backend__continuation_info__succeeded)
#line 729 "continuation_info.m"
                  ll_backend__continuation_info__Lval_52 = ll_backend__continuation_info__LvalPrime_51;
#line 730 "continuation_info.m"
                else
#line 731 "continuation_info.m"
                  {
#line 731 "continuation_info.m"
                    {
#line 731 "continuation_info.m"
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.continuation_info", (MR_String) "predicate \140ll_backend.continuation_info.generate_resume_layout_for_var\'/7", (MR_String) "var has more than one lval in stack resume map");
#line 731 "continuation_info.m"
                      return;
                    }
#line 731 "continuation_info.m"
                  }
#line 734 "continuation_info.m"
                ll_backend__continuation_info__succeeded = ((((MR_tag((MR_Word) ll_backend__continuation_info__Lval_52)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__continuation_info__Lval_52, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 734 "continuation_info.m"
                if (ll_backend__continuation_info__succeeded)
#line 734 "continuation_info.m"
                  {
#line 734 "continuation_info.m"
                    ll_backend__continuation_info__N_53 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__continuation_info__Lval_52, (MR_Integer) 1)));
#line 735 "continuation_info.m"
                    {
#line 735 "continuation_info.m"
                      MR_Word ll_backend__continuation_info__V_60_60;

#line 735 "continuation_info.m"
                      {
#line 735 "continuation_info.m"
                        ll_backend__continuation_info__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 735 "continuation_info.m"
                        MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_60_60, 0) = ((MR_Box) (&ll_backend__continuation_info_scalar_common_3[3]));
#line 735 "continuation_info.m"
                        MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_60_60, 1) = ((MR_Box) (ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_117_109_101_95_108_97_121_111_117_116_95_102_111_114_95_118_97_114_115_95_95_91_50_93_95_48_9_p_0_1));
#line 735 "continuation_info.m"
                        MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 735 "continuation_info.m"
                        MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_60_60, 3) = ((MR_Box) (ll_backend__continuation_info__N_53));
#line 735 "continuation_info.m"
                        MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_60_60, 4) = ((MR_Box) ((MR_Integer) 0));
#line 735 "continuation_info.m"
                      }
#line 735 "continuation_info.m"
                      {
#line 735 "continuation_info.m"
                        mercury__require__expect_4_p_0(ll_backend__continuation_info__V_60_60, (MR_String) "ll_backend.continuation_info", (MR_String) "predicate \140ll_backend.continuation_info.generate_resume_layout_for_var\'/7", (MR_String) "bad stackvar");
                      }
#line 735 "continuation_info.m"
                    }
#line 734 "continuation_info.m"
                  }
#line 734 "continuation_info.m"
                else
#line 738 "continuation_info.m"
                  {
#line 738 "continuation_info.m"
                    MR_Integer ll_backend__continuation_info__N_78;

#line 736 "continuation_info.m"
                    ll_backend__continuation_info__succeeded = ((((MR_tag((MR_Word) ll_backend__continuation_info__Lval_52)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__continuation_info__Lval_52, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 736 "continuation_info.m"
                    if (ll_backend__continuation_info__succeeded)
#line 736 "continuation_info.m"
                      {
#line 736 "continuation_info.m"
                        ll_backend__continuation_info__N_78 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__continuation_info__Lval_52, (MR_Integer) 1)));
#line 737 "continuation_info.m"
                        {
#line 737 "continuation_info.m"
                          MR_Word ll_backend__continuation_info__V_65_65;

#line 737 "continuation_info.m"
                          {
#line 737 "continuation_info.m"
                            ll_backend__continuation_info__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 737 "continuation_info.m"
                            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_65_65, 0) = ((MR_Box) (&ll_backend__continuation_info_scalar_common_3[3]));
#line 737 "continuation_info.m"
                            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_65_65, 1) = ((MR_Box) (ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_117_109_101_95_108_97_121_111_117_116_95_102_111_114_95_118_97_114_115_95_95_91_50_93_95_48_9_p_0_2));
#line 737 "continuation_info.m"
                            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_65_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 737 "continuation_info.m"
                            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_65_65, 3) = ((MR_Box) (ll_backend__continuation_info__N_78));
#line 737 "continuation_info.m"
                            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_65_65, 4) = ((MR_Box) ((MR_Integer) 0));
#line 737 "continuation_info.m"
                          }
#line 737 "continuation_info.m"
                          {
#line 737 "continuation_info.m"
                            mercury__require__expect_4_p_0(ll_backend__continuation_info__V_65_65, (MR_String) "ll_backend.continuation_info", (MR_String) "predicate \140ll_backend.continuation_info.generate_resume_layout_for_var\'/7", (MR_String) "bad framevar");
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
                        MR_Integer ll_backend__continuation_info__N_77;
#line 738 "continuation_info.m"
                        MR_Word ll_backend__continuation_info__V_54_54;

#line 738 "continuation_info.m"
                        ll_backend__continuation_info__succeeded = ((((MR_tag((MR_Word) ll_backend__continuation_info__Lval_52)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__continuation_info__Lval_52, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 738 "continuation_info.m"
                        if (ll_backend__continuation_info__succeeded)
#line 738 "continuation_info.m"
                          {
#line 738 "continuation_info.m"
                            ll_backend__continuation_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__continuation_info__Lval_52, (MR_Integer) 1)));
#line 738 "continuation_info.m"
                            ll_backend__continuation_info__N_77 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__continuation_info__Lval_52, (MR_Integer) 2)));
#line 739 "continuation_info.m"
                            {
#line 739 "continuation_info.m"
                              MR_Word ll_backend__continuation_info__V_70_70;

#line 739 "continuation_info.m"
                              {
#line 739 "continuation_info.m"
                                ll_backend__continuation_info__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 739 "continuation_info.m"
                                MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_70_70, 0) = ((MR_Box) (&ll_backend__continuation_info_scalar_common_3[3]));
#line 739 "continuation_info.m"
                                MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_70_70, 1) = ((MR_Box) (ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_117_109_101_95_108_97_121_111_117_116_95_102_111_114_95_118_97_114_115_95_95_91_50_93_95_48_9_p_0_3));
#line 739 "continuation_info.m"
                                MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_70_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 739 "continuation_info.m"
                                MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_70_70, 3) = ((MR_Box) (ll_backend__continuation_info__N_77));
#line 739 "continuation_info.m"
                                MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_70_70, 4) = ((MR_Box) ((MR_Integer) 0));
#line 739 "continuation_info.m"
                              }
#line 739 "continuation_info.m"
                              {
#line 739 "continuation_info.m"
                                mercury__require__expect_4_p_0(ll_backend__continuation_info__V_70_70, (MR_String) "ll_backend.continuation_info", (MR_String) "predicate \140ll_backend.continuation_info.generate_resume_layout_for_var\'/7", (MR_String) "bad stackvar");
                              }
#line 739 "continuation_info.m"
                            }
#line 738 "continuation_info.m"
                          }
#line 738 "continuation_info.m"
                        else
#line 741 "continuation_info.m"
                          {
#line 741 "continuation_info.m"
                          }
#line 740 "continuation_info.m"
                      }
#line 738 "continuation_info.m"
                  }
#line 766 "continuation_info.m"
                {
#line 766 "continuation_info.m"
                  hlds__hlds_pred__proc_info_get_varset_2_p_0(ll_backend__continuation_info__ProcInfo_4, &ll_backend__continuation_info__VarSet_86);
                }
#line 767 "continuation_info.m"
                {
#line 767 "continuation_info.m"
                  hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__continuation_info__ProcInfo_4, &ll_backend__continuation_info__VarTypes_87);
                }
#line 768 "continuation_info.m"
                {
#line 768 "continuation_info.m"
                  ll_backend__continuation_info__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__continuation_info__VarSet_86, ll_backend__continuation_info__Var_20, &ll_backend__continuation_info__GivenName_88);
                }
#line 770 "continuation_info.m"
                if (ll_backend__continuation_info__succeeded)
#line 769 "continuation_info.m"
                  ll_backend__continuation_info__Name_89 = ll_backend__continuation_info__GivenName_88;
#line 770 "continuation_info.m"
                else
#line 771 "continuation_info.m"
                  ll_backend__continuation_info__Name_89 = (MR_String) "";
#line 773 "continuation_info.m"
                {
#line 773 "continuation_info.m"
                  hlds__vartypes__lookup_var_type_3_p_0(ll_backend__continuation_info__VarTypes_87, ll_backend__continuation_info__Var_20, &ll_backend__continuation_info__Type_90);
                }
#line 796 "continuation_info.m"
                mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 797 "continuation_info.m"
                {
#line 797 "continuation_info.m"
                  ll_backend__continuation_info__LiveValueType_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 797 "continuation_info.m"
                  MR_hl_field(MR_mktag(1), ll_backend__continuation_info__LiveValueType_55, 0) = ((MR_Box) (ll_backend__continuation_info__Var_20));
#line 797 "continuation_info.m"
                  MR_hl_field(MR_mktag(1), ll_backend__continuation_info__LiveValueType_55, 1) = ((MR_Box) (ll_backend__continuation_info__Name_89));
#line 797 "continuation_info.m"
                  MR_hl_field(MR_mktag(1), ll_backend__continuation_info__LiveValueType_55, 2) = ((MR_Box) (ll_backend__continuation_info__Type_90));
#line 797 "continuation_info.m"
                  MR_hl_field(MR_mktag(1), ll_backend__continuation_info__LiveValueType_55, 3) = NULL;
#line 797 "continuation_info.m"
                }
#line 798 "continuation_info.m"
                {
#line 798 "continuation_info.m"
                  parse_tree__prog_type__type_vars_2_p_0(ll_backend__continuation_info__Type_90, &ll_backend__continuation_info__TypeVars_31);
                }
#line 745 "continuation_info.m"
                {
#line 745 "continuation_info.m"
                  ll_backend__continuation_info__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 745 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_75_75, 0) = ((MR_Box) (ll_backend__continuation_info__Lval_52));
#line 745 "continuation_info.m"
                }
#line 745 "continuation_info.m"
                {
#line 745 "continuation_info.m"
                  ll_backend__continuation_info__VarInfo_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 745 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__VarInfo_30, 0) = ((MR_Box) (ll_backend__continuation_info__V_75_75));
#line 745 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__VarInfo_30, 1) = ((MR_Box) (ll_backend__continuation_info__LiveValueType_55));
#line 745 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__VarInfo_30, 2) = ((MR_Box) ((MR_String) "generate_result_layout_for_var"));
#line 745 "continuation_info.m"
                }
#line 715 "continuation_info.m"
                {
#line 715 "continuation_info.m"
                  mercury__set__insert_list_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[2], ll_backend__continuation_info__TypeVars_31, ll_backend__continuation_info__STATE_VARIABLE_TVars_0_8, &ll_backend__continuation_info__STATE_VARIABLE_TVars_38_38);
                }
#line 716 "continuation_info.m"
                {
#line 716 "continuation_info.m"
                  ll_backend__continuation_info__STATE_VARIABLE_VarInfos_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 716 "continuation_info.m"
                  MR_hl_field(MR_mktag(1), ll_backend__continuation_info__STATE_VARIABLE_VarInfos_39_39, 0) = ((MR_Box) (ll_backend__continuation_info__VarInfo_30));
#line 716 "continuation_info.m"
                  MR_hl_field(MR_mktag(1), ll_backend__continuation_info__STATE_VARIABLE_VarInfos_39_39, 1) = ((MR_Box) (ll_backend__continuation_info__STATE_VARIABLE_VarInfos_0_6));
#line 716 "continuation_info.m"
                }
#line 714 "continuation_info.m"
              }
#line 718 "continuation_info.m"
            /* direct tailcall eliminated */
#line 718 "continuation_info.m"
            {
#line 718 "continuation_info.m"
              MR_Word ll_backend__continuation_info__HeadVar__1__tmp_copy_1 = ll_backend__continuation_info__VarLvals_22;
#line 718 "continuation_info.m"
              MR_Word ll_backend__continuation_info__STATE_VARIABLE_VarInfos_0__tmp_copy_6 = ll_backend__continuation_info__STATE_VARIABLE_VarInfos_39_39;
#line 718 "continuation_info.m"
              MR_Word ll_backend__continuation_info__STATE_VARIABLE_TVars_0__tmp_copy_8 = ll_backend__continuation_info__STATE_VARIABLE_TVars_38_38;

#line 718 "continuation_info.m"
              ll_backend__continuation_info__STATE_VARIABLE_TVars_0_8 = ll_backend__continuation_info__STATE_VARIABLE_TVars_0__tmp_copy_8;
#line 718 "continuation_info.m"
              ll_backend__continuation_info__STATE_VARIABLE_VarInfos_0_6 = ll_backend__continuation_info__STATE_VARIABLE_VarInfos_0__tmp_copy_6;
#line 718 "continuation_info.m"
              ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__HeadVar__1__tmp_copy_1;
#line 718 "continuation_info.m"
            }
#line 718 "continuation_info.m"
            continue;
#line 706 "continuation_info.m"
          }
#line 704 "continuation_info.m"
      }
#line 704 "continuation_info.m"
      break;
#line 704 "continuation_info.m"
    }
#line 699 "continuation_info.m"
}

#line 661 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_118_97_114_95_108_105_118_101_95_108_118_97_108_117_101_115_95_95_91_50_44_32_53_93_95_48_7_p_0(
#line 661 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 661 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarLocs_3,
#line 661 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ProcInfo_4,
#line 661 "continuation_info.m"
  MR_Word ll_backend__continuation_info__WantReturnVarLayout_6,
#line 661 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__7_7)
#line 661 "continuation_info.m"
{
#line 665 "continuation_info.m"
  {
#line 665 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;

#line 665 "continuation_info.m"
    if ((ll_backend__continuation_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 665 "continuation_info.m"
      *ll_backend__continuation_info__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 665 "continuation_info.m"
    else
#line 667 "continuation_info.m"
      {
#line 667 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Var_13;
#line 667 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Lval_14;
#line 667 "continuation_info.m"
        MR_Word ll_backend__continuation_info__VarLvals_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 667 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Live_21;
#line 667 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Lives_22;
#line 667 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));

#line 666 "continuation_info.m"
        ll_backend__continuation_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_27_27, (MR_Integer) 0)));
#line 666 "continuation_info.m"
        ll_backend__continuation_info__Lval_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_27_27, (MR_Integer) 1)));
#line 674 "continuation_info.m"
#line 674 "continuation_info.m"
        switch (ll_backend__continuation_info__WantReturnVarLayout_6) {
#line 674 "continuation_info.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 674 "continuation_info.m"
          case (MR_Integer) 0:
#line 675 "continuation_info.m"
            {
#line 675 "continuation_info.m"
              MR_Word ll_backend__continuation_info__Empty_26;
#line 675 "continuation_info.m"
              MR_Word ll_backend__continuation_info__V_28_28;

#line 676 "continuation_info.m"
              {
#line 676 "continuation_info.m"
                mercury__map__init_1_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[2], (MR_Word) &ll_backend__continuation_info_scalar_common_1[3], &ll_backend__continuation_info__Empty_26);
              }
#line 677 "continuation_info.m"
              {
#line 677 "continuation_info.m"
                ll_backend__continuation_info__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 677 "continuation_info.m"
                MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_28_28, 0) = ((MR_Box) (ll_backend__continuation_info__Lval_14));
#line 677 "continuation_info.m"
              }
#line 677 "continuation_info.m"
              {
#line 677 "continuation_info.m"
                ll_backend__continuation_info__Live_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 677 "continuation_info.m"
                MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Live_21, 0) = ((MR_Box) (ll_backend__continuation_info__V_28_28));
#line 677 "continuation_info.m"
                MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Live_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
#line 677 "continuation_info.m"
                MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Live_21, 2) = ((MR_Box) (ll_backend__continuation_info__Empty_26));
#line 677 "continuation_info.m"
              }
#line 675 "continuation_info.m"
            }
#line 674 "continuation_info.m"
            break;
#line 674 "continuation_info.m"
          case (MR_Integer) 1:
#line 669 "continuation_info.m"
            {
#line 669 "continuation_info.m"
              MR_Word ll_backend__continuation_info__LiveValueType_23;
#line 669 "continuation_info.m"
              MR_Word ll_backend__continuation_info__TypeVars_24;
#line 669 "continuation_info.m"
              MR_Word ll_backend__continuation_info__TypeParams_25;
#line 669 "continuation_info.m"
              MR_Word ll_backend__continuation_info__V_30_30;
#line 669 "continuation_info.m"
              MR_Word ll_backend__continuation_info__VarSet_39;
#line 669 "continuation_info.m"
              MR_Word ll_backend__continuation_info__VarTypes_40;
#line 669 "continuation_info.m"
              MR_String ll_backend__continuation_info__Name_42;
#line 669 "continuation_info.m"
              MR_Word ll_backend__continuation_info__Type_43;
#line 770 "continuation_info.m"
              MR_String ll_backend__continuation_info__GivenName_41;

#line 766 "continuation_info.m"
              {
#line 766 "continuation_info.m"
                hlds__hlds_pred__proc_info_get_varset_2_p_0(ll_backend__continuation_info__ProcInfo_4, &ll_backend__continuation_info__VarSet_39);
              }
#line 767 "continuation_info.m"
              {
#line 767 "continuation_info.m"
                hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__continuation_info__ProcInfo_4, &ll_backend__continuation_info__VarTypes_40);
              }
#line 768 "continuation_info.m"
              {
#line 768 "continuation_info.m"
                ll_backend__continuation_info__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__continuation_info__VarSet_39, ll_backend__continuation_info__Var_13, &ll_backend__continuation_info__GivenName_41);
              }
#line 770 "continuation_info.m"
              if (ll_backend__continuation_info__succeeded)
#line 769 "continuation_info.m"
                ll_backend__continuation_info__Name_42 = ll_backend__continuation_info__GivenName_41;
#line 770 "continuation_info.m"
              else
#line 771 "continuation_info.m"
                ll_backend__continuation_info__Name_42 = (MR_String) "";
#line 773 "continuation_info.m"
              {
#line 773 "continuation_info.m"
                hlds__vartypes__lookup_var_type_3_p_0(ll_backend__continuation_info__VarTypes_40, ll_backend__continuation_info__Var_13, &ll_backend__continuation_info__Type_43);
              }
#line 796 "continuation_info.m"
              mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 797 "continuation_info.m"
              {
#line 797 "continuation_info.m"
                ll_backend__continuation_info__LiveValueType_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 797 "continuation_info.m"
                MR_hl_field(MR_mktag(1), ll_backend__continuation_info__LiveValueType_23, 0) = ((MR_Box) (ll_backend__continuation_info__Var_13));
#line 797 "continuation_info.m"
                MR_hl_field(MR_mktag(1), ll_backend__continuation_info__LiveValueType_23, 1) = ((MR_Box) (ll_backend__continuation_info__Name_42));
#line 797 "continuation_info.m"
                MR_hl_field(MR_mktag(1), ll_backend__continuation_info__LiveValueType_23, 2) = ((MR_Box) (ll_backend__continuation_info__Type_43));
#line 797 "continuation_info.m"
                MR_hl_field(MR_mktag(1), ll_backend__continuation_info__LiveValueType_23, 3) = NULL;
#line 797 "continuation_info.m"
              }
#line 798 "continuation_info.m"
              {
#line 798 "continuation_info.m"
                parse_tree__prog_type__type_vars_2_p_0(ll_backend__continuation_info__Type_43, &ll_backend__continuation_info__TypeVars_24);
              }
#line 672 "continuation_info.m"
              {
#line 672 "continuation_info.m"
                ll_backend__continuation_info__find_typeinfos_for_tvars_4_p_0(ll_backend__continuation_info__TypeVars_24, ll_backend__continuation_info__VarLocs_3, ll_backend__continuation_info__ProcInfo_4, &ll_backend__continuation_info__TypeParams_25);
              }
#line 673 "continuation_info.m"
              {
#line 673 "continuation_info.m"
                ll_backend__continuation_info__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 673 "continuation_info.m"
                MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_30_30, 0) = ((MR_Box) (ll_backend__continuation_info__Lval_14));
#line 673 "continuation_info.m"
              }
#line 673 "continuation_info.m"
              {
#line 673 "continuation_info.m"
                ll_backend__continuation_info__Live_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 673 "continuation_info.m"
                MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Live_21, 0) = ((MR_Box) (ll_backend__continuation_info__V_30_30));
#line 673 "continuation_info.m"
                MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Live_21, 1) = ((MR_Box) (ll_backend__continuation_info__LiveValueType_23));
#line 673 "continuation_info.m"
                MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Live_21, 2) = ((MR_Box) (ll_backend__continuation_info__TypeParams_25));
#line 673 "continuation_info.m"
              }
#line 669 "continuation_info.m"
            }
#line 674 "continuation_info.m"
            break;
#line 674 "continuation_info.m"
        }
#line 679 "continuation_info.m"
        {
#line 679 "continuation_info.m"
          ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_118_97_114_95_108_105_118_101_95_108_118_97_108_117_101_115_95_95_91_50_44_32_53_93_95_48_7_p_0(ll_backend__continuation_info__VarLvals_15, ll_backend__continuation_info__VarLocs_3, ll_backend__continuation_info__ProcInfo_4, ll_backend__continuation_info__WantReturnVarLayout_6, &ll_backend__continuation_info__Lives_22);
        }
#line 667 "continuation_info.m"
        {
#line 667 "continuation_info.m"
          MR_Word base;
#line 667 "continuation_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 667 "continuation_info.m"
          *ll_backend__continuation_info__HeadVar__7_7 = base;
#line 667 "continuation_info.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__continuation_info__Live_21));
#line 667 "continuation_info.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__continuation_info__Lives_22));
#line 667 "continuation_info.m"
        }
#line 667 "continuation_info.m"
      }
#line 665 "continuation_info.m"
  }
#line 661 "continuation_info.m"
}

#line 387 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_117_109_101_95_108_97_121_111_117_116_95_95_91_51_93_95_48_6_p_0(
#line 387 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ResumeMap_7,
#line 387 "continuation_info.m"
  MR_Word ll_backend__continuation_info__Temps_8,
#line 387 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ProcInfo_10,
#line 387 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ModuleInfo_11,
#line 387 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__Layout_12)
#line 387 "continuation_info.m"
{
#line 685 "continuation_info.m"
  {
#line 685 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 685 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeInfo_27_27;
#line 685 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeCtorInfo_28_28;
#line 685 "continuation_info.m"
    MR_Word ll_backend__continuation_info__ResumeList_13;
#line 685 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TVars0_14;
#line 685 "continuation_info.m"
    MR_Word ll_backend__continuation_info__VarTypes_15;
#line 685 "continuation_info.m"
    MR_Word ll_backend__continuation_info__VarInfos_16;
#line 685 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TVars_17;
#line 685 "continuation_info.m"
    MR_Word ll_backend__continuation_info__VarInfoSet_18;
#line 685 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TVarList_19;
#line 685 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TVarInfoMap_20;
#line 685 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TempInfos_21;
#line 685 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TempInfoSet_22;
#line 685 "continuation_info.m"
    MR_Word ll_backend__continuation_info__AllInfoSet_23;

#line 686 "continuation_info.m"
    {
#line 686 "continuation_info.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[0], (MR_Word) &ll_backend__continuation_info_scalar_common_1[1], ll_backend__continuation_info__ResumeMap_7, &ll_backend__continuation_info__ResumeList_13);
    }
#line 4812 "ll_backend.continuation_info.c"
    ll_backend__continuation_info__TypeInfo_27_27 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[2];
#line 687 "continuation_info.m"
    {
#line 687 "continuation_info.m"
      mercury__set__init_1_p_0(ll_backend__continuation_info__TypeInfo_27_27, &ll_backend__continuation_info__TVars0_14);
    }
#line 688 "continuation_info.m"
    {
#line 688 "continuation_info.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__continuation_info__ProcInfo_10, &ll_backend__continuation_info__VarTypes_15);
    }
#line 689 "continuation_info.m"
    {
#line 689 "continuation_info.m"
      ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_117_109_101_95_108_97_121_111_117_116_95_102_111_114_95_118_97_114_115_95_95_91_50_93_95_48_9_p_0(ll_backend__continuation_info__ResumeList_13, ll_backend__continuation_info__VarTypes_15, ll_backend__continuation_info__ProcInfo_10, ll_backend__continuation_info__ModuleInfo_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__continuation_info__VarInfos_16, ll_backend__continuation_info__TVars0_14, &ll_backend__continuation_info__TVars_17);
    }
#line 4829 "ll_backend.continuation_info.c"
    ll_backend__continuation_info__TypeCtorInfo_28_28 = (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0;
#line 691 "continuation_info.m"
    {
#line 691 "continuation_info.m"
      mercury__set__list_to_set_2_p_0(ll_backend__continuation_info__TypeCtorInfo_28_28, ll_backend__continuation_info__VarInfos_16, &ll_backend__continuation_info__VarInfoSet_18);
    }
#line 692 "continuation_info.m"
    {
#line 692 "continuation_info.m"
      mercury__set__to_sorted_list_2_p_0(ll_backend__continuation_info__TypeInfo_27_27, ll_backend__continuation_info__TVars_17, &ll_backend__continuation_info__TVarList_19);
    }
#line 693 "continuation_info.m"
    {
#line 693 "continuation_info.m"
      ll_backend__continuation_info__find_typeinfos_for_tvars_4_p_0(ll_backend__continuation_info__TVarList_19, ll_backend__continuation_info__ResumeMap_7, ll_backend__continuation_info__ProcInfo_10, &ll_backend__continuation_info__TVarInfoMap_20);
    }
#line 694 "continuation_info.m"
    {
#line 694 "continuation_info.m"
      ll_backend__continuation_info__generate_temp_var_infos_2_p_0(ll_backend__continuation_info__Temps_8, &ll_backend__continuation_info__TempInfos_21);
    }
#line 695 "continuation_info.m"
    {
#line 695 "continuation_info.m"
      mercury__set__list_to_set_2_p_0(ll_backend__continuation_info__TypeCtorInfo_28_28, ll_backend__continuation_info__TempInfos_21, &ll_backend__continuation_info__TempInfoSet_22);
    }
#line 696 "continuation_info.m"
    {
#line 696 "continuation_info.m"
      mercury__set__union_3_p_0(ll_backend__continuation_info__TypeCtorInfo_28_28, ll_backend__continuation_info__VarInfoSet_18, ll_backend__continuation_info__TempInfoSet_22, &ll_backend__continuation_info__AllInfoSet_23);
    }
#line 697 "continuation_info.m"
    {
#line 697 "continuation_info.m"
      MR_Word base;
#line 697 "continuation_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 697 "continuation_info.m"
      *ll_backend__continuation_info__Layout_12 = base;
#line 697 "continuation_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__continuation_info__AllInfoSet_23));
#line 697 "continuation_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__continuation_info__TVarInfoMap_20));
#line 697 "continuation_info.m"
    }
#line 685 "continuation_info.m"
  }
#line 387 "continuation_info.m"
}

#line 379 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_116_117_114_110_95_108_105_118_101_95_108_118_97_108_117_101_115_95_95_91_50_44_32_55_93_95_48_10_p_0(
#line 379 "continuation_info.m"
  MR_Word ll_backend__continuation_info__OutputArgLocs_11,
#line 379 "continuation_info.m"
  MR_Word ll_backend__continuation_info__Vars_13,
#line 379 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarLocs_14,
#line 379 "continuation_info.m"
  MR_Word ll_backend__continuation_info__Temps_15,
#line 379 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ProcInfo_16,
#line 379 "continuation_info.m"
  MR_Word ll_backend__continuation_info__Globals_18,
#line 379 "continuation_info.m"
  MR_Word ll_backend__continuation_info__OkToDeleteAny_19,
#line 379 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__LiveLvalues_20)
#line 379 "continuation_info.m"
{
#line 614 "continuation_info.m"
  {
#line 614 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 614 "continuation_info.m"
    MR_Word ll_backend__continuation_info__WantReturnVarLayout_21;
#line 614 "continuation_info.m"
    MR_Word ll_backend__continuation_info__StackSlots_22;
#line 614 "continuation_info.m"
    MR_Word ll_backend__continuation_info__VarLvals_23;
#line 614 "continuation_info.m"
    MR_Word ll_backend__continuation_info__VarLiveLvalues_24;
#line 614 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TempLiveLvalues_25;

#line 615 "continuation_info.m"
    {
#line 615 "continuation_info.m"
      libs__globals__want_return_var_layouts_2_p_0(ll_backend__continuation_info__Globals_18, &ll_backend__continuation_info__WantReturnVarLayout_21);
    }
#line 616 "continuation_info.m"
    {
#line 616 "continuation_info.m"
      hlds__hlds_pred__proc_info_get_stack_slots_2_p_0(ll_backend__continuation_info__ProcInfo_16, &ll_backend__continuation_info__StackSlots_22);
    }
#line 617 "continuation_info.m"
    {
#line 617 "continuation_info.m"
      ll_backend__continuation_info__find_return_var_lvals_5_p_0(ll_backend__continuation_info__Vars_13, ll_backend__continuation_info__StackSlots_22, ll_backend__continuation_info__OkToDeleteAny_19, ll_backend__continuation_info__OutputArgLocs_11, &ll_backend__continuation_info__VarLvals_23);
    }
#line 619 "continuation_info.m"
    {
#line 619 "continuation_info.m"
      ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_118_97_114_95_108_105_118_101_95_108_118_97_108_117_101_115_95_95_91_50_44_32_53_93_95_48_7_p_0(ll_backend__continuation_info__VarLvals_23, ll_backend__continuation_info__VarLocs_14, ll_backend__continuation_info__ProcInfo_16, ll_backend__continuation_info__WantReturnVarLayout_21, &ll_backend__continuation_info__VarLiveLvalues_24);
    }
#line 621 "continuation_info.m"
    {
#line 621 "continuation_info.m"
      ll_backend__continuation_info__generate_temp_live_lvalues_2_p_0(ll_backend__continuation_info__Temps_15, &ll_backend__continuation_info__TempLiveLvalues_25);
    }
#line 622 "continuation_info.m"
    {
#line 622 "continuation_info.m"
      mercury__list__append_3_p_1((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_liveinfo_0, ll_backend__continuation_info__VarLiveLvalues_24, ll_backend__continuation_info__TempLiveLvalues_25, ll_backend__continuation_info__LiveLvalues_20);
#line 622 "continuation_info.m"
      return;
    }
#line 614 "continuation_info.m"
  }
#line 379 "continuation_info.m"
}

#line 942 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars_table__942__1_4_p_0(
#line 942 "continuation_info.m"
  MR_Word ll_backend__continuation_info__NumberedVars_6,
#line 942 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarSet_9,
#line 942 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_22,
#line 942 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__4_23)
#line 942 "continuation_info.m"
{
#line 942 "continuation_info.m"
  {
#line 942 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 942 "continuation_info.m"
    MR_Word ll_backend__continuation_info__LocnPrime_18;

#line 935 "continuation_info.m"
    if (((MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__3_22)) == (MR_mktag((MR_Integer) 0))))
#line 936 "continuation_info.m"
      {
#line 936 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfoVar_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_22, (MR_Integer) 0)));
#line 936 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__Slot_29;
#line 937 "continuation_info.m"
        MR_Box ll_backend__continuation_info__conv0_Slot_29;

#line 937 "continuation_info.m"
        {
#line 937 "continuation_info.m"
          ll_backend__continuation_info__succeeded = mercury__assoc_list__search_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__continuation_info__NumberedVars_6, ((MR_Box) (ll_backend__continuation_info__TypeInfoVar_28)), &ll_backend__continuation_info__conv0_Slot_29);
        }
#line 937 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 937 "continuation_info.m"
          {
#line 937 "continuation_info.m"
            ll_backend__continuation_info__Slot_29 = ((MR_Integer) ll_backend__continuation_info__conv0_Slot_29);
#line 937 "continuation_info.m"
            ll_backend__continuation_info__succeeded = MR_TRUE;
#line 937 "continuation_info.m"
          }
#line 936 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 936 "continuation_info.m"
          {
#line 938 "continuation_info.m"
            {
#line 938 "continuation_info.m"
              ll_backend__continuation_info__LocnPrime_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 938 "continuation_info.m"
              MR_hl_field(MR_mktag(0), ll_backend__continuation_info__LocnPrime_18, 0) = ((MR_Box) (ll_backend__continuation_info__Slot_29));
#line 938 "continuation_info.m"
            }
#line 938 "continuation_info.m"
            ll_backend__continuation_info__succeeded = MR_TRUE;
#line 936 "continuation_info.m"
          }
#line 936 "continuation_info.m"
      }
#line 935 "continuation_info.m"
    else
#line 932 "continuation_info.m"
      {
#line 932 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfoVar_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__3_22, (MR_Integer) 0)));
#line 932 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__FieldNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__3_22, (MR_Integer) 1)));
#line 932 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__Slot_17;
#line 933 "continuation_info.m"
        MR_Box ll_backend__continuation_info__conv1_Slot_17;

#line 933 "continuation_info.m"
        {
#line 933 "continuation_info.m"
          ll_backend__continuation_info__succeeded = mercury__assoc_list__search_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__continuation_info__NumberedVars_6, ((MR_Box) (ll_backend__continuation_info__TypeInfoVar_15)), &ll_backend__continuation_info__conv1_Slot_17);
        }
#line 933 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 933 "continuation_info.m"
          {
#line 933 "continuation_info.m"
            ll_backend__continuation_info__Slot_17 = ((MR_Integer) ll_backend__continuation_info__conv1_Slot_17);
#line 933 "continuation_info.m"
            ll_backend__continuation_info__succeeded = MR_TRUE;
#line 933 "continuation_info.m"
          }
#line 932 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 932 "continuation_info.m"
          {
#line 934 "continuation_info.m"
            {
#line 934 "continuation_info.m"
              ll_backend__continuation_info__LocnPrime_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 934 "continuation_info.m"
              MR_hl_field(MR_mktag(1), ll_backend__continuation_info__LocnPrime_18, 0) = ((MR_Box) (ll_backend__continuation_info__Slot_17));
#line 934 "continuation_info.m"
              MR_hl_field(MR_mktag(1), ll_backend__continuation_info__LocnPrime_18, 1) = ((MR_Box) (ll_backend__continuation_info__FieldNum_16));
#line 934 "continuation_info.m"
            }
#line 934 "continuation_info.m"
            ll_backend__continuation_info__succeeded = MR_TRUE;
#line 932 "continuation_info.m"
          }
#line 932 "continuation_info.m"
      }
#line 942 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 941 "continuation_info.m"
      *ll_backend__continuation_info__HeadVar__4_23 = ll_backend__continuation_info__LocnPrime_18;
#line 942 "continuation_info.m"
    else
#line 943 "continuation_info.m"
      {
#line 943 "continuation_info.m"
        MR_String ll_backend__continuation_info__VarName_19;
#line 943 "continuation_info.m"
        MR_String ll_backend__continuation_info__V_26_26;
#line 943 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfoVar_30;

#line 943 "continuation_info.m"
        {
#line 943 "continuation_info.m"
          hlds__hlds_rtti__type_info_locn_var_2_p_0(ll_backend__continuation_info__HeadVar__3_22, &ll_backend__continuation_info__TypeInfoVar_30);
        }
#line 944 "continuation_info.m"
        {
#line 944 "continuation_info.m"
          mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__continuation_info__VarSet_9, ll_backend__continuation_info__TypeInfoVar_30, &ll_backend__continuation_info__VarName_19);
        }
#line 946 "continuation_info.m"
        {
#line 946 "continuation_info.m"
          ll_backend__continuation_info__V_26_26 = mercury__string__f_43_43_2_f_0((MR_String) "can\'t find slot for type_info var ", ll_backend__continuation_info__VarName_19);
        }
#line 945 "continuation_info.m"
        {
#line 945 "continuation_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.continuation_info", (MR_String) "predicate \140ll_backend.continuation_info.find_typeinfos_for_tvars_table\'/4", ll_backend__continuation_info__V_26_26);
#line 945 "continuation_info.m"
          return;
        }
#line 943 "continuation_info.m"
      }
#line 942 "continuation_info.m"
  }
#line 942 "continuation_info.m"
}

#line 563 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__562__1_3_p_0_1(
#line 563 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 563 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 563 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 563 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_3)
#line 563 "continuation_info.m"
{
#line 563 "continuation_info.m"
  {
#line 563 "continuation_info.m"
    MR_Box ll_backend__continuation_info__closure = ll_backend__continuation_info__closure_arg;
#line 563 "continuation_info.m"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__3_47;

#line 563 "continuation_info.m"
    {
#line 563 "continuation_info.m"
      ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__563__1_3_p_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), &ll_backend__continuation_info__conv0_HeadVar__3_47);
    }
#line 563 "continuation_info.m"
    *ll_backend__continuation_info__wrapper_arg_3 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__3_47));
#line 563 "continuation_info.m"
  }
#line 563 "continuation_info.m"
}

#line 562 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__562__1_3_p_0(
#line 562 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_29,
#line 562 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_30,
#line 562 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__3_31)
#line 562 "continuation_info.m"
{
#line 562 "continuation_info.m"
  {
#line 562 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;

#line 563 "continuation_info.m"
    {
#line 563 "continuation_info.m"
      mercury__map__union_4_p_1((MR_Word) &ll_backend__continuation_info_scalar_common_1[3], (MR_Word) &ll_backend__continuation_info_scalar_common_1[2], (MR_Word) &ll_backend__continuation_info_scalar_common_2[10], ll_backend__continuation_info__HeadVar__1_29, ll_backend__continuation_info__HeadVar__2_30, ll_backend__continuation_info__HeadVar__3_31);
#line 563 "continuation_info.m"
      return;
    }
#line 562 "continuation_info.m"
  }
#line 562 "continuation_info.m"
}

#line 563 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__563__1_3_p_0(
#line 563 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_45,
#line 563 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_46,
#line 563 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__3_47)
#line 563 "continuation_info.m"
{
#line 563 "continuation_info.m"
  {
#line 563 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;

#line 563 "continuation_info.m"
    {
#line 563 "continuation_info.m"
      mercury__set__intersect_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0, ll_backend__continuation_info__HeadVar__1_45, ll_backend__continuation_info__HeadVar__2_46, ll_backend__continuation_info__HeadVar__3_47);
#line 563 "continuation_info.m"
      return;
    }
#line 563 "continuation_info.m"
  }
#line 563 "continuation_info.m"
}

#line 558 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__558__1_2_p_0(
#line 558 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_26,
#line 558 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__2_27)
#line 558 "continuation_info.m"
{
#line 558 "continuation_info.m"
  {
#line 558 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 558 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_26, (MR_Integer) 0)));
#line 558 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_26, (MR_Integer) 1)));

#line 558 "continuation_info.m"
    *ll_backend__continuation_info__HeadVar__2_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_26, (MR_Integer) 2)));
#line 558 "continuation_info.m"
  }
#line 558 "continuation_info.m"
}

#line 552 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__552__1_2_p_0(
#line 552 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_23,
#line 552 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__2_24)
#line 552 "continuation_info.m"
{
#line 552 "continuation_info.m"
  {
#line 552 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 552 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Lval_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_23, (MR_Integer) 0)));
#line 552 "continuation_info.m"
    MR_Word ll_backend__continuation_info__LiveValueType_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_23, (MR_Integer) 1)));
#line 553 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_23, (MR_Integer) 2)));

#line 554 "continuation_info.m"
    {
#line 554 "continuation_info.m"
      MR_Word base;
#line 554 "continuation_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 554 "continuation_info.m"
      *ll_backend__continuation_info__HeadVar__2_24 = base;
#line 554 "continuation_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__continuation_info__Lval_10));
#line 554 "continuation_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__continuation_info__LiveValueType_11));
#line 554 "continuation_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_String) "convert_return_data"));
#line 554 "continuation_info.m"
    }
#line 552 "continuation_info.m"
  }
#line 552 "continuation_info.m"
}

#line 533 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__process_continuation__533__1_3_p_0(
#line 533 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_54,
#line 533 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_55,
#line 533 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__3_56)
#line 533 "continuation_info.m"
{
#line 533 "continuation_info.m"
  {
#line 533 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;

#line 533 "continuation_info.m"
    {
#line 533 "continuation_info.m"
      mercury__set__intersect_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0, ll_backend__continuation_info__HeadVar__1_54, ll_backend__continuation_info__HeadVar__2_55, ll_backend__continuation_info__HeadVar__3_56);
#line 533 "continuation_info.m"
      return;
    }
#line 533 "continuation_info.m"
  }
#line 533 "continuation_info.m"
}

#line 868 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars__865__1_4_p_0_1(
#line 868 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 868 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 868 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 868 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_3)
#line 868 "continuation_info.m"
{
#line 868 "continuation_info.m"
  {
#line 868 "continuation_info.m"
    MR_Box ll_backend__continuation_info__closure = ll_backend__continuation_info__closure_arg;
#line 868 "continuation_info.m"
    MR_Word ll_backend__continuation_info__conv1_HeadVar__4_32;

#line 868 "continuation_info.m"
    {
#line 868 "continuation_info.m"
      ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars__868__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), &ll_backend__continuation_info__conv1_HeadVar__4_32);
    }
#line 868 "continuation_info.m"
    *ll_backend__continuation_info__wrapper_arg_3 = ((MR_Box) (ll_backend__continuation_info__conv1_HeadVar__4_32));
#line 868 "continuation_info.m"
  }
#line 868 "continuation_info.m"
}

#line 865 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars__865__1_4_p_0(
#line 865 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarLocs_6,
#line 865 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarSet_9,
#line 865 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_28,
#line 865 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__4_29)
#line 865 "continuation_info.m"
{
#line 865 "continuation_info.m"
  {
#line 865 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 865 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeInfoVar_15;
#line 879 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeInfoLvalSet_16;
#line 867 "continuation_info.m"
    MR_Box ll_backend__continuation_info__conv0_TypeInfoLvalSet_16;

#line 866 "continuation_info.m"
    {
#line 866 "continuation_info.m"
      hlds__hlds_rtti__type_info_locn_var_2_p_0(ll_backend__continuation_info__HeadVar__3_28, &ll_backend__continuation_info__TypeInfoVar_15);
    }
#line 867 "continuation_info.m"
    {
#line 867 "continuation_info.m"
      ll_backend__continuation_info__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[0], (MR_Word) &ll_backend__continuation_info_scalar_common_1[1], ll_backend__continuation_info__VarLocs_6, ((MR_Box) (ll_backend__continuation_info__TypeInfoVar_15)), &ll_backend__continuation_info__conv0_TypeInfoLvalSet_16);
    }
#line 867 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 867 "continuation_info.m"
      {
#line 867 "continuation_info.m"
        ll_backend__continuation_info__TypeInfoLvalSet_16 = ((MR_Word) ll_backend__continuation_info__conv0_TypeInfoLvalSet_16);
#line 867 "continuation_info.m"
        ll_backend__continuation_info__succeeded = MR_TRUE;
#line 867 "continuation_info.m"
      }
#line 879 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 877 "continuation_info.m"
      {
#line 877 "continuation_info.m"
        MR_Word ll_backend__continuation_info__AddLocn_17;
#line 877 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_33_33;
#line 878 "continuation_info.m"
        MR_Box ll_backend__continuation_info__conv2_HeadVar__4_29;

#line 868 "continuation_info.m"
        {
#line 868 "continuation_info.m"
          ll_backend__continuation_info__AddLocn_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 868 "continuation_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__continuation_info__AddLocn_17, 0) = ((MR_Box) (&ll_backend__continuation_info_scalar_common_4[3]));
#line 868 "continuation_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__continuation_info__AddLocn_17, 1) = ((MR_Box) (ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars__865__1_4_p_0_1));
#line 868 "continuation_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__continuation_info__AddLocn_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 868 "continuation_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__continuation_info__AddLocn_17, 3) = ((MR_Box) (ll_backend__continuation_info__HeadVar__3_28));
#line 868 "continuation_info.m"
        }
#line 878 "continuation_info.m"
        {
#line 878 "continuation_info.m"
          ll_backend__continuation_info__V_33_33 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0);
        }
#line 878 "continuation_info.m"
        {
#line 878 "continuation_info.m"
          mercury__set__fold_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__continuation_info_scalar_common_1[3], ll_backend__continuation_info__AddLocn_17, ll_backend__continuation_info__TypeInfoLvalSet_16, ((MR_Box) (ll_backend__continuation_info__V_33_33)), &ll_backend__continuation_info__conv2_HeadVar__4_29);
        }
#line 878 "continuation_info.m"
        *ll_backend__continuation_info__HeadVar__4_29 = ((MR_Word) ll_backend__continuation_info__conv2_HeadVar__4_29);
#line 877 "continuation_info.m"
      }
#line 879 "continuation_info.m"
    else
#line 880 "continuation_info.m"
      {
#line 880 "continuation_info.m"
        MR_String ll_backend__continuation_info__VarName_25;
#line 880 "continuation_info.m"
        MR_String ll_backend__continuation_info__V_36_36;

#line 880 "continuation_info.m"
        {
#line 880 "continuation_info.m"
          mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__continuation_info__VarSet_9, ll_backend__continuation_info__TypeInfoVar_15, &ll_backend__continuation_info__VarName_25);
        }
#line 882 "continuation_info.m"
        {
#line 882 "continuation_info.m"
          ll_backend__continuation_info__V_36_36 = mercury__string__f_43_43_2_f_0((MR_String) "can\'t find rval for type_info var ", ll_backend__continuation_info__VarName_25);
        }
#line 881 "continuation_info.m"
        {
#line 881 "continuation_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.continuation_info", (MR_String) "predicate \140ll_backend.continuation_info.find_typeinfos_for_tvars\'/4", ll_backend__continuation_info__V_36_36);
#line 881 "continuation_info.m"
          return;
        }
#line 880 "continuation_info.m"
      }
#line 865 "continuation_info.m"
  }
#line 865 "continuation_info.m"
}

#line 868 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars__868__1_4_p_0(
#line 868 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_28,
#line 868 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_30,
#line 868 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_31,
#line 868 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__4_32)
#line 868 "continuation_info.m"
{
#line 868 "continuation_info.m"
  {
#line 868 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 868 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Locn_23;

#line 872 "continuation_info.m"
    if (((MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__1_28)) == (MR_mktag((MR_Integer) 0))))
#line 874 "continuation_info.m"
      {
#line 874 "continuation_info.m"
        ll_backend__continuation_info__Locn_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 874 "continuation_info.m"
        MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Locn_23, 0) = ((MR_Box) (ll_backend__continuation_info__HeadVar__2_30));
#line 874 "continuation_info.m"
      }
#line 872 "continuation_info.m"
    else
#line 870 "continuation_info.m"
      {
#line 870 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__FieldNum_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__1_28, (MR_Integer) 1)));
#line 870 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__1_28, (MR_Integer) 0)));

#line 871 "continuation_info.m"
        {
#line 871 "continuation_info.m"
          ll_backend__continuation_info__Locn_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 871 "continuation_info.m"
          MR_hl_field(MR_mktag(1), ll_backend__continuation_info__Locn_23, 0) = ((MR_Box) (ll_backend__continuation_info__HeadVar__2_30));
#line 871 "continuation_info.m"
          MR_hl_field(MR_mktag(1), ll_backend__continuation_info__Locn_23, 1) = ((MR_Box) (ll_backend__continuation_info__FieldNum_22));
#line 871 "continuation_info.m"
        }
#line 870 "continuation_info.m"
      }
#line 876 "continuation_info.m"
    {
#line 876 "continuation_info.m"
      mercury__set__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0, ((MR_Box) (ll_backend__continuation_info__Locn_23)), ll_backend__continuation_info__HeadVar__3_31, ll_backend__continuation_info__HeadVar__4_32);
#line 876 "continuation_info.m"
      return;
    }
#line 868 "continuation_info.m"
  }
#line 868 "continuation_info.m"
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
#line 5526 "ll_backend.continuation_info.c"
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
#line 5548 "ll_backend.continuation_info.c"
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

#line 5615 "ll_backend.continuation_info.c"
        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_3_3 == ll_backend__continuation_info__V_5_5);
#line 307 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 307 "continuation_info.m"
          {
#line 5621 "ll_backend.continuation_info.c"
            ll_backend__continuation_info__TypeInfo_9_9 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[22];
#line 5623 "ll_backend.continuation_info.c"
            {
#line 5625 "ll_backend.continuation_info.c"
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
#line 5663 "ll_backend.continuation_info.c"
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
#line 5685 "ll_backend.continuation_info.c"
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

#line 5752 "ll_backend.continuation_info.c"
        {
#line 5754 "ll_backend.continuation_info.c"
          ll_backend__continuation_info__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__continuation_info__V_3_3, ll_backend__continuation_info__V_5_5);
        }
#line 301 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 301 "continuation_info.m"
          {
#line 5761 "ll_backend.continuation_info.c"
            ll_backend__continuation_info__TypeInfo_10_10 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[0];
#line 5763 "ll_backend.continuation_info.c"
            {
#line 5765 "ll_backend.continuation_info.c"
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
#line 5803 "ll_backend.continuation_info.c"
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
#line 5841 "ll_backend.continuation_info.c"
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
#line 5865 "ll_backend.continuation_info.c"
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
#line 5889 "ll_backend.continuation_info.c"
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
#line 5909 "ll_backend.continuation_info.c"
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
#line 5929 "ll_backend.continuation_info.c"
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

#line 6016 "ll_backend.continuation_info.c"
        {
#line 6018 "ll_backend.continuation_info.c"
          ll_backend__continuation_info__succeeded = mercury__term____Unify____context_0_0(ll_backend__continuation_info__V_3_3, ll_backend__continuation_info__V_9_9);
        }
#line 266 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 266 "continuation_info.m"
          {
#line 6025 "ll_backend.continuation_info.c"
            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_4_4 == ll_backend__continuation_info__V_10_10);
#line 266 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 266 "continuation_info.m"
              {
#line 6031 "ll_backend.continuation_info.c"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_5_5 == ll_backend__continuation_info__V_11_11);
#line 266 "continuation_info.m"
                if (ll_backend__continuation_info__succeeded)
#line 266 "continuation_info.m"
                  {
#line 6037 "ll_backend.continuation_info.c"
                    {
#line 6039 "ll_backend.continuation_info.c"
                      ll_backend__continuation_info__succeeded = mdbcomp__goal_path____Unify____forward_goal_path_0_0(ll_backend__continuation_info__V_6_6, ll_backend__continuation_info__V_12_12);
                    }
#line 266 "continuation_info.m"
                    if (ll_backend__continuation_info__succeeded)
#line 266 "continuation_info.m"
                      {
#line 6046 "ll_backend.continuation_info.c"
                        ll_backend__continuation_info__TypeInfo_19_19 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[20];
#line 6048 "ll_backend.continuation_info.c"
                        {
#line 6050 "ll_backend.continuation_info.c"
                          ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_19_19, ((MR_Box) (ll_backend__continuation_info__V_7_7)), ((MR_Box) (ll_backend__continuation_info__V_13_13)));
                        }
#line 266 "continuation_info.m"
                        if (ll_backend__continuation_info__succeeded)
#line 6055 "ll_backend.continuation_info.c"
                          {
#line 6057 "ll_backend.continuation_info.c"
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
#line 6118 "ll_backend.continuation_info.c"
  {
#line 6120 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__HeadVar__2_1 == ll_backend__continuation_info__HeadVar__2_2);

#line 6123 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 6125 "ll_backend.continuation_info.c"
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
#line 6154 "ll_backend.continuation_info.c"
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
#line 6256 "ll_backend.continuation_info.c"
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
#line 6350 "ll_backend.continuation_info.c"
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
#line 6444 "ll_backend.continuation_info.c"
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
#line 6538 "ll_backend.continuation_info.c"
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
#line 6632 "ll_backend.continuation_info.c"
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
#line 6726 "ll_backend.continuation_info.c"
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
#line 6820 "ll_backend.continuation_info.c"
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
#line 6914 "ll_backend.continuation_info.c"
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
#line 7008 "ll_backend.continuation_info.c"
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
#line 7102 "ll_backend.continuation_info.c"
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
#line 7196 "ll_backend.continuation_info.c"
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
#line 7229 "ll_backend.continuation_info.c"
                    *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                    break;
#line 339 "continuation_info.m"
                  case (MR_Integer) 1:
#line 7235 "ll_backend.continuation_info.c"
                    *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                    break;
#line 339 "continuation_info.m"
                  case (MR_Integer) 2:
#line 7241 "ll_backend.continuation_info.c"
                    *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                    break;
#line 339 "continuation_info.m"
                  case (MR_Integer) 3:
#line 7247 "ll_backend.continuation_info.c"
                    *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                    break;
#line 339 "continuation_info.m"
                  case (MR_Integer) 4:
#line 7253 "ll_backend.continuation_info.c"
                    *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                    break;
#line 339 "continuation_info.m"
                  case (MR_Integer) 5:
#line 7259 "ll_backend.continuation_info.c"
                    *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                    break;
#line 339 "continuation_info.m"
                  case (MR_Integer) 6:
#line 7265 "ll_backend.continuation_info.c"
                    *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                    break;
#line 339 "continuation_info.m"
                  case (MR_Integer) 7:
#line 7271 "ll_backend.continuation_info.c"
                    *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                    break;
#line 339 "continuation_info.m"
                  case (MR_Integer) 8:
#line 7277 "ll_backend.continuation_info.c"
                    *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                    break;
#line 339 "continuation_info.m"
                  case (MR_Integer) 9:
#line 7283 "ll_backend.continuation_info.c"
                    *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "continuation_info.m"
                    break;
#line 339 "continuation_info.m"
                  case (MR_Integer) 10:
#line 7289 "ll_backend.continuation_info.c"
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
#line 7552 "ll_backend.continuation_info.c"
                {
#line 7554 "ll_backend.continuation_info.c"
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
#line 7596 "ll_backend.continuation_info.c"
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
#line 7618 "ll_backend.continuation_info.c"
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

#line 7679 "ll_backend.continuation_info.c"
        {
#line 7681 "ll_backend.continuation_info.c"
          ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[19], ((MR_Box) (ll_backend__continuation_info__V_3_3)), ((MR_Box) (ll_backend__continuation_info__V_5_5)));
        }
#line 276 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 7686 "ll_backend.continuation_info.c"
          {
#line 7688 "ll_backend.continuation_info.c"
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
#line 7724 "ll_backend.continuation_info.c"
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
#line 7753 "ll_backend.continuation_info.c"
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
#line 7766 "ll_backend.continuation_info.c"
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
#line 7834 "ll_backend.continuation_info.c"
            {
#line 7836 "ll_backend.continuation_info.c"
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
#line 7860 "ll_backend.continuation_info.c"
            {
#line 7862 "ll_backend.continuation_info.c"
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
#line 7900 "ll_backend.continuation_info.c"
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
#line 8010 "ll_backend.continuation_info.c"
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
#line 8030 "ll_backend.continuation_info.c"
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
#line 8054 "ll_backend.continuation_info.c"
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
#line 8074 "ll_backend.continuation_info.c"
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
#line 8094 "ll_backend.continuation_info.c"
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
#line 8114 "ll_backend.continuation_info.c"
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
#line 8134 "ll_backend.continuation_info.c"
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
#line 8154 "ll_backend.continuation_info.c"
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
#line 8174 "ll_backend.continuation_info.c"
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
#line 8194 "ll_backend.continuation_info.c"
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
#line 8214 "ll_backend.continuation_info.c"
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
#line 8234 "ll_backend.continuation_info.c"
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
#line 8254 "ll_backend.continuation_info.c"
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
#line 8278 "ll_backend.continuation_info.c"
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
#line 8298 "ll_backend.continuation_info.c"
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
#line 8318 "ll_backend.continuation_info.c"
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
#line 8342 "ll_backend.continuation_info.c"
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
#line 8362 "ll_backend.continuation_info.c"
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
#line 8382 "ll_backend.continuation_info.c"
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
#line 8402 "ll_backend.continuation_info.c"
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
#line 8422 "ll_backend.continuation_info.c"
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
#line 8446 "ll_backend.continuation_info.c"
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
#line 8466 "ll_backend.continuation_info.c"
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

#line 8683 "ll_backend.continuation_info.c"
        {
#line 8685 "ll_backend.continuation_info.c"
          ll_backend__continuation_info__succeeded = hlds__hlds_rtti____Unify____rtti_proc_label_0_0(ll_backend__continuation_info__V_3_3, ll_backend__continuation_info__V_27_27);
        }
#line 84 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
          {
#line 8692 "ll_backend.continuation_info.c"
            {
#line 8694 "ll_backend.continuation_info.c"
              ll_backend__continuation_info__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__continuation_info__V_4_4, ll_backend__continuation_info__V_28_28);
            }
#line 84 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
              {
#line 8701 "ll_backend.continuation_info.c"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_5_5 == ll_backend__continuation_info__V_29_29);
#line 84 "continuation_info.m"
                if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                  {
#line 8707 "ll_backend.continuation_info.c"
                    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_6_6 == ll_backend__continuation_info__V_30_30);
#line 84 "continuation_info.m"
                    if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                      {
#line 8713 "ll_backend.continuation_info.c"
                        ll_backend__continuation_info__TypeInfo_55_55 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[11];
#line 8715 "ll_backend.continuation_info.c"
                        {
#line 8717 "ll_backend.continuation_info.c"
                          ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_55_55, ((MR_Box) (ll_backend__continuation_info__V_7_7)), ((MR_Box) (ll_backend__continuation_info__V_31_31)));
                        }
#line 84 "continuation_info.m"
                        if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                          {
#line 8724 "ll_backend.continuation_info.c"
                            {
#line 8726 "ll_backend.continuation_info.c"
                              ll_backend__continuation_info__succeeded = parse_tree__prog_data____Unify____eval_method_0_0(ll_backend__continuation_info__V_8_8, ll_backend__continuation_info__V_32_32);
                            }
#line 84 "continuation_info.m"
                            if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                              {
#line 8733 "ll_backend.continuation_info.c"
                                {
#line 8735 "ll_backend.continuation_info.c"
                                  ll_backend__continuation_info__succeeded = libs__trace_params____Unify____trace_level_0_0(ll_backend__continuation_info__V_9_9, ll_backend__continuation_info__V_33_33);
                                }
#line 84 "continuation_info.m"
                                if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                  {
#line 8742 "ll_backend.continuation_info.c"
                                    ll_backend__continuation_info__TypeInfo_58_58 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[12];
#line 8744 "ll_backend.continuation_info.c"
                                    {
#line 8746 "ll_backend.continuation_info.c"
                                      ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_58_58, ((MR_Box) (ll_backend__continuation_info__V_10_10)), ((MR_Box) (ll_backend__continuation_info__V_34_34)));
                                    }
#line 84 "continuation_info.m"
                                    if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                      {
#line 8753 "ll_backend.continuation_info.c"
                                        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_11_11 == ll_backend__continuation_info__V_35_35);
#line 84 "continuation_info.m"
                                        if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                          {
#line 8759 "ll_backend.continuation_info.c"
                                            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_12_12 == ll_backend__continuation_info__V_36_36);
#line 84 "continuation_info.m"
                                            if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                              {
#line 8765 "ll_backend.continuation_info.c"
                                                ll_backend__continuation_info__TypeInfo_59_59 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[13];
#line 8767 "ll_backend.continuation_info.c"
                                                {
#line 8769 "ll_backend.continuation_info.c"
                                                  ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_59_59, ((MR_Box) (ll_backend__continuation_info__V_13_13)), ((MR_Box) (ll_backend__continuation_info__V_37_37)));
                                                }
#line 84 "continuation_info.m"
                                                if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                                  {
#line 8776 "ll_backend.continuation_info.c"
                                                    ll_backend__continuation_info__TypeInfo_60_60 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[14];
#line 8778 "ll_backend.continuation_info.c"
                                                    {
#line 8780 "ll_backend.continuation_info.c"
                                                      ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_60_60, ((MR_Box) (ll_backend__continuation_info__V_14_14)), ((MR_Box) (ll_backend__continuation_info__V_38_38)));
                                                    }
#line 84 "continuation_info.m"
                                                    if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                                      {
#line 8787 "ll_backend.continuation_info.c"
                                                        {
#line 8789 "ll_backend.continuation_info.c"
                                                          ll_backend__continuation_info__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(ll_backend__continuation_info__V_15_15, ll_backend__continuation_info__V_39_39);
                                                        }
#line 84 "continuation_info.m"
                                                        if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                                          {
#line 8796 "ll_backend.continuation_info.c"
                                                            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_16_16 == ll_backend__continuation_info__V_40_40);
#line 84 "continuation_info.m"
                                                            if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                                              {
#line 8802 "ll_backend.continuation_info.c"
                                                                {
#line 8804 "ll_backend.continuation_info.c"
                                                                  ll_backend__continuation_info__succeeded = hlds__instmap____Unify____instmap_0_0(ll_backend__continuation_info__V_17_17, ll_backend__continuation_info__V_41_41);
                                                                }
#line 84 "continuation_info.m"
                                                                if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                                                  {
#line 8811 "ll_backend.continuation_info.c"
                                                                    {
#line 8813 "ll_backend.continuation_info.c"
                                                                      ll_backend__continuation_info__succeeded = ll_backend__trace_gen____Unify____trace_slot_info_0_0(ll_backend__continuation_info__V_18_18, ll_backend__continuation_info__V_42_42);
                                                                    }
#line 84 "continuation_info.m"
                                                                    if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                                                      {
#line 8820 "ll_backend.continuation_info.c"
                                                                        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_19_19 == ll_backend__continuation_info__V_43_43);
#line 84 "continuation_info.m"
                                                                        if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                                                          {
#line 8826 "ll_backend.continuation_info.c"
                                                                            ll_backend__continuation_info__TypeInfo_64_64 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[15];
#line 8828 "ll_backend.continuation_info.c"
                                                                            {
#line 8830 "ll_backend.continuation_info.c"
                                                                              ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_64_64, ((MR_Box) (ll_backend__continuation_info__V_20_20)), ((MR_Box) (ll_backend__continuation_info__V_44_44)));
                                                                            }
#line 84 "continuation_info.m"
                                                                            if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                                                              {
#line 8837 "ll_backend.continuation_info.c"
                                                                                ll_backend__continuation_info__TypeInfo_65_65 = (MR_Word) &ll_backend__continuation_info_scalar_common_2[2];
#line 8839 "ll_backend.continuation_info.c"
                                                                                {
#line 8841 "ll_backend.continuation_info.c"
                                                                                  ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_65_65, ((MR_Box) (ll_backend__continuation_info__V_21_21)), ((MR_Box) (ll_backend__continuation_info__V_45_45)));
                                                                                }
#line 84 "continuation_info.m"
                                                                                if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                                                                  {
#line 8848 "ll_backend.continuation_info.c"
                                                                                    ll_backend__continuation_info__TypeInfo_66_66 = (MR_Word) &ll_backend__continuation_info_scalar_common_2[0];
#line 8850 "ll_backend.continuation_info.c"
                                                                                    {
#line 8852 "ll_backend.continuation_info.c"
                                                                                      ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_66_66, ((MR_Box) (ll_backend__continuation_info__V_22_22)), ((MR_Box) (ll_backend__continuation_info__V_46_46)));
                                                                                    }
#line 84 "continuation_info.m"
                                                                                    if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                                                                      {
#line 8859 "ll_backend.continuation_info.c"
                                                                                        ll_backend__continuation_info__TypeInfo_67_67 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[16];
#line 8861 "ll_backend.continuation_info.c"
                                                                                        {
#line 8863 "ll_backend.continuation_info.c"
                                                                                          ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_67_67, ((MR_Box) (ll_backend__continuation_info__V_23_23)), ((MR_Box) (ll_backend__continuation_info__V_47_47)));
                                                                                        }
#line 84 "continuation_info.m"
                                                                                        if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                                                                          {
#line 8870 "ll_backend.continuation_info.c"
                                                                                            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_24_24 == ll_backend__continuation_info__V_48_48);
#line 84 "continuation_info.m"
                                                                                            if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                                                                              {
#line 8876 "ll_backend.continuation_info.c"
                                                                                                ll_backend__continuation_info__TypeInfo_68_68 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[17];
#line 8878 "ll_backend.continuation_info.c"
                                                                                                {
#line 8880 "ll_backend.continuation_info.c"
                                                                                                  ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_68_68, ((MR_Box) (ll_backend__continuation_info__V_25_25)), ((MR_Box) (ll_backend__continuation_info__V_49_49)));
                                                                                                }
#line 84 "continuation_info.m"
                                                                                                if (ll_backend__continuation_info__succeeded)
#line 84 "continuation_info.m"
                                                                                                  {
#line 8887 "ll_backend.continuation_info.c"
                                                                                                    ll_backend__continuation_info__TypeInfo_69_69 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[18];
#line 8889 "ll_backend.continuation_info.c"
                                                                                                    {
#line 8891 "ll_backend.continuation_info.c"
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
#line 9035 "ll_backend.continuation_info.c"
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
#line 9061 "ll_backend.continuation_info.c"
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
#line 9081 "ll_backend.continuation_info.c"
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

#line 9148 "ll_backend.continuation_info.c"
        {
#line 9150 "ll_backend.continuation_info.c"
          ll_backend__continuation_info__succeeded = hlds__hlds_pred____Unify____hlds_proc_static_0_0(ll_backend__continuation_info__V_3_3, ll_backend__continuation_info__V_6_6);
        }
#line 161 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 161 "continuation_info.m"
          {
#line 9157 "ll_backend.continuation_info.c"
            {
#line 9159 "ll_backend.continuation_info.c"
              ll_backend__continuation_info__succeeded = ll_backend__layout____Unify____deep_excp_slots_0_0(ll_backend__continuation_info__V_4_4, ll_backend__continuation_info__V_7_7);
            }
#line 161 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 9164 "ll_backend.continuation_info.c"
              {
#line 9166 "ll_backend.continuation_info.c"
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
#line 9204 "ll_backend.continuation_info.c"
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
#line 9230 "ll_backend.continuation_info.c"
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
#line 9250 "ll_backend.continuation_info.c"
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

#line 9317 "ll_backend.continuation_info.c"
        {
#line 9319 "ll_backend.continuation_info.c"
          ll_backend__continuation_info__succeeded = ll_backend__llds____Unify____layout_locn_0_0(ll_backend__continuation_info__V_3_3, ll_backend__continuation_info__V_6_6);
        }
#line 293 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 293 "continuation_info.m"
          {
#line 9326 "ll_backend.continuation_info.c"
            {
#line 9328 "ll_backend.continuation_info.c"
              ll_backend__continuation_info__succeeded = ll_backend__llds____Unify____live_value_type_0_0(ll_backend__continuation_info__V_4_4, ll_backend__continuation_info__V_7_7);
            }
#line 293 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 9333 "ll_backend.continuation_info.c"
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
#line 9370 "ll_backend.continuation_info.c"
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
#line 9392 "ll_backend.continuation_info.c"
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

#line 9459 "ll_backend.continuation_info.c"
        {
#line 9461 "ll_backend.continuation_info.c"
          ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[10], ((MR_Box) (ll_backend__continuation_info__V_3_3)), ((MR_Box) (ll_backend__continuation_info__V_5_5)));
        }
#line 284 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 284 "continuation_info.m"
          {
#line 9468 "ll_backend.continuation_info.c"
            ll_backend__continuation_info__TypeInfo_10_10 = (MR_Word) &ll_backend__continuation_info_scalar_common_2[1];
#line 9470 "ll_backend.continuation_info.c"
            {
#line 9472 "ll_backend.continuation_info.c"
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
#line 9510 "ll_backend.continuation_info.c"
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
#line 9536 "ll_backend.continuation_info.c"
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
#line 9556 "ll_backend.continuation_info.c"
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

#line 9631 "ll_backend.continuation_info.c"
        {
#line 9633 "ll_backend.continuation_info.c"
          ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[7], ((MR_Box) (ll_backend__continuation_info__V_3_3)), ((MR_Box) (ll_backend__continuation_info__V_6_6)));
        }
#line 259 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 259 "continuation_info.m"
          {
#line 9640 "ll_backend.continuation_info.c"
            ll_backend__continuation_info__TypeInfo_12_12 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[8];
#line 9642 "ll_backend.continuation_info.c"
            {
#line 9644 "ll_backend.continuation_info.c"
              ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_12_12, ((MR_Box) (ll_backend__continuation_info__V_4_4)), ((MR_Box) (ll_backend__continuation_info__V_7_7)));
            }
#line 259 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 259 "continuation_info.m"
              {
#line 9651 "ll_backend.continuation_info.c"
                ll_backend__continuation_info__TypeInfo_13_13 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[9];
#line 9653 "ll_backend.continuation_info.c"
                {
#line 9655 "ll_backend.continuation_info.c"
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
#line 9695 "ll_backend.continuation_info.c"
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
#line 9717 "ll_backend.continuation_info.c"
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

#line 9784 "ll_backend.continuation_info.c"
        {
#line 9786 "ll_backend.continuation_info.c"
          ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[6], ((MR_Box) (ll_backend__continuation_info__V_3_3)), ((MR_Box) (ll_backend__continuation_info__V_5_5)));
        }
#line 313 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 313 "continuation_info.m"
          {
#line 9793 "ll_backend.continuation_info.c"
            ll_backend__continuation_info__TypeInfo_10_10 = (MR_Word) &ll_backend__continuation_info_scalar_common_2[1];
#line 9795 "ll_backend.continuation_info.c"
            {
#line 9797 "ll_backend.continuation_info.c"
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
#line 9835 "ll_backend.continuation_info.c"
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
#line 9857 "ll_backend.continuation_info.c"
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

#line 9918 "ll_backend.continuation_info.c"
        {
#line 9920 "ll_backend.continuation_info.c"
          ll_backend__continuation_info__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ll_backend__continuation_info__V_3_3, ll_backend__continuation_info__V_5_5);
        }
#line 324 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 9925 "ll_backend.continuation_info.c"
          {
#line 9927 "ll_backend.continuation_info.c"
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

#line 446 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info____Compare____call_info_0_0(
#line 446 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 446 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 446 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3)
#line 446 "continuation_info.m"
{
#line 446 "continuation_info.m"
  {
#line 446 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 446 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_18 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;
#line 446 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_19 = (MR_Integer) ll_backend__continuation_info__HeadVar__3_3;

#line 446 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_18 == ll_backend__continuation_info__CastY_19);
#line 446 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 9963 "ll_backend.continuation_info.c"
      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 446 "continuation_info.m"
    else
#line 446 "continuation_info.m"
      {
#line 446 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 446 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 446 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 2)));
#line 446 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 3)));
#line 446 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 4)));
#line 446 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));
#line 446 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 1)));
#line 446 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 2)));
#line 446 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 3)));
#line 446 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 4)));
#line 446 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_14_14;

#line 446 "continuation_info.m"
        {
#line 446 "continuation_info.m"
          ll_backend__llds____Compare____label_0_0(&ll_backend__continuation_info__V_14_14, ll_backend__continuation_info__V_4_4, ll_backend__continuation_info__V_9_9);
        }
#line 9997 "ll_backend.continuation_info.c"
        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_14_14 == (MR_Integer) 0);
#line 446 "continuation_info.m"
        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 446 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 446 "continuation_info.m"
          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_14_14;
#line 446 "continuation_info.m"
        else
#line 446 "continuation_info.m"
          {
#line 446 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_15_15;

#line 446 "continuation_info.m"
            {
#line 446 "continuation_info.m"
              ll_backend__llds____Compare____code_addr_0_0(&ll_backend__continuation_info__V_15_15, ll_backend__continuation_info__V_5_5, ll_backend__continuation_info__V_10_10);
            }
#line 10017 "ll_backend.continuation_info.c"
            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_15_15 == (MR_Integer) 0);
#line 446 "continuation_info.m"
            ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 446 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 446 "continuation_info.m"
              *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_15_15;
#line 446 "continuation_info.m"
            else
#line 446 "continuation_info.m"
              {
#line 446 "continuation_info.m"
                MR_Word ll_backend__continuation_info__V_16_16;

#line 446 "continuation_info.m"
                {
#line 446 "continuation_info.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[4], &ll_backend__continuation_info__V_16_16, ((MR_Box) (ll_backend__continuation_info__V_6_6)), ((MR_Box) (ll_backend__continuation_info__V_11_11)));
                }
#line 10037 "ll_backend.continuation_info.c"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_16_16 == (MR_Integer) 0);
#line 446 "continuation_info.m"
                ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 446 "continuation_info.m"
                if (ll_backend__continuation_info__succeeded)
#line 446 "continuation_info.m"
                  *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_16_16;
#line 446 "continuation_info.m"
                else
#line 446 "continuation_info.m"
                  {
#line 446 "continuation_info.m"
                    MR_Word ll_backend__continuation_info__V_17_17;

#line 446 "continuation_info.m"
                    {
#line 446 "continuation_info.m"
                      mercury__term____Compare____context_0_0(&ll_backend__continuation_info__V_17_17, ll_backend__continuation_info__V_7_7, ll_backend__continuation_info__V_12_12);
                    }
#line 10057 "ll_backend.continuation_info.c"
                    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_17_17 == (MR_Integer) 0);
#line 446 "continuation_info.m"
                    ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 446 "continuation_info.m"
                    if (ll_backend__continuation_info__succeeded)
#line 446 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_17_17;
#line 446 "continuation_info.m"
                    else
#line 446 "continuation_info.m"
                      {
#line 446 "continuation_info.m"
                        {
#line 446 "continuation_info.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[5], ll_backend__continuation_info__HeadVar__1_1, ((MR_Box) (ll_backend__continuation_info__V_8_8)), ((MR_Box) (ll_backend__continuation_info__V_13_13)));
#line 446 "continuation_info.m"
                          return;
                        }
#line 446 "continuation_info.m"
                      }
#line 446 "continuation_info.m"
                  }
#line 446 "continuation_info.m"
              }
#line 446 "continuation_info.m"
          }
#line 446 "continuation_info.m"
      }
#line 446 "continuation_info.m"
  }
#line 446 "continuation_info.m"
}

#line 446 "continuation_info.m"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____call_info_0_0(
#line 446 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 446 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2)
#line 446 "continuation_info.m"
{
#line 446 "continuation_info.m"
  {
#line 446 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 446 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_13 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 446 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_14 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 446 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_13 == ll_backend__continuation_info__CastY_14);
#line 446 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 446 "continuation_info.m"
      ll_backend__continuation_info__succeeded = MR_TRUE;
#line 446 "continuation_info.m"
    else
#line 446 "continuation_info.m"
      {
#line 446 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_17_17;
#line 446 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_19_19;
#line 446 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 446 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 446 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 2)));
#line 446 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 3)));
#line 446 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 4)));
#line 446 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 446 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 446 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 2)));
#line 446 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 3)));
#line 446 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 4)));

#line 10144 "ll_backend.continuation_info.c"
        {
#line 10146 "ll_backend.continuation_info.c"
          ll_backend__continuation_info__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__continuation_info__V_3_3, ll_backend__continuation_info__V_8_8);
        }
#line 446 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 446 "continuation_info.m"
          {
#line 10153 "ll_backend.continuation_info.c"
            {
#line 10155 "ll_backend.continuation_info.c"
              ll_backend__continuation_info__succeeded = ll_backend__llds____Unify____code_addr_0_0(ll_backend__continuation_info__V_4_4, ll_backend__continuation_info__V_9_9);
            }
#line 446 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 446 "continuation_info.m"
              {
#line 10162 "ll_backend.continuation_info.c"
                ll_backend__continuation_info__TypeInfo_17_17 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[4];
#line 10164 "ll_backend.continuation_info.c"
                {
#line 10166 "ll_backend.continuation_info.c"
                  ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_17_17, ((MR_Box) (ll_backend__continuation_info__V_5_5)), ((MR_Box) (ll_backend__continuation_info__V_10_10)));
                }
#line 446 "continuation_info.m"
                if (ll_backend__continuation_info__succeeded)
#line 446 "continuation_info.m"
                  {
#line 10173 "ll_backend.continuation_info.c"
                    {
#line 10175 "ll_backend.continuation_info.c"
                      ll_backend__continuation_info__succeeded = mercury__term____Unify____context_0_0(ll_backend__continuation_info__V_6_6, ll_backend__continuation_info__V_11_11);
                    }
#line 446 "continuation_info.m"
                    if (ll_backend__continuation_info__succeeded)
#line 446 "continuation_info.m"
                      {
#line 10182 "ll_backend.continuation_info.c"
                        ll_backend__continuation_info__TypeInfo_19_19 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[5];
#line 10184 "ll_backend.continuation_info.c"
                        {
#line 10186 "ll_backend.continuation_info.c"
                          return ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_19_19, ((MR_Box) (ll_backend__continuation_info__V_7_7)), ((MR_Box) (ll_backend__continuation_info__V_12_12)));
                        }
#line 446 "continuation_info.m"
                      }
#line 446 "continuation_info.m"
                  }
#line 446 "continuation_info.m"
              }
#line 446 "continuation_info.m"
          }
#line 446 "continuation_info.m"
      }
#line 446 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 446 "continuation_info.m"
  }
#line 446 "continuation_info.m"
}

#line 901 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__build_table_arg_info_6_p_0(
#line 901 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarSet_1,
#line 901 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarTypes_2,
#line 901 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3,
#line 901 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__4_4,
#line 901 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_TypeVars_0_5,
#line 901 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_TypeVars_6)
#line 901 "continuation_info.m"
{
#line 905 "continuation_info.m"
  {
#line 905 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;

#line 905 "continuation_info.m"
    if ((ll_backend__continuation_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 905 "continuation_info.m"
      {
#line 905 "continuation_info.m"
        *ll_backend__continuation_info__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 905 "continuation_info.m"
        *ll_backend__continuation_info__STATE_VARIABLE_TypeVars_6 = ll_backend__continuation_info__STATE_VARIABLE_TypeVars_0_5;
#line 905 "continuation_info.m"
      }
#line 905 "continuation_info.m"
    else
#line 907 "continuation_info.m"
      {
#line 907 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeCtorInfo_29_29;
#line 907 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Var_14;
#line 907 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__SlotNum_15;
#line 907 "continuation_info.m"
        MR_Word ll_backend__continuation_info__NumberedVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 1)));
#line 907 "continuation_info.m"
        MR_Word ll_backend__continuation_info__ArgLayout_17;
#line 907 "continuation_info.m"
        MR_Word ll_backend__continuation_info__ArgLayouts_18;
#line 907 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__VarNum_20;
#line 907 "continuation_info.m"
        MR_String ll_backend__continuation_info__VarName_21;
#line 907 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Type_22;
#line 907 "continuation_info.m"
        MR_Word ll_backend__continuation_info__VarTypeVars_23;
#line 907 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));
#line 907 "continuation_info.m"
        MR_Word ll_backend__continuation_info__STATE_VARIABLE_TypeVars_27_27;

#line 906 "continuation_info.m"
        ll_backend__continuation_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_26_26, (MR_Integer) 0)));
#line 906 "continuation_info.m"
        ll_backend__continuation_info__SlotNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_26_26, (MR_Integer) 1)));
#line 10271 "ll_backend.continuation_info.c"
        ll_backend__continuation_info__TypeCtorInfo_29_29 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 908 "continuation_info.m"
        {
#line 908 "continuation_info.m"
          mercury__term__var_to_int_2_p_0(ll_backend__continuation_info__TypeCtorInfo_29_29, ll_backend__continuation_info__Var_14, &ll_backend__continuation_info__VarNum_20);
        }
#line 909 "continuation_info.m"
        {
#line 909 "continuation_info.m"
          mercury__varset__lookup_name_3_p_0(ll_backend__continuation_info__TypeCtorInfo_29_29, ll_backend__continuation_info__VarSet_1, ll_backend__continuation_info__Var_14, &ll_backend__continuation_info__VarName_21);
        }
#line 910 "continuation_info.m"
        {
#line 910 "continuation_info.m"
          hlds__vartypes__lookup_var_type_3_p_0(ll_backend__continuation_info__VarTypes_2, ll_backend__continuation_info__Var_14, &ll_backend__continuation_info__Type_22);
        }
#line 911 "continuation_info.m"
        {
#line 911 "continuation_info.m"
          ll_backend__continuation_info__ArgLayout_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 911 "continuation_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ArgLayout_17, 0) = ((MR_Box) (ll_backend__continuation_info__VarNum_20));
#line 911 "continuation_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ArgLayout_17, 1) = ((MR_Box) (ll_backend__continuation_info__VarName_21));
#line 911 "continuation_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ArgLayout_17, 2) = ((MR_Box) (ll_backend__continuation_info__SlotNum_15));
#line 911 "continuation_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ArgLayout_17, 3) = ((MR_Box) (ll_backend__continuation_info__Type_22));
#line 911 "continuation_info.m"
        }
#line 912 "continuation_info.m"
        {
#line 912 "continuation_info.m"
          parse_tree__prog_type__type_vars_2_p_0(ll_backend__continuation_info__Type_22, &ll_backend__continuation_info__VarTypeVars_23);
        }
#line 913 "continuation_info.m"
        {
#line 913 "continuation_info.m"
          mercury__set__insert_list_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[2], ll_backend__continuation_info__VarTypeVars_23, ll_backend__continuation_info__STATE_VARIABLE_TypeVars_0_5, &ll_backend__continuation_info__STATE_VARIABLE_TypeVars_27_27);
        }
#line 914 "continuation_info.m"
        {
#line 914 "continuation_info.m"
          ll_backend__continuation_info__build_table_arg_info_6_p_0(ll_backend__continuation_info__VarSet_1, ll_backend__continuation_info__VarTypes_2, ll_backend__continuation_info__NumberedVars_16, &ll_backend__continuation_info__ArgLayouts_18, ll_backend__continuation_info__STATE_VARIABLE_TypeVars_27_27, ll_backend__continuation_info__STATE_VARIABLE_TypeVars_6);
        }
#line 907 "continuation_info.m"
        {
#line 907 "continuation_info.m"
          MR_Word base;
#line 907 "continuation_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 907 "continuation_info.m"
          *ll_backend__continuation_info__HeadVar__4_4 = base;
#line 907 "continuation_info.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__continuation_info__ArgLayout_17));
#line 907 "continuation_info.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__continuation_info__ArgLayouts_18));
#line 907 "continuation_info.m"
        }
#line 907 "continuation_info.m"
      }
#line 905 "continuation_info.m"
  }
#line 901 "continuation_info.m"
}

#line 825 "continuation_info.m"
static MR_bool MR_CALL 
ll_backend__continuation_info__build_closure_info_10_p_0(
#line 825 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 825 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 825 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3,
#line 825 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__4_4,
#line 825 "continuation_info.m"
  MR_Word ll_backend__continuation_info__InstMap_5,
#line 825 "continuation_info.m"
  MR_Word ll_backend__continuation_info__UseFloatRegs_6,
#line 825 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_VarLocs_0_7,
#line 825 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_VarLocs_8,
#line 825 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_TypeVars_0_9,
#line 825 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_TypeVars_10)
#line 825 "continuation_info.m"
{
#line 831 "continuation_info.m"
  {
#line 831 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;

#line 831 "continuation_info.m"
    if ((ll_backend__continuation_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 831 "continuation_info.m"
      {
#line 831 "continuation_info.m"
        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 831 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 831 "continuation_info.m"
          {
#line 831 "continuation_info.m"
            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 831 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 831 "continuation_info.m"
              {
#line 831 "continuation_info.m"
                *ll_backend__continuation_info__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 831 "continuation_info.m"
                *ll_backend__continuation_info__STATE_VARIABLE_TypeVars_10 = ll_backend__continuation_info__STATE_VARIABLE_TypeVars_0_9;
#line 831 "continuation_info.m"
                *ll_backend__continuation_info__STATE_VARIABLE_VarLocs_8 = ll_backend__continuation_info__STATE_VARIABLE_VarLocs_0_7;
#line 831 "continuation_info.m"
                ll_backend__continuation_info__succeeded = MR_TRUE;
#line 831 "continuation_info.m"
              }
#line 831 "continuation_info.m"
          }
#line 831 "continuation_info.m"
      }
#line 831 "continuation_info.m"
    else
#line 834 "continuation_info.m"
      {
#line 834 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeCtorInfo_48_48;
#line 834 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_49_49;
#line 834 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_50_50;
#line 834 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_51_51;
#line 834 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 834 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Vars_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 834 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Type0_21;
#line 834 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Types_22;
#line 834 "continuation_info.m"
        MR_Word ll_backend__continuation_info__ArgInfo_23;
#line 834 "continuation_info.m"
        MR_Word ll_backend__continuation_info__ArgInfos_24;
#line 834 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Layout_25;
#line 834 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Layouts_26;
#line 834 "continuation_info.m"
        MR_Word ll_backend__continuation_info__ArgLoc_31;
#line 834 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Type_34;
#line 834 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Inst_35;
#line 834 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Reg_36;
#line 834 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Locations_37;
#line 834 "continuation_info.m"
        MR_Word ll_backend__continuation_info__VarTypeVars_38;
#line 834 "continuation_info.m"
        MR_Word ll_backend__continuation_info__STATE_VARIABLE_VarLocs_44_44;
#line 834 "continuation_info.m"
        MR_Word ll_backend__continuation_info__STATE_VARIABLE_TypeVars_45_45;
#line 835 "continuation_info.m"
        MR_Word ll_backend__continuation_info___ArgMode_32;
#line 840 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_43_43;
#line 840 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_52_52;
#line 842 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_33_33;

#line 832 "continuation_info.m"
        ll_backend__continuation_info__succeeded = ((MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 832 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 832 "continuation_info.m"
          {
#line 832 "continuation_info.m"
            ll_backend__continuation_info__Type0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 832 "continuation_info.m"
            ll_backend__continuation_info__Types_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 833 "continuation_info.m"
            ll_backend__continuation_info__succeeded = ((MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 833 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 833 "continuation_info.m"
              {
#line 833 "continuation_info.m"
                ll_backend__continuation_info__ArgInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));
#line 833 "continuation_info.m"
                ll_backend__continuation_info__ArgInfos_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 1)));
#line 835 "continuation_info.m"
                ll_backend__continuation_info__ArgLoc_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ArgInfo_23, (MR_Integer) 0)));
#line 835 "continuation_info.m"
                ll_backend__continuation_info___ArgMode_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ArgInfo_23, (MR_Integer) 1)));
#line 840 "continuation_info.m"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__UseFloatRegs_6 == (MR_Integer) 1);
#line 840 "continuation_info.m"
                if (ll_backend__continuation_info__succeeded)
#line 840 "continuation_info.m"
                  {
#line 841 "continuation_info.m"
                    {
#line 841 "continuation_info.m"
                      ll_backend__continuation_info__V_52_52 = parse_tree__builtin_lib_types__float_type_0_f_0();
                    }
#line 841 "continuation_info.m"
                    {
#line 841 "continuation_info.m"
                      ll_backend__continuation_info__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ll_backend__continuation_info__Type0_21, ll_backend__continuation_info__V_52_52);
                    }
#line 840 "continuation_info.m"
                    if (ll_backend__continuation_info__succeeded)
#line 840 "continuation_info.m"
                      {
#line 842 "continuation_info.m"
                        ll_backend__continuation_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ArgLoc_31, (MR_Integer) 0)));
#line 842 "continuation_info.m"
                        ll_backend__continuation_info__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ArgLoc_31, (MR_Integer) 1)));
#line 842 "continuation_info.m"
                        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_43_43 == (MR_Integer) 0);
#line 840 "continuation_info.m"
                      }
#line 840 "continuation_info.m"
                  }
#line 845 "continuation_info.m"
                if (ll_backend__continuation_info__succeeded)
#line 844 "continuation_info.m"
                  {
#line 844 "continuation_info.m"
                    ll_backend__continuation_info__Type_34 = parse_tree__builtin_lib_types__float_box_type_0_f_0();
                  }
#line 845 "continuation_info.m"
                else
#line 846 "continuation_info.m"
                  ll_backend__continuation_info__Type_34 = ll_backend__continuation_info__Type0_21;
#line 848 "continuation_info.m"
                {
#line 848 "continuation_info.m"
                  hlds__instmap__instmap_lookup_var_3_p_0(ll_backend__continuation_info__InstMap_5, ll_backend__continuation_info__Var_19, &ll_backend__continuation_info__Inst_35);
                }
#line 849 "continuation_info.m"
                {
#line 849 "continuation_info.m"
                  ll_backend__continuation_info__Layout_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 849 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Layout_25, 0) = ((MR_Box) (ll_backend__continuation_info__Type_34));
#line 849 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Layout_25, 1) = ((MR_Box) (ll_backend__continuation_info__Inst_35));
#line 849 "continuation_info.m"
                }
#line 850 "continuation_info.m"
                {
#line 850 "continuation_info.m"
                  ll_backend__code_util__arg_loc_to_register_2_p_0(ll_backend__continuation_info__ArgLoc_31, &ll_backend__continuation_info__Reg_36);
                }
#line 10536 "ll_backend.continuation_info.c"
                ll_backend__continuation_info__TypeCtorInfo_48_48 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 851 "continuation_info.m"
                {
#line 851 "continuation_info.m"
                  ll_backend__continuation_info__Locations_37 = mercury__set__make_singleton_set_1_f_0(ll_backend__continuation_info__TypeCtorInfo_48_48, ((MR_Box) (ll_backend__continuation_info__Reg_36)));
                }
#line 10543 "ll_backend.continuation_info.c"
                ll_backend__continuation_info__TypeInfo_49_49 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[0];
#line 10545 "ll_backend.continuation_info.c"
                ll_backend__continuation_info__TypeInfo_50_50 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[1];
#line 852 "continuation_info.m"
                {
#line 852 "continuation_info.m"
                  mercury__map__det_insert_4_p_0(ll_backend__continuation_info__TypeInfo_49_49, ll_backend__continuation_info__TypeInfo_50_50, ((MR_Box) (ll_backend__continuation_info__Var_19)), ((MR_Box) (ll_backend__continuation_info__Locations_37)), ll_backend__continuation_info__STATE_VARIABLE_VarLocs_0_7, &ll_backend__continuation_info__STATE_VARIABLE_VarLocs_44_44);
                }
#line 853 "continuation_info.m"
                {
#line 853 "continuation_info.m"
                  parse_tree__prog_type__type_vars_2_p_0(ll_backend__continuation_info__Type_34, &ll_backend__continuation_info__VarTypeVars_38);
                }
#line 10557 "ll_backend.continuation_info.c"
                ll_backend__continuation_info__TypeInfo_51_51 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[2];
#line 854 "continuation_info.m"
                {
#line 854 "continuation_info.m"
                  mercury__set__insert_list_3_p_0(ll_backend__continuation_info__TypeInfo_51_51, ll_backend__continuation_info__VarTypeVars_38, ll_backend__continuation_info__STATE_VARIABLE_TypeVars_0_9, &ll_backend__continuation_info__STATE_VARIABLE_TypeVars_45_45);
                }
#line 855 "continuation_info.m"
                {
#line 855 "continuation_info.m"
                  ll_backend__continuation_info__succeeded = ll_backend__continuation_info__build_closure_info_10_p_0(ll_backend__continuation_info__Vars_20, ll_backend__continuation_info__Types_22, ll_backend__continuation_info__ArgInfos_24, &ll_backend__continuation_info__Layouts_26, ll_backend__continuation_info__InstMap_5, ll_backend__continuation_info__UseFloatRegs_6, ll_backend__continuation_info__STATE_VARIABLE_VarLocs_44_44, ll_backend__continuation_info__STATE_VARIABLE_VarLocs_8, ll_backend__continuation_info__STATE_VARIABLE_TypeVars_45_45, ll_backend__continuation_info__STATE_VARIABLE_TypeVars_10);
                }
#line 834 "continuation_info.m"
                if (ll_backend__continuation_info__succeeded)
#line 834 "continuation_info.m"
                  {
#line 833 "continuation_info.m"
                    {
#line 833 "continuation_info.m"
                      MR_Word base;
#line 833 "continuation_info.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 833 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__4_4 = base;
#line 833 "continuation_info.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__continuation_info__Layout_25));
#line 833 "continuation_info.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__continuation_info__Layouts_26));
#line 833 "continuation_info.m"
                    }
#line 833 "continuation_info.m"
                    ll_backend__continuation_info__succeeded = MR_TRUE;
#line 834 "continuation_info.m"
                  }
#line 833 "continuation_info.m"
              }
#line 832 "continuation_info.m"
          }
#line 834 "continuation_info.m"
      }
#line 831 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 831 "continuation_info.m"
  }
#line 825 "continuation_info.m"
}

#line 748 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__generate_temp_var_infos_2_p_0(
#line 748 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 748 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__2_2)
#line 748 "continuation_info.m"
{
#line 751 "continuation_info.m"
  {
#line 751 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;

#line 751 "continuation_info.m"
    if ((ll_backend__continuation_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 751 "continuation_info.m"
      *ll_backend__continuation_info__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 751 "continuation_info.m"
    else
#line 752 "continuation_info.m"
      {
#line 752 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Temp_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 752 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Temps_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 752 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Live_5;
#line 752 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Lives_6;
#line 752 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Slot_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Temp_3, (MR_Integer) 0)));
#line 752 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Contents_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Temp_3, (MR_Integer) 1)));
#line 752 "continuation_info.m"
        MR_Word ll_backend__continuation_info__LiveLvalueType_9;
#line 752 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_10_10;

#line 956 "continuation_info.m"
#line 956 "continuation_info.m"
        switch (MR_tag((MR_Word) ll_backend__continuation_info__Contents_8)) {
#line 956 "continuation_info.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 956 "continuation_info.m"
          case (MR_Integer) 0:
#line 956 "continuation_info.m"
#line 956 "continuation_info.m"
            switch (MR_unmkbody(ll_backend__continuation_info__Contents_8)) {
#line 956 "continuation_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 956 "continuation_info.m"
              case (MR_Integer) 0:
#line 978 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 956 "continuation_info.m"
                break;
#line 956 "continuation_info.m"
              case (MR_Integer) 1:
#line 981 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 956 "continuation_info.m"
                break;
#line 956 "continuation_info.m"
              case (MR_Integer) 2:
#line 986 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 956 "continuation_info.m"
                break;
#line 956 "continuation_info.m"
              case (MR_Integer) 3:
#line 982 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 956 "continuation_info.m"
                break;
#line 956 "continuation_info.m"
              case (MR_Integer) 4:
#line 983 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 956 "continuation_info.m"
                break;
#line 956 "continuation_info.m"
              case (MR_Integer) 5:
#line 984 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 956 "continuation_info.m"
                break;
#line 956 "continuation_info.m"
              case (MR_Integer) 6:
#line 985 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 956 "continuation_info.m"
                break;
#line 956 "continuation_info.m"
              case (MR_Integer) 7:
#line 987 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 956 "continuation_info.m"
                break;
#line 956 "continuation_info.m"
              case (MR_Integer) 8:
#line 988 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 956 "continuation_info.m"
                break;
#line 956 "continuation_info.m"
              case (MR_Integer) 9:
#line 989 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
#line 956 "continuation_info.m"
                break;
#line 956 "continuation_info.m"
              case (MR_Integer) 10:
#line 977 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 956 "continuation_info.m"
                break;
#line 956 "continuation_info.m"
            }
#line 956 "continuation_info.m"
            break;
#line 956 "continuation_info.m"
          case (MR_Integer) 1:
#line 956 "continuation_info.m"
            {
#line 956 "continuation_info.m"
              MR_Word ll_backend__continuation_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__Contents_8, (MR_Integer) 0)));

#line 956 "continuation_info.m"
#line 956 "continuation_info.m"
              switch (MR_tag((MR_Word) ll_backend__continuation_info__V_53_53)) {
#line 956 "continuation_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 956 "continuation_info.m"
                case (MR_Integer) 0:
#line 956 "continuation_info.m"
#line 956 "continuation_info.m"
                  switch (MR_unmkbody(ll_backend__continuation_info__V_53_53)) {
#line 956 "continuation_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 956 "continuation_info.m"
                    case (MR_Integer) 0:
#line 956 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 956 "continuation_info.m"
                      break;
#line 956 "continuation_info.m"
                    case (MR_Integer) 1:
#line 958 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 956 "continuation_info.m"
                      break;
#line 956 "continuation_info.m"
                    case (MR_Integer) 2:
#line 959 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 956 "continuation_info.m"
                      break;
#line 956 "continuation_info.m"
                    case (MR_Integer) 3:
#line 957 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 956 "continuation_info.m"
                      break;
#line 956 "continuation_info.m"
                    case (MR_Integer) 4:
#line 965 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 956 "continuation_info.m"
                      break;
#line 956 "continuation_info.m"
                    case (MR_Integer) 5:
#line 966 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 956 "continuation_info.m"
                      break;
#line 956 "continuation_info.m"
                  }
#line 956 "continuation_info.m"
                  break;
#line 956 "continuation_info.m"
                case (MR_Integer) 1:
#line 970 "continuation_info.m"
                  ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 956 "continuation_info.m"
                  break;
#line 956 "continuation_info.m"
                case (MR_Integer) 2:
#line 969 "continuation_info.m"
                  ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 956 "continuation_info.m"
                  break;
#line 956 "continuation_info.m"
                case (MR_Integer) 3:
#line 956 "continuation_info.m"
#line 956 "continuation_info.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__continuation_info__V_53_53, (MR_Integer) 0)))) {
#line 956 "continuation_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 956 "continuation_info.m"
                    case (MR_Integer) 0:
#line 971 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 956 "continuation_info.m"
                      break;
#line 956 "continuation_info.m"
                    case (MR_Integer) 1:
#line 972 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 956 "continuation_info.m"
                      break;
#line 956 "continuation_info.m"
                    case (MR_Integer) 2:
#line 973 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 956 "continuation_info.m"
                      break;
#line 956 "continuation_info.m"
                    case (MR_Integer) 3:
#line 974 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 956 "continuation_info.m"
                      break;
#line 956 "continuation_info.m"
                    case (MR_Integer) 4:
#line 964 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 956 "continuation_info.m"
                      break;
#line 956 "continuation_info.m"
                    case (MR_Integer) 5:
#line 960 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 956 "continuation_info.m"
                      break;
#line 956 "continuation_info.m"
                    case (MR_Integer) 6:
#line 963 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 956 "continuation_info.m"
                      break;
#line 956 "continuation_info.m"
                    case (MR_Integer) 7:
#line 962 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 956 "continuation_info.m"
                      break;
#line 956 "continuation_info.m"
                    case (MR_Integer) 8:
#line 961 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 956 "continuation_info.m"
                      break;
#line 956 "continuation_info.m"
                    case (MR_Integer) 9:
#line 968 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 956 "continuation_info.m"
                      break;
#line 956 "continuation_info.m"
                    case (MR_Integer) 10:
#line 975 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 956 "continuation_info.m"
                      break;
#line 956 "continuation_info.m"
                    case (MR_Integer) 11:
#line 976 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 956 "continuation_info.m"
                      break;
#line 956 "continuation_info.m"
                    case (MR_Integer) 12:
#line 967 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 956 "continuation_info.m"
                      break;
#line 956 "continuation_info.m"
                  }
#line 956 "continuation_info.m"
                  break;
#line 956 "continuation_info.m"
              }
#line 956 "continuation_info.m"
            }
#line 956 "continuation_info.m"
            break;
#line 956 "continuation_info.m"
        }
#line 755 "continuation_info.m"
        {
#line 755 "continuation_info.m"
          ll_backend__continuation_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 755 "continuation_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_10_10, 0) = ((MR_Box) (ll_backend__continuation_info__Slot_7));
#line 755 "continuation_info.m"
        }
#line 755 "continuation_info.m"
        {
#line 755 "continuation_info.m"
          ll_backend__continuation_info__Live_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 755 "continuation_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Live_5, 0) = ((MR_Box) (ll_backend__continuation_info__V_10_10));
#line 755 "continuation_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Live_5, 1) = ((MR_Box) (ll_backend__continuation_info__LiveLvalueType_9));
#line 755 "continuation_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Live_5, 2) = ((MR_Box) ((MR_String) "generate_temp_var_infos"));
#line 755 "continuation_info.m"
        }
#line 757 "continuation_info.m"
        {
#line 757 "continuation_info.m"
          ll_backend__continuation_info__generate_temp_var_infos_2_p_0(ll_backend__continuation_info__Temps_4, &ll_backend__continuation_info__Lives_6);
        }
#line 752 "continuation_info.m"
        {
#line 752 "continuation_info.m"
          MR_Word base;
#line 752 "continuation_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 752 "continuation_info.m"
          *ll_backend__continuation_info__HeadVar__2_2 = base;
#line 752 "continuation_info.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__continuation_info__Live_5));
#line 752 "continuation_info.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__continuation_info__Lives_6));
#line 752 "continuation_info.m"
        }
#line 752 "continuation_info.m"
      }
#line 751 "continuation_info.m"
  }
#line 748 "continuation_info.m"
}

#line 650 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__generate_temp_live_lvalues_2_p_0(
#line 650 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 650 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__2_2)
#line 650 "continuation_info.m"
{
#line 653 "continuation_info.m"
  {
#line 653 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;

#line 653 "continuation_info.m"
    if ((ll_backend__continuation_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 653 "continuation_info.m"
      *ll_backend__continuation_info__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 653 "continuation_info.m"
    else
#line 654 "continuation_info.m"
      {
#line 654 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Temp_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 654 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Temps_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 654 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Live_5;
#line 654 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Lives_6;
#line 654 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Slot_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Temp_3, (MR_Integer) 0)));
#line 654 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Contents_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Temp_3, (MR_Integer) 1)));
#line 654 "continuation_info.m"
        MR_Word ll_backend__continuation_info__LiveLvalueType_9;
#line 654 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Empty_10;
#line 654 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_11_11;

#line 956 "continuation_info.m"
#line 956 "continuation_info.m"
        switch (MR_tag((MR_Word) ll_backend__continuation_info__Contents_8)) {
#line 956 "continuation_info.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 956 "continuation_info.m"
          case (MR_Integer) 0:
#line 956 "continuation_info.m"
#line 956 "continuation_info.m"
            switch (MR_unmkbody(ll_backend__continuation_info__Contents_8)) {
#line 956 "continuation_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 956 "continuation_info.m"
              case (MR_Integer) 0:
#line 978 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 956 "continuation_info.m"
                break;
#line 956 "continuation_info.m"
              case (MR_Integer) 1:
#line 981 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 956 "continuation_info.m"
                break;
#line 956 "continuation_info.m"
              case (MR_Integer) 2:
#line 986 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 956 "continuation_info.m"
                break;
#line 956 "continuation_info.m"
              case (MR_Integer) 3:
#line 982 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 956 "continuation_info.m"
                break;
#line 956 "continuation_info.m"
              case (MR_Integer) 4:
#line 983 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 956 "continuation_info.m"
                break;
#line 956 "continuation_info.m"
              case (MR_Integer) 5:
#line 984 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 956 "continuation_info.m"
                break;
#line 956 "continuation_info.m"
              case (MR_Integer) 6:
#line 985 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 956 "continuation_info.m"
                break;
#line 956 "continuation_info.m"
              case (MR_Integer) 7:
#line 987 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 956 "continuation_info.m"
                break;
#line 956 "continuation_info.m"
              case (MR_Integer) 8:
#line 988 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 956 "continuation_info.m"
                break;
#line 956 "continuation_info.m"
              case (MR_Integer) 9:
#line 989 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
#line 956 "continuation_info.m"
                break;
#line 956 "continuation_info.m"
              case (MR_Integer) 10:
#line 977 "continuation_info.m"
                ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 956 "continuation_info.m"
                break;
#line 956 "continuation_info.m"
            }
#line 956 "continuation_info.m"
            break;
#line 956 "continuation_info.m"
          case (MR_Integer) 1:
#line 956 "continuation_info.m"
            {
#line 956 "continuation_info.m"
              MR_Word ll_backend__continuation_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__Contents_8, (MR_Integer) 0)));

#line 956 "continuation_info.m"
#line 956 "continuation_info.m"
              switch (MR_tag((MR_Word) ll_backend__continuation_info__V_55_55)) {
#line 956 "continuation_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 956 "continuation_info.m"
                case (MR_Integer) 0:
#line 956 "continuation_info.m"
#line 956 "continuation_info.m"
                  switch (MR_unmkbody(ll_backend__continuation_info__V_55_55)) {
#line 956 "continuation_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 956 "continuation_info.m"
                    case (MR_Integer) 0:
#line 956 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 956 "continuation_info.m"
                      break;
#line 956 "continuation_info.m"
                    case (MR_Integer) 1:
#line 958 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 956 "continuation_info.m"
                      break;
#line 956 "continuation_info.m"
                    case (MR_Integer) 2:
#line 959 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 956 "continuation_info.m"
                      break;
#line 956 "continuation_info.m"
                    case (MR_Integer) 3:
#line 957 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 956 "continuation_info.m"
                      break;
#line 956 "continuation_info.m"
                    case (MR_Integer) 4:
#line 965 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 956 "continuation_info.m"
                      break;
#line 956 "continuation_info.m"
                    case (MR_Integer) 5:
#line 966 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 956 "continuation_info.m"
                      break;
#line 956 "continuation_info.m"
                  }
#line 956 "continuation_info.m"
                  break;
#line 956 "continuation_info.m"
                case (MR_Integer) 1:
#line 970 "continuation_info.m"
                  ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 956 "continuation_info.m"
                  break;
#line 956 "continuation_info.m"
                case (MR_Integer) 2:
#line 969 "continuation_info.m"
                  ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 956 "continuation_info.m"
                  break;
#line 956 "continuation_info.m"
                case (MR_Integer) 3:
#line 956 "continuation_info.m"
#line 956 "continuation_info.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__continuation_info__V_55_55, (MR_Integer) 0)))) {
#line 956 "continuation_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 956 "continuation_info.m"
                    case (MR_Integer) 0:
#line 971 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 956 "continuation_info.m"
                      break;
#line 956 "continuation_info.m"
                    case (MR_Integer) 1:
#line 972 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 956 "continuation_info.m"
                      break;
#line 956 "continuation_info.m"
                    case (MR_Integer) 2:
#line 973 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 956 "continuation_info.m"
                      break;
#line 956 "continuation_info.m"
                    case (MR_Integer) 3:
#line 974 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 956 "continuation_info.m"
                      break;
#line 956 "continuation_info.m"
                    case (MR_Integer) 4:
#line 964 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 956 "continuation_info.m"
                      break;
#line 956 "continuation_info.m"
                    case (MR_Integer) 5:
#line 960 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 956 "continuation_info.m"
                      break;
#line 956 "continuation_info.m"
                    case (MR_Integer) 6:
#line 963 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 956 "continuation_info.m"
                      break;
#line 956 "continuation_info.m"
                    case (MR_Integer) 7:
#line 962 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 956 "continuation_info.m"
                      break;
#line 956 "continuation_info.m"
                    case (MR_Integer) 8:
#line 961 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 956 "continuation_info.m"
                      break;
#line 956 "continuation_info.m"
                    case (MR_Integer) 9:
#line 968 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 956 "continuation_info.m"
                      break;
#line 956 "continuation_info.m"
                    case (MR_Integer) 10:
#line 975 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 956 "continuation_info.m"
                      break;
#line 956 "continuation_info.m"
                    case (MR_Integer) 11:
#line 976 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 956 "continuation_info.m"
                      break;
#line 956 "continuation_info.m"
                    case (MR_Integer) 12:
#line 967 "continuation_info.m"
                      ll_backend__continuation_info__LiveLvalueType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 956 "continuation_info.m"
                      break;
#line 956 "continuation_info.m"
                  }
#line 956 "continuation_info.m"
                  break;
#line 956 "continuation_info.m"
              }
#line 956 "continuation_info.m"
            }
#line 956 "continuation_info.m"
            break;
#line 956 "continuation_info.m"
        }
#line 657 "continuation_info.m"
        {
#line 657 "continuation_info.m"
          mercury__map__init_1_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[2], (MR_Word) &ll_backend__continuation_info_scalar_common_1[3], &ll_backend__continuation_info__Empty_10);
        }
#line 658 "continuation_info.m"
        {
#line 658 "continuation_info.m"
          ll_backend__continuation_info__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 658 "continuation_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_11_11, 0) = ((MR_Box) (ll_backend__continuation_info__Slot_7));
#line 658 "continuation_info.m"
        }
#line 658 "continuation_info.m"
        {
#line 658 "continuation_info.m"
          ll_backend__continuation_info__Live_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 658 "continuation_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Live_5, 0) = ((MR_Box) (ll_backend__continuation_info__V_11_11));
#line 658 "continuation_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Live_5, 1) = ((MR_Box) (ll_backend__continuation_info__LiveLvalueType_9));
#line 658 "continuation_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Live_5, 2) = ((MR_Box) (ll_backend__continuation_info__Empty_10));
#line 658 "continuation_info.m"
        }
#line 659 "continuation_info.m"
        {
#line 659 "continuation_info.m"
          ll_backend__continuation_info__generate_temp_live_lvalues_2_p_0(ll_backend__continuation_info__Temps_4, &ll_backend__continuation_info__Lives_6);
        }
#line 654 "continuation_info.m"
        {
#line 654 "continuation_info.m"
          MR_Word base;
#line 654 "continuation_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 654 "continuation_info.m"
          *ll_backend__continuation_info__HeadVar__2_2 = base;
#line 654 "continuation_info.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__continuation_info__Live_5));
#line 654 "continuation_info.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__continuation_info__Lives_6));
#line 654 "continuation_info.m"
        }
#line 654 "continuation_info.m"
      }
#line 653 "continuation_info.m"
  }
#line 650 "continuation_info.m"
}

#line 624 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__find_return_var_lvals_5_p_0(
#line 624 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 624 "continuation_info.m"
  MR_Word ll_backend__continuation_info__StackSlots_2,
#line 624 "continuation_info.m"
  MR_Word ll_backend__continuation_info__OkToDeleteAny_3,
#line 624 "continuation_info.m"
  MR_Word ll_backend__continuation_info__OutputArgLocs_4,
#line 624 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__5_5)
#line 624 "continuation_info.m"
{
#line 628 "continuation_info.m"
  {
#line 628 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;

#line 628 "continuation_info.m"
    if ((ll_backend__continuation_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 628 "continuation_info.m"
      *ll_backend__continuation_info__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 628 "continuation_info.m"
    else
#line 630 "continuation_info.m"
      {
#line 630 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 630 "continuation_info.m"
        MR_Word ll_backend__continuation_info__Vars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 630 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TailVarLvals_15;
#line 637 "continuation_info.m"
        MR_Word ll_backend__continuation_info__ArgLoc_16;
#line 633 "continuation_info.m"
        MR_Box ll_backend__continuation_info__conv0_ArgLoc_16;

#line 631 "continuation_info.m"
        {
#line 631 "continuation_info.m"
          ll_backend__continuation_info__find_return_var_lvals_5_p_0(ll_backend__continuation_info__Vars_10, ll_backend__continuation_info__StackSlots_2, ll_backend__continuation_info__OkToDeleteAny_3, ll_backend__continuation_info__OutputArgLocs_4, &ll_backend__continuation_info__TailVarLvals_15);
        }
#line 633 "continuation_info.m"
        {
#line 633 "continuation_info.m"
          ll_backend__continuation_info__succeeded = mercury__assoc_list__search_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[0], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_loc_0, ll_backend__continuation_info__OutputArgLocs_4, ((MR_Box) (ll_backend__continuation_info__Var_9)), &ll_backend__continuation_info__conv0_ArgLoc_16);
        }
#line 633 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 633 "continuation_info.m"
          {
#line 633 "continuation_info.m"
            ll_backend__continuation_info__ArgLoc_16 = ((MR_Word) ll_backend__continuation_info__conv0_ArgLoc_16);
#line 633 "continuation_info.m"
            ll_backend__continuation_info__succeeded = MR_TRUE;
#line 633 "continuation_info.m"
          }
#line 637 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 635 "continuation_info.m"
          {
#line 635 "continuation_info.m"
            MR_Word ll_backend__continuation_info__Lval_17;
#line 635 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_19_19;

#line 635 "continuation_info.m"
            {
#line 635 "continuation_info.m"
              ll_backend__code_util__arg_loc_to_register_2_p_0(ll_backend__continuation_info__ArgLoc_16, &ll_backend__continuation_info__Lval_17);
            }
#line 636 "continuation_info.m"
            {
#line 636 "continuation_info.m"
              ll_backend__continuation_info__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 636 "continuation_info.m"
              MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_19_19, 0) = ((MR_Box) (ll_backend__continuation_info__Var_9));
#line 636 "continuation_info.m"
              MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_19_19, 1) = ((MR_Box) (ll_backend__continuation_info__Lval_17));
#line 636 "continuation_info.m"
            }
#line 636 "continuation_info.m"
            {
#line 636 "continuation_info.m"
              MR_Word base;
#line 636 "continuation_info.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 636 "continuation_info.m"
              *ll_backend__continuation_info__HeadVar__5_5 = base;
#line 636 "continuation_info.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__continuation_info__V_19_19));
#line 636 "continuation_info.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__continuation_info__TailVarLvals_15));
#line 636 "continuation_info.m"
            }
#line 635 "continuation_info.m"
          }
#line 637 "continuation_info.m"
        else
#line 640 "continuation_info.m"
          {
#line 640 "continuation_info.m"
            MR_Word ll_backend__continuation_info__Slot_18;
#line 637 "continuation_info.m"
            MR_Box ll_backend__continuation_info__conv1_Slot_18;

#line 637 "continuation_info.m"
            {
#line 637 "continuation_info.m"
              ll_backend__continuation_info__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0, ll_backend__continuation_info__StackSlots_2, ((MR_Box) (ll_backend__continuation_info__Var_9)), &ll_backend__continuation_info__conv1_Slot_18);
            }
#line 637 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 637 "continuation_info.m"
              {
#line 637 "continuation_info.m"
                ll_backend__continuation_info__Slot_18 = ((MR_Word) ll_backend__continuation_info__conv1_Slot_18);
#line 637 "continuation_info.m"
                ll_backend__continuation_info__succeeded = MR_TRUE;
#line 637 "continuation_info.m"
              }
#line 640 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 639 "continuation_info.m"
              {
#line 639 "continuation_info.m"
                MR_Word ll_backend__continuation_info__V_20_20;
#line 639 "continuation_info.m"
                MR_Word ll_backend__continuation_info__V_21_21;

#line 639 "continuation_info.m"
                {
#line 639 "continuation_info.m"
                  ll_backend__continuation_info__V_21_21 = ll_backend__llds__stack_slot_to_lval_1_f_0(ll_backend__continuation_info__Slot_18);
                }
#line 639 "continuation_info.m"
                {
#line 639 "continuation_info.m"
                  ll_backend__continuation_info__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 639 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_20_20, 0) = ((MR_Box) (ll_backend__continuation_info__Var_9));
#line 639 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_20_20, 1) = ((MR_Box) (ll_backend__continuation_info__V_21_21));
#line 639 "continuation_info.m"
                }
#line 639 "continuation_info.m"
                {
#line 639 "continuation_info.m"
                  MR_Word base;
#line 639 "continuation_info.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 639 "continuation_info.m"
                  *ll_backend__continuation_info__HeadVar__5_5 = base;
#line 639 "continuation_info.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__continuation_info__V_20_20));
#line 639 "continuation_info.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__continuation_info__TailVarLvals_15));
#line 639 "continuation_info.m"
                }
#line 639 "continuation_info.m"
              }
#line 640 "continuation_info.m"
            else
#line 644 "continuation_info.m"
#line 644 "continuation_info.m"
              switch (ll_backend__continuation_info__OkToDeleteAny_3) {
#line 644 "continuation_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 644 "continuation_info.m"
                case (MR_Integer) 0:
#line 645 "continuation_info.m"
                  {
#line 646 "continuation_info.m"
                    {
#line 646 "continuation_info.m"
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.continuation_info", (MR_String) "predicate \140ll_backend.continuation_info.find_return_var_lvals\'/5", (MR_String) "no slot");
#line 646 "continuation_info.m"
                      return;
                    }
#line 645 "continuation_info.m"
                  }
#line 644 "continuation_info.m"
                  break;
#line 644 "continuation_info.m"
                case (MR_Integer) 1:
#line 643 "continuation_info.m"
                  *ll_backend__continuation_info__HeadVar__5_5 = ll_backend__continuation_info__TailVarLvals_15;
#line 644 "continuation_info.m"
                  break;
#line 644 "continuation_info.m"
              }
#line 640 "continuation_info.m"
          }
#line 630 "continuation_info.m"
      }
#line 628 "continuation_info.m"
  }
#line 624 "continuation_info.m"
}

#line 562 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__convert_return_data_3_p_0_3(
#line 562 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 562 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 562 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 562 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_3)
#line 562 "continuation_info.m"
{
#line 562 "continuation_info.m"
  {
#line 562 "continuation_info.m"
    MR_Box ll_backend__continuation_info__closure = ll_backend__continuation_info__closure_arg;
#line 562 "continuation_info.m"
    MR_Word ll_backend__continuation_info__conv2_HeadVar__3_31;

#line 562 "continuation_info.m"
    {
#line 562 "continuation_info.m"
      ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__562__1_3_p_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), &ll_backend__continuation_info__conv2_HeadVar__3_31);
    }
#line 562 "continuation_info.m"
    *ll_backend__continuation_info__wrapper_arg_3 = ((MR_Box) (ll_backend__continuation_info__conv2_HeadVar__3_31));
#line 562 "continuation_info.m"
  }
#line 562 "continuation_info.m"
}

#line 557 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__convert_return_data_3_p_0_2(
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
    MR_Word ll_backend__continuation_info__conv1_HeadVar__2_27;

#line 557 "continuation_info.m"
    {
#line 557 "continuation_info.m"
      ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__558__1_2_p_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), &ll_backend__continuation_info__conv1_HeadVar__2_27);
    }
#line 557 "continuation_info.m"
    *ll_backend__continuation_info__wrapper_arg_2 = ((MR_Box) (ll_backend__continuation_info__conv1_HeadVar__2_27));
#line 557 "continuation_info.m"
  }
#line 557 "continuation_info.m"
}

#line 552 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__convert_return_data_3_p_0_1(
#line 552 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 552 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 552 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_2)
#line 552 "continuation_info.m"
{
#line 552 "continuation_info.m"
  {
#line 552 "continuation_info.m"
    MR_Box ll_backend__continuation_info__closure = ll_backend__continuation_info__closure_arg;
#line 552 "continuation_info.m"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__2_24;

#line 552 "continuation_info.m"
    {
#line 552 "continuation_info.m"
      ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__552__1_2_p_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), &ll_backend__continuation_info__conv0_HeadVar__2_24);
    }
#line 552 "continuation_info.m"
    *ll_backend__continuation_info__wrapper_arg_2 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__2_24));
#line 552 "continuation_info.m"
  }
#line 552 "continuation_info.m"
}

#line 548 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__convert_return_data_3_p_0(
#line 548 "continuation_info.m"
  MR_Word ll_backend__continuation_info__LiveInfos_4,
#line 548 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__VarInfoSet_5,
#line 548 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__TypeInfoMap_6)
#line 548 "continuation_info.m"
{
#line 551 "continuation_info.m"
  {
#line 551 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 551 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeCtorInfo_40_40 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_liveinfo_0;
#line 551 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeCtorInfo_41_41 = (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0;
#line 551 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeInfo_42_42;
#line 551 "continuation_info.m"
    MR_Word ll_backend__continuation_info__VarInfoList_13;
#line 551 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeInfoMapList_18;
#line 551 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Empty_19;
#line 562 "continuation_info.m"
    MR_Box ll_backend__continuation_info__conv3_TypeInfoMap_6;

#line 556 "continuation_info.m"
    {
#line 556 "continuation_info.m"
      mercury__list__map_3_p_0(ll_backend__continuation_info__TypeCtorInfo_40_40, ll_backend__continuation_info__TypeCtorInfo_41_41, (MR_Word) &ll_backend__continuation_info_scalar_common_2[7], ll_backend__continuation_info__LiveInfos_4, &ll_backend__continuation_info__VarInfoList_13);
    }
#line 11610 "ll_backend.continuation_info.c"
    ll_backend__continuation_info__TypeInfo_42_42 = (MR_Word) &ll_backend__continuation_info_scalar_common_2[1];
#line 560 "continuation_info.m"
    {
#line 560 "continuation_info.m"
      mercury__list__map_3_p_0(ll_backend__continuation_info__TypeCtorInfo_40_40, ll_backend__continuation_info__TypeInfo_42_42, (MR_Word) &ll_backend__continuation_info_scalar_common_2[8], ll_backend__continuation_info__LiveInfos_4, &ll_backend__continuation_info__TypeInfoMapList_18);
    }
#line 561 "continuation_info.m"
    {
#line 561 "continuation_info.m"
      mercury__map__init_1_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[2], (MR_Word) &ll_backend__continuation_info_scalar_common_1[3], &ll_backend__continuation_info__Empty_19);
    }
#line 562 "continuation_info.m"
    {
#line 562 "continuation_info.m"
      mercury__list__foldl_4_p_0(ll_backend__continuation_info__TypeInfo_42_42, ll_backend__continuation_info__TypeInfo_42_42, (MR_Word) &ll_backend__continuation_info_scalar_common_2[9], ll_backend__continuation_info__TypeInfoMapList_18, ((MR_Box) (ll_backend__continuation_info__Empty_19)), &ll_backend__continuation_info__conv3_TypeInfoMap_6);
    }
#line 562 "continuation_info.m"
    *ll_backend__continuation_info__TypeInfoMap_6 = ((MR_Word) ll_backend__continuation_info__conv3_TypeInfoMap_6);
#line 565 "continuation_info.m"
    {
#line 565 "continuation_info.m"
      mercury__set__list_to_set_2_p_0(ll_backend__continuation_info__TypeCtorInfo_41_41, ll_backend__continuation_info__VarInfoList_13, ll_backend__continuation_info__VarInfoSet_5);
#line 565 "continuation_info.m"
      return;
    }
#line 551 "continuation_info.m"
  }
#line 548 "continuation_info.m"
}

#line 533 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__process_continuation_4_p_0_1(
#line 533 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 533 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 533 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 533 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_3)
#line 533 "continuation_info.m"
{
#line 533 "continuation_info.m"
  {
#line 533 "continuation_info.m"
    MR_Box ll_backend__continuation_info__closure = ll_backend__continuation_info__closure_arg;
#line 533 "continuation_info.m"
    MR_Word ll_backend__continuation_info__conv1_HeadVar__3_56;

#line 533 "continuation_info.m"
    {
#line 533 "continuation_info.m"
      ll_backend__continuation_info__IntroducedFrom__pred__process_continuation__533__1_3_p_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), &ll_backend__continuation_info__conv1_HeadVar__3_56);
    }
#line 533 "continuation_info.m"
    *ll_backend__continuation_info__wrapper_arg_3 = ((MR_Box) (ll_backend__continuation_info__conv1_HeadVar__3_56));
#line 533 "continuation_info.m"
  }
#line 533 "continuation_info.m"
}

#line 487 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__process_continuation_4_p_0(
#line 487 "continuation_info.m"
  MR_Word ll_backend__continuation_info__WantReturnInfo_5,
#line 487 "continuation_info.m"
  MR_Word ll_backend__continuation_info__CallInfo_6,
#line 487 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_Internals_0_36,
#line 487 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_Internals_37)
#line 487 "continuation_info.m"
{
#line 490 "continuation_info.m"
  {
#line 490 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 490 "continuation_info.m"
    MR_Word ll_backend__continuation_info__ReturnLabel_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CallInfo_6, (MR_Integer) 0)));
#line 490 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Target_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CallInfo_6, (MR_Integer) 1)));
#line 490 "continuation_info.m"
    MR_Word ll_backend__continuation_info__LiveInfoList_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CallInfo_6, (MR_Integer) 2)));
#line 490 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CallInfo_6, (MR_Integer) 3)));
#line 490 "continuation_info.m"
    MR_Word ll_backend__continuation_info__MaybeGoalPath_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__CallInfo_6, (MR_Integer) 4)));
#line 490 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__ReturnLabelNum_13;
#line 490 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Port0_18;
#line 490 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Resume0_19;
#line 490 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Return0_20;
#line 490 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Return_21;
#line 490 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Internal_35;
#line 504 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Internal0_17;
#line 502 "continuation_info.m"
    MR_Box ll_backend__continuation_info__conv0_Internal0_17;

#line 498 "continuation_info.m"
    if (((MR_tag((MR_Word) ll_backend__continuation_info__ReturnLabel_8)) == (MR_mktag((MR_Integer) 1))))
#line 499 "continuation_info.m"
      {
#line 500 "continuation_info.m"
        {
#line 500 "continuation_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.continuation_info", (MR_String) "predicate \140ll_backend.continuation_info.process_continuation\'/4", (MR_String) "bad return");
#line 500 "continuation_info.m"
          return;
        }
#line 499 "continuation_info.m"
      }
#line 498 "continuation_info.m"
    else
#line 497 "continuation_info.m"
      {
#line 497 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_14_14;

#line 497 "continuation_info.m"
        ll_backend__continuation_info__ReturnLabelNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ReturnLabel_8, (MR_Integer) 0)));
#line 497 "continuation_info.m"
        ll_backend__continuation_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ReturnLabel_8, (MR_Integer) 1)));
#line 497 "continuation_info.m"
      }
#line 502 "continuation_info.m"
    {
#line 502 "continuation_info.m"
      ll_backend__continuation_info__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0, ll_backend__continuation_info__STATE_VARIABLE_Internals_0_36, ll_backend__continuation_info__ReturnLabelNum_13, &ll_backend__continuation_info__conv0_Internal0_17);
    }
#line 502 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 502 "continuation_info.m"
      {
#line 502 "continuation_info.m"
        ll_backend__continuation_info__Internal0_17 = ((MR_Word) ll_backend__continuation_info__conv0_Internal0_17);
#line 502 "continuation_info.m"
        ll_backend__continuation_info__succeeded = MR_TRUE;
#line 502 "continuation_info.m"
      }
#line 504 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 503 "continuation_info.m"
      {
#line 503 "continuation_info.m"
        ll_backend__continuation_info__Port0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Internal0_17, (MR_Integer) 0)));
#line 503 "continuation_info.m"
        ll_backend__continuation_info__Resume0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Internal0_17, (MR_Integer) 1)));
#line 503 "continuation_info.m"
        ll_backend__continuation_info__Return0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Internal0_17, (MR_Integer) 2)));
#line 503 "continuation_info.m"
      }
#line 504 "continuation_info.m"
    else
#line 505 "continuation_info.m"
      {
#line 505 "continuation_info.m"
        ll_backend__continuation_info__Port0_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 506 "continuation_info.m"
        ll_backend__continuation_info__Resume0_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 507 "continuation_info.m"
        ll_backend__continuation_info__Return0_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 505 "continuation_info.m"
      }
#line 541 "continuation_info.m"
#line 541 "continuation_info.m"
    switch (ll_backend__continuation_info__WantReturnInfo_5) {
#line 541 "continuation_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 541 "continuation_info.m"
      case (MR_Integer) 0:
#line 543 "continuation_info.m"
        ll_backend__continuation_info__Return_21 = ll_backend__continuation_info__Return0_20;
#line 541 "continuation_info.m"
        break;
#line 541 "continuation_info.m"
      case (MR_Integer) 1:
#line 516 "continuation_info.m"
        if ((ll_backend__continuation_info__MaybeGoalPath_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 515 "continuation_info.m"
          ll_backend__continuation_info__Return_21 = ll_backend__continuation_info__Return0_20;
#line 516 "continuation_info.m"
        else
#line 517 "continuation_info.m"
          {
#line 517 "continuation_info.m"
            MR_Word ll_backend__continuation_info__GoalPath_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__MaybeGoalPath_12, (MR_Integer) 0)));
#line 517 "continuation_info.m"
            MR_Word ll_backend__continuation_info__VarInfoSet_23;
#line 517 "continuation_info.m"
            MR_Word ll_backend__continuation_info__TypeInfoMap_24;

#line 518 "continuation_info.m"
            {
#line 518 "continuation_info.m"
              ll_backend__continuation_info__convert_return_data_3_p_0(ll_backend__continuation_info__LiveInfoList_10, &ll_backend__continuation_info__VarInfoSet_23, &ll_backend__continuation_info__TypeInfoMap_24);
            }
#line 525 "continuation_info.m"
            if ((ll_backend__continuation_info__Return0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 520 "continuation_info.m"
              {
#line 520 "continuation_info.m"
                MR_Word ll_backend__continuation_info__Layout_25;
#line 520 "continuation_info.m"
                MR_Word ll_backend__continuation_info__ReturnInfo_26;
#line 520 "continuation_info.m"
                MR_Word ll_backend__continuation_info__V_44_44;
#line 520 "continuation_info.m"
                MR_Word ll_backend__continuation_info__V_45_45;
#line 520 "continuation_info.m"
                MR_Word ll_backend__continuation_info__V_46_46;

#line 521 "continuation_info.m"
                {
#line 521 "continuation_info.m"
                  ll_backend__continuation_info__Layout_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 521 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Layout_25, 0) = ((MR_Box) (ll_backend__continuation_info__VarInfoSet_23));
#line 521 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Layout_25, 1) = ((MR_Box) (ll_backend__continuation_info__TypeInfoMap_24));
#line 521 "continuation_info.m"
                }
#line 523 "continuation_info.m"
                {
#line 523 "continuation_info.m"
                  ll_backend__continuation_info__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 523 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_46_46, 0) = ((MR_Box) (ll_backend__continuation_info__Context_11));
#line 523 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_46_46, 1) = ((MR_Box) (ll_backend__continuation_info__GoalPath_22));
#line 523 "continuation_info.m"
                }
#line 523 "continuation_info.m"
                {
#line 523 "continuation_info.m"
                  ll_backend__continuation_info__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 523 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_45_45, 0) = ((MR_Box) (ll_backend__continuation_info__Target_9));
#line 523 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_45_45, 1) = ((MR_Box) (ll_backend__continuation_info__V_46_46));
#line 523 "continuation_info.m"
                }
#line 523 "continuation_info.m"
                {
#line 523 "continuation_info.m"
                  ll_backend__continuation_info__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 523 "continuation_info.m"
                  MR_hl_field(MR_mktag(1), ll_backend__continuation_info__V_44_44, 0) = ((MR_Box) (ll_backend__continuation_info__V_45_45));
#line 523 "continuation_info.m"
                  MR_hl_field(MR_mktag(1), ll_backend__continuation_info__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 523 "continuation_info.m"
                }
#line 522 "continuation_info.m"
                {
#line 522 "continuation_info.m"
                  ll_backend__continuation_info__ReturnInfo_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 522 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ReturnInfo_26, 0) = ((MR_Box) (ll_backend__continuation_info__V_44_44));
#line 522 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ReturnInfo_26, 1) = ((MR_Box) (ll_backend__continuation_info__Layout_25));
#line 522 "continuation_info.m"
                }
#line 524 "continuation_info.m"
                {
#line 524 "continuation_info.m"
                  ll_backend__continuation_info__Return_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 524 "continuation_info.m"
                  MR_hl_field(MR_mktag(1), ll_backend__continuation_info__Return_21, 0) = ((MR_Box) (ll_backend__continuation_info__ReturnInfo_26));
#line 524 "continuation_info.m"
                }
#line 520 "continuation_info.m"
              }
#line 525 "continuation_info.m"
            else
#line 529 "continuation_info.m"
              {
#line 529 "continuation_info.m"
                MR_Word ll_backend__continuation_info__ReturnInfo0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__Return0_20, (MR_Integer) 0)));
#line 529 "continuation_info.m"
                MR_Word ll_backend__continuation_info__TargetsContexts0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ReturnInfo0_27, (MR_Integer) 0)));
#line 529 "continuation_info.m"
                MR_Word ll_backend__continuation_info__Layout0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ReturnInfo0_27, (MR_Integer) 1)));
#line 529 "continuation_info.m"
                MR_Word ll_backend__continuation_info__LV0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Layout0_29, (MR_Integer) 0)));
#line 529 "continuation_info.m"
                MR_Word ll_backend__continuation_info__TV0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Layout0_29, (MR_Integer) 1)));
#line 529 "continuation_info.m"
                MR_Word ll_backend__continuation_info__LV_32;
#line 529 "continuation_info.m"
                MR_Word ll_backend__continuation_info__TV_33;
#line 529 "continuation_info.m"
                MR_Word ll_backend__continuation_info__TargetContexts_34;
#line 529 "continuation_info.m"
                MR_Word ll_backend__continuation_info__V_42_42;
#line 529 "continuation_info.m"
                MR_Word ll_backend__continuation_info__V_43_43;
#line 529 "continuation_info.m"
                MR_Word ll_backend__continuation_info__Layout_49;
#line 529 "continuation_info.m"
                MR_Word ll_backend__continuation_info__ReturnInfo_50;

#line 532 "continuation_info.m"
                {
#line 532 "continuation_info.m"
                  mercury__set__intersect_3_p_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0, ll_backend__continuation_info__LV0_30, ll_backend__continuation_info__VarInfoSet_23, &ll_backend__continuation_info__LV_32);
                }
#line 533 "continuation_info.m"
                {
#line 533 "continuation_info.m"
                  mercury__map__intersect_4_p_1((MR_Word) &ll_backend__continuation_info_scalar_common_1[3], (MR_Word) &ll_backend__continuation_info_scalar_common_1[2], (MR_Word) &ll_backend__continuation_info_scalar_common_2[6], ll_backend__continuation_info__TV0_31, ll_backend__continuation_info__TypeInfoMap_24, &ll_backend__continuation_info__TV_33);
                }
#line 534 "continuation_info.m"
                {
#line 534 "continuation_info.m"
                  ll_backend__continuation_info__Layout_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 534 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Layout_49, 0) = ((MR_Box) (ll_backend__continuation_info__LV_32));
#line 534 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Layout_49, 1) = ((MR_Box) (ll_backend__continuation_info__TV_33));
#line 534 "continuation_info.m"
                }
#line 535 "continuation_info.m"
                {
#line 535 "continuation_info.m"
                  ll_backend__continuation_info__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 535 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_43_43, 0) = ((MR_Box) (ll_backend__continuation_info__Context_11));
#line 535 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_43_43, 1) = ((MR_Box) (ll_backend__continuation_info__GoalPath_22));
#line 535 "continuation_info.m"
                }
#line 535 "continuation_info.m"
                {
#line 535 "continuation_info.m"
                  ll_backend__continuation_info__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 535 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_42_42, 0) = ((MR_Box) (ll_backend__continuation_info__Target_9));
#line 535 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_42_42, 1) = ((MR_Box) (ll_backend__continuation_info__V_43_43));
#line 535 "continuation_info.m"
                }
#line 536 "continuation_info.m"
                {
#line 536 "continuation_info.m"
                  ll_backend__continuation_info__TargetContexts_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 536 "continuation_info.m"
                  MR_hl_field(MR_mktag(1), ll_backend__continuation_info__TargetContexts_34, 0) = ((MR_Box) (ll_backend__continuation_info__V_42_42));
#line 536 "continuation_info.m"
                  MR_hl_field(MR_mktag(1), ll_backend__continuation_info__TargetContexts_34, 1) = ((MR_Box) (ll_backend__continuation_info__TargetsContexts0_28));
#line 536 "continuation_info.m"
                }
#line 537 "continuation_info.m"
                {
#line 537 "continuation_info.m"
                  ll_backend__continuation_info__ReturnInfo_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 537 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ReturnInfo_50, 0) = ((MR_Box) (ll_backend__continuation_info__TargetContexts_34));
#line 537 "continuation_info.m"
                  MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ReturnInfo_50, 1) = ((MR_Box) (ll_backend__continuation_info__Layout_49));
#line 537 "continuation_info.m"
                }
#line 538 "continuation_info.m"
                {
#line 538 "continuation_info.m"
                  ll_backend__continuation_info__Return_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 538 "continuation_info.m"
                  MR_hl_field(MR_mktag(1), ll_backend__continuation_info__Return_21, 0) = ((MR_Box) (ll_backend__continuation_info__ReturnInfo_50));
#line 538 "continuation_info.m"
                }
#line 529 "continuation_info.m"
              }
#line 517 "continuation_info.m"
          }
#line 541 "continuation_info.m"
        break;
#line 541 "continuation_info.m"
    }
#line 545 "continuation_info.m"
    {
#line 545 "continuation_info.m"
      ll_backend__continuation_info__Internal_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 545 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Internal_35, 0) = ((MR_Box) (ll_backend__continuation_info__Port0_18));
#line 545 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Internal_35, 1) = ((MR_Box) (ll_backend__continuation_info__Resume0_19));
#line 545 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Internal_35, 2) = ((MR_Box) (ll_backend__continuation_info__Return_21));
#line 545 "continuation_info.m"
    }
#line 546 "continuation_info.m"
    {
#line 546 "continuation_info.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0, ll_backend__continuation_info__ReturnLabelNum_13, ((MR_Box) (ll_backend__continuation_info__Internal_35)), ll_backend__continuation_info__STATE_VARIABLE_Internals_0_36, ll_backend__continuation_info__STATE_VARIABLE_Internals_37);
#line 546 "continuation_info.m"
      return;
    }
#line 490 "continuation_info.m"
  }
#line 487 "continuation_info.m"
}

#line 474 "continuation_info.m"
static MR_bool MR_CALL 
ll_backend__continuation_info__get_call_info_2_p_0(
#line 474 "continuation_info.m"
  MR_Word ll_backend__continuation_info__Instr_3,
#line 474 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__Call_4)
#line 474 "continuation_info.m"
{
#line 476 "continuation_info.m"
  {
#line 476 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 476 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Uinstr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Instr_3, (MR_Integer) 0)));
#line 476 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Target_7;
#line 476 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Return_8;
#line 476 "continuation_info.m"
    MR_Word ll_backend__continuation_info__LiveInfo_9;
#line 476 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Context_10;
#line 476 "continuation_info.m"
    MR_Word ll_backend__continuation_info__GoalPath_11;
#line 476 "continuation_info.m"
    MR_Word ll_backend__continuation_info__ReturnLabel_13;
#line 477 "continuation_info.m"
    MR_String ll_backend__continuation_info___Comment_6 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Instr_3, (MR_Integer) 1)));
#line 478 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_12_12;

#line 478 "continuation_info.m"
    ll_backend__continuation_info__succeeded = ((((MR_tag((MR_Word) ll_backend__continuation_info__Uinstr_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__continuation_info__Uinstr_5, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 478 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 478 "continuation_info.m"
      {
#line 478 "continuation_info.m"
        ll_backend__continuation_info__Target_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__continuation_info__Uinstr_5, (MR_Integer) 1)));
#line 478 "continuation_info.m"
        ll_backend__continuation_info__Return_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__continuation_info__Uinstr_5, (MR_Integer) 2)));
#line 478 "continuation_info.m"
        ll_backend__continuation_info__LiveInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__continuation_info__Uinstr_5, (MR_Integer) 3)));
#line 478 "continuation_info.m"
        ll_backend__continuation_info__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__continuation_info__Uinstr_5, (MR_Integer) 4)));
#line 478 "continuation_info.m"
        ll_backend__continuation_info__GoalPath_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__continuation_info__Uinstr_5, (MR_Integer) 5)));
#line 478 "continuation_info.m"
        ll_backend__continuation_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__continuation_info__Uinstr_5, (MR_Integer) 6)));
#line 479 "continuation_info.m"
        ll_backend__continuation_info__succeeded = ((MR_tag((MR_Word) ll_backend__continuation_info__Return_8)) == (MR_mktag((MR_Integer) 1)));
#line 479 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 479 "continuation_info.m"
          {
#line 479 "continuation_info.m"
            ll_backend__continuation_info__ReturnLabel_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__Return_8, (MR_Integer) 0)));
#line 480 "continuation_info.m"
            {
#line 480 "continuation_info.m"
              MR_Word base;
#line 480 "continuation_info.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 480 "continuation_info.m"
              *ll_backend__continuation_info__Call_4 = base;
#line 480 "continuation_info.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__continuation_info__ReturnLabel_13));
#line 480 "continuation_info.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__continuation_info__Target_7));
#line 480 "continuation_info.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__continuation_info__LiveInfo_9));
#line 480 "continuation_info.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__continuation_info__Context_10));
#line 480 "continuation_info.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__continuation_info__GoalPath_11));
#line 480 "continuation_info.m"
            }
#line 480 "continuation_info.m"
            ll_backend__continuation_info__succeeded = MR_TRUE;
#line 479 "continuation_info.m"
          }
#line 478 "continuation_info.m"
      }
#line 476 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 476 "continuation_info.m"
  }
#line 474 "continuation_info.m"
}

#line 929 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__generate_table_arg_type_info_3_p_0_2(
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
    MR_Word ll_backend__continuation_info__conv1_HeadVar__4_23;

#line 929 "continuation_info.m"
    {
#line 929 "continuation_info.m"
      ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars_table__942__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__continuation_info__wrapper_arg_1), &ll_backend__continuation_info__conv1_HeadVar__4_23);
    }
#line 929 "continuation_info.m"
    *ll_backend__continuation_info__wrapper_arg_2 = ((MR_Box) (ll_backend__continuation_info__conv1_HeadVar__4_23));
#line 929 "continuation_info.m"
  }
#line 929 "continuation_info.m"
}

#line 927 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__generate_table_arg_type_info_3_p_0_1(
#line 927 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 927 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 927 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_2)
#line 927 "continuation_info.m"
{
#line 927 "continuation_info.m"
  {
#line 927 "continuation_info.m"
    MR_Box ll_backend__continuation_info__closure = ll_backend__continuation_info__closure_arg;
#line 927 "continuation_info.m"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__3_3;

#line 927 "continuation_info.m"
    {
#line 927 "continuation_info.m"
      hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__continuation_info__wrapper_arg_1), &ll_backend__continuation_info__conv0_HeadVar__3_3);
    }
#line 927 "continuation_info.m"
    *ll_backend__continuation_info__wrapper_arg_2 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__3_3));
#line 927 "continuation_info.m"
  }
#line 927 "continuation_info.m"
}

#line 402 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info__generate_table_arg_type_info_3_p_0(
#line 402 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ProcInfo_4,
#line 402 "continuation_info.m"
  MR_Word ll_backend__continuation_info__NumberedVars_5,
#line 402 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__TableArgInfos_6)
#line 402 "continuation_info.m"
{
#line 890 "continuation_info.m"
  {
#line 890 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 890 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeInfo_14_14;
#line 890 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeInfo_35_45;
#line 890 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeCtorInfo_36_46;
#line 890 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeCtorInfo_42_52;
#line 890 "continuation_info.m"
    MR_Word ll_backend__continuation_info__VarSet_7;
#line 890 "continuation_info.m"
    MR_Word ll_backend__continuation_info__VarTypes_8;
#line 890 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeVars0_9;
#line 890 "continuation_info.m"
    MR_Word ll_backend__continuation_info__ArgLayouts_10;
#line 890 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeVars_11;
#line 890 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeVarsList_12;
#line 890 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeInfoDataMap_13;
#line 890 "continuation_info.m"
    MR_Word ll_backend__continuation_info__VarSet_19;
#line 890 "continuation_info.m"
    MR_Word ll_backend__continuation_info__RttiVarMaps_20;
#line 890 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeInfoLocns_21;
#line 890 "continuation_info.m"
    MR_Word ll_backend__continuation_info__FindLocn_22;
#line 890 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeInfoVarLocns_30;
#line 890 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_31_31;

#line 891 "continuation_info.m"
    {
#line 891 "continuation_info.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(ll_backend__continuation_info__ProcInfo_4, &ll_backend__continuation_info__VarSet_7);
    }
#line 892 "continuation_info.m"
    {
#line 892 "continuation_info.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__continuation_info__ProcInfo_4, &ll_backend__continuation_info__VarTypes_8);
    }
#line 12230 "ll_backend.continuation_info.c"
    ll_backend__continuation_info__TypeInfo_14_14 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[2];
#line 893 "continuation_info.m"
    {
#line 893 "continuation_info.m"
      mercury__set__init_1_p_0(ll_backend__continuation_info__TypeInfo_14_14, &ll_backend__continuation_info__TypeVars0_9);
    }
#line 894 "continuation_info.m"
    {
#line 894 "continuation_info.m"
      ll_backend__continuation_info__build_table_arg_info_6_p_0(ll_backend__continuation_info__VarSet_7, ll_backend__continuation_info__VarTypes_8, ll_backend__continuation_info__NumberedVars_5, &ll_backend__continuation_info__ArgLayouts_10, ll_backend__continuation_info__TypeVars0_9, &ll_backend__continuation_info__TypeVars_11);
    }
#line 896 "continuation_info.m"
    {
#line 896 "continuation_info.m"
      mercury__set__to_sorted_list_2_p_0(ll_backend__continuation_info__TypeInfo_14_14, ll_backend__continuation_info__TypeVars_11, &ll_backend__continuation_info__TypeVarsList_12);
    }
#line 925 "continuation_info.m"
    {
#line 925 "continuation_info.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(ll_backend__continuation_info__ProcInfo_4, &ll_backend__continuation_info__VarSet_19);
    }
#line 926 "continuation_info.m"
    {
#line 926 "continuation_info.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ll_backend__continuation_info__ProcInfo_4, &ll_backend__continuation_info__RttiVarMaps_20);
    }
#line 927 "continuation_info.m"
    {
#line 927 "continuation_info.m"
      ll_backend__continuation_info__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 927 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_31_31, 0) = ((MR_Box) (&ll_backend__continuation_info_scalar_common_5[0]));
#line 927 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_31_31, 1) = ((MR_Box) (ll_backend__continuation_info__generate_table_arg_type_info_3_p_0_1));
#line 927 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 927 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_31_31, 3) = ((MR_Box) (ll_backend__continuation_info__RttiVarMaps_20));
#line 927 "continuation_info.m"
    }
#line 12271 "ll_backend.continuation_info.c"
    ll_backend__continuation_info__TypeInfo_35_45 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[2];
#line 12273 "ll_backend.continuation_info.c"
    ll_backend__continuation_info__TypeCtorInfo_36_46 = (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0;
#line 927 "continuation_info.m"
    {
#line 927 "continuation_info.m"
      mercury__list__map_3_p_0(ll_backend__continuation_info__TypeInfo_35_45, ll_backend__continuation_info__TypeCtorInfo_36_46, ll_backend__continuation_info__V_31_31, ll_backend__continuation_info__TypeVarsList_12, &ll_backend__continuation_info__TypeInfoLocns_21);
    }
#line 929 "continuation_info.m"
    {
#line 929 "continuation_info.m"
      ll_backend__continuation_info__FindLocn_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 929 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__FindLocn_22, 0) = ((MR_Box) (&ll_backend__continuation_info_scalar_common_4[2]));
#line 929 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__FindLocn_22, 1) = ((MR_Box) (ll_backend__continuation_info__generate_table_arg_type_info_3_p_0_2));
#line 929 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__FindLocn_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 929 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__FindLocn_22, 3) = ((MR_Box) (ll_backend__continuation_info__NumberedVars_5));
#line 929 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__FindLocn_22, 4) = ((MR_Box) (ll_backend__continuation_info__VarSet_19));
#line 929 "continuation_info.m"
    }
#line 12296 "ll_backend.continuation_info.c"
    ll_backend__continuation_info__TypeCtorInfo_42_52 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_locn_0;
#line 949 "continuation_info.m"
    {
#line 949 "continuation_info.m"
      mercury__list__map_3_p_0(ll_backend__continuation_info__TypeCtorInfo_36_46, ll_backend__continuation_info__TypeCtorInfo_42_52, ll_backend__continuation_info__FindLocn_22, ll_backend__continuation_info__TypeInfoLocns_21, &ll_backend__continuation_info__TypeInfoVarLocns_30);
    }
#line 950 "continuation_info.m"
    {
#line 950 "continuation_info.m"
      mercury__map__from_corresponding_lists_3_p_0(ll_backend__continuation_info__TypeInfo_35_45, ll_backend__continuation_info__TypeCtorInfo_42_52, ll_backend__continuation_info__TypeVarsList_12, ll_backend__continuation_info__TypeInfoVarLocns_30, &ll_backend__continuation_info__TypeInfoDataMap_13);
    }
#line 899 "continuation_info.m"
    {
#line 899 "continuation_info.m"
      MR_Word base;
#line 899 "continuation_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 899 "continuation_info.m"
      *ll_backend__continuation_info__TableArgInfos_6 = base;
#line 899 "continuation_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__continuation_info__ArgLayouts_10));
#line 899 "continuation_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__continuation_info__TypeInfoDataMap_13));
#line 899 "continuation_info.m"
    }
#line 890 "continuation_info.m"
  }
#line 402 "continuation_info.m"
}

#line 865 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__find_typeinfos_for_tvars_4_p_0_2(
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
    MR_Word ll_backend__continuation_info__conv1_HeadVar__4_29;

#line 865 "continuation_info.m"
    {
#line 865 "continuation_info.m"
      ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars__865__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__continuation_info__wrapper_arg_1), &ll_backend__continuation_info__conv1_HeadVar__4_29);
    }
#line 865 "continuation_info.m"
    *ll_backend__continuation_info__wrapper_arg_2 = ((MR_Box) (ll_backend__continuation_info__conv1_HeadVar__4_29));
#line 865 "continuation_info.m"
  }
#line 865 "continuation_info.m"
}

#line 863 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__find_typeinfos_for_tvars_4_p_0_1(
#line 863 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 863 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 863 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_2)
#line 863 "continuation_info.m"
{
#line 863 "continuation_info.m"
  {
#line 863 "continuation_info.m"
    MR_Box ll_backend__continuation_info__closure = ll_backend__continuation_info__closure_arg;
#line 863 "continuation_info.m"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__3_3;

#line 863 "continuation_info.m"
    {
#line 863 "continuation_info.m"
      hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__continuation_info__wrapper_arg_1), &ll_backend__continuation_info__conv0_HeadVar__3_3);
    }
#line 863 "continuation_info.m"
    *ll_backend__continuation_info__wrapper_arg_2 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__3_3));
#line 863 "continuation_info.m"
  }
#line 863 "continuation_info.m"
}

#line 399 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info__find_typeinfos_for_tvars_4_p_0(
#line 399 "continuation_info.m"
  MR_Word ll_backend__continuation_info__TypeVars_5,
#line 399 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarLocs_6,
#line 399 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ProcInfo_7,
#line 399 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__TypeInfoDataMap_8)
#line 399 "continuation_info.m"
{
#line 860 "continuation_info.m"
  {
#line 860 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 860 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeInfo_45_45;
#line 860 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeCtorInfo_46_46;
#line 860 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeInfo_54_54;
#line 860 "continuation_info.m"
    MR_Word ll_backend__continuation_info__VarSet_9;
#line 860 "continuation_info.m"
    MR_Word ll_backend__continuation_info__RttiVarMaps_10;
#line 860 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeInfoLocns_11;
#line 860 "continuation_info.m"
    MR_Word ll_backend__continuation_info__FindLocn_12;
#line 860 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeInfoVarLocns_26;
#line 860 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_27_27;

#line 861 "continuation_info.m"
    {
#line 861 "continuation_info.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(ll_backend__continuation_info__ProcInfo_7, &ll_backend__continuation_info__VarSet_9);
    }
#line 862 "continuation_info.m"
    {
#line 862 "continuation_info.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ll_backend__continuation_info__ProcInfo_7, &ll_backend__continuation_info__RttiVarMaps_10);
    }
#line 863 "continuation_info.m"
    {
#line 863 "continuation_info.m"
      ll_backend__continuation_info__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 863 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_27_27, 0) = ((MR_Box) (&ll_backend__continuation_info_scalar_common_5[0]));
#line 863 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_27_27, 1) = ((MR_Box) (ll_backend__continuation_info__find_typeinfos_for_tvars_4_p_0_1));
#line 863 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 863 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_27_27, 3) = ((MR_Box) (ll_backend__continuation_info__RttiVarMaps_10));
#line 863 "continuation_info.m"
    }
#line 12447 "ll_backend.continuation_info.c"
    ll_backend__continuation_info__TypeInfo_45_45 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[2];
#line 12449 "ll_backend.continuation_info.c"
    ll_backend__continuation_info__TypeCtorInfo_46_46 = (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0;
#line 863 "continuation_info.m"
    {
#line 863 "continuation_info.m"
      mercury__list__map_3_p_0(ll_backend__continuation_info__TypeInfo_45_45, ll_backend__continuation_info__TypeCtorInfo_46_46, ll_backend__continuation_info__V_27_27, ll_backend__continuation_info__TypeVars_5, &ll_backend__continuation_info__TypeInfoLocns_11);
    }
#line 865 "continuation_info.m"
    {
#line 865 "continuation_info.m"
      ll_backend__continuation_info__FindLocn_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 865 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__FindLocn_12, 0) = ((MR_Box) (&ll_backend__continuation_info_scalar_common_4[1]));
#line 865 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__FindLocn_12, 1) = ((MR_Box) (ll_backend__continuation_info__find_typeinfos_for_tvars_4_p_0_2));
#line 865 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__FindLocn_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 865 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__FindLocn_12, 3) = ((MR_Box) (ll_backend__continuation_info__VarLocs_6));
#line 865 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__FindLocn_12, 4) = ((MR_Box) (ll_backend__continuation_info__VarSet_9));
#line 865 "continuation_info.m"
    }
#line 12472 "ll_backend.continuation_info.c"
    ll_backend__continuation_info__TypeInfo_54_54 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[3];
#line 885 "continuation_info.m"
    {
#line 885 "continuation_info.m"
      mercury__list__map_3_p_0(ll_backend__continuation_info__TypeCtorInfo_46_46, ll_backend__continuation_info__TypeInfo_54_54, ll_backend__continuation_info__FindLocn_12, ll_backend__continuation_info__TypeInfoLocns_11, &ll_backend__continuation_info__TypeInfoVarLocns_26);
    }
#line 886 "continuation_info.m"
    {
#line 886 "continuation_info.m"
      mercury__map__from_corresponding_lists_3_p_0(ll_backend__continuation_info__TypeInfo_45_45, ll_backend__continuation_info__TypeInfo_54_54, ll_backend__continuation_info__TypeVars_5, ll_backend__continuation_info__TypeInfoVarLocns_26, ll_backend__continuation_info__TypeInfoDataMap_8);
#line 886 "continuation_info.m"
      return;
    }
#line 860 "continuation_info.m"
  }
#line 399 "continuation_info.m"
}

#line 393 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info__generate_closure_layout_4_p_0(
#line 393 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ModuleInfo_5,
#line 393 "continuation_info.m"
  MR_Word ll_backend__continuation_info__PredId_6,
#line 393 "continuation_info.m"
  MR_Integer ll_backend__continuation_info__ProcId_7,
#line 393 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__ClosureLayout_8)
#line 393 "continuation_info.m"
{
#line 802 "continuation_info.m"
  {
#line 802 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 802 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeInfo_30_30;
#line 802 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Globals_9;
#line 802 "continuation_info.m"
    MR_Word ll_backend__continuation_info__UseFloatRegs_10;
#line 802 "continuation_info.m"
    MR_Word ll_backend__continuation_info__PredInfo_11;
#line 802 "continuation_info.m"
    MR_Word ll_backend__continuation_info__ProcInfo_12;
#line 802 "continuation_info.m"
    MR_Word ll_backend__continuation_info__HeadVars_13;
#line 802 "continuation_info.m"
    MR_Word ll_backend__continuation_info__ArgInfos_14;
#line 802 "continuation_info.m"
    MR_Word ll_backend__continuation_info__ArgTypes_15;
#line 802 "continuation_info.m"
    MR_Word ll_backend__continuation_info__InstMap_16;
#line 802 "continuation_info.m"
    MR_Word ll_backend__continuation_info__VarLocs0_17;
#line 802 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeVars0_18;
#line 820 "continuation_info.m"
    MR_Word ll_backend__continuation_info__ArgLayouts_19;
#line 820 "continuation_info.m"
    MR_Word ll_backend__continuation_info__VarLocs_20;
#line 820 "continuation_info.m"
    MR_Word ll_backend__continuation_info__TypeVars_21;

#line 803 "continuation_info.m"
    {
#line 803 "continuation_info.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__continuation_info__ModuleInfo_5, &ll_backend__continuation_info__Globals_9);
    }
#line 804 "continuation_info.m"
    {
#line 804 "continuation_info.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__continuation_info__Globals_9, (MR_Integer) 254, &ll_backend__continuation_info__UseFloatRegs_10);
    }
#line 805 "continuation_info.m"
    {
#line 805 "continuation_info.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(ll_backend__continuation_info__ModuleInfo_5, ll_backend__continuation_info__PredId_6, ll_backend__continuation_info__ProcId_7, &ll_backend__continuation_info__PredInfo_11, &ll_backend__continuation_info__ProcInfo_12);
    }
#line 806 "continuation_info.m"
    {
#line 806 "continuation_info.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ll_backend__continuation_info__ProcInfo_12, &ll_backend__continuation_info__HeadVars_13);
    }
#line 807 "continuation_info.m"
    {
#line 807 "continuation_info.m"
      hlds__hlds_pred__proc_info_arg_info_2_p_0(ll_backend__continuation_info__ProcInfo_12, &ll_backend__continuation_info__ArgInfos_14);
    }
#line 808 "continuation_info.m"
    {
#line 808 "continuation_info.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(ll_backend__continuation_info__PredInfo_11, &ll_backend__continuation_info__ArgTypes_15);
    }
#line 809 "continuation_info.m"
    {
#line 809 "continuation_info.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(ll_backend__continuation_info__ProcInfo_12, ll_backend__continuation_info__ModuleInfo_5, &ll_backend__continuation_info__InstMap_16);
    }
#line 810 "continuation_info.m"
    {
#line 810 "continuation_info.m"
      mercury__map__init_1_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[0], (MR_Word) &ll_backend__continuation_info_scalar_common_1[1], &ll_backend__continuation_info__VarLocs0_17);
    }
#line 12577 "ll_backend.continuation_info.c"
    ll_backend__continuation_info__TypeInfo_30_30 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[2];
#line 811 "continuation_info.m"
    {
#line 811 "continuation_info.m"
      mercury__set__init_1_p_0(ll_backend__continuation_info__TypeInfo_30_30, &ll_backend__continuation_info__TypeVars0_18);
    }
#line 813 "continuation_info.m"
    {
#line 813 "continuation_info.m"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info__build_closure_info_10_p_0(ll_backend__continuation_info__HeadVars_13, ll_backend__continuation_info__ArgTypes_15, ll_backend__continuation_info__ArgInfos_14, &ll_backend__continuation_info__ArgLayouts_19, ll_backend__continuation_info__InstMap_16, ll_backend__continuation_info__UseFloatRegs_10, ll_backend__continuation_info__VarLocs0_17, &ll_backend__continuation_info__VarLocs_20, ll_backend__continuation_info__TypeVars0_18, &ll_backend__continuation_info__TypeVars_21);
    }
#line 820 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 816 "continuation_info.m"
      {
#line 816 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeVarsList_22;
#line 816 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfoDataMap_23;

#line 816 "continuation_info.m"
        {
#line 816 "continuation_info.m"
          mercury__set__to_sorted_list_2_p_0(ll_backend__continuation_info__TypeInfo_30_30, ll_backend__continuation_info__TypeVars_21, &ll_backend__continuation_info__TypeVarsList_22);
        }
#line 817 "continuation_info.m"
        {
#line 817 "continuation_info.m"
          ll_backend__continuation_info__find_typeinfos_for_tvars_4_p_0(ll_backend__continuation_info__TypeVarsList_22, ll_backend__continuation_info__VarLocs_20, ll_backend__continuation_info__ProcInfo_12, &ll_backend__continuation_info__TypeInfoDataMap_23);
        }
#line 819 "continuation_info.m"
        {
#line 819 "continuation_info.m"
          MR_Word base;
#line 819 "continuation_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 819 "continuation_info.m"
          *ll_backend__continuation_info__ClosureLayout_8 = base;
#line 819 "continuation_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__continuation_info__ArgLayouts_19));
#line 819 "continuation_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__continuation_info__TypeInfoDataMap_23));
#line 819 "continuation_info.m"
        }
#line 816 "continuation_info.m"
      }
#line 820 "continuation_info.m"
    else
#line 821 "continuation_info.m"
      {
#line 821 "continuation_info.m"
        {
#line 821 "continuation_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.continuation_info", (MR_String) "predicate \140ll_backend.continuation_info.generate_closure_layout\'/4", (MR_String) "proc headvars and pred argtypes disagree on arity");
#line 821 "continuation_info.m"
          return;
        }
#line 821 "continuation_info.m"
      }
#line 802 "continuation_info.m"
  }
#line 393 "continuation_info.m"
}

#line 387 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info__generate_resume_layout_6_p_0(
#line 387 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ResumeMap_7,
#line 387 "continuation_info.m"
  MR_Word ll_backend__continuation_info__Temps_8,
#line 387 "continuation_info.m"
  MR_Word ll_backend__continuation_info__InstMap_9,
#line 387 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ProcInfo_10,
#line 387 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ModuleInfo_11,
#line 387 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__Layout_12)
#line 387 "continuation_info.m"
{
#line 685 "continuation_info.m"
  {
#line 685 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;

#line 685 "continuation_info.m"
    {
#line 685 "continuation_info.m"
      ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_117_109_101_95_108_97_121_111_117_116_95_95_91_51_93_95_48_6_p_0(ll_backend__continuation_info__ResumeMap_7, ll_backend__continuation_info__Temps_8, ll_backend__continuation_info__ProcInfo_10, ll_backend__continuation_info__ModuleInfo_11, ll_backend__continuation_info__Layout_12);
#line 685 "continuation_info.m"
      return;
    }
#line 685 "continuation_info.m"
  }
#line 387 "continuation_info.m"
}

#line 379 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info__generate_return_live_lvalues_10_p_0(
#line 379 "continuation_info.m"
  MR_Word ll_backend__continuation_info__OutputArgLocs_11,
#line 379 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ReturnInstMap_12,
#line 379 "continuation_info.m"
  MR_Word ll_backend__continuation_info__Vars_13,
#line 379 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarLocs_14,
#line 379 "continuation_info.m"
  MR_Word ll_backend__continuation_info__Temps_15,
#line 379 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ProcInfo_16,
#line 379 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ModuleInfo_17,
#line 379 "continuation_info.m"
  MR_Word ll_backend__continuation_info__Globals_18,
#line 379 "continuation_info.m"
  MR_Word ll_backend__continuation_info__OkToDeleteAny_19,
#line 379 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__LiveLvalues_20)
#line 379 "continuation_info.m"
{
#line 614 "continuation_info.m"
  {
#line 614 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;

#line 614 "continuation_info.m"
    {
#line 614 "continuation_info.m"
      ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_116_117_114_110_95_108_105_118_101_95_108_118_97_108_117_101_115_95_95_91_50_44_32_55_93_95_48_10_p_0(ll_backend__continuation_info__OutputArgLocs_11, ll_backend__continuation_info__Vars_13, ll_backend__continuation_info__VarLocs_14, ll_backend__continuation_info__Temps_15, ll_backend__continuation_info__ProcInfo_16, ll_backend__continuation_info__Globals_18, ll_backend__continuation_info__OkToDeleteAny_19, ll_backend__continuation_info__LiveLvalues_20);
#line 614 "continuation_info.m"
      return;
    }
#line 614 "continuation_info.m"
  }
#line 379 "continuation_info.m"
}

#line 607 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_1(
#line 607 "continuation_info.m"
  void * ll_backend__continuation_info__env_ptr_arg)
#line 607 "continuation_info.m"
{
#line 607 "continuation_info.m"
  {
#line 607 "continuation_info.m"
    struct ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0_s * ll_backend__continuation_info__env_ptr = (struct ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0_s *) ll_backend__continuation_info__env_ptr_arg;

#line 607 "continuation_info.m"
    MR_builtin_longjmp((ll_backend__continuation_info__env_ptr)->ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__commit_0, 1);
#line 607 "continuation_info.m"
  }
#line 607 "continuation_info.m"
}

#line 607 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_3(
#line 607 "continuation_info.m"
  void * ll_backend__continuation_info__env_ptr_arg)
#line 607 "continuation_info.m"
{
#line 607 "continuation_info.m"
  {
#line 607 "continuation_info.m"
    struct ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0_s * ll_backend__continuation_info__env_ptr = (struct ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0_s *) ll_backend__continuation_info__env_ptr_arg;

#line 607 "continuation_info.m"
    (ll_backend__continuation_info__env_ptr)->ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__Type_16 = ((MR_Word) (ll_backend__continuation_info__env_ptr)->ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__conv0_Type_16);
#line 607 "continuation_info.m"
    {
#line 607 "continuation_info.m"
      ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_2(ll_backend__continuation_info__env_ptr);
#line 607 "continuation_info.m"
      return;
    }
#line 607 "continuation_info.m"
  }
#line 607 "continuation_info.m"
}

#line 607 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_2(
#line 607 "continuation_info.m"
  void * ll_backend__continuation_info__env_ptr_arg)
#line 607 "continuation_info.m"
{
#line 607 "continuation_info.m"
  {
#line 607 "continuation_info.m"
    struct ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0_s * ll_backend__continuation_info__env_ptr = (struct ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0_s *) ll_backend__continuation_info__env_ptr_arg;

#line 608 "continuation_info.m"
    {
#line 608 "continuation_info.m"
      (ll_backend__continuation_info__env_ptr)->ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__succeeded = parse_tree__prog_type__type_is_higher_order_1_p_0((ll_backend__continuation_info__env_ptr)->ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__Type_16);
    }
#line 608 "continuation_info.m"
    if ((ll_backend__continuation_info__env_ptr)->ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__succeeded)
#line 608 "continuation_info.m"
      {
#line 608 "continuation_info.m"
        ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_1(ll_backend__continuation_info__env_ptr);
#line 608 "continuation_info.m"
        return;
      }
#line 607 "continuation_info.m"
  }
#line 607 "continuation_info.m"
}

#line 607 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_4(
#line 607 "continuation_info.m"
  void * ll_backend__continuation_info__env_ptr_arg)
#line 607 "continuation_info.m"
{
#line 607 "continuation_info.m"
  {
#line 607 "continuation_info.m"
    struct ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0_s * ll_backend__continuation_info__env_ptr = (struct ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0_s *) ll_backend__continuation_info__env_ptr_arg;

#line 607 "continuation_info.m"
    if (MR_builtin_setjmp((ll_backend__continuation_info__env_ptr)->ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__commit_0) == 0)
#line 607 "continuation_info.m"
      {
#line 607 "continuation_info.m"
        {
#line 607 "continuation_info.m"
          {
#line 607 "continuation_info.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &(ll_backend__continuation_info__env_ptr)->ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__conv0_Type_16, (ll_backend__continuation_info__env_ptr)->ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__ArgTypes_14, ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_3, ll_backend__continuation_info__env_ptr);
          }
#line 607 "continuation_info.m"
        }
#line 607 "continuation_info.m"
        (ll_backend__continuation_info__env_ptr)->ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__succeeded = MR_FALSE;
#line 607 "continuation_info.m"
      }
#line 607 "continuation_info.m"
    else
#line 607 "continuation_info.m"
      (ll_backend__continuation_info__env_ptr)->ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__succeeded = MR_TRUE;
#line 607 "continuation_info.m"
  }
#line 607 "continuation_info.m"
}

#line 374 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0(
#line 374 "continuation_info.m"
  MR_Word ll_backend__continuation_info__PredInfo_5,
#line 374 "continuation_info.m"
  MR_Word ll_backend__continuation_info__Globals_6,
#line 374 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__BasicLayout_7,
#line 374 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__ForceProcIdLayout_8)
#line 374 "continuation_info.m"
{
#line 374 "continuation_info.m"
  {
#line 374 "continuation_info.m"
    struct ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0_s ll_backend__continuation_info__env;

#line 587 "continuation_info.m"
    {
#line 587 "continuation_info.m"
      (ll_backend__continuation_info__env).ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__succeeded = libs__globals__lookup_bool_option_3_p_1(ll_backend__continuation_info__Globals_6, (MR_Integer) 135, (MR_Integer) 1);
    }
#line 587 "continuation_info.m"
    if ((ll_backend__continuation_info__env).ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__succeeded)
#line 587 "continuation_info.m"
      {
#line 605 "continuation_info.m"
        {
#line 605 "continuation_info.m"
          hlds__hlds_pred__pred_info_get_arg_types_2_p_0(ll_backend__continuation_info__PredInfo_5, &(ll_backend__continuation_info__env).ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__ArgTypes_14);
        }
#line 607 "continuation_info.m"
        {
#line 607 "continuation_info.m"
          ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_4(&ll_backend__continuation_info__env);
        }
#line 587 "continuation_info.m"
      }
#line 592 "continuation_info.m"
    if ((ll_backend__continuation_info__env).ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__succeeded)
#line 590 "continuation_info.m"
      {
#line 590 "continuation_info.m"
        *ll_backend__continuation_info__BasicLayout_7 = (MR_Integer) 1;
#line 591 "continuation_info.m"
        *ll_backend__continuation_info__ForceProcIdLayout_8 = (MR_Integer) 1;
#line 590 "continuation_info.m"
      }
#line 592 "continuation_info.m"
    else
#line 597 "continuation_info.m"
      {
#line 593 "continuation_info.m"
        {
#line 593 "continuation_info.m"
          (ll_backend__continuation_info__env).ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__succeeded = libs__globals__lookup_bool_option_3_p_1(ll_backend__continuation_info__Globals_6, (MR_Integer) 268, (MR_Integer) 1);
        }
#line 597 "continuation_info.m"
        if ((ll_backend__continuation_info__env).ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__succeeded)
#line 595 "continuation_info.m"
          {
#line 595 "continuation_info.m"
            *ll_backend__continuation_info__BasicLayout_7 = (MR_Integer) 1;
#line 596 "continuation_info.m"
            *ll_backend__continuation_info__ForceProcIdLayout_8 = (MR_Integer) 0;
#line 595 "continuation_info.m"
          }
#line 597 "continuation_info.m"
        else
#line 598 "continuation_info.m"
          {
#line 598 "continuation_info.m"
            *ll_backend__continuation_info__BasicLayout_7 = (MR_Integer) 0;
#line 599 "continuation_info.m"
            *ll_backend__continuation_info__ForceProcIdLayout_8 = (MR_Integer) 0;
#line 598 "continuation_info.m"
          }
#line 597 "continuation_info.m"
      }
#line 374 "continuation_info.m"
  }
#line 374 "continuation_info.m"
}

#line 469 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__maybe_process_proc_llds_5_p_0_2(
#line 469 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 469 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 469 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 469 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_3)
#line 469 "continuation_info.m"
{
#line 469 "continuation_info.m"
  {
#line 469 "continuation_info.m"
    MR_Box ll_backend__continuation_info__closure = ll_backend__continuation_info__closure_arg;
#line 469 "continuation_info.m"
    MR_Word ll_backend__continuation_info__conv1_STATE_VARIABLE_Internals_37;

#line 469 "continuation_info.m"
    {
#line 469 "continuation_info.m"
      ll_backend__continuation_info__process_continuation_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), &ll_backend__continuation_info__conv1_STATE_VARIABLE_Internals_37);
    }
#line 469 "continuation_info.m"
    *ll_backend__continuation_info__wrapper_arg_3 = ((MR_Box) (ll_backend__continuation_info__conv1_STATE_VARIABLE_Internals_37));
#line 469 "continuation_info.m"
  }
#line 469 "continuation_info.m"
}

#line 467 "continuation_info.m"
static MR_bool MR_CALL 
ll_backend__continuation_info__maybe_process_proc_llds_5_p_0_1(
#line 467 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 467 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 467 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_2)
#line 467 "continuation_info.m"
{
#line 467 "continuation_info.m"
  {
#line 467 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 467 "continuation_info.m"
    MR_Box ll_backend__continuation_info__closure = ll_backend__continuation_info__closure_arg;
#line 467 "continuation_info.m"
    MR_Word ll_backend__continuation_info__conv0_Call_4;

#line 467 "continuation_info.m"
    {
#line 467 "continuation_info.m"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info__get_call_info_2_p_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), &ll_backend__continuation_info__conv0_Call_4);
    }
#line 467 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 467 "continuation_info.m"
      {
#line 467 "continuation_info.m"
        *ll_backend__continuation_info__wrapper_arg_2 = ((MR_Box) (ll_backend__continuation_info__conv0_Call_4));
#line 467 "continuation_info.m"
        ll_backend__continuation_info__succeeded = MR_TRUE;
#line 467 "continuation_info.m"
      }
#line 467 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 467 "continuation_info.m"
  }
#line 467 "continuation_info.m"
}

#line 367 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info__maybe_process_proc_llds_5_p_0(
#line 367 "continuation_info.m"
  MR_Word ll_backend__continuation_info__Instructions_6,
#line 367 "continuation_info.m"
  MR_Word ll_backend__continuation_info__PredProcId_7,
#line 367 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ModuleInfo_8,
#line 367 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_ContInfo_0_17,
#line 367 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_ContInfo_18)
#line 367 "continuation_info.m"
{
#line 432 "continuation_info.m"
  {
#line 432 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 432 "continuation_info.m"
    MR_Word ll_backend__continuation_info__PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__PredProcId_7, (MR_Integer) 0)));
#line 432 "continuation_info.m"
    MR_Word ll_backend__continuation_info__PredInfo_12;
#line 432 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Globals_13;
#line 432 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Layout_14;
#line 433 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__PredProcId_7, (MR_Integer) 1)));
#line 436 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_15_15;

#line 434 "continuation_info.m"
    {
#line 434 "continuation_info.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__continuation_info__ModuleInfo_8, ll_backend__continuation_info__PredId_10, &ll_backend__continuation_info__PredInfo_12);
    }
#line 435 "continuation_info.m"
    {
#line 435 "continuation_info.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__continuation_info__ModuleInfo_8, &ll_backend__continuation_info__Globals_13);
    }
#line 436 "continuation_info.m"
    {
#line 436 "continuation_info.m"
      ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0(ll_backend__continuation_info__PredInfo_12, ll_backend__continuation_info__Globals_13, &ll_backend__continuation_info__Layout_14, &ll_backend__continuation_info__V_15_15);
    }
#line 442 "continuation_info.m"
#line 442 "continuation_info.m"
    switch (ll_backend__continuation_info__Layout_14) {
#line 442 "continuation_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 442 "continuation_info.m"
      case (MR_Integer) 0:
#line 443 "continuation_info.m"
        *ll_backend__continuation_info__STATE_VARIABLE_ContInfo_18 = ll_backend__continuation_info__STATE_VARIABLE_ContInfo_0_17;
#line 442 "continuation_info.m"
        break;
#line 442 "continuation_info.m"
      case (MR_Integer) 1:
#line 438 "continuation_info.m"
        {
#line 438 "continuation_info.m"
          MR_Word ll_backend__continuation_info__TypeCtorInfo_70_84;
#line 438 "continuation_info.m"
          MR_Word ll_backend__continuation_info__WantReturnLayout_16;
#line 438 "continuation_info.m"
          MR_Word ll_backend__continuation_info__ProcLayoutInfo0_26;
#line 438 "continuation_info.m"
          MR_Word ll_backend__continuation_info__Internals0_27;
#line 438 "continuation_info.m"
          MR_Word ll_backend__continuation_info__Calls_28;
#line 438 "continuation_info.m"
          MR_Word ll_backend__continuation_info__Internals_29;
#line 438 "continuation_info.m"
          MR_Word ll_backend__continuation_info__ProcLayoutInfo_30;
#line 438 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_32_32;
#line 466 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_34_34;
#line 466 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_35_35;
#line 466 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_36_36;
#line 466 "continuation_info.m"
          MR_Integer ll_backend__continuation_info__V_37_37;
#line 466 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_38_38;
#line 466 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_39_39;
#line 466 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_40_40;
#line 466 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_41_41;
#line 466 "continuation_info.m"
          MR_Integer ll_backend__continuation_info__V_42_42;
#line 466 "continuation_info.m"
          MR_Integer ll_backend__continuation_info__V_43_43;
#line 466 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_44_44;
#line 466 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_45_45;
#line 466 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_46_46;
#line 466 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_47_47;
#line 466 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_48_48;
#line 466 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_49_49;
#line 466 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_50_50;
#line 466 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_51_51;
#line 466 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_52_52;
#line 466 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_53_53;
#line 466 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_54_54;
#line 466 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_55_55;
#line 466 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_56_56;
#line 469 "continuation_info.m"
          MR_Box ll_backend__continuation_info__conv2_Internals_29;
#line 471 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_57_57;
#line 471 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_58_58;
#line 471 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_59_59;
#line 471 "continuation_info.m"
          MR_Integer ll_backend__continuation_info__V_60_60;
#line 471 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_61_61;
#line 471 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_62_62;
#line 471 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_63_63;
#line 471 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_64_64;
#line 471 "continuation_info.m"
          MR_Integer ll_backend__continuation_info__V_65_65;
#line 471 "continuation_info.m"
          MR_Integer ll_backend__continuation_info__V_66_66;
#line 471 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_67_67;
#line 471 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_68_68;
#line 471 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_69_69;
#line 471 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_70_70;
#line 471 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_71_71;
#line 471 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_72_72;
#line 471 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_73_73;
#line 471 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_74_74;
#line 471 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_75_75;
#line 471 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_77_77;
#line 471 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_78_78;
#line 471 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_79_79;
#line 471 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_80_80;
#line 471 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_76_76;

#line 439 "continuation_info.m"
          {
#line 439 "continuation_info.m"
            libs__globals__want_return_var_layouts_2_p_0(ll_backend__continuation_info__Globals_13, &ll_backend__continuation_info__WantReturnLayout_16);
          }
#line 465 "continuation_info.m"
          {
#line 465 "continuation_info.m"
            ll_backend__global_data__global_data_get_proc_layout_3_p_0(ll_backend__continuation_info__STATE_VARIABLE_ContInfo_0_17, ll_backend__continuation_info__PredProcId_7, &ll_backend__continuation_info__ProcLayoutInfo0_26);
          }
#line 466 "continuation_info.m"
          ll_backend__continuation_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 0)));
#line 466 "continuation_info.m"
          ll_backend__continuation_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 1)));
#line 466 "continuation_info.m"
          ll_backend__continuation_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 2)));
#line 466 "continuation_info.m"
          ll_backend__continuation_info__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 3)));
#line 466 "continuation_info.m"
          ll_backend__continuation_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 4)));
#line 466 "continuation_info.m"
          ll_backend__continuation_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 5)));
#line 466 "continuation_info.m"
          ll_backend__continuation_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 6)));
#line 466 "continuation_info.m"
          ll_backend__continuation_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 7)));
#line 466 "continuation_info.m"
          ll_backend__continuation_info__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 8)));
#line 466 "continuation_info.m"
          ll_backend__continuation_info__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 9)));
#line 466 "continuation_info.m"
          ll_backend__continuation_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 10)));
#line 466 "continuation_info.m"
          ll_backend__continuation_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 11)));
#line 466 "continuation_info.m"
          ll_backend__continuation_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 12)));
#line 466 "continuation_info.m"
          ll_backend__continuation_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 13)));
#line 466 "continuation_info.m"
          ll_backend__continuation_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 14)));
#line 466 "continuation_info.m"
          ll_backend__continuation_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 15)));
#line 466 "continuation_info.m"
          ll_backend__continuation_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 16)));
#line 466 "continuation_info.m"
          ll_backend__continuation_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 17)));
#line 466 "continuation_info.m"
          ll_backend__continuation_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 18)));
#line 466 "continuation_info.m"
          ll_backend__continuation_info__Internals0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 19)));
#line 466 "continuation_info.m"
          ll_backend__continuation_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 20)));
#line 466 "continuation_info.m"
          ll_backend__continuation_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 21)));
#line 466 "continuation_info.m"
          ll_backend__continuation_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 22)));
#line 466 "continuation_info.m"
          ll_backend__continuation_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 23)));
#line 13224 "ll_backend.continuation_info.c"
          ll_backend__continuation_info__TypeCtorInfo_70_84 = (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_call_info_0;
#line 467 "continuation_info.m"
          {
#line 467 "continuation_info.m"
            mercury__list__filter_map_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__continuation_info__TypeCtorInfo_70_84, (MR_Word) &ll_backend__continuation_info_scalar_common_2[5], ll_backend__continuation_info__Instructions_6, &ll_backend__continuation_info__Calls_28);
          }
#line 469 "continuation_info.m"
          {
#line 469 "continuation_info.m"
            ll_backend__continuation_info__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 469 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_32_32, 0) = ((MR_Box) (&ll_backend__continuation_info_scalar_common_4[0]));
#line 469 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_32_32, 1) = ((MR_Box) (ll_backend__continuation_info__maybe_process_proc_llds_5_p_0_2));
#line 469 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 469 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_32_32, 3) = ((MR_Box) (ll_backend__continuation_info__WantReturnLayout_16));
#line 469 "continuation_info.m"
          }
#line 469 "continuation_info.m"
          {
#line 469 "continuation_info.m"
            mercury__list__foldl_4_p_0(ll_backend__continuation_info__TypeCtorInfo_70_84, (MR_Word) &ll_backend__continuation_info_scalar_common_2[0], ll_backend__continuation_info__V_32_32, ll_backend__continuation_info__Calls_28, ((MR_Box) (ll_backend__continuation_info__Internals0_27)), &ll_backend__continuation_info__conv2_Internals_29);
          }
#line 469 "continuation_info.m"
          ll_backend__continuation_info__Internals_29 = ((MR_Word) ll_backend__continuation_info__conv2_Internals_29);
#line 471 "continuation_info.m"
          ll_backend__continuation_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 0)));
#line 471 "continuation_info.m"
          ll_backend__continuation_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 1)));
#line 471 "continuation_info.m"
          ll_backend__continuation_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 2)));
#line 471 "continuation_info.m"
          ll_backend__continuation_info__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 3)));
#line 471 "continuation_info.m"
          ll_backend__continuation_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 4)));
#line 471 "continuation_info.m"
          ll_backend__continuation_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 5)));
#line 471 "continuation_info.m"
          ll_backend__continuation_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 6)));
#line 471 "continuation_info.m"
          ll_backend__continuation_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 7)));
#line 471 "continuation_info.m"
          ll_backend__continuation_info__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 8)));
#line 471 "continuation_info.m"
          ll_backend__continuation_info__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 9)));
#line 471 "continuation_info.m"
          ll_backend__continuation_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 10)));
#line 471 "continuation_info.m"
          ll_backend__continuation_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 11)));
#line 471 "continuation_info.m"
          ll_backend__continuation_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 12)));
#line 471 "continuation_info.m"
          ll_backend__continuation_info__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 13)));
#line 471 "continuation_info.m"
          ll_backend__continuation_info__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 14)));
#line 471 "continuation_info.m"
          ll_backend__continuation_info__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 15)));
#line 471 "continuation_info.m"
          ll_backend__continuation_info__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 16)));
#line 471 "continuation_info.m"
          ll_backend__continuation_info__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 17)));
#line 471 "continuation_info.m"
          ll_backend__continuation_info__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 18)));
#line 471 "continuation_info.m"
          ll_backend__continuation_info__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 19)));
#line 471 "continuation_info.m"
          ll_backend__continuation_info__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 20)));
#line 471 "continuation_info.m"
          ll_backend__continuation_info__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 21)));
#line 471 "continuation_info.m"
          ll_backend__continuation_info__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 22)));
#line 471 "continuation_info.m"
          ll_backend__continuation_info__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 23)));
#line 471 "continuation_info.m"
          {
#line 471 "continuation_info.m"
            ll_backend__continuation_info__ProcLayoutInfo_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 24 * sizeof(MR_Word)), NULL, NULL);
#line 471 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_30, 0) = ((MR_Box) (ll_backend__continuation_info__V_57_57));
#line 471 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_30, 1) = ((MR_Box) (ll_backend__continuation_info__V_58_58));
#line 471 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_30, 2) = ((MR_Box) (ll_backend__continuation_info__V_59_59));
#line 471 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_30, 3) = ((MR_Box) (ll_backend__continuation_info__V_60_60));
#line 471 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_30, 4) = ((MR_Box) (ll_backend__continuation_info__V_61_61));
#line 471 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_30, 5) = ((MR_Box) (ll_backend__continuation_info__V_62_62));
#line 471 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_30, 6) = ((MR_Box) (ll_backend__continuation_info__V_63_63));
#line 471 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_30, 7) = ((MR_Box) (ll_backend__continuation_info__V_64_64));
#line 471 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_30, 8) = ((MR_Box) (ll_backend__continuation_info__V_65_65));
#line 471 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_30, 9) = ((MR_Box) (ll_backend__continuation_info__V_66_66));
#line 471 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_30, 10) = ((MR_Box) (ll_backend__continuation_info__V_67_67));
#line 471 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_30, 11) = ((MR_Box) (ll_backend__continuation_info__V_68_68));
#line 471 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_30, 12) = ((MR_Box) (ll_backend__continuation_info__V_69_69));
#line 471 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_30, 13) = ((MR_Box) (ll_backend__continuation_info__V_70_70));
#line 471 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_30, 14) = ((MR_Box) (ll_backend__continuation_info__V_71_71));
#line 471 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_30, 15) = ((MR_Box) (ll_backend__continuation_info__V_72_72));
#line 471 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_30, 16) = ((MR_Box) (ll_backend__continuation_info__V_73_73));
#line 471 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_30, 17) = ((MR_Box) (ll_backend__continuation_info__V_74_74));
#line 471 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_30, 18) = ((MR_Box) (ll_backend__continuation_info__V_75_75));
#line 471 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_30, 19) = ((MR_Box) (ll_backend__continuation_info__Internals_29));
#line 471 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_30, 20) = ((MR_Box) (ll_backend__continuation_info__V_77_77));
#line 471 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_30, 21) = ((MR_Box) (ll_backend__continuation_info__V_78_78));
#line 471 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_30, 22) = ((MR_Box) (ll_backend__continuation_info__V_79_79));
#line 471 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_30, 23) = ((MR_Box) (ll_backend__continuation_info__V_80_80));
#line 471 "continuation_info.m"
          }
#line 472 "continuation_info.m"
          {
#line 472 "continuation_info.m"
            ll_backend__global_data__global_data_update_proc_layout_4_p_0(ll_backend__continuation_info__PredProcId_7, ll_backend__continuation_info__ProcLayoutInfo_30, ll_backend__continuation_info__STATE_VARIABLE_ContInfo_0_17, ll_backend__continuation_info__STATE_VARIABLE_ContInfo_18);
#line 472 "continuation_info.m"
            return;
          }
#line 438 "continuation_info.m"
        }
#line 442 "continuation_info.m"
        break;
#line 442 "continuation_info.m"
    }
#line 432 "continuation_info.m"
  }
#line 367 "continuation_info.m"
}

#line 358 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info__maybe_process_llds_4_p_0(
#line 358 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 358 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ModuleInfo_2,
#line 358 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_GlobalData_0_3,
#line 358 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_GlobalData_4)
#line 358 "continuation_info.m"
{
#line 425 "continuation_info.m"
  while (MR_TRUE)
#line 425 "continuation_info.m"
    {
#line 425 "continuation_info.m"
      /* tailcall optimized into a loop */
#line 425 "continuation_info.m"
      {
#line 425 "continuation_info.m"
        MR_bool ll_backend__continuation_info__succeeded;

#line 425 "continuation_info.m"
        if ((ll_backend__continuation_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 425 "continuation_info.m"
          *ll_backend__continuation_info__STATE_VARIABLE_GlobalData_4 = ll_backend__continuation_info__STATE_VARIABLE_GlobalData_0_3;
#line 425 "continuation_info.m"
        else
#line 426 "continuation_info.m"
          {
#line 426 "continuation_info.m"
            MR_Word ll_backend__continuation_info__Proc_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 426 "continuation_info.m"
            MR_Word ll_backend__continuation_info__Procs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 426 "continuation_info.m"
            MR_Word ll_backend__continuation_info__PredProcId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Proc_9, (MR_Integer) 2)));
#line 426 "continuation_info.m"
            MR_Word ll_backend__continuation_info__Instrs_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Proc_9, (MR_Integer) 4)));
#line 426 "continuation_info.m"
            MR_Word ll_backend__continuation_info__STATE_VARIABLE_GlobalData_17_17;
#line 427 "continuation_info.m"
            MR_String ll_backend__continuation_info__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Proc_9, (MR_Integer) 0)));
#line 427 "continuation_info.m"
            MR_Integer ll_backend__continuation_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Proc_9, (MR_Integer) 1)));
#line 427 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Proc_9, (MR_Integer) 3)));
#line 427 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Proc_9, (MR_Integer) 5)));
#line 427 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Proc_9, (MR_Integer) 6)));
#line 427 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Proc_9, (MR_Integer) 7)));
#line 427 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Proc_9, (MR_Integer) 8)));

#line 429 "continuation_info.m"
            {
#line 429 "continuation_info.m"
              ll_backend__continuation_info__maybe_process_proc_llds_5_p_0(ll_backend__continuation_info__Instrs_14, ll_backend__continuation_info__PredProcId_13, ll_backend__continuation_info__ModuleInfo_2, ll_backend__continuation_info__STATE_VARIABLE_GlobalData_0_3, &ll_backend__continuation_info__STATE_VARIABLE_GlobalData_17_17);
            }
#line 430 "continuation_info.m"
            /* direct tailcall eliminated */
#line 430 "continuation_info.m"
            {
#line 430 "continuation_info.m"
              MR_Word ll_backend__continuation_info__HeadVar__1__tmp_copy_1 = ll_backend__continuation_info__Procs_10;
#line 430 "continuation_info.m"
              MR_Word ll_backend__continuation_info__STATE_VARIABLE_GlobalData_0__tmp_copy_3 = ll_backend__continuation_info__STATE_VARIABLE_GlobalData_17_17;

#line 430 "continuation_info.m"
              ll_backend__continuation_info__STATE_VARIABLE_GlobalData_0_3 = ll_backend__continuation_info__STATE_VARIABLE_GlobalData_0__tmp_copy_3;
#line 430 "continuation_info.m"
              ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__HeadVar__1__tmp_copy_1;
#line 430 "continuation_info.m"
            }
#line 430 "continuation_info.m"
            continue;
#line 426 "continuation_info.m"
          }
#line 425 "continuation_info.m"
      }
#line 425 "continuation_info.m"
      break;
#line 425 "continuation_info.m"
    }
#line 358 "continuation_info.m"
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
