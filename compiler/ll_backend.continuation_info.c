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
#include "solutions.mih"
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
#include "check_hlds.inst_match.mih"
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



#line 373 "continuation_info.m"
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
#line 373 "continuation_info.m"
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
  MR_Word ll_backend__continuation_info__HeadVar__3_22,
#line 944 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__4_23);

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
  MR_Word ll_backend__continuation_info__HeadVar__1_29,
#line 564 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_30,
#line 564 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__3_31);

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
  MR_Word ll_backend__continuation_info__HeadVar__1_26,
#line 560 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__2_27);

#line 554 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__554__1_2_p_0(
#line 554 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_23,
#line 554 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__2_24);

#line 535 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__process_continuation__535__1_3_p_0(
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
  MR_Word ll_backend__continuation_info__HeadVar__3_28,
#line 867 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__4_29);

#line 870 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars__870__1_4_p_0(
#line 870 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_28,
#line 870 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_30,
#line 870 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_31,
#line 870 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__4_32);

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
ll_backend__continuation_info__process_continuation_4_p_0_1(
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
ll_backend__continuation_info__process_continuation_4_p_0(
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
  MR_Word * ll_backend__continuation_info__Call_4);

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

#line 471 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__maybe_process_proc_llds_5_p_0_2(
#line 471 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 471 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 471 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 471 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_3);

#line 469 "continuation_info.m"
static MR_bool MR_CALL 
ll_backend__continuation_info__maybe_process_proc_llds_5_p_0_1(
#line 469 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 469 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 469 "continuation_info.m"
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
    ((MR_Box) (ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__564__1_3_p_0_1)),
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1622 "ll_backend.continuation_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__continuation_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__continuation_info__type_ctor_info_internal_layout_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0
  }
};

#line 1631 "ll_backend.continuation_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__continuation_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1639 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1647 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 1655 "ll_backend.continuation_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__continuation_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__continuation_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &ll_backend__continuation_info__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 1664 "ll_backend.continuation_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__continuation_info__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1672 "ll_backend.continuation_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__continuation_info__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_layout_locn_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0
  }
};

#line 1680 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__continuation_info__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1689 "ll_backend.continuation_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__continuation_info__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__continuation_info__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0
  }
};

#line 1697 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1705 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0
  }
};

#line 1713 "ll_backend.continuation_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__continuation_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__continuation_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &ll_backend__continuation_info__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0
  }
};

#line 1722 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__list__ti_list_1ll_backend__llds__type_ctor_info_liveinfo_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_liveinfo_0
  }
};

#line 1730 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
  }
};

#line 1738 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_call_info_0_0[5] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__list__ti_list_1ll_backend__llds__type_ctor_info_liveinfo_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__maybe__ti_maybe_1mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
};

#line 1747 "ll_backend.continuation_info.c"
static const MR_ConstString ll_backend__continuation_info__ll_backend__continuation_info__field_names_call_info_0_0[5] = {
  (MR_String) "call_return_label",
  (MR_String) "call_target",
  (MR_String) "call_live_on_return",
  (MR_String) "call_context",
  (MR_String) "call_goal_path"
};

#line 1756 "ll_backend.continuation_info.c"
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

#line 1771 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_call_info_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_call_info_0_0
};

#line 1776 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_call_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_call_info_0_0
  }
};

#line 1785 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_call_info_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_call_info_0_0
};

#line 1790 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_call_info_0[1] = {
  (MR_Integer) 0
};

#line 1795 "ll_backend.continuation_info.c"
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

#line 1812 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_closure_arg_info_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
};

#line 1818 "ll_backend.continuation_info.c"
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

#line 1833 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_closure_arg_info_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_closure_arg_info_0_0
};

#line 1838 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_closure_arg_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_closure_arg_info_0_0
  }
};

#line 1847 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_closure_arg_info_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_closure_arg_info_0_0
};

#line 1852 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_closure_arg_info_0[1] = {
  (MR_Integer) 0
};

#line 1857 "ll_backend.continuation_info.c"
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

#line 1874 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__list__ti_list_1ll_backend__continuation_info__type_ctor_info_closure_arg_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_closure_arg_info_0
  }
};

#line 1882 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__continuation_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_TypeInfo) &ll_backend__continuation_info__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0
  }
};

#line 1891 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_closure_layout_info_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__list__ti_list_1ll_backend__continuation_info__type_ctor_info_closure_arg_info_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0
};

#line 1897 "ll_backend.continuation_info.c"
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

#line 1912 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_closure_layout_info_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_closure_layout_info_0_0
};

#line 1917 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_closure_layout_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_closure_layout_info_0_0
  }
};

#line 1926 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_closure_layout_info_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_closure_layout_info_0_0
};

#line 1931 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_closure_layout_info_0[1] = {
  (MR_Integer) 0
};

#line 1936 "ll_backend.continuation_info.c"
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

#line 1953 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_trace_port_layout_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_trace_port_layout_info_0
  }
};

#line 1961 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_layout_label_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_label_info_0
  }
};

#line 1969 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_return_layout_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_return_layout_info_0
  }
};

#line 1977 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_internal_layout_info_0_0[3] = {
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_trace_port_layout_info_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_layout_label_info_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_return_layout_info_0
};

#line 1984 "ll_backend.continuation_info.c"
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

#line 1999 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_internal_layout_info_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_internal_layout_info_0_0
};

#line 2004 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_internal_layout_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_internal_layout_info_0_0
  }
};

#line 2013 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_internal_layout_info_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_internal_layout_info_0_0
};

#line 2018 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_internal_layout_info_0[1] = {
  (MR_Integer) 0
};

#line 2023 "ll_backend.continuation_info.c"
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

#line 2040 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__set_ordlist__ti_set_ordlist_1ll_backend__continuation_info__type_ctor_info_layout_var_info_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0
  }
};

#line 2048 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_layout_label_info_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__set_ordlist__ti_set_ordlist_1ll_backend__continuation_info__type_ctor_info_layout_var_info_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0
};

#line 2054 "ll_backend.continuation_info.c"
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

#line 2069 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_layout_label_info_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_layout_label_info_0_0
};

#line 2074 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_layout_label_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_layout_label_info_0_0
  }
};

#line 2083 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_layout_label_info_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_layout_label_info_0_0
};

#line 2088 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_layout_label_info_0[1] = {
  (MR_Integer) 0
};

#line 2093 "ll_backend.continuation_info.c"
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

#line 2110 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_layout_var_info_0_0[3] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_live_value_type_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2117 "ll_backend.continuation_info.c"
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

#line 2132 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_layout_var_info_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_layout_var_info_0_0
};

#line 2137 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_layout_var_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_layout_var_info_0_0
  }
};

#line 2146 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_layout_var_info_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_layout_var_info_0_0
};

#line 2151 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_layout_var_info_0[1] = {
  (MR_Integer) 0
};

#line 2156 "ll_backend.continuation_info.c"
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

#line 2173 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_proc_deep_prof_info_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_hlds_proc_static_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_deep_excp_slots_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_deep_original_body_0
};

#line 2180 "ll_backend.continuation_info.c"
static const MR_ConstString ll_backend__continuation_info__ll_backend__continuation_info__field_names_proc_deep_prof_info_0_0[3] = {
  (MR_String) "pdpi_proc_static",
  (MR_String) "pdpi_excp_slots",
  (MR_String) "pdpi_orig_body"
};

#line 2187 "ll_backend.continuation_info.c"
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

#line 2202 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_proc_deep_prof_info_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_proc_deep_prof_info_0_0
};

#line 2207 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_proc_deep_prof_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_proc_deep_prof_info_0_0
  }
};

#line 2216 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_proc_deep_prof_info_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_proc_deep_prof_info_0_0
};

#line 2221 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_proc_deep_prof_info_0[1] = {
  (MR_Integer) 0
};

#line 2226 "ll_backend.continuation_info.c"
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

#line 2243 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__continuation_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__continuation_info__type_ctor_info_internal_layout_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0
  }
};

#line 2252 "ll_backend.continuation_info.c"
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

#line 2269 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2277 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 2285 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2293 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

#line 2301 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2309 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__continuation_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2318 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_proc_layout_table_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_layout_table_info_0
  }
};

#line 2326 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0
  }
};

#line 2334 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_proc_deep_prof_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_deep_prof_info_0
  }
};

#line 2342 "ll_backend.continuation_info.c"
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

#line 2370 "ll_backend.continuation_info.c"
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

#line 2398 "ll_backend.continuation_info.c"
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

#line 2413 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_proc_layout_info_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_proc_layout_info_0_0
};

#line 2418 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_proc_layout_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_proc_layout_info_0_0
  }
};

#line 2427 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_proc_layout_info_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_proc_layout_info_0_0
};

#line 2432 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_proc_layout_info_0[1] = {
  (MR_Integer) 0
};

#line 2437 "ll_backend.continuation_info.c"
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

#line 2454 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_proc_layout_table_info_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_table_io_info_0
};

#line 2459 "ll_backend.continuation_info.c"
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

#line 2474 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_proc_layout_table_info_0_1[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_table_struct_info_0
};

#line 2479 "ll_backend.continuation_info.c"
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

#line 2494 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_proc_layout_table_info_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_proc_layout_table_info_0_0
};

#line 2499 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_proc_layout_table_info_0_1[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_proc_layout_table_info_0_1
};

#line 2504 "ll_backend.continuation_info.c"
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

#line 2518 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_proc_layout_table_info_0[2] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_proc_layout_table_info_0_0,
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_proc_layout_table_info_0_1
};

#line 2524 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_proc_layout_table_info_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2530 "ll_backend.continuation_info.c"
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

#line 2547 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__continuation_info__pair__ti_pair_2term__type_ctor_info_context_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0,
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
  }
};

#line 2556 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__continuation_info__pair__ti_pair_2ll_backend__llds__type_ctor_info_code_addr_0pair__ti_pair_2term__type_ctor_info_context_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0,
    (MR_TypeInfo) &ll_backend__continuation_info__pair__ti_pair_2term__type_ctor_info_context_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
  }
};

#line 2565 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__list__ti_list_1pair__ti_pair_2ll_backend__llds__type_ctor_info_code_addr_0pair__ti_pair_2term__type_ctor_info_context_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__pair__ti_pair_2ll_backend__llds__type_ctor_info_code_addr_0pair__ti_pair_2term__type_ctor_info_context_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
  }
};

#line 2573 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_return_layout_info_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__list__ti_list_1pair__ti_pair_2ll_backend__llds__type_ctor_info_code_addr_0pair__ti_pair_2term__type_ctor_info_context_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_label_info_0
};

#line 2579 "ll_backend.continuation_info.c"
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

#line 2594 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_return_layout_info_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_return_layout_info_0_0
};

#line 2599 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_return_layout_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_return_layout_info_0_0
  }
};

#line 2608 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_return_layout_info_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_return_layout_info_0_0
};

#line 2613 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_return_layout_info_0[1] = {
  (MR_Integer) 0
};

#line 2618 "ll_backend.continuation_info.c"
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

#line 2635 "ll_backend.continuation_info.c"
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

#line 2650 "ll_backend.continuation_info.c"
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

#line 2665 "ll_backend.continuation_info.c"
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

#line 2680 "ll_backend.continuation_info.c"
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

#line 2695 "ll_backend.continuation_info.c"
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

#line 2710 "ll_backend.continuation_info.c"
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

#line 2725 "ll_backend.continuation_info.c"
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

#line 2740 "ll_backend.continuation_info.c"
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

#line 2755 "ll_backend.continuation_info.c"
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

#line 2770 "ll_backend.continuation_info.c"
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

#line 2785 "ll_backend.continuation_info.c"
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

#line 2800 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_slot_contents_0_11[1] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
};

#line 2805 "ll_backend.continuation_info.c"
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

#line 2820 "ll_backend.continuation_info.c"
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

#line 2835 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_slot_contents_0_1[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_slot_contents_0_11
};

#line 2840 "ll_backend.continuation_info.c"
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

#line 2854 "ll_backend.continuation_info.c"
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

#line 2870 "ll_backend.continuation_info.c"
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

#line 2886 "ll_backend.continuation_info.c"
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

#line 2903 "ll_backend.continuation_info.c"
static const MR_EnumFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__enum_functor_desc_trace_needs_body_rep_0_0 = {
  (MR_String) "trace_needs_body_rep",
  (MR_Integer) 0
};

#line 2909 "ll_backend.continuation_info.c"
static const MR_EnumFunctorDesc ll_backend__continuation_info__ll_backend__continuation_info__enum_functor_desc_trace_needs_body_rep_0_1 = {
  (MR_String) "trace_does_not_need_body_rep",
  (MR_Integer) 1
};

#line 2915 "ll_backend.continuation_info.c"
static const MR_EnumFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__enum_value_ordered_trace_needs_body_rep_0[2] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__enum_functor_desc_trace_needs_body_rep_0_0,
  &ll_backend__continuation_info__ll_backend__continuation_info__enum_functor_desc_trace_needs_body_rep_0_1
};

#line 2921 "ll_backend.continuation_info.c"
static const MR_EnumFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__enum_name_ordered_trace_needs_body_rep_0[2] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__enum_functor_desc_trace_needs_body_rep_0_1,
  &ll_backend__continuation_info__ll_backend__continuation_info__enum_functor_desc_trace_needs_body_rep_0_0
};

#line 2927 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_trace_needs_body_rep_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2933 "ll_backend.continuation_info.c"
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

#line 2950 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_user_event_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_user_event_info_0
  }
};

#line 2958 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_trace_port_layout_info_0_0[6] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_user_event_info_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_label_info_0
};

#line 2968 "ll_backend.continuation_info.c"
static const MR_ConstString ll_backend__continuation_info__ll_backend__continuation_info__field_names_trace_port_layout_info_0_0[6] = {
  (MR_String) "port_context",
  (MR_String) "port_type",
  (MR_String) "port_is_hidden",
  (MR_String) "port_path",
  (MR_String) "port_user",
  (MR_String) "port_label"
};

#line 2978 "ll_backend.continuation_info.c"
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

#line 2993 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_trace_port_layout_info_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_trace_port_layout_info_0_0
};

#line 2998 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_trace_port_layout_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_trace_port_layout_info_0_0
  }
};

#line 3007 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_trace_port_layout_info_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_trace_port_layout_info_0_0
};

#line 3012 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_trace_port_layout_info_0[1] = {
  (MR_Integer) 0
};

#line 3017 "ll_backend.continuation_info.c"
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

#line 3034 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_user_attribute_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 3040 "ll_backend.continuation_info.c"
static const MR_ConstString ll_backend__continuation_info__ll_backend__continuation_info__field_names_user_attribute_0_0[2] = {
  (MR_String) "attr_locn",
  (MR_String) "attr_var"
};

#line 3046 "ll_backend.continuation_info.c"
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

#line 3061 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_user_attribute_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_user_attribute_0_0
};

#line 3066 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_user_attribute_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_user_attribute_0_0
  }
};

#line 3075 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_user_attribute_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_user_attribute_0_0
};

#line 3080 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_user_attribute_0[1] = {
  (MR_Integer) 0
};

#line 3085 "ll_backend.continuation_info.c"
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

#line 3102 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_user_attribute_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_user_attribute_0
  }
};

#line 3110 "ll_backend.continuation_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__continuation_info__list__ti_list_1maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_user_attribute_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__continuation_info__maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_user_attribute_0
  }
};

#line 3118 "ll_backend.continuation_info.c"
static const MR_PseudoTypeInfo ll_backend__continuation_info__ll_backend__continuation_info__field_types_user_event_info_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__list__ti_list_1maybe__ti_maybe_1ll_backend__continuation_info__type_ctor_info_user_attribute_0
};

#line 3124 "ll_backend.continuation_info.c"
static const MR_ConstString ll_backend__continuation_info__ll_backend__continuation_info__field_names_user_event_info_0_0[2] = {
  (MR_String) "user_port_number",
  (MR_String) "user_attributes"
};

#line 3130 "ll_backend.continuation_info.c"
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

#line 3145 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_user_event_info_0_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_user_event_info_0_0
};

#line 3150 "ll_backend.continuation_info.c"
static const MR_DuPtagLayout ll_backend__continuation_info__ll_backend__continuation_info__du_ptag_ordered_user_event_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__continuation_info__ll_backend__continuation_info__du_stag_ordered_user_event_info_0_0
  }
};

#line 3159 "ll_backend.continuation_info.c"
static const MR_DuFunctorDescPtr ll_backend__continuation_info__ll_backend__continuation_info__du_name_ordered_user_event_info_0[1] = {
  &ll_backend__continuation_info__ll_backend__continuation_info__du_functor_desc_user_event_info_0_0
};

#line 3164 "ll_backend.continuation_info.c"
static const MR_Integer ll_backend__continuation_info__ll_backend__continuation_info__functor_number_map_user_event_info_0[1] = {
  (MR_Integer) 0
};

#line 3169 "ll_backend.continuation_info.c"
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

#line 3186 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____call_info_0_0_10001(
#line 3189 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3191 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3193 "ll_backend.continuation_info.c"
{
#line 3195 "ll_backend.continuation_info.c"
  {
#line 3197 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3200 "ll_backend.continuation_info.c"
    {
#line 3202 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____call_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3205 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3207 "ll_backend.continuation_info.c"
  }
#line 3209 "ll_backend.continuation_info.c"
}

#line 3212 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____call_info_0_0_10001(
#line 3215 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3217 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3219 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3221 "ll_backend.continuation_info.c"
{
#line 3223 "ll_backend.continuation_info.c"
  {
#line 3225 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3228 "ll_backend.continuation_info.c"
    {
#line 3230 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____call_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3233 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3235 "ll_backend.continuation_info.c"
  }
#line 3237 "ll_backend.continuation_info.c"
}

#line 3240 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____closure_arg_info_0_0_10001(
#line 3243 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3245 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3247 "ll_backend.continuation_info.c"
{
#line 3249 "ll_backend.continuation_info.c"
  {
#line 3251 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3254 "ll_backend.continuation_info.c"
    {
#line 3256 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____closure_arg_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3259 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3261 "ll_backend.continuation_info.c"
  }
#line 3263 "ll_backend.continuation_info.c"
}

#line 3266 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____closure_arg_info_0_0_10001(
#line 3269 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3271 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3273 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3275 "ll_backend.continuation_info.c"
{
#line 3277 "ll_backend.continuation_info.c"
  {
#line 3279 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3282 "ll_backend.continuation_info.c"
    {
#line 3284 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____closure_arg_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3287 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3289 "ll_backend.continuation_info.c"
  }
#line 3291 "ll_backend.continuation_info.c"
}

#line 3294 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____closure_layout_info_0_0_10001(
#line 3297 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3299 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3301 "ll_backend.continuation_info.c"
{
#line 3303 "ll_backend.continuation_info.c"
  {
#line 3305 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3308 "ll_backend.continuation_info.c"
    {
#line 3310 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____closure_layout_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3313 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3315 "ll_backend.continuation_info.c"
  }
#line 3317 "ll_backend.continuation_info.c"
}

#line 3320 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____closure_layout_info_0_0_10001(
#line 3323 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3325 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3327 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3329 "ll_backend.continuation_info.c"
{
#line 3331 "ll_backend.continuation_info.c"
  {
#line 3333 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3336 "ll_backend.continuation_info.c"
    {
#line 3338 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____closure_layout_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3341 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3343 "ll_backend.continuation_info.c"
  }
#line 3345 "ll_backend.continuation_info.c"
}

#line 3348 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____internal_layout_info_0_0_10001(
#line 3351 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3353 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3355 "ll_backend.continuation_info.c"
{
#line 3357 "ll_backend.continuation_info.c"
  {
#line 3359 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3362 "ll_backend.continuation_info.c"
    {
#line 3364 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____internal_layout_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3367 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3369 "ll_backend.continuation_info.c"
  }
#line 3371 "ll_backend.continuation_info.c"
}

#line 3374 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____internal_layout_info_0_0_10001(
#line 3377 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3379 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3381 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3383 "ll_backend.continuation_info.c"
{
#line 3385 "ll_backend.continuation_info.c"
  {
#line 3387 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3390 "ll_backend.continuation_info.c"
    {
#line 3392 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____internal_layout_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3395 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3397 "ll_backend.continuation_info.c"
  }
#line 3399 "ll_backend.continuation_info.c"
}

#line 3402 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____layout_label_info_0_0_10001(
#line 3405 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3407 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3409 "ll_backend.continuation_info.c"
{
#line 3411 "ll_backend.continuation_info.c"
  {
#line 3413 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3416 "ll_backend.continuation_info.c"
    {
#line 3418 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____layout_label_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3421 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3423 "ll_backend.continuation_info.c"
  }
#line 3425 "ll_backend.continuation_info.c"
}

#line 3428 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____layout_label_info_0_0_10001(
#line 3431 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3433 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3435 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3437 "ll_backend.continuation_info.c"
{
#line 3439 "ll_backend.continuation_info.c"
  {
#line 3441 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3444 "ll_backend.continuation_info.c"
    {
#line 3446 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____layout_label_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3449 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3451 "ll_backend.continuation_info.c"
  }
#line 3453 "ll_backend.continuation_info.c"
}

#line 3456 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____layout_var_info_0_0_10001(
#line 3459 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3461 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3463 "ll_backend.continuation_info.c"
{
#line 3465 "ll_backend.continuation_info.c"
  {
#line 3467 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3470 "ll_backend.continuation_info.c"
    {
#line 3472 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____layout_var_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3475 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3477 "ll_backend.continuation_info.c"
  }
#line 3479 "ll_backend.continuation_info.c"
}

#line 3482 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____layout_var_info_0_0_10001(
#line 3485 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3487 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3489 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3491 "ll_backend.continuation_info.c"
{
#line 3493 "ll_backend.continuation_info.c"
  {
#line 3495 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3498 "ll_backend.continuation_info.c"
    {
#line 3500 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____layout_var_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3503 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3505 "ll_backend.continuation_info.c"
  }
#line 3507 "ll_backend.continuation_info.c"
}

#line 3510 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____proc_deep_prof_info_0_0_10001(
#line 3513 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3515 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3517 "ll_backend.continuation_info.c"
{
#line 3519 "ll_backend.continuation_info.c"
  {
#line 3521 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3524 "ll_backend.continuation_info.c"
    {
#line 3526 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____proc_deep_prof_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3529 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3531 "ll_backend.continuation_info.c"
  }
#line 3533 "ll_backend.continuation_info.c"
}

#line 3536 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____proc_deep_prof_info_0_0_10001(
#line 3539 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3541 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3543 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3545 "ll_backend.continuation_info.c"
{
#line 3547 "ll_backend.continuation_info.c"
  {
#line 3549 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3552 "ll_backend.continuation_info.c"
    {
#line 3554 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____proc_deep_prof_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3557 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3559 "ll_backend.continuation_info.c"
  }
#line 3561 "ll_backend.continuation_info.c"
}

#line 3564 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____proc_label_layout_info_0_0_10001(
#line 3567 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3569 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3571 "ll_backend.continuation_info.c"
{
#line 3573 "ll_backend.continuation_info.c"
  {
#line 3575 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3578 "ll_backend.continuation_info.c"
    {
#line 3580 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____proc_label_layout_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3583 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3585 "ll_backend.continuation_info.c"
  }
#line 3587 "ll_backend.continuation_info.c"
}

#line 3590 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____proc_label_layout_info_0_0_10001(
#line 3593 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3595 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3597 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3599 "ll_backend.continuation_info.c"
{
#line 3601 "ll_backend.continuation_info.c"
  {
#line 3603 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3606 "ll_backend.continuation_info.c"
    {
#line 3608 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____proc_label_layout_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3611 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3613 "ll_backend.continuation_info.c"
  }
#line 3615 "ll_backend.continuation_info.c"
}

#line 3618 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____proc_layout_info_0_0_10001(
#line 3621 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3623 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3625 "ll_backend.continuation_info.c"
{
#line 3627 "ll_backend.continuation_info.c"
  {
#line 3629 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3632 "ll_backend.continuation_info.c"
    {
#line 3634 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____proc_layout_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3637 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3639 "ll_backend.continuation_info.c"
  }
#line 3641 "ll_backend.continuation_info.c"
}

#line 3644 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____proc_layout_info_0_0_10001(
#line 3647 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3649 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3651 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3653 "ll_backend.continuation_info.c"
{
#line 3655 "ll_backend.continuation_info.c"
  {
#line 3657 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3660 "ll_backend.continuation_info.c"
    {
#line 3662 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____proc_layout_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3665 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3667 "ll_backend.continuation_info.c"
  }
#line 3669 "ll_backend.continuation_info.c"
}

#line 3672 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____proc_layout_table_info_0_0_10001(
#line 3675 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3677 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3679 "ll_backend.continuation_info.c"
{
#line 3681 "ll_backend.continuation_info.c"
  {
#line 3683 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3686 "ll_backend.continuation_info.c"
    {
#line 3688 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____proc_layout_table_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3691 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3693 "ll_backend.continuation_info.c"
  }
#line 3695 "ll_backend.continuation_info.c"
}

#line 3698 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____proc_layout_table_info_0_0_10001(
#line 3701 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3703 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3705 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3707 "ll_backend.continuation_info.c"
{
#line 3709 "ll_backend.continuation_info.c"
  {
#line 3711 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3714 "ll_backend.continuation_info.c"
    {
#line 3716 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____proc_layout_table_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3719 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3721 "ll_backend.continuation_info.c"
  }
#line 3723 "ll_backend.continuation_info.c"
}

#line 3726 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____return_layout_info_0_0_10001(
#line 3729 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3731 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3733 "ll_backend.continuation_info.c"
{
#line 3735 "ll_backend.continuation_info.c"
  {
#line 3737 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3740 "ll_backend.continuation_info.c"
    {
#line 3742 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____return_layout_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3745 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3747 "ll_backend.continuation_info.c"
  }
#line 3749 "ll_backend.continuation_info.c"
}

#line 3752 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____return_layout_info_0_0_10001(
#line 3755 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3757 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3759 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3761 "ll_backend.continuation_info.c"
{
#line 3763 "ll_backend.continuation_info.c"
  {
#line 3765 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3768 "ll_backend.continuation_info.c"
    {
#line 3770 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____return_layout_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3773 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3775 "ll_backend.continuation_info.c"
  }
#line 3777 "ll_backend.continuation_info.c"
}

#line 3780 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____slot_contents_0_0_10001(
#line 3783 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3785 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3787 "ll_backend.continuation_info.c"
{
#line 3789 "ll_backend.continuation_info.c"
  {
#line 3791 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3794 "ll_backend.continuation_info.c"
    {
#line 3796 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____slot_contents_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3799 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3801 "ll_backend.continuation_info.c"
  }
#line 3803 "ll_backend.continuation_info.c"
}

#line 3806 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____slot_contents_0_0_10001(
#line 3809 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3811 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3813 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3815 "ll_backend.continuation_info.c"
{
#line 3817 "ll_backend.continuation_info.c"
  {
#line 3819 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3822 "ll_backend.continuation_info.c"
    {
#line 3824 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____slot_contents_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3827 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3829 "ll_backend.continuation_info.c"
  }
#line 3831 "ll_backend.continuation_info.c"
}

#line 3834 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____trace_needs_body_rep_0_0_10001(
#line 3837 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3839 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3841 "ll_backend.continuation_info.c"
{
#line 3843 "ll_backend.continuation_info.c"
  {
#line 3845 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3848 "ll_backend.continuation_info.c"
    {
#line 3850 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____trace_needs_body_rep_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3853 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3855 "ll_backend.continuation_info.c"
  }
#line 3857 "ll_backend.continuation_info.c"
}

#line 3860 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____trace_needs_body_rep_0_0_10001(
#line 3863 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3865 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3867 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3869 "ll_backend.continuation_info.c"
{
#line 3871 "ll_backend.continuation_info.c"
  {
#line 3873 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3876 "ll_backend.continuation_info.c"
    {
#line 3878 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____trace_needs_body_rep_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3881 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3883 "ll_backend.continuation_info.c"
  }
#line 3885 "ll_backend.continuation_info.c"
}

#line 3888 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____trace_port_layout_info_0_0_10001(
#line 3891 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3893 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3895 "ll_backend.continuation_info.c"
{
#line 3897 "ll_backend.continuation_info.c"
  {
#line 3899 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3902 "ll_backend.continuation_info.c"
    {
#line 3904 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____trace_port_layout_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3907 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3909 "ll_backend.continuation_info.c"
  }
#line 3911 "ll_backend.continuation_info.c"
}

#line 3914 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____trace_port_layout_info_0_0_10001(
#line 3917 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3919 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3921 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3923 "ll_backend.continuation_info.c"
{
#line 3925 "ll_backend.continuation_info.c"
  {
#line 3927 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3930 "ll_backend.continuation_info.c"
    {
#line 3932 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____trace_port_layout_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3935 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3937 "ll_backend.continuation_info.c"
  }
#line 3939 "ll_backend.continuation_info.c"
}

#line 3942 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____user_attribute_0_0_10001(
#line 3945 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 3947 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 3949 "ll_backend.continuation_info.c"
{
#line 3951 "ll_backend.continuation_info.c"
  {
#line 3953 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 3956 "ll_backend.continuation_info.c"
    {
#line 3958 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____user_attribute_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 3961 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 3963 "ll_backend.continuation_info.c"
  }
#line 3965 "ll_backend.continuation_info.c"
}

#line 3968 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____user_attribute_0_0_10001(
#line 3971 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 3973 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 3975 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 3977 "ll_backend.continuation_info.c"
{
#line 3979 "ll_backend.continuation_info.c"
  {
#line 3981 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 3984 "ll_backend.continuation_info.c"
    {
#line 3986 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____user_attribute_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 3989 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 3991 "ll_backend.continuation_info.c"
  }
#line 3993 "ll_backend.continuation_info.c"
}

#line 3996 "ll_backend.continuation_info.c"
static MR_bool MR_CALL 
ll_backend__continuation_info____Unify____user_event_info_0_0_10001(
#line 3999 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 4001 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2)
#line 4003 "ll_backend.continuation_info.c"
{
#line 4005 "ll_backend.continuation_info.c"
  {
#line 4007 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded;

#line 4010 "ll_backend.continuation_info.c"
    {
#line 4012 "ll_backend.continuation_info.c"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____user_event_info_0_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2));
    }
#line 4015 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 4017 "ll_backend.continuation_info.c"
  }
#line 4019 "ll_backend.continuation_info.c"
}

#line 4022 "ll_backend.continuation_info.c"
static void MR_CALL 
ll_backend__continuation_info____Compare____user_event_info_0_0_10001(
#line 4025 "ll_backend.continuation_info.c"
  MR_Box * ll_backend__continuation_info__wrapper_arg_1,
#line 4027 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_2,
#line 4029 "ll_backend.continuation_info.c"
  MR_Box ll_backend__continuation_info__wrapper_arg_3)
#line 4031 "ll_backend.continuation_info.c"
{
#line 4033 "ll_backend.continuation_info.c"
  {
#line 4035 "ll_backend.continuation_info.c"
    MR_Word ll_backend__continuation_info__conv0_HeadVar__1_1;

#line 4038 "ll_backend.continuation_info.c"
    {
#line 4040 "ll_backend.continuation_info.c"
      ll_backend__continuation_info____Compare____user_event_info_0_0(&ll_backend__continuation_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), ((MR_Word) ll_backend__continuation_info__wrapper_arg_3));
    }
#line 4043 "ll_backend.continuation_info.c"
    *ll_backend__continuation_info__wrapper_arg_1 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__1_1));
#line 4045 "ll_backend.continuation_info.c"
  }
#line 4047 "ll_backend.continuation_info.c"
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
              parse_tree__prog_data__lookup_var_type_3_p_0(ll_backend__continuation_info__VarTypes_3, ll_backend__continuation_info__Var_20, &ll_backend__continuation_info__Type_29);
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
                        MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_60_60, 0) = ((MR_Box) (&ll_backend__continuation_info_scalar_common_3[3]));
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
                            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_65_65, 0) = ((MR_Box) (&ll_backend__continuation_info_scalar_common_3[3]));
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
                                MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_70_70, 0) = ((MR_Box) (&ll_backend__continuation_info_scalar_common_3[3]));
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
                  parse_tree__prog_data__lookup_var_type_3_p_0(ll_backend__continuation_info__VarTypes_87, ll_backend__continuation_info__Var_20, &ll_backend__continuation_info__Type_90);
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
                parse_tree__prog_data__lookup_var_type_3_p_0(ll_backend__continuation_info__VarTypes_40, ll_backend__continuation_info__Var_13, &ll_backend__continuation_info__Type_43);
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

#line 386 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_117_109_101_95_108_97_121_111_117_116_95_95_91_51_93_95_48_6_p_0(
#line 386 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ResumeMap_7,
#line 386 "continuation_info.m"
  MR_Word ll_backend__continuation_info__Temps_8,
#line 386 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ProcInfo_10,
#line 386 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ModuleInfo_11,
#line 386 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__Layout_12)
#line 386 "continuation_info.m"
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
#line 4814 "ll_backend.continuation_info.c"
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
#line 4831 "ll_backend.continuation_info.c"
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
#line 386 "continuation_info.m"
}

#line 378 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_116_117_114_110_95_108_105_118_101_95_108_118_97_108_117_101_115_95_95_91_50_44_32_55_93_95_48_10_p_0(
#line 378 "continuation_info.m"
  MR_Word ll_backend__continuation_info__OutputArgLocs_11,
#line 378 "continuation_info.m"
  MR_Word ll_backend__continuation_info__Vars_13,
#line 378 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarLocs_14,
#line 378 "continuation_info.m"
  MR_Word ll_backend__continuation_info__Temps_15,
#line 378 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ProcInfo_16,
#line 378 "continuation_info.m"
  MR_Word ll_backend__continuation_info__Globals_18,
#line 378 "continuation_info.m"
  MR_Word ll_backend__continuation_info__OkToDeleteAny_19,
#line 378 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__LiveLvalues_20)
#line 378 "continuation_info.m"
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
#line 378 "continuation_info.m"
}

#line 944 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars_table__944__1_4_p_0(
#line 944 "continuation_info.m"
  MR_Word ll_backend__continuation_info__NumberedVars_6,
#line 944 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarSet_9,
#line 944 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_22,
#line 944 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__4_23)
#line 944 "continuation_info.m"
{
#line 944 "continuation_info.m"
  {
#line 944 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 944 "continuation_info.m"
    MR_Word ll_backend__continuation_info__LocnPrime_18;

#line 937 "continuation_info.m"
    if (((MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__3_22)) == (MR_mktag((MR_Integer) 0))))
#line 938 "continuation_info.m"
      {
#line 938 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfoVar_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_22, (MR_Integer) 0)));
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
        MR_Word ll_backend__continuation_info__TypeInfoVar_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__3_22, (MR_Integer) 0)));
#line 934 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__FieldNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__3_22, (MR_Integer) 1)));
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
      *ll_backend__continuation_info__HeadVar__4_23 = ll_backend__continuation_info__LocnPrime_18;
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
          hlds__hlds_rtti__type_info_locn_var_2_p_0(ll_backend__continuation_info__HeadVar__3_22, &ll_backend__continuation_info__TypeInfoVar_30);
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
  MR_Word ll_backend__continuation_info__HeadVar__1_29,
#line 564 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_30,
#line 564 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__3_31)
#line 564 "continuation_info.m"
{
#line 564 "continuation_info.m"
  {
#line 564 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;

#line 565 "continuation_info.m"
    {
#line 565 "continuation_info.m"
      mercury__map__union_4_p_1((MR_Word) &ll_backend__continuation_info_scalar_common_1[3], (MR_Word) &ll_backend__continuation_info_scalar_common_1[2], (MR_Word) &ll_backend__continuation_info_scalar_common_2[10], ll_backend__continuation_info__HeadVar__1_29, ll_backend__continuation_info__HeadVar__2_30, ll_backend__continuation_info__HeadVar__3_31);
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
  MR_Word ll_backend__continuation_info__HeadVar__1_26,
#line 560 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__2_27)
#line 560 "continuation_info.m"
{
#line 560 "continuation_info.m"
  {
#line 560 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 560 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_26, (MR_Integer) 0)));
#line 560 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_26, (MR_Integer) 1)));

#line 560 "continuation_info.m"
    *ll_backend__continuation_info__HeadVar__2_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_26, (MR_Integer) 2)));
#line 560 "continuation_info.m"
  }
#line 560 "continuation_info.m"
}

#line 554 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__554__1_2_p_0(
#line 554 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_23,
#line 554 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__2_24)
#line 554 "continuation_info.m"
{
#line 554 "continuation_info.m"
  {
#line 554 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 554 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Lval_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_23, (MR_Integer) 0)));
#line 554 "continuation_info.m"
    MR_Word ll_backend__continuation_info__LiveValueType_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_23, (MR_Integer) 1)));
#line 555 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_23, (MR_Integer) 2)));

#line 556 "continuation_info.m"
    {
#line 556 "continuation_info.m"
      MR_Word base;
#line 556 "continuation_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 556 "continuation_info.m"
      *ll_backend__continuation_info__HeadVar__2_24 = base;
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
ll_backend__continuation_info__IntroducedFrom__pred__process_continuation__535__1_3_p_0(
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
    MR_Word ll_backend__continuation_info__conv1_HeadVar__4_32;

#line 870 "continuation_info.m"
    {
#line 870 "continuation_info.m"
      ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars__870__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), &ll_backend__continuation_info__conv1_HeadVar__4_32);
    }
#line 870 "continuation_info.m"
    *ll_backend__continuation_info__wrapper_arg_3 = ((MR_Box) (ll_backend__continuation_info__conv1_HeadVar__4_32));
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
  MR_Word ll_backend__continuation_info__HeadVar__3_28,
#line 867 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__4_29)
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
      hlds__hlds_rtti__type_info_locn_var_2_p_0(ll_backend__continuation_info__HeadVar__3_28, &ll_backend__continuation_info__TypeInfoVar_15);
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
        MR_Box ll_backend__continuation_info__conv2_HeadVar__4_29;

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
          MR_hl_field(MR_mktag(0), ll_backend__continuation_info__AddLocn_17, 3) = ((MR_Box) (ll_backend__continuation_info__HeadVar__3_28));
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
          mercury__set__fold_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__continuation_info_scalar_common_1[3], ll_backend__continuation_info__AddLocn_17, ll_backend__continuation_info__TypeInfoLvalSet_16, ((MR_Box) (ll_backend__continuation_info__V_33_33)), &ll_backend__continuation_info__conv2_HeadVar__4_29);
        }
#line 880 "continuation_info.m"
        *ll_backend__continuation_info__HeadVar__4_29 = ((MR_Word) ll_backend__continuation_info__conv2_HeadVar__4_29);
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
  MR_Word ll_backend__continuation_info__HeadVar__1_28,
#line 870 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_30,
#line 870 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_31,
#line 870 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__4_32)
#line 870 "continuation_info.m"
{
#line 870 "continuation_info.m"
  {
#line 870 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 870 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Locn_23;

#line 874 "continuation_info.m"
    if (((MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__1_28)) == (MR_mktag((MR_Integer) 0))))
#line 876 "continuation_info.m"
      {
#line 876 "continuation_info.m"
        ll_backend__continuation_info__Locn_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 876 "continuation_info.m"
        MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Locn_23, 0) = ((MR_Box) (ll_backend__continuation_info__HeadVar__2_30));
#line 876 "continuation_info.m"
      }
#line 874 "continuation_info.m"
    else
#line 872 "continuation_info.m"
      {
#line 872 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__FieldNum_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__1_28, (MR_Integer) 1)));
#line 872 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__1_28, (MR_Integer) 0)));

#line 873 "continuation_info.m"
        {
#line 873 "continuation_info.m"
          ll_backend__continuation_info__Locn_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 873 "continuation_info.m"
          MR_hl_field(MR_mktag(1), ll_backend__continuation_info__Locn_23, 0) = ((MR_Box) (ll_backend__continuation_info__HeadVar__2_30));
#line 873 "continuation_info.m"
          MR_hl_field(MR_mktag(1), ll_backend__continuation_info__Locn_23, 1) = ((MR_Box) (ll_backend__continuation_info__FieldNum_22));
#line 873 "continuation_info.m"
        }
#line 872 "continuation_info.m"
      }
#line 878 "continuation_info.m"
    {
#line 878 "continuation_info.m"
      mercury__set__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0, ((MR_Box) (ll_backend__continuation_info__Locn_23)), ll_backend__continuation_info__HeadVar__3_31, ll_backend__continuation_info__HeadVar__4_32);
#line 878 "continuation_info.m"
      return;
    }
#line 870 "continuation_info.m"
  }
#line 870 "continuation_info.m"
}

#line 306 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info____Compare____user_event_info_0_0(
#line 306 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 306 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 306 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3)
#line 306 "continuation_info.m"
{
#line 306 "continuation_info.m"
  {
#line 306 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 306 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_9 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;
#line 306 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_10 = (MR_Integer) ll_backend__continuation_info__HeadVar__3_3;

#line 306 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_9 == ll_backend__continuation_info__CastY_10);
#line 306 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 5528 "ll_backend.continuation_info.c"
      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 306 "continuation_info.m"
    else
#line 306 "continuation_info.m"
      {
#line 306 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 306 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 306 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));
#line 306 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 1)));
#line 306 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8;

#line 306 "continuation_info.m"
        {
#line 306 "continuation_info.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__continuation_info__V_8_8, ll_backend__continuation_info__V_4_4, ll_backend__continuation_info__V_6_6);
        }
#line 5550 "ll_backend.continuation_info.c"
        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_8_8 == (MR_Integer) 0);
#line 306 "continuation_info.m"
        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 306 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 306 "continuation_info.m"
          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_8_8;
#line 306 "continuation_info.m"
        else
#line 306 "continuation_info.m"
          {
#line 306 "continuation_info.m"
            {
#line 306 "continuation_info.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[22], ll_backend__continuation_info__HeadVar__1_1, ((MR_Box) (ll_backend__continuation_info__V_5_5)), ((MR_Box) (ll_backend__continuation_info__V_7_7)));
#line 306 "continuation_info.m"
              return;
            }
#line 306 "continuation_info.m"
          }
#line 306 "continuation_info.m"
      }
#line 306 "continuation_info.m"
  }
#line 306 "continuation_info.m"
}

#line 306 "continuation_info.m"
MR_bool MR_CALL 
ll_backend__continuation_info____Unify____user_event_info_0_0(
#line 306 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 306 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2)
#line 306 "continuation_info.m"
{
#line 306 "continuation_info.m"
  {
#line 306 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 306 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_7 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 306 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_8 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 306 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_7 == ll_backend__continuation_info__CastY_8);
#line 306 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 306 "continuation_info.m"
      ll_backend__continuation_info__succeeded = MR_TRUE;
#line 306 "continuation_info.m"
    else
#line 306 "continuation_info.m"
      {
#line 306 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_9_9;
#line 306 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 306 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 306 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 306 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));

#line 5617 "ll_backend.continuation_info.c"
        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_3_3 == ll_backend__continuation_info__V_5_5);
#line 306 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 306 "continuation_info.m"
          {
#line 5623 "ll_backend.continuation_info.c"
            ll_backend__continuation_info__TypeInfo_9_9 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[22];
#line 5625 "ll_backend.continuation_info.c"
            {
#line 5627 "ll_backend.continuation_info.c"
              return ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_9_9, ((MR_Box) (ll_backend__continuation_info__V_4_4)), ((MR_Box) (ll_backend__continuation_info__V_6_6)));
            }
#line 306 "continuation_info.m"
          }
#line 306 "continuation_info.m"
      }
#line 306 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 306 "continuation_info.m"
  }
#line 306 "continuation_info.m"
}

#line 300 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info____Compare____user_attribute_0_0(
#line 300 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 300 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 300 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3)
#line 300 "continuation_info.m"
{
#line 300 "continuation_info.m"
  {
#line 300 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 300 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_9 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;
#line 300 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_10 = (MR_Integer) ll_backend__continuation_info__HeadVar__3_3;

#line 300 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_9 == ll_backend__continuation_info__CastY_10);
#line 300 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 5665 "ll_backend.continuation_info.c"
      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 300 "continuation_info.m"
    else
#line 300 "continuation_info.m"
      {
#line 300 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 300 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 300 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));
#line 300 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 1)));
#line 300 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8;

#line 300 "continuation_info.m"
        {
#line 300 "continuation_info.m"
          ll_backend__llds____Compare____rval_0_0(&ll_backend__continuation_info__V_8_8, ll_backend__continuation_info__V_4_4, ll_backend__continuation_info__V_6_6);
        }
#line 5687 "ll_backend.continuation_info.c"
        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_8_8 == (MR_Integer) 0);
#line 300 "continuation_info.m"
        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 300 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 300 "continuation_info.m"
          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_8_8;
#line 300 "continuation_info.m"
        else
#line 300 "continuation_info.m"
          {
#line 300 "continuation_info.m"
            {
#line 300 "continuation_info.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[0], ll_backend__continuation_info__HeadVar__1_1, ((MR_Box) (ll_backend__continuation_info__V_5_5)), ((MR_Box) (ll_backend__continuation_info__V_7_7)));
#line 300 "continuation_info.m"
              return;
            }
#line 300 "continuation_info.m"
          }
#line 300 "continuation_info.m"
      }
#line 300 "continuation_info.m"
  }
#line 300 "continuation_info.m"
}

#line 300 "continuation_info.m"
MR_bool MR_CALL 
ll_backend__continuation_info____Unify____user_attribute_0_0(
#line 300 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 300 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2)
#line 300 "continuation_info.m"
{
#line 300 "continuation_info.m"
  {
#line 300 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 300 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_7 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 300 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_8 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 300 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_7 == ll_backend__continuation_info__CastY_8);
#line 300 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 300 "continuation_info.m"
      ll_backend__continuation_info__succeeded = MR_TRUE;
#line 300 "continuation_info.m"
    else
#line 300 "continuation_info.m"
      {
#line 300 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_10_10;
#line 300 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 300 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 300 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 300 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));

#line 5754 "ll_backend.continuation_info.c"
        {
#line 5756 "ll_backend.continuation_info.c"
          ll_backend__continuation_info__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__continuation_info__V_3_3, ll_backend__continuation_info__V_5_5);
        }
#line 300 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 300 "continuation_info.m"
          {
#line 5763 "ll_backend.continuation_info.c"
            ll_backend__continuation_info__TypeInfo_10_10 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[0];
#line 5765 "ll_backend.continuation_info.c"
            {
#line 5767 "ll_backend.continuation_info.c"
              return ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_10_10, ((MR_Box) (ll_backend__continuation_info__V_4_4)), ((MR_Box) (ll_backend__continuation_info__V_6_6)));
            }
#line 300 "continuation_info.m"
          }
#line 300 "continuation_info.m"
      }
#line 300 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 300 "continuation_info.m"
  }
#line 300 "continuation_info.m"
}

#line 265 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info____Compare____trace_port_layout_info_0_0(
#line 265 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 265 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 265 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3)
#line 265 "continuation_info.m"
{
#line 265 "continuation_info.m"
  {
#line 265 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 265 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_21 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;
#line 265 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_22 = (MR_Integer) ll_backend__continuation_info__HeadVar__3_3;

#line 265 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_21 == ll_backend__continuation_info__CastY_22);
#line 265 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 5805 "ll_backend.continuation_info.c"
      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 265 "continuation_info.m"
    else
#line 265 "continuation_info.m"
      {
#line 265 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 265 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 265 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 2)));
#line 265 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 3)));
#line 265 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 4)));
#line 265 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 5)));
#line 265 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));
#line 265 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 1)));
#line 265 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 2)));
#line 265 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 3)));
#line 265 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 4)));
#line 265 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 5)));
#line 265 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_16_16;

#line 265 "continuation_info.m"
        {
#line 265 "continuation_info.m"
          mercury__term____Compare____context_0_0(&ll_backend__continuation_info__V_16_16, ll_backend__continuation_info__V_4_4, ll_backend__continuation_info__V_10_10);
        }
#line 5843 "ll_backend.continuation_info.c"
        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_16_16 == (MR_Integer) 0);
#line 265 "continuation_info.m"
        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 265 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 265 "continuation_info.m"
          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_16_16;
#line 265 "continuation_info.m"
        else
#line 265 "continuation_info.m"
          {
#line 265 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_17_17;
#line 265 "continuation_info.m"
            MR_Integer ll_backend__continuation_info__V_29_29 = (MR_Integer) ll_backend__continuation_info__V_5_5;
#line 265 "continuation_info.m"
            MR_Integer ll_backend__continuation_info__V_30_30 = (MR_Integer) ll_backend__continuation_info__V_11_11;

#line 265 "continuation_info.m"
            {
#line 265 "continuation_info.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__continuation_info__V_17_17, ll_backend__continuation_info__V_29_29, ll_backend__continuation_info__V_30_30);
            }
#line 5867 "ll_backend.continuation_info.c"
            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_17_17 == (MR_Integer) 0);
#line 265 "continuation_info.m"
            ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 265 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 265 "continuation_info.m"
              *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_17_17;
#line 265 "continuation_info.m"
            else
#line 265 "continuation_info.m"
              {
#line 265 "continuation_info.m"
                MR_Word ll_backend__continuation_info__V_18_18;
#line 265 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__V_31_31 = (MR_Integer) ll_backend__continuation_info__V_6_6;
#line 265 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__V_32_32 = (MR_Integer) ll_backend__continuation_info__V_12_12;

#line 265 "continuation_info.m"
                {
#line 265 "continuation_info.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__continuation_info__V_18_18, ll_backend__continuation_info__V_31_31, ll_backend__continuation_info__V_32_32);
                }
#line 5891 "ll_backend.continuation_info.c"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_18_18 == (MR_Integer) 0);
#line 265 "continuation_info.m"
                ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 265 "continuation_info.m"
                if (ll_backend__continuation_info__succeeded)
#line 265 "continuation_info.m"
                  *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_18_18;
#line 265 "continuation_info.m"
                else
#line 265 "continuation_info.m"
                  {
#line 265 "continuation_info.m"
                    MR_Word ll_backend__continuation_info__V_19_19;

#line 265 "continuation_info.m"
                    {
#line 265 "continuation_info.m"
                      mdbcomp__goal_path____Compare____forward_goal_path_0_0(&ll_backend__continuation_info__V_19_19, ll_backend__continuation_info__V_7_7, ll_backend__continuation_info__V_13_13);
                    }
#line 5911 "ll_backend.continuation_info.c"
                    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_19_19 == (MR_Integer) 0);
#line 265 "continuation_info.m"
                    ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 265 "continuation_info.m"
                    if (ll_backend__continuation_info__succeeded)
#line 265 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_19_19;
#line 265 "continuation_info.m"
                    else
#line 265 "continuation_info.m"
                      {
#line 265 "continuation_info.m"
                        MR_Word ll_backend__continuation_info__V_20_20;

#line 265 "continuation_info.m"
                        {
#line 265 "continuation_info.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[20], &ll_backend__continuation_info__V_20_20, ((MR_Box) (ll_backend__continuation_info__V_8_8)), ((MR_Box) (ll_backend__continuation_info__V_14_14)));
                        }
#line 5931 "ll_backend.continuation_info.c"
                        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_20_20 == (MR_Integer) 0);
#line 265 "continuation_info.m"
                        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 265 "continuation_info.m"
                        if (ll_backend__continuation_info__succeeded)
#line 265 "continuation_info.m"
                          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_20_20;
#line 265 "continuation_info.m"
                        else
#line 265 "continuation_info.m"
                          {
#line 265 "continuation_info.m"
                            ll_backend__continuation_info____Compare____layout_label_info_0_0(ll_backend__continuation_info__HeadVar__1_1, ll_backend__continuation_info__V_9_9, ll_backend__continuation_info__V_15_15);
#line 265 "continuation_info.m"
                            return;
                          }
#line 265 "continuation_info.m"
                      }
#line 265 "continuation_info.m"
                  }
#line 265 "continuation_info.m"
              }
#line 265 "continuation_info.m"
          }
#line 265 "continuation_info.m"
      }
#line 265 "continuation_info.m"
  }
#line 265 "continuation_info.m"
}

#line 265 "continuation_info.m"
MR_bool MR_CALL 
ll_backend__continuation_info____Unify____trace_port_layout_info_0_0(
#line 265 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 265 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2)
#line 265 "continuation_info.m"
{
#line 265 "continuation_info.m"
  {
#line 265 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 265 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_15 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 265 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_16 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 265 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_15 == ll_backend__continuation_info__CastY_16);
#line 265 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 265 "continuation_info.m"
      ll_backend__continuation_info__succeeded = MR_TRUE;
#line 265 "continuation_info.m"
    else
#line 265 "continuation_info.m"
      {
#line 265 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_19_19;
#line 265 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 265 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 265 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 2)));
#line 265 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 3)));
#line 265 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 4)));
#line 265 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 5)));
#line 265 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 265 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 265 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 2)));
#line 265 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 3)));
#line 265 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 4)));
#line 265 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 5)));

#line 6018 "ll_backend.continuation_info.c"
        {
#line 6020 "ll_backend.continuation_info.c"
          ll_backend__continuation_info__succeeded = mercury__term____Unify____context_0_0(ll_backend__continuation_info__V_3_3, ll_backend__continuation_info__V_9_9);
        }
#line 265 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 265 "continuation_info.m"
          {
#line 6027 "ll_backend.continuation_info.c"
            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_4_4 == ll_backend__continuation_info__V_10_10);
#line 265 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 265 "continuation_info.m"
              {
#line 6033 "ll_backend.continuation_info.c"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_5_5 == ll_backend__continuation_info__V_11_11);
#line 265 "continuation_info.m"
                if (ll_backend__continuation_info__succeeded)
#line 265 "continuation_info.m"
                  {
#line 6039 "ll_backend.continuation_info.c"
                    {
#line 6041 "ll_backend.continuation_info.c"
                      ll_backend__continuation_info__succeeded = mdbcomp__goal_path____Unify____forward_goal_path_0_0(ll_backend__continuation_info__V_6_6, ll_backend__continuation_info__V_12_12);
                    }
#line 265 "continuation_info.m"
                    if (ll_backend__continuation_info__succeeded)
#line 265 "continuation_info.m"
                      {
#line 6048 "ll_backend.continuation_info.c"
                        ll_backend__continuation_info__TypeInfo_19_19 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[20];
#line 6050 "ll_backend.continuation_info.c"
                        {
#line 6052 "ll_backend.continuation_info.c"
                          ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_19_19, ((MR_Box) (ll_backend__continuation_info__V_7_7)), ((MR_Box) (ll_backend__continuation_info__V_13_13)));
                        }
#line 265 "continuation_info.m"
                        if (ll_backend__continuation_info__succeeded)
#line 6057 "ll_backend.continuation_info.c"
                          {
#line 6059 "ll_backend.continuation_info.c"
                            return ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____layout_label_info_0_0(ll_backend__continuation_info__V_8_8, ll_backend__continuation_info__V_14_14);
                          }
#line 265 "continuation_info.m"
                      }
#line 265 "continuation_info.m"
                  }
#line 265 "continuation_info.m"
              }
#line 265 "continuation_info.m"
          }
#line 265 "continuation_info.m"
      }
#line 265 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 265 "continuation_info.m"
  }
#line 265 "continuation_info.m"
}

#line 175 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info____Compare____trace_needs_body_rep_0_0(
#line 175 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 175 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 175 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3)
#line 175 "continuation_info.m"
{
#line 175 "continuation_info.m"
  {
#line 175 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 175 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__Cast_HeadVar1_4 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;
#line 175 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__Cast_HeadVar2_5 = (MR_Integer) ll_backend__continuation_info__HeadVar__3_3;

#line 175 "continuation_info.m"
    {
#line 175 "continuation_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__continuation_info__HeadVar__1_1, ll_backend__continuation_info__Cast_HeadVar1_4, ll_backend__continuation_info__Cast_HeadVar2_5);
#line 175 "continuation_info.m"
      return;
    }
#line 175 "continuation_info.m"
  }
#line 175 "continuation_info.m"
}

#line 175 "continuation_info.m"
MR_bool MR_CALL 
ll_backend__continuation_info____Unify____trace_needs_body_rep_0_0(
#line 175 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_1,
#line 175 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2)
#line 175 "continuation_info.m"
{
#line 6120 "ll_backend.continuation_info.c"
  {
#line 6122 "ll_backend.continuation_info.c"
    MR_bool ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__HeadVar__2_1 == ll_backend__continuation_info__HeadVar__2_2);

#line 6125 "ll_backend.continuation_info.c"
    return ll_backend__continuation_info__succeeded;
#line 6127 "ll_backend.continuation_info.c"
  }
#line 175 "continuation_info.m"
}

#line 338 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info____Compare____slot_contents_0_0(
#line 338 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 338 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 338 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3)
#line 338 "continuation_info.m"
{
#line 338 "continuation_info.m"
  {
#line 338 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 338 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_28 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;
#line 338 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_29 = (MR_Integer) ll_backend__continuation_info__HeadVar__3_3;

#line 338 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_28 == ll_backend__continuation_info__CastY_29);
#line 338 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 6156 "ll_backend.continuation_info.c"
      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 338 "continuation_info.m"
    else
#line 338 "continuation_info.m"
#line 338 "continuation_info.m"
      switch (MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__2_2)) {
#line 338 "continuation_info.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 338 "continuation_info.m"
        case (MR_Integer) 0:
#line 338 "continuation_info.m"
#line 338 "continuation_info.m"
          switch (MR_unmkbody(ll_backend__continuation_info__HeadVar__2_2)) {
#line 338 "continuation_info.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 338 "continuation_info.m"
            case (MR_Integer) 0:
#line 338 "continuation_info.m"
#line 338 "continuation_info.m"
              switch (MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__3_3)) {
#line 338 "continuation_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 338 "continuation_info.m"
                case (MR_Integer) 0:
#line 338 "continuation_info.m"
#line 338 "continuation_info.m"
                  switch (MR_unmkbody(ll_backend__continuation_info__HeadVar__3_3)) {
#line 338 "continuation_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 338 "continuation_info.m"
                    case (MR_Integer) 0:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 1:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 2:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 3:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 4:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 5:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 6:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 7:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 8:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 9:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 10:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                  }
#line 338 "continuation_info.m"
                  break;
#line 338 "continuation_info.m"
                case (MR_Integer) 1:
#line 6258 "ll_backend.continuation_info.c"
                  *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                  break;
#line 338 "continuation_info.m"
              }
#line 338 "continuation_info.m"
              break;
#line 338 "continuation_info.m"
            case (MR_Integer) 1:
#line 338 "continuation_info.m"
#line 338 "continuation_info.m"
              switch (MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__3_3)) {
#line 338 "continuation_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 338 "continuation_info.m"
                case (MR_Integer) 0:
#line 338 "continuation_info.m"
#line 338 "continuation_info.m"
                  switch (MR_unmkbody(ll_backend__continuation_info__HeadVar__3_3)) {
#line 338 "continuation_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 338 "continuation_info.m"
                    case (MR_Integer) 0:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 1:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 2:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 3:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 4:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 5:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 6:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 7:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 8:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 9:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 10:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                  }
#line 338 "continuation_info.m"
                  break;
#line 338 "continuation_info.m"
                case (MR_Integer) 1:
#line 6352 "ll_backend.continuation_info.c"
                  *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                  break;
#line 338 "continuation_info.m"
              }
#line 338 "continuation_info.m"
              break;
#line 338 "continuation_info.m"
            case (MR_Integer) 2:
#line 338 "continuation_info.m"
#line 338 "continuation_info.m"
              switch (MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__3_3)) {
#line 338 "continuation_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 338 "continuation_info.m"
                case (MR_Integer) 0:
#line 338 "continuation_info.m"
#line 338 "continuation_info.m"
                  switch (MR_unmkbody(ll_backend__continuation_info__HeadVar__3_3)) {
#line 338 "continuation_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 338 "continuation_info.m"
                    case (MR_Integer) 0:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 1:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 2:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 3:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 4:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 5:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 6:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 7:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 8:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 9:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 10:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                  }
#line 338 "continuation_info.m"
                  break;
#line 338 "continuation_info.m"
                case (MR_Integer) 1:
#line 6446 "ll_backend.continuation_info.c"
                  *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                  break;
#line 338 "continuation_info.m"
              }
#line 338 "continuation_info.m"
              break;
#line 338 "continuation_info.m"
            case (MR_Integer) 3:
#line 338 "continuation_info.m"
#line 338 "continuation_info.m"
              switch (MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__3_3)) {
#line 338 "continuation_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 338 "continuation_info.m"
                case (MR_Integer) 0:
#line 338 "continuation_info.m"
#line 338 "continuation_info.m"
                  switch (MR_unmkbody(ll_backend__continuation_info__HeadVar__3_3)) {
#line 338 "continuation_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 338 "continuation_info.m"
                    case (MR_Integer) 0:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 1:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 2:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 3:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 4:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 5:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 6:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 7:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 8:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 9:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 10:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                  }
#line 338 "continuation_info.m"
                  break;
#line 338 "continuation_info.m"
                case (MR_Integer) 1:
#line 6540 "ll_backend.continuation_info.c"
                  *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                  break;
#line 338 "continuation_info.m"
              }
#line 338 "continuation_info.m"
              break;
#line 338 "continuation_info.m"
            case (MR_Integer) 4:
#line 338 "continuation_info.m"
#line 338 "continuation_info.m"
              switch (MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__3_3)) {
#line 338 "continuation_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 338 "continuation_info.m"
                case (MR_Integer) 0:
#line 338 "continuation_info.m"
#line 338 "continuation_info.m"
                  switch (MR_unmkbody(ll_backend__continuation_info__HeadVar__3_3)) {
#line 338 "continuation_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 338 "continuation_info.m"
                    case (MR_Integer) 0:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 1:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 2:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 3:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 4:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 5:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 6:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 7:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 8:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 9:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 10:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                  }
#line 338 "continuation_info.m"
                  break;
#line 338 "continuation_info.m"
                case (MR_Integer) 1:
#line 6634 "ll_backend.continuation_info.c"
                  *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                  break;
#line 338 "continuation_info.m"
              }
#line 338 "continuation_info.m"
              break;
#line 338 "continuation_info.m"
            case (MR_Integer) 5:
#line 338 "continuation_info.m"
#line 338 "continuation_info.m"
              switch (MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__3_3)) {
#line 338 "continuation_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 338 "continuation_info.m"
                case (MR_Integer) 0:
#line 338 "continuation_info.m"
#line 338 "continuation_info.m"
                  switch (MR_unmkbody(ll_backend__continuation_info__HeadVar__3_3)) {
#line 338 "continuation_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 338 "continuation_info.m"
                    case (MR_Integer) 0:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 1:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 2:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 3:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 4:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 5:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 6:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 7:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 8:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 9:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 10:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                  }
#line 338 "continuation_info.m"
                  break;
#line 338 "continuation_info.m"
                case (MR_Integer) 1:
#line 6728 "ll_backend.continuation_info.c"
                  *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                  break;
#line 338 "continuation_info.m"
              }
#line 338 "continuation_info.m"
              break;
#line 338 "continuation_info.m"
            case (MR_Integer) 6:
#line 338 "continuation_info.m"
#line 338 "continuation_info.m"
              switch (MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__3_3)) {
#line 338 "continuation_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 338 "continuation_info.m"
                case (MR_Integer) 0:
#line 338 "continuation_info.m"
#line 338 "continuation_info.m"
                  switch (MR_unmkbody(ll_backend__continuation_info__HeadVar__3_3)) {
#line 338 "continuation_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 338 "continuation_info.m"
                    case (MR_Integer) 0:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 1:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 2:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 3:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 4:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 5:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 6:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 7:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 8:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 9:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 10:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                  }
#line 338 "continuation_info.m"
                  break;
#line 338 "continuation_info.m"
                case (MR_Integer) 1:
#line 6822 "ll_backend.continuation_info.c"
                  *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                  break;
#line 338 "continuation_info.m"
              }
#line 338 "continuation_info.m"
              break;
#line 338 "continuation_info.m"
            case (MR_Integer) 7:
#line 338 "continuation_info.m"
#line 338 "continuation_info.m"
              switch (MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__3_3)) {
#line 338 "continuation_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 338 "continuation_info.m"
                case (MR_Integer) 0:
#line 338 "continuation_info.m"
#line 338 "continuation_info.m"
                  switch (MR_unmkbody(ll_backend__continuation_info__HeadVar__3_3)) {
#line 338 "continuation_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 338 "continuation_info.m"
                    case (MR_Integer) 0:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 1:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 2:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 3:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 4:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 5:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 6:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 7:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 8:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 9:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 10:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                  }
#line 338 "continuation_info.m"
                  break;
#line 338 "continuation_info.m"
                case (MR_Integer) 1:
#line 6916 "ll_backend.continuation_info.c"
                  *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                  break;
#line 338 "continuation_info.m"
              }
#line 338 "continuation_info.m"
              break;
#line 338 "continuation_info.m"
            case (MR_Integer) 8:
#line 338 "continuation_info.m"
#line 338 "continuation_info.m"
              switch (MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__3_3)) {
#line 338 "continuation_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 338 "continuation_info.m"
                case (MR_Integer) 0:
#line 338 "continuation_info.m"
#line 338 "continuation_info.m"
                  switch (MR_unmkbody(ll_backend__continuation_info__HeadVar__3_3)) {
#line 338 "continuation_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 338 "continuation_info.m"
                    case (MR_Integer) 0:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 1:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 2:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 3:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 4:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 5:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 6:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 7:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 8:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 9:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 10:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                  }
#line 338 "continuation_info.m"
                  break;
#line 338 "continuation_info.m"
                case (MR_Integer) 1:
#line 7010 "ll_backend.continuation_info.c"
                  *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                  break;
#line 338 "continuation_info.m"
              }
#line 338 "continuation_info.m"
              break;
#line 338 "continuation_info.m"
            case (MR_Integer) 9:
#line 338 "continuation_info.m"
#line 338 "continuation_info.m"
              switch (MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__3_3)) {
#line 338 "continuation_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 338 "continuation_info.m"
                case (MR_Integer) 0:
#line 338 "continuation_info.m"
#line 338 "continuation_info.m"
                  switch (MR_unmkbody(ll_backend__continuation_info__HeadVar__3_3)) {
#line 338 "continuation_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 338 "continuation_info.m"
                    case (MR_Integer) 0:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 1:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 2:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 3:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 4:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 5:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 6:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 7:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 8:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 9:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 10:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                  }
#line 338 "continuation_info.m"
                  break;
#line 338 "continuation_info.m"
                case (MR_Integer) 1:
#line 7104 "ll_backend.continuation_info.c"
                  *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                  break;
#line 338 "continuation_info.m"
              }
#line 338 "continuation_info.m"
              break;
#line 338 "continuation_info.m"
            case (MR_Integer) 10:
#line 338 "continuation_info.m"
#line 338 "continuation_info.m"
              switch (MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__3_3)) {
#line 338 "continuation_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 338 "continuation_info.m"
                case (MR_Integer) 0:
#line 338 "continuation_info.m"
#line 338 "continuation_info.m"
                  switch (MR_unmkbody(ll_backend__continuation_info__HeadVar__3_3)) {
#line 338 "continuation_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 338 "continuation_info.m"
                    case (MR_Integer) 0:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 1:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 2:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 3:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 4:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 5:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 6:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 7:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 8:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 9:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                    case (MR_Integer) 10:
#line 338 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 338 "continuation_info.m"
                      break;
#line 338 "continuation_info.m"
                  }
#line 338 "continuation_info.m"
                  break;
#line 338 "continuation_info.m"
                case (MR_Integer) 1:
#line 7198 "ll_backend.continuation_info.c"
                  *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "continuation_info.m"
                  break;
#line 338 "continuation_info.m"
              }
#line 338 "continuation_info.m"
              break;
#line 338 "continuation_info.m"
          }
#line 338 "continuation_info.m"
          break;
#line 338 "continuation_info.m"
        case (MR_Integer) 1:
#line 338 "continuation_info.m"
          {
#line 338 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));

#line 338 "continuation_info.m"
#line 338 "continuation_info.m"
            switch (MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__3_3)) {
#line 338 "continuation_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 338 "continuation_info.m"
              case (MR_Integer) 0:
#line 338 "continuation_info.m"
#line 338 "continuation_info.m"
                switch (MR_unmkbody(ll_backend__continuation_info__HeadVar__3_3)) {
#line 338 "continuation_info.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 338 "continuation_info.m"
                  case (MR_Integer) 0:
#line 7231 "ll_backend.continuation_info.c"
                    *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                    break;
#line 338 "continuation_info.m"
                  case (MR_Integer) 1:
#line 7237 "ll_backend.continuation_info.c"
                    *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                    break;
#line 338 "continuation_info.m"
                  case (MR_Integer) 2:
#line 7243 "ll_backend.continuation_info.c"
                    *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                    break;
#line 338 "continuation_info.m"
                  case (MR_Integer) 3:
#line 7249 "ll_backend.continuation_info.c"
                    *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                    break;
#line 338 "continuation_info.m"
                  case (MR_Integer) 4:
#line 7255 "ll_backend.continuation_info.c"
                    *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                    break;
#line 338 "continuation_info.m"
                  case (MR_Integer) 5:
#line 7261 "ll_backend.continuation_info.c"
                    *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                    break;
#line 338 "continuation_info.m"
                  case (MR_Integer) 6:
#line 7267 "ll_backend.continuation_info.c"
                    *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                    break;
#line 338 "continuation_info.m"
                  case (MR_Integer) 7:
#line 7273 "ll_backend.continuation_info.c"
                    *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                    break;
#line 338 "continuation_info.m"
                  case (MR_Integer) 8:
#line 7279 "ll_backend.continuation_info.c"
                    *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                    break;
#line 338 "continuation_info.m"
                  case (MR_Integer) 9:
#line 7285 "ll_backend.continuation_info.c"
                    *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                    break;
#line 338 "continuation_info.m"
                  case (MR_Integer) 10:
#line 7291 "ll_backend.continuation_info.c"
                    *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "continuation_info.m"
                    break;
#line 338 "continuation_info.m"
                }
#line 338 "continuation_info.m"
                break;
#line 338 "continuation_info.m"
              case (MR_Integer) 1:
#line 338 "continuation_info.m"
                {
#line 338 "continuation_info.m"
                  MR_Word ll_backend__continuation_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));

#line 338 "continuation_info.m"
                  {
#line 338 "continuation_info.m"
                    ll_backend__llds____Compare____lval_0_0(ll_backend__continuation_info__HeadVar__1_1, ll_backend__continuation_info__V_31_31, ll_backend__continuation_info__V_27_27);
#line 338 "continuation_info.m"
                    return;
                  }
#line 338 "continuation_info.m"
                }
#line 338 "continuation_info.m"
                break;
#line 338 "continuation_info.m"
            }
#line 338 "continuation_info.m"
          }
#line 338 "continuation_info.m"
          break;
#line 338 "continuation_info.m"
      }
#line 338 "continuation_info.m"
  }
#line 338 "continuation_info.m"
}

#line 338 "continuation_info.m"
MR_bool MR_CALL 
ll_backend__continuation_info____Unify____slot_contents_0_0(
#line 338 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 338 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2)
#line 338 "continuation_info.m"
{
#line 338 "continuation_info.m"
  {
#line 338 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 338 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_27 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 338 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_28 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 338 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_27 == ll_backend__continuation_info__CastY_28);
#line 338 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 338 "continuation_info.m"
      ll_backend__continuation_info__succeeded = MR_TRUE;
#line 338 "continuation_info.m"
    else
#line 338 "continuation_info.m"
#line 338 "continuation_info.m"
      switch (MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__1_1)) {
#line 338 "continuation_info.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 338 "continuation_info.m"
        case (MR_Integer) 0:
#line 338 "continuation_info.m"
#line 338 "continuation_info.m"
          switch (MR_unmkbody(ll_backend__continuation_info__HeadVar__1_1)) {
#line 338 "continuation_info.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 338 "continuation_info.m"
            case (MR_Integer) 0:
#line 338 "continuation_info.m"
              {
#line 338 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastX_3 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 338 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastY_4 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 338 "continuation_info.m"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastY_4 == ll_backend__continuation_info__CastX_3);
#line 338 "continuation_info.m"
              }
#line 338 "continuation_info.m"
              break;
#line 338 "continuation_info.m"
            case (MR_Integer) 1:
#line 338 "continuation_info.m"
              {
#line 338 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastX_5 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 338 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastY_6 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 338 "continuation_info.m"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastY_6 == ll_backend__continuation_info__CastX_5);
#line 338 "continuation_info.m"
              }
#line 338 "continuation_info.m"
              break;
#line 338 "continuation_info.m"
            case (MR_Integer) 2:
#line 338 "continuation_info.m"
              {
#line 338 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastX_7 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 338 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastY_8 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 338 "continuation_info.m"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastY_8 == ll_backend__continuation_info__CastX_7);
#line 338 "continuation_info.m"
              }
#line 338 "continuation_info.m"
              break;
#line 338 "continuation_info.m"
            case (MR_Integer) 3:
#line 338 "continuation_info.m"
              {
#line 338 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastX_9 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 338 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastY_10 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 338 "continuation_info.m"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastY_10 == ll_backend__continuation_info__CastX_9);
#line 338 "continuation_info.m"
              }
#line 338 "continuation_info.m"
              break;
#line 338 "continuation_info.m"
            case (MR_Integer) 4:
#line 338 "continuation_info.m"
              {
#line 338 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastX_11 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 338 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastY_12 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 338 "continuation_info.m"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastY_12 == ll_backend__continuation_info__CastX_11);
#line 338 "continuation_info.m"
              }
#line 338 "continuation_info.m"
              break;
#line 338 "continuation_info.m"
            case (MR_Integer) 5:
#line 338 "continuation_info.m"
              {
#line 338 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastX_13 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 338 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastY_14 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 338 "continuation_info.m"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastY_14 == ll_backend__continuation_info__CastX_13);
#line 338 "continuation_info.m"
              }
#line 338 "continuation_info.m"
              break;
#line 338 "continuation_info.m"
            case (MR_Integer) 6:
#line 338 "continuation_info.m"
              {
#line 338 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastX_15 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 338 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastY_16 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 338 "continuation_info.m"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastY_16 == ll_backend__continuation_info__CastX_15);
#line 338 "continuation_info.m"
              }
#line 338 "continuation_info.m"
              break;
#line 338 "continuation_info.m"
            case (MR_Integer) 7:
#line 338 "continuation_info.m"
              {
#line 338 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastX_17 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 338 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastY_18 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 338 "continuation_info.m"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastY_18 == ll_backend__continuation_info__CastX_17);
#line 338 "continuation_info.m"
              }
#line 338 "continuation_info.m"
              break;
#line 338 "continuation_info.m"
            case (MR_Integer) 8:
#line 338 "continuation_info.m"
              {
#line 338 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastX_19 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 338 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastY_20 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 338 "continuation_info.m"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastY_20 == ll_backend__continuation_info__CastX_19);
#line 338 "continuation_info.m"
              }
#line 338 "continuation_info.m"
              break;
#line 338 "continuation_info.m"
            case (MR_Integer) 9:
#line 338 "continuation_info.m"
              {
#line 338 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastX_21 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 338 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastY_22 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 338 "continuation_info.m"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastY_22 == ll_backend__continuation_info__CastX_21);
#line 338 "continuation_info.m"
              }
#line 338 "continuation_info.m"
              break;
#line 338 "continuation_info.m"
            case (MR_Integer) 10:
#line 338 "continuation_info.m"
              {
#line 338 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastX_23 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 338 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__CastY_24 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 338 "continuation_info.m"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastY_24 == ll_backend__continuation_info__CastX_23);
#line 338 "continuation_info.m"
              }
#line 338 "continuation_info.m"
              break;
#line 338 "continuation_info.m"
          }
#line 338 "continuation_info.m"
          break;
#line 338 "continuation_info.m"
        case (MR_Integer) 1:
#line 338 "continuation_info.m"
          {
#line 338 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 338 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_26_26;

#line 338 "continuation_info.m"
            ll_backend__continuation_info__succeeded = ((MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 338 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 338 "continuation_info.m"
              {
#line 338 "continuation_info.m"
                ll_backend__continuation_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 7554 "ll_backend.continuation_info.c"
                {
#line 7556 "ll_backend.continuation_info.c"
                  return ll_backend__continuation_info__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__continuation_info__V_25_25, ll_backend__continuation_info__V_26_26);
                }
#line 338 "continuation_info.m"
              }
#line 338 "continuation_info.m"
          }
#line 338 "continuation_info.m"
          break;
#line 338 "continuation_info.m"
      }
#line 338 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 338 "continuation_info.m"
  }
#line 338 "continuation_info.m"
}

#line 275 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info____Compare____return_layout_info_0_0(
#line 275 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 275 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 275 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3)
#line 275 "continuation_info.m"
{
#line 275 "continuation_info.m"
  {
#line 275 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 275 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_9 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;
#line 275 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_10 = (MR_Integer) ll_backend__continuation_info__HeadVar__3_3;

#line 275 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_9 == ll_backend__continuation_info__CastY_10);
#line 275 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 7598 "ll_backend.continuation_info.c"
      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 275 "continuation_info.m"
    else
#line 275 "continuation_info.m"
      {
#line 275 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 275 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 275 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));
#line 275 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 1)));
#line 275 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8;

#line 275 "continuation_info.m"
        {
#line 275 "continuation_info.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[19], &ll_backend__continuation_info__V_8_8, ((MR_Box) (ll_backend__continuation_info__V_4_4)), ((MR_Box) (ll_backend__continuation_info__V_6_6)));
        }
#line 7620 "ll_backend.continuation_info.c"
        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_8_8 == (MR_Integer) 0);
#line 275 "continuation_info.m"
        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 275 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 275 "continuation_info.m"
          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_8_8;
#line 275 "continuation_info.m"
        else
#line 275 "continuation_info.m"
          {
#line 275 "continuation_info.m"
            ll_backend__continuation_info____Compare____layout_label_info_0_0(ll_backend__continuation_info__HeadVar__1_1, ll_backend__continuation_info__V_5_5, ll_backend__continuation_info__V_7_7);
#line 275 "continuation_info.m"
            return;
          }
#line 275 "continuation_info.m"
      }
#line 275 "continuation_info.m"
  }
#line 275 "continuation_info.m"
}

#line 275 "continuation_info.m"
MR_bool MR_CALL 
ll_backend__continuation_info____Unify____return_layout_info_0_0(
#line 275 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 275 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2)
#line 275 "continuation_info.m"
{
#line 275 "continuation_info.m"
  {
#line 275 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 275 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_7 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 275 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_8 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 275 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_7 == ll_backend__continuation_info__CastY_8);
#line 275 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 275 "continuation_info.m"
      ll_backend__continuation_info__succeeded = MR_TRUE;
#line 275 "continuation_info.m"
    else
#line 275 "continuation_info.m"
      {
#line 275 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 275 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 275 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 275 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));

#line 7681 "ll_backend.continuation_info.c"
        {
#line 7683 "ll_backend.continuation_info.c"
          ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[19], ((MR_Box) (ll_backend__continuation_info__V_3_3)), ((MR_Box) (ll_backend__continuation_info__V_5_5)));
        }
#line 275 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 7688 "ll_backend.continuation_info.c"
          {
#line 7690 "ll_backend.continuation_info.c"
            return ll_backend__continuation_info__succeeded = ll_backend__continuation_info____Unify____layout_label_info_0_0(ll_backend__continuation_info__V_4_4, ll_backend__continuation_info__V_6_6);
          }
#line 275 "continuation_info.m"
      }
#line 275 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 275 "continuation_info.m"
  }
#line 275 "continuation_info.m"
}

#line 167 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info____Compare____proc_layout_table_info_0_0(
#line 167 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 167 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 167 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3)
#line 167 "continuation_info.m"
{
#line 167 "continuation_info.m"
  {
#line 167 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 167 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_12 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;
#line 167 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_13 = (MR_Integer) ll_backend__continuation_info__HeadVar__3_3;

#line 167 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_12 == ll_backend__continuation_info__CastY_13);
#line 167 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 7726 "ll_backend.continuation_info.c"
      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 167 "continuation_info.m"
    else
#line 167 "continuation_info.m"
    if (((MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 167 "continuation_info.m"
      {
#line 167 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));

#line 167 "continuation_info.m"
        if (((MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 167 "continuation_info.m"
          {
#line 167 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));

#line 167 "continuation_info.m"
            {
#line 167 "continuation_info.m"
              hlds__hlds_pred____Compare____proc_table_io_info_0_0(ll_backend__continuation_info__HeadVar__1_1, ll_backend__continuation_info__V_16_16, ll_backend__continuation_info__V_5_5);
#line 167 "continuation_info.m"
              return;
            }
#line 167 "continuation_info.m"
          }
#line 167 "continuation_info.m"
        else
#line 7755 "ll_backend.continuation_info.c"
          *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 1;
#line 167 "continuation_info.m"
      }
#line 167 "continuation_info.m"
    else
#line 167 "continuation_info.m"
      {
#line 167 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));

#line 167 "continuation_info.m"
        if (((MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 7768 "ll_backend.continuation_info.c"
          *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 2;
#line 167 "continuation_info.m"
        else
#line 167 "continuation_info.m"
          {
#line 167 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));

#line 167 "continuation_info.m"
            {
#line 167 "continuation_info.m"
              hlds__hlds_pred____Compare____proc_table_struct_info_0_0(ll_backend__continuation_info__HeadVar__1_1, ll_backend__continuation_info__V_17_17, ll_backend__continuation_info__V_11_11);
#line 167 "continuation_info.m"
              return;
            }
#line 167 "continuation_info.m"
          }
#line 167 "continuation_info.m"
      }
#line 167 "continuation_info.m"
  }
#line 167 "continuation_info.m"
}

#line 167 "continuation_info.m"
MR_bool MR_CALL 
ll_backend__continuation_info____Unify____proc_layout_table_info_0_0(
#line 167 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 167 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2)
#line 167 "continuation_info.m"
{
#line 167 "continuation_info.m"
  {
#line 167 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 167 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_7 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 167 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_8 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 167 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_7 == ll_backend__continuation_info__CastY_8);
#line 167 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 167 "continuation_info.m"
      ll_backend__continuation_info__succeeded = MR_TRUE;
#line 167 "continuation_info.m"
    else
#line 167 "continuation_info.m"
    if (((MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 167 "continuation_info.m"
      {
#line 167 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 167 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4;

#line 167 "continuation_info.m"
        ll_backend__continuation_info__succeeded = ((MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 167 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 167 "continuation_info.m"
          {
#line 167 "continuation_info.m"
            ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 7836 "ll_backend.continuation_info.c"
            {
#line 7838 "ll_backend.continuation_info.c"
              return ll_backend__continuation_info__succeeded = hlds__hlds_pred____Unify____proc_table_io_info_0_0(ll_backend__continuation_info__V_3_3, ll_backend__continuation_info__V_4_4);
            }
#line 167 "continuation_info.m"
          }
#line 167 "continuation_info.m"
      }
#line 167 "continuation_info.m"
    else
#line 167 "continuation_info.m"
      {
#line 167 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 167 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6;

#line 167 "continuation_info.m"
        ll_backend__continuation_info__succeeded = ((MR_tag((MR_Word) ll_backend__continuation_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 167 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 167 "continuation_info.m"
          {
#line 167 "continuation_info.m"
            ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 7862 "ll_backend.continuation_info.c"
            {
#line 7864 "ll_backend.continuation_info.c"
              return ll_backend__continuation_info__succeeded = hlds__hlds_pred____Unify____proc_table_struct_info_0_0(ll_backend__continuation_info__V_5_5, ll_backend__continuation_info__V_6_6);
            }
#line 167 "continuation_info.m"
          }
#line 167 "continuation_info.m"
      }
#line 167 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 167 "continuation_info.m"
  }
#line 167 "continuation_info.m"
}

#line 83 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info____Compare____proc_layout_info_0_0(
#line 83 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 83 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 83 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3)
#line 83 "continuation_info.m"
{
#line 83 "continuation_info.m"
  {
#line 83 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 83 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_75 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;
#line 83 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_76 = (MR_Integer) ll_backend__continuation_info__HeadVar__3_3;

#line 83 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_75 == ll_backend__continuation_info__CastY_76);
#line 83 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 7902 "ll_backend.continuation_info.c"
      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 83 "continuation_info.m"
    else
#line 83 "continuation_info.m"
      {
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 2)));
#line 83 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 3)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 4)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 5)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 6)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 7)));
#line 83 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 8)));
#line 83 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 9)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 10)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 11)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 12)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 13)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 14)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 15)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 16)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 17)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 18)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 19)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 20)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 21)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 22)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 23)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 1)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 2)));
#line 83 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 3)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 4)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 5)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 6)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 7)));
#line 83 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 8)));
#line 83 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 9)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 10)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 11)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 12)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 13)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 14)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 15)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 16)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 17)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 18)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 19)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 20)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 21)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 22)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 23)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_52_52;

#line 83 "continuation_info.m"
        {
#line 83 "continuation_info.m"
          hlds__hlds_rtti____Compare____rtti_proc_label_0_0(&ll_backend__continuation_info__V_52_52, ll_backend__continuation_info__V_4_4, ll_backend__continuation_info__V_28_28);
        }
#line 8012 "ll_backend.continuation_info.c"
        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_52_52 == (MR_Integer) 0);
#line 83 "continuation_info.m"
        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 83 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 83 "continuation_info.m"
          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_52_52;
#line 83 "continuation_info.m"
        else
#line 83 "continuation_info.m"
          {
#line 83 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_53_53;

#line 83 "continuation_info.m"
            {
#line 83 "continuation_info.m"
              ll_backend__llds____Compare____label_0_0(&ll_backend__continuation_info__V_53_53, ll_backend__continuation_info__V_5_5, ll_backend__continuation_info__V_29_29);
            }
#line 8032 "ll_backend.continuation_info.c"
            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_53_53 == (MR_Integer) 0);
#line 83 "continuation_info.m"
            ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 83 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 83 "continuation_info.m"
              *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_53_53;
#line 83 "continuation_info.m"
            else
#line 83 "continuation_info.m"
              {
#line 83 "continuation_info.m"
                MR_Word ll_backend__continuation_info__V_54_54;
#line 83 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__V_101_101 = (MR_Integer) ll_backend__continuation_info__V_6_6;
#line 83 "continuation_info.m"
                MR_Integer ll_backend__continuation_info__V_102_102 = (MR_Integer) ll_backend__continuation_info__V_30_30;

#line 83 "continuation_info.m"
                {
#line 83 "continuation_info.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__continuation_info__V_54_54, ll_backend__continuation_info__V_101_101, ll_backend__continuation_info__V_102_102);
                }
#line 8056 "ll_backend.continuation_info.c"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_54_54 == (MR_Integer) 0);
#line 83 "continuation_info.m"
                ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 83 "continuation_info.m"
                if (ll_backend__continuation_info__succeeded)
#line 83 "continuation_info.m"
                  *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_54_54;
#line 83 "continuation_info.m"
                else
#line 83 "continuation_info.m"
                  {
#line 83 "continuation_info.m"
                    MR_Word ll_backend__continuation_info__V_55_55;

#line 83 "continuation_info.m"
                    {
#line 83 "continuation_info.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__continuation_info__V_55_55, ll_backend__continuation_info__V_7_7, ll_backend__continuation_info__V_31_31);
                    }
#line 8076 "ll_backend.continuation_info.c"
                    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_55_55 == (MR_Integer) 0);
#line 83 "continuation_info.m"
                    ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 83 "continuation_info.m"
                    if (ll_backend__continuation_info__succeeded)
#line 83 "continuation_info.m"
                      *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_55_55;
#line 83 "continuation_info.m"
                    else
#line 83 "continuation_info.m"
                      {
#line 83 "continuation_info.m"
                        MR_Word ll_backend__continuation_info__V_56_56;

#line 83 "continuation_info.m"
                        {
#line 83 "continuation_info.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[11], &ll_backend__continuation_info__V_56_56, ((MR_Box) (ll_backend__continuation_info__V_8_8)), ((MR_Box) (ll_backend__continuation_info__V_32_32)));
                        }
#line 8096 "ll_backend.continuation_info.c"
                        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_56_56 == (MR_Integer) 0);
#line 83 "continuation_info.m"
                        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 83 "continuation_info.m"
                        if (ll_backend__continuation_info__succeeded)
#line 83 "continuation_info.m"
                          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_56_56;
#line 83 "continuation_info.m"
                        else
#line 83 "continuation_info.m"
                          {
#line 83 "continuation_info.m"
                            MR_Word ll_backend__continuation_info__V_57_57;

#line 83 "continuation_info.m"
                            {
#line 83 "continuation_info.m"
                              parse_tree__prog_data____Compare____eval_method_0_0(&ll_backend__continuation_info__V_57_57, ll_backend__continuation_info__V_9_9, ll_backend__continuation_info__V_33_33);
                            }
#line 8116 "ll_backend.continuation_info.c"
                            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_57_57 == (MR_Integer) 0);
#line 83 "continuation_info.m"
                            ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 83 "continuation_info.m"
                            if (ll_backend__continuation_info__succeeded)
#line 83 "continuation_info.m"
                              *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_57_57;
#line 83 "continuation_info.m"
                            else
#line 83 "continuation_info.m"
                              {
#line 83 "continuation_info.m"
                                MR_Word ll_backend__continuation_info__V_58_58;

#line 83 "continuation_info.m"
                                {
#line 83 "continuation_info.m"
                                  libs__trace_params____Compare____trace_level_0_0(&ll_backend__continuation_info__V_58_58, ll_backend__continuation_info__V_10_10, ll_backend__continuation_info__V_34_34);
                                }
#line 8136 "ll_backend.continuation_info.c"
                                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_58_58 == (MR_Integer) 0);
#line 83 "continuation_info.m"
                                ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 83 "continuation_info.m"
                                if (ll_backend__continuation_info__succeeded)
#line 83 "continuation_info.m"
                                  *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_58_58;
#line 83 "continuation_info.m"
                                else
#line 83 "continuation_info.m"
                                  {
#line 83 "continuation_info.m"
                                    MR_Word ll_backend__continuation_info__V_59_59;

#line 83 "continuation_info.m"
                                    {
#line 83 "continuation_info.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[12], &ll_backend__continuation_info__V_59_59, ((MR_Box) (ll_backend__continuation_info__V_11_11)), ((MR_Box) (ll_backend__continuation_info__V_35_35)));
                                    }
#line 8156 "ll_backend.continuation_info.c"
                                    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_59_59 == (MR_Integer) 0);
#line 83 "continuation_info.m"
                                    ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 83 "continuation_info.m"
                                    if (ll_backend__continuation_info__succeeded)
#line 83 "continuation_info.m"
                                      *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_59_59;
#line 83 "continuation_info.m"
                                    else
#line 83 "continuation_info.m"
                                      {
#line 83 "continuation_info.m"
                                        MR_Word ll_backend__continuation_info__V_60_60;

#line 83 "continuation_info.m"
                                        {
#line 83 "continuation_info.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__continuation_info__V_60_60, ll_backend__continuation_info__V_12_12, ll_backend__continuation_info__V_36_36);
                                        }
#line 8176 "ll_backend.continuation_info.c"
                                        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_60_60 == (MR_Integer) 0);
#line 83 "continuation_info.m"
                                        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 83 "continuation_info.m"
                                        if (ll_backend__continuation_info__succeeded)
#line 83 "continuation_info.m"
                                          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_60_60;
#line 83 "continuation_info.m"
                                        else
#line 83 "continuation_info.m"
                                          {
#line 83 "continuation_info.m"
                                            MR_Word ll_backend__continuation_info__V_61_61;

#line 83 "continuation_info.m"
                                            {
#line 83 "continuation_info.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__continuation_info__V_61_61, ll_backend__continuation_info__V_13_13, ll_backend__continuation_info__V_37_37);
                                            }
#line 8196 "ll_backend.continuation_info.c"
                                            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_61_61 == (MR_Integer) 0);
#line 83 "continuation_info.m"
                                            ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 83 "continuation_info.m"
                                            if (ll_backend__continuation_info__succeeded)
#line 83 "continuation_info.m"
                                              *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_61_61;
#line 83 "continuation_info.m"
                                            else
#line 83 "continuation_info.m"
                                              {
#line 83 "continuation_info.m"
                                                MR_Word ll_backend__continuation_info__V_62_62;

#line 83 "continuation_info.m"
                                                {
#line 83 "continuation_info.m"
                                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[13], &ll_backend__continuation_info__V_62_62, ((MR_Box) (ll_backend__continuation_info__V_14_14)), ((MR_Box) (ll_backend__continuation_info__V_38_38)));
                                                }
#line 8216 "ll_backend.continuation_info.c"
                                                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_62_62 == (MR_Integer) 0);
#line 83 "continuation_info.m"
                                                ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 83 "continuation_info.m"
                                                if (ll_backend__continuation_info__succeeded)
#line 83 "continuation_info.m"
                                                  *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_62_62;
#line 83 "continuation_info.m"
                                                else
#line 83 "continuation_info.m"
                                                  {
#line 83 "continuation_info.m"
                                                    MR_Word ll_backend__continuation_info__V_63_63;

#line 83 "continuation_info.m"
                                                    {
#line 83 "continuation_info.m"
                                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[14], &ll_backend__continuation_info__V_63_63, ((MR_Box) (ll_backend__continuation_info__V_15_15)), ((MR_Box) (ll_backend__continuation_info__V_39_39)));
                                                    }
#line 8236 "ll_backend.continuation_info.c"
                                                    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_63_63 == (MR_Integer) 0);
#line 83 "continuation_info.m"
                                                    ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 83 "continuation_info.m"
                                                    if (ll_backend__continuation_info__succeeded)
#line 83 "continuation_info.m"
                                                      *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_63_63;
#line 83 "continuation_info.m"
                                                    else
#line 83 "continuation_info.m"
                                                      {
#line 83 "continuation_info.m"
                                                        MR_Word ll_backend__continuation_info__V_64_64;

#line 83 "continuation_info.m"
                                                        {
#line 83 "continuation_info.m"
                                                          hlds__hlds_goal____Compare____hlds_goal_0_0(&ll_backend__continuation_info__V_64_64, ll_backend__continuation_info__V_16_16, ll_backend__continuation_info__V_40_40);
                                                        }
#line 8256 "ll_backend.continuation_info.c"
                                                        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_64_64 == (MR_Integer) 0);
#line 83 "continuation_info.m"
                                                        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 83 "continuation_info.m"
                                                        if (ll_backend__continuation_info__succeeded)
#line 83 "continuation_info.m"
                                                          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_64_64;
#line 83 "continuation_info.m"
                                                        else
#line 83 "continuation_info.m"
                                                          {
#line 83 "continuation_info.m"
                                                            MR_Word ll_backend__continuation_info__V_65_65;
#line 83 "continuation_info.m"
                                                            MR_Integer ll_backend__continuation_info__V_103_103 = (MR_Integer) ll_backend__continuation_info__V_17_17;
#line 83 "continuation_info.m"
                                                            MR_Integer ll_backend__continuation_info__V_104_104 = (MR_Integer) ll_backend__continuation_info__V_41_41;

#line 83 "continuation_info.m"
                                                            {
#line 83 "continuation_info.m"
                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__continuation_info__V_65_65, ll_backend__continuation_info__V_103_103, ll_backend__continuation_info__V_104_104);
                                                            }
#line 8280 "ll_backend.continuation_info.c"
                                                            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_65_65 == (MR_Integer) 0);
#line 83 "continuation_info.m"
                                                            ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 83 "continuation_info.m"
                                                            if (ll_backend__continuation_info__succeeded)
#line 83 "continuation_info.m"
                                                              *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_65_65;
#line 83 "continuation_info.m"
                                                            else
#line 83 "continuation_info.m"
                                                              {
#line 83 "continuation_info.m"
                                                                MR_Word ll_backend__continuation_info__V_66_66;

#line 83 "continuation_info.m"
                                                                {
#line 83 "continuation_info.m"
                                                                  hlds__instmap____Compare____instmap_0_0(&ll_backend__continuation_info__V_66_66, ll_backend__continuation_info__V_18_18, ll_backend__continuation_info__V_42_42);
                                                                }
#line 8300 "ll_backend.continuation_info.c"
                                                                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_66_66 == (MR_Integer) 0);
#line 83 "continuation_info.m"
                                                                ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 83 "continuation_info.m"
                                                                if (ll_backend__continuation_info__succeeded)
#line 83 "continuation_info.m"
                                                                  *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_66_66;
#line 83 "continuation_info.m"
                                                                else
#line 83 "continuation_info.m"
                                                                  {
#line 83 "continuation_info.m"
                                                                    MR_Word ll_backend__continuation_info__V_67_67;

#line 83 "continuation_info.m"
                                                                    {
#line 83 "continuation_info.m"
                                                                      ll_backend__trace_gen____Compare____trace_slot_info_0_0(&ll_backend__continuation_info__V_67_67, ll_backend__continuation_info__V_19_19, ll_backend__continuation_info__V_43_43);
                                                                    }
#line 8320 "ll_backend.continuation_info.c"
                                                                    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_67_67 == (MR_Integer) 0);
#line 83 "continuation_info.m"
                                                                    ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 83 "continuation_info.m"
                                                                    if (ll_backend__continuation_info__succeeded)
#line 83 "continuation_info.m"
                                                                      *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_67_67;
#line 83 "continuation_info.m"
                                                                    else
#line 83 "continuation_info.m"
                                                                      {
#line 83 "continuation_info.m"
                                                                        MR_Word ll_backend__continuation_info__V_68_68;
#line 83 "continuation_info.m"
                                                                        MR_Integer ll_backend__continuation_info__V_105_105 = (MR_Integer) ll_backend__continuation_info__V_20_20;
#line 83 "continuation_info.m"
                                                                        MR_Integer ll_backend__continuation_info__V_106_106 = (MR_Integer) ll_backend__continuation_info__V_44_44;

#line 83 "continuation_info.m"
                                                                        {
#line 83 "continuation_info.m"
                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__continuation_info__V_68_68, ll_backend__continuation_info__V_105_105, ll_backend__continuation_info__V_106_106);
                                                                        }
#line 8344 "ll_backend.continuation_info.c"
                                                                        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_68_68 == (MR_Integer) 0);
#line 83 "continuation_info.m"
                                                                        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 83 "continuation_info.m"
                                                                        if (ll_backend__continuation_info__succeeded)
#line 83 "continuation_info.m"
                                                                          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_68_68;
#line 83 "continuation_info.m"
                                                                        else
#line 83 "continuation_info.m"
                                                                          {
#line 83 "continuation_info.m"
                                                                            MR_Word ll_backend__continuation_info__V_69_69;

#line 83 "continuation_info.m"
                                                                            {
#line 83 "continuation_info.m"
                                                                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[15], &ll_backend__continuation_info__V_69_69, ((MR_Box) (ll_backend__continuation_info__V_21_21)), ((MR_Box) (ll_backend__continuation_info__V_45_45)));
                                                                            }
#line 8364 "ll_backend.continuation_info.c"
                                                                            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_69_69 == (MR_Integer) 0);
#line 83 "continuation_info.m"
                                                                            ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 83 "continuation_info.m"
                                                                            if (ll_backend__continuation_info__succeeded)
#line 83 "continuation_info.m"
                                                                              *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_69_69;
#line 83 "continuation_info.m"
                                                                            else
#line 83 "continuation_info.m"
                                                                              {
#line 83 "continuation_info.m"
                                                                                MR_Word ll_backend__continuation_info__V_70_70;

#line 83 "continuation_info.m"
                                                                                {
#line 83 "continuation_info.m"
                                                                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_2[2], &ll_backend__continuation_info__V_70_70, ((MR_Box) (ll_backend__continuation_info__V_22_22)), ((MR_Box) (ll_backend__continuation_info__V_46_46)));
                                                                                }
#line 8384 "ll_backend.continuation_info.c"
                                                                                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_70_70 == (MR_Integer) 0);
#line 83 "continuation_info.m"
                                                                                ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 83 "continuation_info.m"
                                                                                if (ll_backend__continuation_info__succeeded)
#line 83 "continuation_info.m"
                                                                                  *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_70_70;
#line 83 "continuation_info.m"
                                                                                else
#line 83 "continuation_info.m"
                                                                                  {
#line 83 "continuation_info.m"
                                                                                    MR_Word ll_backend__continuation_info__V_71_71;

#line 83 "continuation_info.m"
                                                                                    {
#line 83 "continuation_info.m"
                                                                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_2[0], &ll_backend__continuation_info__V_71_71, ((MR_Box) (ll_backend__continuation_info__V_23_23)), ((MR_Box) (ll_backend__continuation_info__V_47_47)));
                                                                                    }
#line 8404 "ll_backend.continuation_info.c"
                                                                                    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_71_71 == (MR_Integer) 0);
#line 83 "continuation_info.m"
                                                                                    ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 83 "continuation_info.m"
                                                                                    if (ll_backend__continuation_info__succeeded)
#line 83 "continuation_info.m"
                                                                                      *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_71_71;
#line 83 "continuation_info.m"
                                                                                    else
#line 83 "continuation_info.m"
                                                                                      {
#line 83 "continuation_info.m"
                                                                                        MR_Word ll_backend__continuation_info__V_72_72;

#line 83 "continuation_info.m"
                                                                                        {
#line 83 "continuation_info.m"
                                                                                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[16], &ll_backend__continuation_info__V_72_72, ((MR_Box) (ll_backend__continuation_info__V_24_24)), ((MR_Box) (ll_backend__continuation_info__V_48_48)));
                                                                                        }
#line 8424 "ll_backend.continuation_info.c"
                                                                                        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_72_72 == (MR_Integer) 0);
#line 83 "continuation_info.m"
                                                                                        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 83 "continuation_info.m"
                                                                                        if (ll_backend__continuation_info__succeeded)
#line 83 "continuation_info.m"
                                                                                          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_72_72;
#line 83 "continuation_info.m"
                                                                                        else
#line 83 "continuation_info.m"
                                                                                          {
#line 83 "continuation_info.m"
                                                                                            MR_Word ll_backend__continuation_info__V_73_73;
#line 83 "continuation_info.m"
                                                                                            MR_Integer ll_backend__continuation_info__V_107_107 = (MR_Integer) ll_backend__continuation_info__V_25_25;
#line 83 "continuation_info.m"
                                                                                            MR_Integer ll_backend__continuation_info__V_108_108 = (MR_Integer) ll_backend__continuation_info__V_49_49;

#line 83 "continuation_info.m"
                                                                                            {
#line 83 "continuation_info.m"
                                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__continuation_info__V_73_73, ll_backend__continuation_info__V_107_107, ll_backend__continuation_info__V_108_108);
                                                                                            }
#line 8448 "ll_backend.continuation_info.c"
                                                                                            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_73_73 == (MR_Integer) 0);
#line 83 "continuation_info.m"
                                                                                            ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 83 "continuation_info.m"
                                                                                            if (ll_backend__continuation_info__succeeded)
#line 83 "continuation_info.m"
                                                                                              *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_73_73;
#line 83 "continuation_info.m"
                                                                                            else
#line 83 "continuation_info.m"
                                                                                              {
#line 83 "continuation_info.m"
                                                                                                MR_Word ll_backend__continuation_info__V_74_74;

#line 83 "continuation_info.m"
                                                                                                {
#line 83 "continuation_info.m"
                                                                                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[17], &ll_backend__continuation_info__V_74_74, ((MR_Box) (ll_backend__continuation_info__V_26_26)), ((MR_Box) (ll_backend__continuation_info__V_50_50)));
                                                                                                }
#line 8468 "ll_backend.continuation_info.c"
                                                                                                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_74_74 == (MR_Integer) 0);
#line 83 "continuation_info.m"
                                                                                                ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 83 "continuation_info.m"
                                                                                                if (ll_backend__continuation_info__succeeded)
#line 83 "continuation_info.m"
                                                                                                  *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_74_74;
#line 83 "continuation_info.m"
                                                                                                else
#line 83 "continuation_info.m"
                                                                                                  {
#line 83 "continuation_info.m"
                                                                                                    {
#line 83 "continuation_info.m"
                                                                                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[18], ll_backend__continuation_info__HeadVar__1_1, ((MR_Box) (ll_backend__continuation_info__V_27_27)), ((MR_Box) (ll_backend__continuation_info__V_51_51)));
#line 83 "continuation_info.m"
                                                                                                      return;
                                                                                                    }
#line 83 "continuation_info.m"
                                                                                                  }
#line 83 "continuation_info.m"
                                                                                              }
#line 83 "continuation_info.m"
                                                                                          }
#line 83 "continuation_info.m"
                                                                                      }
#line 83 "continuation_info.m"
                                                                                  }
#line 83 "continuation_info.m"
                                                                              }
#line 83 "continuation_info.m"
                                                                          }
#line 83 "continuation_info.m"
                                                                      }
#line 83 "continuation_info.m"
                                                                  }
#line 83 "continuation_info.m"
                                                              }
#line 83 "continuation_info.m"
                                                          }
#line 83 "continuation_info.m"
                                                      }
#line 83 "continuation_info.m"
                                                  }
#line 83 "continuation_info.m"
                                              }
#line 83 "continuation_info.m"
                                          }
#line 83 "continuation_info.m"
                                      }
#line 83 "continuation_info.m"
                                  }
#line 83 "continuation_info.m"
                              }
#line 83 "continuation_info.m"
                          }
#line 83 "continuation_info.m"
                      }
#line 83 "continuation_info.m"
                  }
#line 83 "continuation_info.m"
              }
#line 83 "continuation_info.m"
          }
#line 83 "continuation_info.m"
      }
#line 83 "continuation_info.m"
  }
#line 83 "continuation_info.m"
}

#line 83 "continuation_info.m"
MR_bool MR_CALL 
ll_backend__continuation_info____Unify____proc_layout_info_0_0(
#line 83 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 83 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2)
#line 83 "continuation_info.m"
{
#line 83 "continuation_info.m"
  {
#line 83 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 83 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_51 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 83 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_52 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 83 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_51 == ll_backend__continuation_info__CastY_52);
#line 83 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 83 "continuation_info.m"
      ll_backend__continuation_info__succeeded = MR_TRUE;
#line 83 "continuation_info.m"
    else
#line 83 "continuation_info.m"
      {
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_55_55;
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_58_58;
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_59_59;
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_60_60;
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_64_64;
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_65_65;
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_66_66;
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_67_67;
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_68_68;
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_69_69;
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 2)));
#line 83 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 3)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 4)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 5)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 6)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 7)));
#line 83 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 8)));
#line 83 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 9)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 10)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 11)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 12)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 13)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 14)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 15)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 16)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 17)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 18)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 19)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 20)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 21)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 22)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 23)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 2)));
#line 83 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 3)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 4)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 5)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 6)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 7)));
#line 83 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 8)));
#line 83 "continuation_info.m"
        MR_Integer ll_backend__continuation_info__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 9)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 10)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 11)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 12)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 13)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 14)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 15)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 16)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 17)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 18)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 19)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 20)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 21)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 22)));
#line 83 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 23)));

#line 8685 "ll_backend.continuation_info.c"
        {
#line 8687 "ll_backend.continuation_info.c"
          ll_backend__continuation_info__succeeded = hlds__hlds_rtti____Unify____rtti_proc_label_0_0(ll_backend__continuation_info__V_3_3, ll_backend__continuation_info__V_27_27);
        }
#line 83 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 83 "continuation_info.m"
          {
#line 8694 "ll_backend.continuation_info.c"
            {
#line 8696 "ll_backend.continuation_info.c"
              ll_backend__continuation_info__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__continuation_info__V_4_4, ll_backend__continuation_info__V_28_28);
            }
#line 83 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 83 "continuation_info.m"
              {
#line 8703 "ll_backend.continuation_info.c"
                ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_5_5 == ll_backend__continuation_info__V_29_29);
#line 83 "continuation_info.m"
                if (ll_backend__continuation_info__succeeded)
#line 83 "continuation_info.m"
                  {
#line 8709 "ll_backend.continuation_info.c"
                    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_6_6 == ll_backend__continuation_info__V_30_30);
#line 83 "continuation_info.m"
                    if (ll_backend__continuation_info__succeeded)
#line 83 "continuation_info.m"
                      {
#line 8715 "ll_backend.continuation_info.c"
                        ll_backend__continuation_info__TypeInfo_55_55 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[11];
#line 8717 "ll_backend.continuation_info.c"
                        {
#line 8719 "ll_backend.continuation_info.c"
                          ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_55_55, ((MR_Box) (ll_backend__continuation_info__V_7_7)), ((MR_Box) (ll_backend__continuation_info__V_31_31)));
                        }
#line 83 "continuation_info.m"
                        if (ll_backend__continuation_info__succeeded)
#line 83 "continuation_info.m"
                          {
#line 8726 "ll_backend.continuation_info.c"
                            {
#line 8728 "ll_backend.continuation_info.c"
                              ll_backend__continuation_info__succeeded = parse_tree__prog_data____Unify____eval_method_0_0(ll_backend__continuation_info__V_8_8, ll_backend__continuation_info__V_32_32);
                            }
#line 83 "continuation_info.m"
                            if (ll_backend__continuation_info__succeeded)
#line 83 "continuation_info.m"
                              {
#line 8735 "ll_backend.continuation_info.c"
                                {
#line 8737 "ll_backend.continuation_info.c"
                                  ll_backend__continuation_info__succeeded = libs__trace_params____Unify____trace_level_0_0(ll_backend__continuation_info__V_9_9, ll_backend__continuation_info__V_33_33);
                                }
#line 83 "continuation_info.m"
                                if (ll_backend__continuation_info__succeeded)
#line 83 "continuation_info.m"
                                  {
#line 8744 "ll_backend.continuation_info.c"
                                    ll_backend__continuation_info__TypeInfo_58_58 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[12];
#line 8746 "ll_backend.continuation_info.c"
                                    {
#line 8748 "ll_backend.continuation_info.c"
                                      ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_58_58, ((MR_Box) (ll_backend__continuation_info__V_10_10)), ((MR_Box) (ll_backend__continuation_info__V_34_34)));
                                    }
#line 83 "continuation_info.m"
                                    if (ll_backend__continuation_info__succeeded)
#line 83 "continuation_info.m"
                                      {
#line 8755 "ll_backend.continuation_info.c"
                                        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_11_11 == ll_backend__continuation_info__V_35_35);
#line 83 "continuation_info.m"
                                        if (ll_backend__continuation_info__succeeded)
#line 83 "continuation_info.m"
                                          {
#line 8761 "ll_backend.continuation_info.c"
                                            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_12_12 == ll_backend__continuation_info__V_36_36);
#line 83 "continuation_info.m"
                                            if (ll_backend__continuation_info__succeeded)
#line 83 "continuation_info.m"
                                              {
#line 8767 "ll_backend.continuation_info.c"
                                                ll_backend__continuation_info__TypeInfo_59_59 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[13];
#line 8769 "ll_backend.continuation_info.c"
                                                {
#line 8771 "ll_backend.continuation_info.c"
                                                  ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_59_59, ((MR_Box) (ll_backend__continuation_info__V_13_13)), ((MR_Box) (ll_backend__continuation_info__V_37_37)));
                                                }
#line 83 "continuation_info.m"
                                                if (ll_backend__continuation_info__succeeded)
#line 83 "continuation_info.m"
                                                  {
#line 8778 "ll_backend.continuation_info.c"
                                                    ll_backend__continuation_info__TypeInfo_60_60 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[14];
#line 8780 "ll_backend.continuation_info.c"
                                                    {
#line 8782 "ll_backend.continuation_info.c"
                                                      ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_60_60, ((MR_Box) (ll_backend__continuation_info__V_14_14)), ((MR_Box) (ll_backend__continuation_info__V_38_38)));
                                                    }
#line 83 "continuation_info.m"
                                                    if (ll_backend__continuation_info__succeeded)
#line 83 "continuation_info.m"
                                                      {
#line 8789 "ll_backend.continuation_info.c"
                                                        {
#line 8791 "ll_backend.continuation_info.c"
                                                          ll_backend__continuation_info__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(ll_backend__continuation_info__V_15_15, ll_backend__continuation_info__V_39_39);
                                                        }
#line 83 "continuation_info.m"
                                                        if (ll_backend__continuation_info__succeeded)
#line 83 "continuation_info.m"
                                                          {
#line 8798 "ll_backend.continuation_info.c"
                                                            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_16_16 == ll_backend__continuation_info__V_40_40);
#line 83 "continuation_info.m"
                                                            if (ll_backend__continuation_info__succeeded)
#line 83 "continuation_info.m"
                                                              {
#line 8804 "ll_backend.continuation_info.c"
                                                                {
#line 8806 "ll_backend.continuation_info.c"
                                                                  ll_backend__continuation_info__succeeded = hlds__instmap____Unify____instmap_0_0(ll_backend__continuation_info__V_17_17, ll_backend__continuation_info__V_41_41);
                                                                }
#line 83 "continuation_info.m"
                                                                if (ll_backend__continuation_info__succeeded)
#line 83 "continuation_info.m"
                                                                  {
#line 8813 "ll_backend.continuation_info.c"
                                                                    {
#line 8815 "ll_backend.continuation_info.c"
                                                                      ll_backend__continuation_info__succeeded = ll_backend__trace_gen____Unify____trace_slot_info_0_0(ll_backend__continuation_info__V_18_18, ll_backend__continuation_info__V_42_42);
                                                                    }
#line 83 "continuation_info.m"
                                                                    if (ll_backend__continuation_info__succeeded)
#line 83 "continuation_info.m"
                                                                      {
#line 8822 "ll_backend.continuation_info.c"
                                                                        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_19_19 == ll_backend__continuation_info__V_43_43);
#line 83 "continuation_info.m"
                                                                        if (ll_backend__continuation_info__succeeded)
#line 83 "continuation_info.m"
                                                                          {
#line 8828 "ll_backend.continuation_info.c"
                                                                            ll_backend__continuation_info__TypeInfo_64_64 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[15];
#line 8830 "ll_backend.continuation_info.c"
                                                                            {
#line 8832 "ll_backend.continuation_info.c"
                                                                              ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_64_64, ((MR_Box) (ll_backend__continuation_info__V_20_20)), ((MR_Box) (ll_backend__continuation_info__V_44_44)));
                                                                            }
#line 83 "continuation_info.m"
                                                                            if (ll_backend__continuation_info__succeeded)
#line 83 "continuation_info.m"
                                                                              {
#line 8839 "ll_backend.continuation_info.c"
                                                                                ll_backend__continuation_info__TypeInfo_65_65 = (MR_Word) &ll_backend__continuation_info_scalar_common_2[2];
#line 8841 "ll_backend.continuation_info.c"
                                                                                {
#line 8843 "ll_backend.continuation_info.c"
                                                                                  ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_65_65, ((MR_Box) (ll_backend__continuation_info__V_21_21)), ((MR_Box) (ll_backend__continuation_info__V_45_45)));
                                                                                }
#line 83 "continuation_info.m"
                                                                                if (ll_backend__continuation_info__succeeded)
#line 83 "continuation_info.m"
                                                                                  {
#line 8850 "ll_backend.continuation_info.c"
                                                                                    ll_backend__continuation_info__TypeInfo_66_66 = (MR_Word) &ll_backend__continuation_info_scalar_common_2[0];
#line 8852 "ll_backend.continuation_info.c"
                                                                                    {
#line 8854 "ll_backend.continuation_info.c"
                                                                                      ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_66_66, ((MR_Box) (ll_backend__continuation_info__V_22_22)), ((MR_Box) (ll_backend__continuation_info__V_46_46)));
                                                                                    }
#line 83 "continuation_info.m"
                                                                                    if (ll_backend__continuation_info__succeeded)
#line 83 "continuation_info.m"
                                                                                      {
#line 8861 "ll_backend.continuation_info.c"
                                                                                        ll_backend__continuation_info__TypeInfo_67_67 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[16];
#line 8863 "ll_backend.continuation_info.c"
                                                                                        {
#line 8865 "ll_backend.continuation_info.c"
                                                                                          ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_67_67, ((MR_Box) (ll_backend__continuation_info__V_23_23)), ((MR_Box) (ll_backend__continuation_info__V_47_47)));
                                                                                        }
#line 83 "continuation_info.m"
                                                                                        if (ll_backend__continuation_info__succeeded)
#line 83 "continuation_info.m"
                                                                                          {
#line 8872 "ll_backend.continuation_info.c"
                                                                                            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_24_24 == ll_backend__continuation_info__V_48_48);
#line 83 "continuation_info.m"
                                                                                            if (ll_backend__continuation_info__succeeded)
#line 83 "continuation_info.m"
                                                                                              {
#line 8878 "ll_backend.continuation_info.c"
                                                                                                ll_backend__continuation_info__TypeInfo_68_68 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[17];
#line 8880 "ll_backend.continuation_info.c"
                                                                                                {
#line 8882 "ll_backend.continuation_info.c"
                                                                                                  ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_68_68, ((MR_Box) (ll_backend__continuation_info__V_25_25)), ((MR_Box) (ll_backend__continuation_info__V_49_49)));
                                                                                                }
#line 83 "continuation_info.m"
                                                                                                if (ll_backend__continuation_info__succeeded)
#line 83 "continuation_info.m"
                                                                                                  {
#line 8889 "ll_backend.continuation_info.c"
                                                                                                    ll_backend__continuation_info__TypeInfo_69_69 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[18];
#line 8891 "ll_backend.continuation_info.c"
                                                                                                    {
#line 8893 "ll_backend.continuation_info.c"
                                                                                                      return ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_69_69, ((MR_Box) (ll_backend__continuation_info__V_26_26)), ((MR_Box) (ll_backend__continuation_info__V_50_50)));
                                                                                                    }
#line 83 "continuation_info.m"
                                                                                                  }
#line 83 "continuation_info.m"
                                                                                              }
#line 83 "continuation_info.m"
                                                                                          }
#line 83 "continuation_info.m"
                                                                                      }
#line 83 "continuation_info.m"
                                                                                  }
#line 83 "continuation_info.m"
                                                                              }
#line 83 "continuation_info.m"
                                                                          }
#line 83 "continuation_info.m"
                                                                      }
#line 83 "continuation_info.m"
                                                                  }
#line 83 "continuation_info.m"
                                                              }
#line 83 "continuation_info.m"
                                                          }
#line 83 "continuation_info.m"
                                                      }
#line 83 "continuation_info.m"
                                                  }
#line 83 "continuation_info.m"
                                              }
#line 83 "continuation_info.m"
                                          }
#line 83 "continuation_info.m"
                                      }
#line 83 "continuation_info.m"
                                  }
#line 83 "continuation_info.m"
                              }
#line 83 "continuation_info.m"
                          }
#line 83 "continuation_info.m"
                      }
#line 83 "continuation_info.m"
                  }
#line 83 "continuation_info.m"
              }
#line 83 "continuation_info.m"
          }
#line 83 "continuation_info.m"
      }
#line 83 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 83 "continuation_info.m"
  }
#line 83 "continuation_info.m"
}

#line 181 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info____Compare____proc_label_layout_info_0_0(
#line 181 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 181 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 181 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3)
#line 181 "continuation_info.m"
{
#line 181 "continuation_info.m"
  {
#line 181 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 181 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Cast_HeadVar1_4 = ll_backend__continuation_info__HeadVar__2_2;
#line 181 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Cast_HeadVar2_5 = ll_backend__continuation_info__HeadVar__3_3;

#line 181 "continuation_info.m"
    {
#line 181 "continuation_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_2[0], ll_backend__continuation_info__HeadVar__1_1, ((MR_Box) (ll_backend__continuation_info__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__continuation_info__Cast_HeadVar2_5)));
#line 181 "continuation_info.m"
      return;
    }
#line 181 "continuation_info.m"
  }
#line 181 "continuation_info.m"
}

#line 181 "continuation_info.m"
MR_bool MR_CALL 
ll_backend__continuation_info____Unify____proc_label_layout_info_0_0(
#line 181 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 181 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2)
#line 181 "continuation_info.m"
{
#line 181 "continuation_info.m"
  {
#line 181 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 181 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Cast_HeadVar1_3 = ll_backend__continuation_info__HeadVar__1_1;
#line 181 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Cast_HeadVar2_4 = ll_backend__continuation_info__HeadVar__2_2;

#line 181 "continuation_info.m"
    {
#line 181 "continuation_info.m"
      return ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_2[0], ((MR_Box) (ll_backend__continuation_info__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__continuation_info__Cast_HeadVar2_4)));
    }
#line 181 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 181 "continuation_info.m"
  }
#line 181 "continuation_info.m"
}

#line 160 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info____Compare____proc_deep_prof_info_0_0(
#line 160 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 160 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 160 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3)
#line 160 "continuation_info.m"
{
#line 160 "continuation_info.m"
  {
#line 160 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 160 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_12 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;
#line 160 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_13 = (MR_Integer) ll_backend__continuation_info__HeadVar__3_3;

#line 160 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_12 == ll_backend__continuation_info__CastY_13);
#line 160 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 9037 "ll_backend.continuation_info.c"
      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 160 "continuation_info.m"
    else
#line 160 "continuation_info.m"
      {
#line 160 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 160 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 160 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 2)));
#line 160 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));
#line 160 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 1)));
#line 160 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 2)));
#line 160 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_10_10;

#line 160 "continuation_info.m"
        {
#line 160 "continuation_info.m"
          hlds__hlds_pred____Compare____hlds_proc_static_0_0(&ll_backend__continuation_info__V_10_10, ll_backend__continuation_info__V_4_4, ll_backend__continuation_info__V_7_7);
        }
#line 9063 "ll_backend.continuation_info.c"
        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_10_10 == (MR_Integer) 0);
#line 160 "continuation_info.m"
        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 160 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 160 "continuation_info.m"
          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_10_10;
#line 160 "continuation_info.m"
        else
#line 160 "continuation_info.m"
          {
#line 160 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_11_11;

#line 160 "continuation_info.m"
            {
#line 160 "continuation_info.m"
              ll_backend__layout____Compare____deep_excp_slots_0_0(&ll_backend__continuation_info__V_11_11, ll_backend__continuation_info__V_5_5, ll_backend__continuation_info__V_8_8);
            }
#line 9083 "ll_backend.continuation_info.c"
            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_11_11 == (MR_Integer) 0);
#line 160 "continuation_info.m"
            ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 160 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 160 "continuation_info.m"
              *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_11_11;
#line 160 "continuation_info.m"
            else
#line 160 "continuation_info.m"
              {
#line 160 "continuation_info.m"
                hlds__hlds_pred____Compare____deep_original_body_0_0(ll_backend__continuation_info__HeadVar__1_1, ll_backend__continuation_info__V_6_6, ll_backend__continuation_info__V_9_9);
#line 160 "continuation_info.m"
                return;
              }
#line 160 "continuation_info.m"
          }
#line 160 "continuation_info.m"
      }
#line 160 "continuation_info.m"
  }
#line 160 "continuation_info.m"
}

#line 160 "continuation_info.m"
MR_bool MR_CALL 
ll_backend__continuation_info____Unify____proc_deep_prof_info_0_0(
#line 160 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 160 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2)
#line 160 "continuation_info.m"
{
#line 160 "continuation_info.m"
  {
#line 160 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 160 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_9 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 160 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_10 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 160 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_9 == ll_backend__continuation_info__CastY_10);
#line 160 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 160 "continuation_info.m"
      ll_backend__continuation_info__succeeded = MR_TRUE;
#line 160 "continuation_info.m"
    else
#line 160 "continuation_info.m"
      {
#line 160 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 160 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 160 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 2)));
#line 160 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 160 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 160 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 2)));

#line 9150 "ll_backend.continuation_info.c"
        {
#line 9152 "ll_backend.continuation_info.c"
          ll_backend__continuation_info__succeeded = hlds__hlds_pred____Unify____hlds_proc_static_0_0(ll_backend__continuation_info__V_3_3, ll_backend__continuation_info__V_6_6);
        }
#line 160 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 160 "continuation_info.m"
          {
#line 9159 "ll_backend.continuation_info.c"
            {
#line 9161 "ll_backend.continuation_info.c"
              ll_backend__continuation_info__succeeded = ll_backend__layout____Unify____deep_excp_slots_0_0(ll_backend__continuation_info__V_4_4, ll_backend__continuation_info__V_7_7);
            }
#line 160 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 9166 "ll_backend.continuation_info.c"
              {
#line 9168 "ll_backend.continuation_info.c"
                return ll_backend__continuation_info__succeeded = hlds__hlds_pred____Unify____deep_original_body_0_0(ll_backend__continuation_info__V_5_5, ll_backend__continuation_info__V_8_8);
              }
#line 160 "continuation_info.m"
          }
#line 160 "continuation_info.m"
      }
#line 160 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 160 "continuation_info.m"
  }
#line 160 "continuation_info.m"
}

#line 292 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info____Compare____layout_var_info_0_0(
#line 292 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 292 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 292 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3)
#line 292 "continuation_info.m"
{
#line 292 "continuation_info.m"
  {
#line 292 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 292 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_12 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;
#line 292 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_13 = (MR_Integer) ll_backend__continuation_info__HeadVar__3_3;

#line 292 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_12 == ll_backend__continuation_info__CastY_13);
#line 292 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 9206 "ll_backend.continuation_info.c"
      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 292 "continuation_info.m"
    else
#line 292 "continuation_info.m"
      {
#line 292 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 292 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 292 "continuation_info.m"
        MR_String ll_backend__continuation_info__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 2)));
#line 292 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));
#line 292 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 1)));
#line 292 "continuation_info.m"
        MR_String ll_backend__continuation_info__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 2)));
#line 292 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_10_10;

#line 292 "continuation_info.m"
        {
#line 292 "continuation_info.m"
          ll_backend__llds____Compare____layout_locn_0_0(&ll_backend__continuation_info__V_10_10, ll_backend__continuation_info__V_4_4, ll_backend__continuation_info__V_7_7);
        }
#line 9232 "ll_backend.continuation_info.c"
        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_10_10 == (MR_Integer) 0);
#line 292 "continuation_info.m"
        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 292 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 292 "continuation_info.m"
          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_10_10;
#line 292 "continuation_info.m"
        else
#line 292 "continuation_info.m"
          {
#line 292 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_11_11;

#line 292 "continuation_info.m"
            {
#line 292 "continuation_info.m"
              ll_backend__llds____Compare____live_value_type_0_0(&ll_backend__continuation_info__V_11_11, ll_backend__continuation_info__V_5_5, ll_backend__continuation_info__V_8_8);
            }
#line 9252 "ll_backend.continuation_info.c"
            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_11_11 == (MR_Integer) 0);
#line 292 "continuation_info.m"
            ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 292 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 292 "continuation_info.m"
              *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_11_11;
#line 292 "continuation_info.m"
            else
#line 292 "continuation_info.m"
              {
#line 292 "continuation_info.m"
                mercury__private_builtin__builtin_compare_string_3_p_0(ll_backend__continuation_info__HeadVar__1_1, ll_backend__continuation_info__V_6_6, ll_backend__continuation_info__V_9_9);
#line 292 "continuation_info.m"
                return;
              }
#line 292 "continuation_info.m"
          }
#line 292 "continuation_info.m"
      }
#line 292 "continuation_info.m"
  }
#line 292 "continuation_info.m"
}

#line 292 "continuation_info.m"
MR_bool MR_CALL 
ll_backend__continuation_info____Unify____layout_var_info_0_0(
#line 292 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 292 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2)
#line 292 "continuation_info.m"
{
#line 292 "continuation_info.m"
  {
#line 292 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 292 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_9 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 292 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_10 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 292 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_9 == ll_backend__continuation_info__CastY_10);
#line 292 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 292 "continuation_info.m"
      ll_backend__continuation_info__succeeded = MR_TRUE;
#line 292 "continuation_info.m"
    else
#line 292 "continuation_info.m"
      {
#line 292 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 292 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 292 "continuation_info.m"
        MR_String ll_backend__continuation_info__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 2)));
#line 292 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 292 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 292 "continuation_info.m"
        MR_String ll_backend__continuation_info__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 2)));

#line 9319 "ll_backend.continuation_info.c"
        {
#line 9321 "ll_backend.continuation_info.c"
          ll_backend__continuation_info__succeeded = ll_backend__llds____Unify____layout_locn_0_0(ll_backend__continuation_info__V_3_3, ll_backend__continuation_info__V_6_6);
        }
#line 292 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 292 "continuation_info.m"
          {
#line 9328 "ll_backend.continuation_info.c"
            {
#line 9330 "ll_backend.continuation_info.c"
              ll_backend__continuation_info__succeeded = ll_backend__llds____Unify____live_value_type_0_0(ll_backend__continuation_info__V_4_4, ll_backend__continuation_info__V_7_7);
            }
#line 292 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 9335 "ll_backend.continuation_info.c"
              ll_backend__continuation_info__succeeded = (strcmp(ll_backend__continuation_info__V_5_5, ll_backend__continuation_info__V_8_8) == 0);
#line 292 "continuation_info.m"
          }
#line 292 "continuation_info.m"
      }
#line 292 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 292 "continuation_info.m"
  }
#line 292 "continuation_info.m"
}

#line 283 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info____Compare____layout_label_info_0_0(
#line 283 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 283 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 283 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3)
#line 283 "continuation_info.m"
{
#line 283 "continuation_info.m"
  {
#line 283 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 283 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_9 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;
#line 283 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_10 = (MR_Integer) ll_backend__continuation_info__HeadVar__3_3;

#line 283 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_9 == ll_backend__continuation_info__CastY_10);
#line 283 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 9372 "ll_backend.continuation_info.c"
      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 283 "continuation_info.m"
    else
#line 283 "continuation_info.m"
      {
#line 283 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 283 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 283 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));
#line 283 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 1)));
#line 283 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8;

#line 283 "continuation_info.m"
        {
#line 283 "continuation_info.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[10], &ll_backend__continuation_info__V_8_8, ((MR_Box) (ll_backend__continuation_info__V_4_4)), ((MR_Box) (ll_backend__continuation_info__V_6_6)));
        }
#line 9394 "ll_backend.continuation_info.c"
        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_8_8 == (MR_Integer) 0);
#line 283 "continuation_info.m"
        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 283 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 283 "continuation_info.m"
          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_8_8;
#line 283 "continuation_info.m"
        else
#line 283 "continuation_info.m"
          {
#line 283 "continuation_info.m"
            {
#line 283 "continuation_info.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_2[1], ll_backend__continuation_info__HeadVar__1_1, ((MR_Box) (ll_backend__continuation_info__V_5_5)), ((MR_Box) (ll_backend__continuation_info__V_7_7)));
#line 283 "continuation_info.m"
              return;
            }
#line 283 "continuation_info.m"
          }
#line 283 "continuation_info.m"
      }
#line 283 "continuation_info.m"
  }
#line 283 "continuation_info.m"
}

#line 283 "continuation_info.m"
MR_bool MR_CALL 
ll_backend__continuation_info____Unify____layout_label_info_0_0(
#line 283 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 283 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2)
#line 283 "continuation_info.m"
{
#line 283 "continuation_info.m"
  {
#line 283 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 283 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_7 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 283 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_8 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 283 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_7 == ll_backend__continuation_info__CastY_8);
#line 283 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 283 "continuation_info.m"
      ll_backend__continuation_info__succeeded = MR_TRUE;
#line 283 "continuation_info.m"
    else
#line 283 "continuation_info.m"
      {
#line 283 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_10_10;
#line 283 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 283 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 283 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 283 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));

#line 9461 "ll_backend.continuation_info.c"
        {
#line 9463 "ll_backend.continuation_info.c"
          ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[10], ((MR_Box) (ll_backend__continuation_info__V_3_3)), ((MR_Box) (ll_backend__continuation_info__V_5_5)));
        }
#line 283 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 283 "continuation_info.m"
          {
#line 9470 "ll_backend.continuation_info.c"
            ll_backend__continuation_info__TypeInfo_10_10 = (MR_Word) &ll_backend__continuation_info_scalar_common_2[1];
#line 9472 "ll_backend.continuation_info.c"
            {
#line 9474 "ll_backend.continuation_info.c"
              return ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_10_10, ((MR_Box) (ll_backend__continuation_info__V_4_4)), ((MR_Box) (ll_backend__continuation_info__V_6_6)));
            }
#line 283 "continuation_info.m"
          }
#line 283 "continuation_info.m"
      }
#line 283 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 283 "continuation_info.m"
  }
#line 283 "continuation_info.m"
}

#line 258 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info____Compare____internal_layout_info_0_0(
#line 258 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 258 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 258 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3)
#line 258 "continuation_info.m"
{
#line 258 "continuation_info.m"
  {
#line 258 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 258 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_12 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;
#line 258 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_13 = (MR_Integer) ll_backend__continuation_info__HeadVar__3_3;

#line 258 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_12 == ll_backend__continuation_info__CastY_13);
#line 258 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 9512 "ll_backend.continuation_info.c"
      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 258 "continuation_info.m"
    else
#line 258 "continuation_info.m"
      {
#line 258 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 258 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 258 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 2)));
#line 258 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));
#line 258 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 1)));
#line 258 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 2)));
#line 258 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_10_10;

#line 258 "continuation_info.m"
        {
#line 258 "continuation_info.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[7], &ll_backend__continuation_info__V_10_10, ((MR_Box) (ll_backend__continuation_info__V_4_4)), ((MR_Box) (ll_backend__continuation_info__V_7_7)));
        }
#line 9538 "ll_backend.continuation_info.c"
        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_10_10 == (MR_Integer) 0);
#line 258 "continuation_info.m"
        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 258 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 258 "continuation_info.m"
          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_10_10;
#line 258 "continuation_info.m"
        else
#line 258 "continuation_info.m"
          {
#line 258 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_11_11;

#line 258 "continuation_info.m"
            {
#line 258 "continuation_info.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[8], &ll_backend__continuation_info__V_11_11, ((MR_Box) (ll_backend__continuation_info__V_5_5)), ((MR_Box) (ll_backend__continuation_info__V_8_8)));
            }
#line 9558 "ll_backend.continuation_info.c"
            ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_11_11 == (MR_Integer) 0);
#line 258 "continuation_info.m"
            ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 258 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 258 "continuation_info.m"
              *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_11_11;
#line 258 "continuation_info.m"
            else
#line 258 "continuation_info.m"
              {
#line 258 "continuation_info.m"
                {
#line 258 "continuation_info.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[9], ll_backend__continuation_info__HeadVar__1_1, ((MR_Box) (ll_backend__continuation_info__V_6_6)), ((MR_Box) (ll_backend__continuation_info__V_9_9)));
#line 258 "continuation_info.m"
                  return;
                }
#line 258 "continuation_info.m"
              }
#line 258 "continuation_info.m"
          }
#line 258 "continuation_info.m"
      }
#line 258 "continuation_info.m"
  }
#line 258 "continuation_info.m"
}

#line 258 "continuation_info.m"
MR_bool MR_CALL 
ll_backend__continuation_info____Unify____internal_layout_info_0_0(
#line 258 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 258 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2)
#line 258 "continuation_info.m"
{
#line 258 "continuation_info.m"
  {
#line 258 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 258 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_9 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 258 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_10 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 258 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_9 == ll_backend__continuation_info__CastY_10);
#line 258 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 258 "continuation_info.m"
      ll_backend__continuation_info__succeeded = MR_TRUE;
#line 258 "continuation_info.m"
    else
#line 258 "continuation_info.m"
      {
#line 258 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_12_12;
#line 258 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_13_13;
#line 258 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 258 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 258 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 2)));
#line 258 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 258 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 258 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 2)));

#line 9633 "ll_backend.continuation_info.c"
        {
#line 9635 "ll_backend.continuation_info.c"
          ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[7], ((MR_Box) (ll_backend__continuation_info__V_3_3)), ((MR_Box) (ll_backend__continuation_info__V_6_6)));
        }
#line 258 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 258 "continuation_info.m"
          {
#line 9642 "ll_backend.continuation_info.c"
            ll_backend__continuation_info__TypeInfo_12_12 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[8];
#line 9644 "ll_backend.continuation_info.c"
            {
#line 9646 "ll_backend.continuation_info.c"
              ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_12_12, ((MR_Box) (ll_backend__continuation_info__V_4_4)), ((MR_Box) (ll_backend__continuation_info__V_7_7)));
            }
#line 258 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 258 "continuation_info.m"
              {
#line 9653 "ll_backend.continuation_info.c"
                ll_backend__continuation_info__TypeInfo_13_13 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[9];
#line 9655 "ll_backend.continuation_info.c"
                {
#line 9657 "ll_backend.continuation_info.c"
                  return ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_13_13, ((MR_Box) (ll_backend__continuation_info__V_5_5)), ((MR_Box) (ll_backend__continuation_info__V_8_8)));
                }
#line 258 "continuation_info.m"
              }
#line 258 "continuation_info.m"
          }
#line 258 "continuation_info.m"
      }
#line 258 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 258 "continuation_info.m"
  }
#line 258 "continuation_info.m"
}

#line 312 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info____Compare____closure_layout_info_0_0(
#line 312 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 312 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 312 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3)
#line 312 "continuation_info.m"
{
#line 312 "continuation_info.m"
  {
#line 312 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 312 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_9 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;
#line 312 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_10 = (MR_Integer) ll_backend__continuation_info__HeadVar__3_3;

#line 312 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_9 == ll_backend__continuation_info__CastY_10);
#line 312 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 9697 "ll_backend.continuation_info.c"
      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 312 "continuation_info.m"
    else
#line 312 "continuation_info.m"
      {
#line 312 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 312 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 312 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));
#line 312 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 1)));
#line 312 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8;

#line 312 "continuation_info.m"
        {
#line 312 "continuation_info.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[6], &ll_backend__continuation_info__V_8_8, ((MR_Box) (ll_backend__continuation_info__V_4_4)), ((MR_Box) (ll_backend__continuation_info__V_6_6)));
        }
#line 9719 "ll_backend.continuation_info.c"
        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_8_8 == (MR_Integer) 0);
#line 312 "continuation_info.m"
        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 312 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 312 "continuation_info.m"
          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_8_8;
#line 312 "continuation_info.m"
        else
#line 312 "continuation_info.m"
          {
#line 312 "continuation_info.m"
            {
#line 312 "continuation_info.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_2[1], ll_backend__continuation_info__HeadVar__1_1, ((MR_Box) (ll_backend__continuation_info__V_5_5)), ((MR_Box) (ll_backend__continuation_info__V_7_7)));
#line 312 "continuation_info.m"
              return;
            }
#line 312 "continuation_info.m"
          }
#line 312 "continuation_info.m"
      }
#line 312 "continuation_info.m"
  }
#line 312 "continuation_info.m"
}

#line 312 "continuation_info.m"
MR_bool MR_CALL 
ll_backend__continuation_info____Unify____closure_layout_info_0_0(
#line 312 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 312 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2)
#line 312 "continuation_info.m"
{
#line 312 "continuation_info.m"
  {
#line 312 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 312 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_7 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 312 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_8 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 312 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_7 == ll_backend__continuation_info__CastY_8);
#line 312 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 312 "continuation_info.m"
      ll_backend__continuation_info__succeeded = MR_TRUE;
#line 312 "continuation_info.m"
    else
#line 312 "continuation_info.m"
      {
#line 312 "continuation_info.m"
        MR_Word ll_backend__continuation_info__TypeInfo_10_10;
#line 312 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 312 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 312 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 312 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));

#line 9786 "ll_backend.continuation_info.c"
        {
#line 9788 "ll_backend.continuation_info.c"
          ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__continuation_info_scalar_common_1[6], ((MR_Box) (ll_backend__continuation_info__V_3_3)), ((MR_Box) (ll_backend__continuation_info__V_5_5)));
        }
#line 312 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 312 "continuation_info.m"
          {
#line 9795 "ll_backend.continuation_info.c"
            ll_backend__continuation_info__TypeInfo_10_10 = (MR_Word) &ll_backend__continuation_info_scalar_common_2[1];
#line 9797 "ll_backend.continuation_info.c"
            {
#line 9799 "ll_backend.continuation_info.c"
              return ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_10_10, ((MR_Box) (ll_backend__continuation_info__V_4_4)), ((MR_Box) (ll_backend__continuation_info__V_6_6)));
            }
#line 312 "continuation_info.m"
          }
#line 312 "continuation_info.m"
      }
#line 312 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 312 "continuation_info.m"
  }
#line 312 "continuation_info.m"
}

#line 323 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info____Compare____closure_arg_info_0_0(
#line 323 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__HeadVar__1_1,
#line 323 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2,
#line 323 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__3_3)
#line 323 "continuation_info.m"
{
#line 323 "continuation_info.m"
  {
#line 323 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 323 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_9 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;
#line 323 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_10 = (MR_Integer) ll_backend__continuation_info__HeadVar__3_3;

#line 323 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_9 == ll_backend__continuation_info__CastY_10);
#line 323 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 9837 "ll_backend.continuation_info.c"
      *ll_backend__continuation_info__HeadVar__1_1 = (MR_Integer) 0;
#line 323 "continuation_info.m"
    else
#line 323 "continuation_info.m"
      {
#line 323 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 323 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));
#line 323 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 0)));
#line 323 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__3_3, (MR_Integer) 1)));
#line 323 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_8_8;

#line 323 "continuation_info.m"
        {
#line 323 "continuation_info.m"
          parse_tree__prog_data____Compare____mer_type_0_0(&ll_backend__continuation_info__V_8_8, ll_backend__continuation_info__V_4_4, ll_backend__continuation_info__V_6_6);
        }
#line 9859 "ll_backend.continuation_info.c"
        ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__V_8_8 == (MR_Integer) 0);
#line 323 "continuation_info.m"
        ll_backend__continuation_info__succeeded = !(ll_backend__continuation_info__succeeded);
#line 323 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 323 "continuation_info.m"
          *ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__V_8_8;
#line 323 "continuation_info.m"
        else
#line 323 "continuation_info.m"
          {
#line 323 "continuation_info.m"
            parse_tree__prog_data____Compare____mer_inst_0_0(ll_backend__continuation_info__HeadVar__1_1, ll_backend__continuation_info__V_5_5, ll_backend__continuation_info__V_7_7);
#line 323 "continuation_info.m"
            return;
          }
#line 323 "continuation_info.m"
      }
#line 323 "continuation_info.m"
  }
#line 323 "continuation_info.m"
}

#line 323 "continuation_info.m"
MR_bool MR_CALL 
ll_backend__continuation_info____Unify____closure_arg_info_0_0(
#line 323 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 323 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__2_2)
#line 323 "continuation_info.m"
{
#line 323 "continuation_info.m"
  {
#line 323 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 323 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastX_7 = (MR_Integer) ll_backend__continuation_info__HeadVar__1_1;
#line 323 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__CastY_8 = (MR_Integer) ll_backend__continuation_info__HeadVar__2_2;

#line 323 "continuation_info.m"
    ll_backend__continuation_info__succeeded = (ll_backend__continuation_info__CastX_7 == ll_backend__continuation_info__CastY_8);
#line 323 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 323 "continuation_info.m"
      ll_backend__continuation_info__succeeded = MR_TRUE;
#line 323 "continuation_info.m"
    else
#line 323 "continuation_info.m"
      {
#line 323 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 323 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 323 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 0)));
#line 323 "continuation_info.m"
        MR_Word ll_backend__continuation_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__HeadVar__2_2, (MR_Integer) 1)));

#line 9920 "ll_backend.continuation_info.c"
        {
#line 9922 "ll_backend.continuation_info.c"
          ll_backend__continuation_info__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ll_backend__continuation_info__V_3_3, ll_backend__continuation_info__V_5_5);
        }
#line 323 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 9927 "ll_backend.continuation_info.c"
          {
#line 9929 "ll_backend.continuation_info.c"
            return ll_backend__continuation_info__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ll_backend__continuation_info__V_4_4, ll_backend__continuation_info__V_6_6);
          }
#line 323 "continuation_info.m"
      }
#line 323 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 323 "continuation_info.m"
  }
#line 323 "continuation_info.m"
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
#line 9965 "ll_backend.continuation_info.c"
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
#line 9999 "ll_backend.continuation_info.c"
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
#line 10019 "ll_backend.continuation_info.c"
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
#line 10039 "ll_backend.continuation_info.c"
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
#line 10059 "ll_backend.continuation_info.c"
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

#line 10146 "ll_backend.continuation_info.c"
        {
#line 10148 "ll_backend.continuation_info.c"
          ll_backend__continuation_info__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__continuation_info__V_3_3, ll_backend__continuation_info__V_8_8);
        }
#line 448 "continuation_info.m"
        if (ll_backend__continuation_info__succeeded)
#line 448 "continuation_info.m"
          {
#line 10155 "ll_backend.continuation_info.c"
            {
#line 10157 "ll_backend.continuation_info.c"
              ll_backend__continuation_info__succeeded = ll_backend__llds____Unify____code_addr_0_0(ll_backend__continuation_info__V_4_4, ll_backend__continuation_info__V_9_9);
            }
#line 448 "continuation_info.m"
            if (ll_backend__continuation_info__succeeded)
#line 448 "continuation_info.m"
              {
#line 10164 "ll_backend.continuation_info.c"
                ll_backend__continuation_info__TypeInfo_17_17 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[4];
#line 10166 "ll_backend.continuation_info.c"
                {
#line 10168 "ll_backend.continuation_info.c"
                  ll_backend__continuation_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__continuation_info__TypeInfo_17_17, ((MR_Box) (ll_backend__continuation_info__V_5_5)), ((MR_Box) (ll_backend__continuation_info__V_10_10)));
                }
#line 448 "continuation_info.m"
                if (ll_backend__continuation_info__succeeded)
#line 448 "continuation_info.m"
                  {
#line 10175 "ll_backend.continuation_info.c"
                    {
#line 10177 "ll_backend.continuation_info.c"
                      ll_backend__continuation_info__succeeded = mercury__term____Unify____context_0_0(ll_backend__continuation_info__V_6_6, ll_backend__continuation_info__V_11_11);
                    }
#line 448 "continuation_info.m"
                    if (ll_backend__continuation_info__succeeded)
#line 448 "continuation_info.m"
                      {
#line 10184 "ll_backend.continuation_info.c"
                        ll_backend__continuation_info__TypeInfo_19_19 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[5];
#line 10186 "ll_backend.continuation_info.c"
                        {
#line 10188 "ll_backend.continuation_info.c"
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
#line 10273 "ll_backend.continuation_info.c"
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
          parse_tree__prog_data__lookup_var_type_3_p_0(ll_backend__continuation_info__VarTypes_2, ll_backend__continuation_info__Var_14, &ll_backend__continuation_info__Type_22);
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
#line 10538 "ll_backend.continuation_info.c"
                ll_backend__continuation_info__TypeCtorInfo_48_48 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 853 "continuation_info.m"
                {
#line 853 "continuation_info.m"
                  ll_backend__continuation_info__Locations_37 = mercury__set__make_singleton_set_1_f_0(ll_backend__continuation_info__TypeCtorInfo_48_48, ((MR_Box) (ll_backend__continuation_info__Reg_36)));
                }
#line 10545 "ll_backend.continuation_info.c"
                ll_backend__continuation_info__TypeInfo_49_49 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[0];
#line 10547 "ll_backend.continuation_info.c"
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
#line 10559 "ll_backend.continuation_info.c"
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
    MR_Word ll_backend__continuation_info__conv2_HeadVar__3_31;

#line 564 "continuation_info.m"
    {
#line 564 "continuation_info.m"
      ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__564__1_3_p_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), &ll_backend__continuation_info__conv2_HeadVar__3_31);
    }
#line 564 "continuation_info.m"
    *ll_backend__continuation_info__wrapper_arg_3 = ((MR_Box) (ll_backend__continuation_info__conv2_HeadVar__3_31));
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
    MR_Word ll_backend__continuation_info__conv1_HeadVar__2_27;

#line 559 "continuation_info.m"
    {
#line 559 "continuation_info.m"
      ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__560__1_2_p_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), &ll_backend__continuation_info__conv1_HeadVar__2_27);
    }
#line 559 "continuation_info.m"
    *ll_backend__continuation_info__wrapper_arg_2 = ((MR_Box) (ll_backend__continuation_info__conv1_HeadVar__2_27));
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
    MR_Word ll_backend__continuation_info__conv0_HeadVar__2_24;

#line 554 "continuation_info.m"
    {
#line 554 "continuation_info.m"
      ll_backend__continuation_info__IntroducedFrom__pred__convert_return_data__554__1_2_p_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), &ll_backend__continuation_info__conv0_HeadVar__2_24);
    }
#line 554 "continuation_info.m"
    *ll_backend__continuation_info__wrapper_arg_2 = ((MR_Box) (ll_backend__continuation_info__conv0_HeadVar__2_24));
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
#line 11612 "ll_backend.continuation_info.c"
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
ll_backend__continuation_info__process_continuation_4_p_0_1(
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
      ll_backend__continuation_info__IntroducedFrom__pred__process_continuation__535__1_3_p_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), &ll_backend__continuation_info__conv1_HeadVar__3_56);
    }
#line 535 "continuation_info.m"
    *ll_backend__continuation_info__wrapper_arg_3 = ((MR_Box) (ll_backend__continuation_info__conv1_HeadVar__3_56));
#line 535 "continuation_info.m"
  }
#line 535 "continuation_info.m"
}

#line 489 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__process_continuation_4_p_0(
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
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.continuation_info", (MR_String) "predicate \140ll_backend.continuation_info.process_continuation\'/4", (MR_String) "bad return");
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
  MR_Word * ll_backend__continuation_info__Call_4)
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
              *ll_backend__continuation_info__Call_4 = base;
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
    MR_Word ll_backend__continuation_info__conv1_HeadVar__4_23;

#line 931 "continuation_info.m"
    {
#line 931 "continuation_info.m"
      ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars_table__944__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__continuation_info__wrapper_arg_1), &ll_backend__continuation_info__conv1_HeadVar__4_23);
    }
#line 931 "continuation_info.m"
    *ll_backend__continuation_info__wrapper_arg_2 = ((MR_Box) (ll_backend__continuation_info__conv1_HeadVar__4_23));
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

#line 401 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info__generate_table_arg_type_info_3_p_0(
#line 401 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ProcInfo_4,
#line 401 "continuation_info.m"
  MR_Word ll_backend__continuation_info__NumberedVars_5,
#line 401 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__TableArgInfos_6)
#line 401 "continuation_info.m"
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
#line 12232 "ll_backend.continuation_info.c"
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
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_31_31, 0) = ((MR_Box) (&ll_backend__continuation_info_scalar_common_5[0]));
#line 929 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_31_31, 1) = ((MR_Box) (ll_backend__continuation_info__generate_table_arg_type_info_3_p_0_1));
#line 929 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 929 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_31_31, 3) = ((MR_Box) (ll_backend__continuation_info__RttiVarMaps_20));
#line 929 "continuation_info.m"
    }
#line 12273 "ll_backend.continuation_info.c"
    ll_backend__continuation_info__TypeInfo_35_45 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[2];
#line 12275 "ll_backend.continuation_info.c"
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
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__FindLocn_22, 0) = ((MR_Box) (&ll_backend__continuation_info_scalar_common_4[2]));
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
#line 12298 "ll_backend.continuation_info.c"
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
#line 401 "continuation_info.m"
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
    MR_Word ll_backend__continuation_info__conv1_HeadVar__4_29;

#line 867 "continuation_info.m"
    {
#line 867 "continuation_info.m"
      ll_backend__continuation_info__IntroducedFrom__pred__find_typeinfos_for_tvars__867__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__continuation_info__wrapper_arg_1), &ll_backend__continuation_info__conv1_HeadVar__4_29);
    }
#line 867 "continuation_info.m"
    *ll_backend__continuation_info__wrapper_arg_2 = ((MR_Box) (ll_backend__continuation_info__conv1_HeadVar__4_29));
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

#line 398 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info__find_typeinfos_for_tvars_4_p_0(
#line 398 "continuation_info.m"
  MR_Word ll_backend__continuation_info__TypeVars_5,
#line 398 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarLocs_6,
#line 398 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ProcInfo_7,
#line 398 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__TypeInfoDataMap_8)
#line 398 "continuation_info.m"
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
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_27_27, 0) = ((MR_Box) (&ll_backend__continuation_info_scalar_common_5[0]));
#line 865 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_27_27, 1) = ((MR_Box) (ll_backend__continuation_info__find_typeinfos_for_tvars_4_p_0_1));
#line 865 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 865 "continuation_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_27_27, 3) = ((MR_Box) (ll_backend__continuation_info__RttiVarMaps_10));
#line 865 "continuation_info.m"
    }
#line 12449 "ll_backend.continuation_info.c"
    ll_backend__continuation_info__TypeInfo_45_45 = (MR_Word) &ll_backend__continuation_info_scalar_common_1[2];
#line 12451 "ll_backend.continuation_info.c"
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
      MR_hl_field(MR_mktag(0), ll_backend__continuation_info__FindLocn_12, 0) = ((MR_Box) (&ll_backend__continuation_info_scalar_common_4[1]));
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
#line 12474 "ll_backend.continuation_info.c"
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
#line 398 "continuation_info.m"
}

#line 392 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info__generate_closure_layout_4_p_0(
#line 392 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ModuleInfo_5,
#line 392 "continuation_info.m"
  MR_Word ll_backend__continuation_info__PredId_6,
#line 392 "continuation_info.m"
  MR_Integer ll_backend__continuation_info__ProcId_7,
#line 392 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__ClosureLayout_8)
#line 392 "continuation_info.m"
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
      libs__globals__lookup_bool_option_3_p_0(ll_backend__continuation_info__Globals_9, (MR_Integer) 254, &ll_backend__continuation_info__UseFloatRegs_10);
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
#line 12579 "ll_backend.continuation_info.c"
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
#line 392 "continuation_info.m"
}

#line 386 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info__generate_resume_layout_6_p_0(
#line 386 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ResumeMap_7,
#line 386 "continuation_info.m"
  MR_Word ll_backend__continuation_info__Temps_8,
#line 386 "continuation_info.m"
  MR_Word ll_backend__continuation_info__InstMap_9,
#line 386 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ProcInfo_10,
#line 386 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ModuleInfo_11,
#line 386 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__Layout_12)
#line 386 "continuation_info.m"
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
#line 386 "continuation_info.m"
}

#line 378 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info__generate_return_live_lvalues_10_p_0(
#line 378 "continuation_info.m"
  MR_Word ll_backend__continuation_info__OutputArgLocs_11,
#line 378 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ReturnInstMap_12,
#line 378 "continuation_info.m"
  MR_Word ll_backend__continuation_info__Vars_13,
#line 378 "continuation_info.m"
  MR_Word ll_backend__continuation_info__VarLocs_14,
#line 378 "continuation_info.m"
  MR_Word ll_backend__continuation_info__Temps_15,
#line 378 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ProcInfo_16,
#line 378 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ModuleInfo_17,
#line 378 "continuation_info.m"
  MR_Word ll_backend__continuation_info__Globals_18,
#line 378 "continuation_info.m"
  MR_Word ll_backend__continuation_info__OkToDeleteAny_19,
#line 378 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__LiveLvalues_20)
#line 378 "continuation_info.m"
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
#line 378 "continuation_info.m"
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

#line 373 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0(
#line 373 "continuation_info.m"
  MR_Word ll_backend__continuation_info__PredInfo_5,
#line 373 "continuation_info.m"
  MR_Word ll_backend__continuation_info__Globals_6,
#line 373 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__BasicLayout_7,
#line 373 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__ForceProcIdLayout_8)
#line 373 "continuation_info.m"
{
#line 373 "continuation_info.m"
  {
#line 373 "continuation_info.m"
    struct ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0_s ll_backend__continuation_info__env;

#line 589 "continuation_info.m"
    {
#line 589 "continuation_info.m"
      (ll_backend__continuation_info__env).ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__succeeded = libs__globals__lookup_bool_option_3_p_1(ll_backend__continuation_info__Globals_6, (MR_Integer) 135, (MR_Integer) 1);
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
          (ll_backend__continuation_info__env).ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0_env_0__succeeded = libs__globals__lookup_bool_option_3_p_1(ll_backend__continuation_info__Globals_6, (MR_Integer) 268, (MR_Integer) 1);
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
#line 373 "continuation_info.m"
  }
#line 373 "continuation_info.m"
}

#line 471 "continuation_info.m"
static void MR_CALL 
ll_backend__continuation_info__maybe_process_proc_llds_5_p_0_2(
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
      ll_backend__continuation_info__process_continuation_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__continuation_info__wrapper_arg_1), ((MR_Word) ll_backend__continuation_info__wrapper_arg_2), &ll_backend__continuation_info__conv1_STATE_VARIABLE_Internals_37);
    }
#line 471 "continuation_info.m"
    *ll_backend__continuation_info__wrapper_arg_3 = ((MR_Box) (ll_backend__continuation_info__conv1_STATE_VARIABLE_Internals_37));
#line 471 "continuation_info.m"
  }
#line 471 "continuation_info.m"
}

#line 469 "continuation_info.m"
static MR_bool MR_CALL 
ll_backend__continuation_info__maybe_process_proc_llds_5_p_0_1(
#line 469 "continuation_info.m"
  MR_Box ll_backend__continuation_info__closure_arg,
#line 469 "continuation_info.m"
  MR_Box ll_backend__continuation_info__wrapper_arg_1,
#line 469 "continuation_info.m"
  MR_Box * ll_backend__continuation_info__wrapper_arg_2)
#line 469 "continuation_info.m"
{
#line 469 "continuation_info.m"
  {
#line 469 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 469 "continuation_info.m"
    MR_Box ll_backend__continuation_info__closure = ll_backend__continuation_info__closure_arg;
#line 469 "continuation_info.m"
    MR_Word ll_backend__continuation_info__conv0_Call_4;

#line 469 "continuation_info.m"
    {
#line 469 "continuation_info.m"
      ll_backend__continuation_info__succeeded = ll_backend__continuation_info__get_call_info_2_p_0(((MR_Word) ll_backend__continuation_info__wrapper_arg_1), &ll_backend__continuation_info__conv0_Call_4);
    }
#line 469 "continuation_info.m"
    if (ll_backend__continuation_info__succeeded)
#line 469 "continuation_info.m"
      {
#line 469 "continuation_info.m"
        *ll_backend__continuation_info__wrapper_arg_2 = ((MR_Box) (ll_backend__continuation_info__conv0_Call_4));
#line 469 "continuation_info.m"
        ll_backend__continuation_info__succeeded = MR_TRUE;
#line 469 "continuation_info.m"
      }
#line 469 "continuation_info.m"
    return ll_backend__continuation_info__succeeded;
#line 469 "continuation_info.m"
  }
#line 469 "continuation_info.m"
}

#line 366 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info__maybe_process_proc_llds_5_p_0(
#line 366 "continuation_info.m"
  MR_Word ll_backend__continuation_info__Instructions_6,
#line 366 "continuation_info.m"
  MR_Word ll_backend__continuation_info__PredProcId_7,
#line 366 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ModuleInfo_8,
#line 366 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_ContInfo_0_17,
#line 366 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_ContInfo_18)
#line 366 "continuation_info.m"
{
#line 434 "continuation_info.m"
  {
#line 434 "continuation_info.m"
    MR_bool ll_backend__continuation_info__succeeded;
#line 434 "continuation_info.m"
    MR_Word ll_backend__continuation_info__PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__PredProcId_7, (MR_Integer) 0)));
#line 434 "continuation_info.m"
    MR_Word ll_backend__continuation_info__PredInfo_12;
#line 434 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Globals_13;
#line 434 "continuation_info.m"
    MR_Word ll_backend__continuation_info__Layout_14;
#line 435 "continuation_info.m"
    MR_Integer ll_backend__continuation_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__PredProcId_7, (MR_Integer) 1)));
#line 438 "continuation_info.m"
    MR_Word ll_backend__continuation_info__V_15_15;

#line 436 "continuation_info.m"
    {
#line 436 "continuation_info.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__continuation_info__ModuleInfo_8, ll_backend__continuation_info__PredId_10, &ll_backend__continuation_info__PredInfo_12);
    }
#line 437 "continuation_info.m"
    {
#line 437 "continuation_info.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__continuation_info__ModuleInfo_8, &ll_backend__continuation_info__Globals_13);
    }
#line 438 "continuation_info.m"
    {
#line 438 "continuation_info.m"
      ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0(ll_backend__continuation_info__PredInfo_12, ll_backend__continuation_info__Globals_13, &ll_backend__continuation_info__Layout_14, &ll_backend__continuation_info__V_15_15);
    }
#line 444 "continuation_info.m"
#line 444 "continuation_info.m"
    switch (ll_backend__continuation_info__Layout_14) {
#line 444 "continuation_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 444 "continuation_info.m"
      case (MR_Integer) 0:
#line 445 "continuation_info.m"
        *ll_backend__continuation_info__STATE_VARIABLE_ContInfo_18 = ll_backend__continuation_info__STATE_VARIABLE_ContInfo_0_17;
#line 444 "continuation_info.m"
        break;
#line 444 "continuation_info.m"
      case (MR_Integer) 1:
#line 440 "continuation_info.m"
        {
#line 440 "continuation_info.m"
          MR_Word ll_backend__continuation_info__TypeCtorInfo_70_84;
#line 440 "continuation_info.m"
          MR_Word ll_backend__continuation_info__WantReturnLayout_16;
#line 440 "continuation_info.m"
          MR_Word ll_backend__continuation_info__ProcLayoutInfo0_26;
#line 440 "continuation_info.m"
          MR_Word ll_backend__continuation_info__Internals0_27;
#line 440 "continuation_info.m"
          MR_Word ll_backend__continuation_info__Calls_28;
#line 440 "continuation_info.m"
          MR_Word ll_backend__continuation_info__Internals_29;
#line 440 "continuation_info.m"
          MR_Word ll_backend__continuation_info__ProcLayoutInfo_30;
#line 440 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_32_32;
#line 468 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_34_34;
#line 468 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_35_35;
#line 468 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_36_36;
#line 468 "continuation_info.m"
          MR_Integer ll_backend__continuation_info__V_37_37;
#line 468 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_38_38;
#line 468 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_39_39;
#line 468 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_40_40;
#line 468 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_41_41;
#line 468 "continuation_info.m"
          MR_Integer ll_backend__continuation_info__V_42_42;
#line 468 "continuation_info.m"
          MR_Integer ll_backend__continuation_info__V_43_43;
#line 468 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_44_44;
#line 468 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_45_45;
#line 468 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_46_46;
#line 468 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_47_47;
#line 468 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_48_48;
#line 468 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_49_49;
#line 468 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_50_50;
#line 468 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_51_51;
#line 468 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_52_52;
#line 468 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_53_53;
#line 468 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_54_54;
#line 468 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_55_55;
#line 468 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_56_56;
#line 471 "continuation_info.m"
          MR_Box ll_backend__continuation_info__conv2_Internals_29;
#line 473 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_57_57;
#line 473 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_58_58;
#line 473 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_59_59;
#line 473 "continuation_info.m"
          MR_Integer ll_backend__continuation_info__V_60_60;
#line 473 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_61_61;
#line 473 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_62_62;
#line 473 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_63_63;
#line 473 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_64_64;
#line 473 "continuation_info.m"
          MR_Integer ll_backend__continuation_info__V_65_65;
#line 473 "continuation_info.m"
          MR_Integer ll_backend__continuation_info__V_66_66;
#line 473 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_67_67;
#line 473 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_68_68;
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
          MR_Word ll_backend__continuation_info__V_77_77;
#line 473 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_78_78;
#line 473 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_79_79;
#line 473 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_80_80;
#line 473 "continuation_info.m"
          MR_Word ll_backend__continuation_info__V_76_76;

#line 441 "continuation_info.m"
          {
#line 441 "continuation_info.m"
            libs__globals__want_return_var_layouts_2_p_0(ll_backend__continuation_info__Globals_13, &ll_backend__continuation_info__WantReturnLayout_16);
          }
#line 467 "continuation_info.m"
          {
#line 467 "continuation_info.m"
            ll_backend__global_data__global_data_get_proc_layout_3_p_0(ll_backend__continuation_info__STATE_VARIABLE_ContInfo_0_17, ll_backend__continuation_info__PredProcId_7, &ll_backend__continuation_info__ProcLayoutInfo0_26);
          }
#line 468 "continuation_info.m"
          ll_backend__continuation_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 0)));
#line 468 "continuation_info.m"
          ll_backend__continuation_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 1)));
#line 468 "continuation_info.m"
          ll_backend__continuation_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 2)));
#line 468 "continuation_info.m"
          ll_backend__continuation_info__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 3)));
#line 468 "continuation_info.m"
          ll_backend__continuation_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 4)));
#line 468 "continuation_info.m"
          ll_backend__continuation_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 5)));
#line 468 "continuation_info.m"
          ll_backend__continuation_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 6)));
#line 468 "continuation_info.m"
          ll_backend__continuation_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 7)));
#line 468 "continuation_info.m"
          ll_backend__continuation_info__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 8)));
#line 468 "continuation_info.m"
          ll_backend__continuation_info__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 9)));
#line 468 "continuation_info.m"
          ll_backend__continuation_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 10)));
#line 468 "continuation_info.m"
          ll_backend__continuation_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 11)));
#line 468 "continuation_info.m"
          ll_backend__continuation_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 12)));
#line 468 "continuation_info.m"
          ll_backend__continuation_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 13)));
#line 468 "continuation_info.m"
          ll_backend__continuation_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 14)));
#line 468 "continuation_info.m"
          ll_backend__continuation_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 15)));
#line 468 "continuation_info.m"
          ll_backend__continuation_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 16)));
#line 468 "continuation_info.m"
          ll_backend__continuation_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 17)));
#line 468 "continuation_info.m"
          ll_backend__continuation_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 18)));
#line 468 "continuation_info.m"
          ll_backend__continuation_info__Internals0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 19)));
#line 468 "continuation_info.m"
          ll_backend__continuation_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 20)));
#line 468 "continuation_info.m"
          ll_backend__continuation_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 21)));
#line 468 "continuation_info.m"
          ll_backend__continuation_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 22)));
#line 468 "continuation_info.m"
          ll_backend__continuation_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 23)));
#line 13226 "ll_backend.continuation_info.c"
          ll_backend__continuation_info__TypeCtorInfo_70_84 = (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_call_info_0;
#line 469 "continuation_info.m"
          {
#line 469 "continuation_info.m"
            mercury__list__filter_map_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__continuation_info__TypeCtorInfo_70_84, (MR_Word) &ll_backend__continuation_info_scalar_common_2[5], ll_backend__continuation_info__Instructions_6, &ll_backend__continuation_info__Calls_28);
          }
#line 471 "continuation_info.m"
          {
#line 471 "continuation_info.m"
            ll_backend__continuation_info__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 471 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_32_32, 0) = ((MR_Box) (&ll_backend__continuation_info_scalar_common_4[0]));
#line 471 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_32_32, 1) = ((MR_Box) (ll_backend__continuation_info__maybe_process_proc_llds_5_p_0_2));
#line 471 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 471 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__V_32_32, 3) = ((MR_Box) (ll_backend__continuation_info__WantReturnLayout_16));
#line 471 "continuation_info.m"
          }
#line 471 "continuation_info.m"
          {
#line 471 "continuation_info.m"
            mercury__list__foldl_4_p_0(ll_backend__continuation_info__TypeCtorInfo_70_84, (MR_Word) &ll_backend__continuation_info_scalar_common_2[0], ll_backend__continuation_info__V_32_32, ll_backend__continuation_info__Calls_28, ((MR_Box) (ll_backend__continuation_info__Internals0_27)), &ll_backend__continuation_info__conv2_Internals_29);
          }
#line 471 "continuation_info.m"
          ll_backend__continuation_info__Internals_29 = ((MR_Word) ll_backend__continuation_info__conv2_Internals_29);
#line 473 "continuation_info.m"
          ll_backend__continuation_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 0)));
#line 473 "continuation_info.m"
          ll_backend__continuation_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 1)));
#line 473 "continuation_info.m"
          ll_backend__continuation_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 2)));
#line 473 "continuation_info.m"
          ll_backend__continuation_info__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 3)));
#line 473 "continuation_info.m"
          ll_backend__continuation_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 4)));
#line 473 "continuation_info.m"
          ll_backend__continuation_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 5)));
#line 473 "continuation_info.m"
          ll_backend__continuation_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 6)));
#line 473 "continuation_info.m"
          ll_backend__continuation_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 7)));
#line 473 "continuation_info.m"
          ll_backend__continuation_info__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 8)));
#line 473 "continuation_info.m"
          ll_backend__continuation_info__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 9)));
#line 473 "continuation_info.m"
          ll_backend__continuation_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 10)));
#line 473 "continuation_info.m"
          ll_backend__continuation_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 11)));
#line 473 "continuation_info.m"
          ll_backend__continuation_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 12)));
#line 473 "continuation_info.m"
          ll_backend__continuation_info__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 13)));
#line 473 "continuation_info.m"
          ll_backend__continuation_info__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 14)));
#line 473 "continuation_info.m"
          ll_backend__continuation_info__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 15)));
#line 473 "continuation_info.m"
          ll_backend__continuation_info__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 16)));
#line 473 "continuation_info.m"
          ll_backend__continuation_info__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 17)));
#line 473 "continuation_info.m"
          ll_backend__continuation_info__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 18)));
#line 473 "continuation_info.m"
          ll_backend__continuation_info__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 19)));
#line 473 "continuation_info.m"
          ll_backend__continuation_info__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 20)));
#line 473 "continuation_info.m"
          ll_backend__continuation_info__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 21)));
#line 473 "continuation_info.m"
          ll_backend__continuation_info__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 22)));
#line 473 "continuation_info.m"
          ll_backend__continuation_info__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo0_26, (MR_Integer) 23)));
#line 473 "continuation_info.m"
          {
#line 473 "continuation_info.m"
            ll_backend__continuation_info__ProcLayoutInfo_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 24 * sizeof(MR_Word)), NULL, NULL);
#line 473 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_30, 0) = ((MR_Box) (ll_backend__continuation_info__V_57_57));
#line 473 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_30, 1) = ((MR_Box) (ll_backend__continuation_info__V_58_58));
#line 473 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_30, 2) = ((MR_Box) (ll_backend__continuation_info__V_59_59));
#line 473 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_30, 3) = ((MR_Box) (ll_backend__continuation_info__V_60_60));
#line 473 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_30, 4) = ((MR_Box) (ll_backend__continuation_info__V_61_61));
#line 473 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_30, 5) = ((MR_Box) (ll_backend__continuation_info__V_62_62));
#line 473 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_30, 6) = ((MR_Box) (ll_backend__continuation_info__V_63_63));
#line 473 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_30, 7) = ((MR_Box) (ll_backend__continuation_info__V_64_64));
#line 473 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_30, 8) = ((MR_Box) (ll_backend__continuation_info__V_65_65));
#line 473 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_30, 9) = ((MR_Box) (ll_backend__continuation_info__V_66_66));
#line 473 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_30, 10) = ((MR_Box) (ll_backend__continuation_info__V_67_67));
#line 473 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_30, 11) = ((MR_Box) (ll_backend__continuation_info__V_68_68));
#line 473 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_30, 12) = ((MR_Box) (ll_backend__continuation_info__V_69_69));
#line 473 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_30, 13) = ((MR_Box) (ll_backend__continuation_info__V_70_70));
#line 473 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_30, 14) = ((MR_Box) (ll_backend__continuation_info__V_71_71));
#line 473 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_30, 15) = ((MR_Box) (ll_backend__continuation_info__V_72_72));
#line 473 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_30, 16) = ((MR_Box) (ll_backend__continuation_info__V_73_73));
#line 473 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_30, 17) = ((MR_Box) (ll_backend__continuation_info__V_74_74));
#line 473 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_30, 18) = ((MR_Box) (ll_backend__continuation_info__V_75_75));
#line 473 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_30, 19) = ((MR_Box) (ll_backend__continuation_info__Internals_29));
#line 473 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_30, 20) = ((MR_Box) (ll_backend__continuation_info__V_77_77));
#line 473 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_30, 21) = ((MR_Box) (ll_backend__continuation_info__V_78_78));
#line 473 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_30, 22) = ((MR_Box) (ll_backend__continuation_info__V_79_79));
#line 473 "continuation_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__continuation_info__ProcLayoutInfo_30, 23) = ((MR_Box) (ll_backend__continuation_info__V_80_80));
#line 473 "continuation_info.m"
          }
#line 474 "continuation_info.m"
          {
#line 474 "continuation_info.m"
            ll_backend__global_data__global_data_update_proc_layout_4_p_0(ll_backend__continuation_info__PredProcId_7, ll_backend__continuation_info__ProcLayoutInfo_30, ll_backend__continuation_info__STATE_VARIABLE_ContInfo_0_17, ll_backend__continuation_info__STATE_VARIABLE_ContInfo_18);
#line 474 "continuation_info.m"
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
#line 366 "continuation_info.m"
}

#line 357 "continuation_info.m"
void MR_CALL 
ll_backend__continuation_info__maybe_process_llds_4_p_0(
#line 357 "continuation_info.m"
  MR_Word ll_backend__continuation_info__HeadVar__1_1,
#line 357 "continuation_info.m"
  MR_Word ll_backend__continuation_info__ModuleInfo_2,
#line 357 "continuation_info.m"
  MR_Word ll_backend__continuation_info__STATE_VARIABLE_GlobalData_0_3,
#line 357 "continuation_info.m"
  MR_Word * ll_backend__continuation_info__STATE_VARIABLE_GlobalData_4)
#line 357 "continuation_info.m"
{
#line 427 "continuation_info.m"
  while (MR_TRUE)
#line 427 "continuation_info.m"
    {
#line 427 "continuation_info.m"
      /* tailcall optimized into a loop */
#line 427 "continuation_info.m"
      {
#line 427 "continuation_info.m"
        MR_bool ll_backend__continuation_info__succeeded;

#line 427 "continuation_info.m"
        if ((ll_backend__continuation_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 427 "continuation_info.m"
          *ll_backend__continuation_info__STATE_VARIABLE_GlobalData_4 = ll_backend__continuation_info__STATE_VARIABLE_GlobalData_0_3;
#line 427 "continuation_info.m"
        else
#line 428 "continuation_info.m"
          {
#line 428 "continuation_info.m"
            MR_Word ll_backend__continuation_info__Proc_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 0)));
#line 428 "continuation_info.m"
            MR_Word ll_backend__continuation_info__Procs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__continuation_info__HeadVar__1_1, (MR_Integer) 1)));
#line 428 "continuation_info.m"
            MR_Word ll_backend__continuation_info__PredProcId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Proc_9, (MR_Integer) 2)));
#line 428 "continuation_info.m"
            MR_Word ll_backend__continuation_info__Instrs_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Proc_9, (MR_Integer) 4)));
#line 428 "continuation_info.m"
            MR_Word ll_backend__continuation_info__STATE_VARIABLE_GlobalData_17_17;
#line 429 "continuation_info.m"
            MR_String ll_backend__continuation_info__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Proc_9, (MR_Integer) 0)));
#line 429 "continuation_info.m"
            MR_Integer ll_backend__continuation_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Proc_9, (MR_Integer) 1)));
#line 429 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Proc_9, (MR_Integer) 3)));
#line 429 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Proc_9, (MR_Integer) 5)));
#line 429 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Proc_9, (MR_Integer) 6)));
#line 429 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Proc_9, (MR_Integer) 7)));
#line 429 "continuation_info.m"
            MR_Word ll_backend__continuation_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__continuation_info__Proc_9, (MR_Integer) 8)));

#line 431 "continuation_info.m"
            {
#line 431 "continuation_info.m"
              ll_backend__continuation_info__maybe_process_proc_llds_5_p_0(ll_backend__continuation_info__Instrs_14, ll_backend__continuation_info__PredProcId_13, ll_backend__continuation_info__ModuleInfo_2, ll_backend__continuation_info__STATE_VARIABLE_GlobalData_0_3, &ll_backend__continuation_info__STATE_VARIABLE_GlobalData_17_17);
            }
#line 432 "continuation_info.m"
            /* direct tailcall eliminated */
#line 432 "continuation_info.m"
            {
#line 432 "continuation_info.m"
              MR_Word ll_backend__continuation_info__HeadVar__1__tmp_copy_1 = ll_backend__continuation_info__Procs_10;
#line 432 "continuation_info.m"
              MR_Word ll_backend__continuation_info__STATE_VARIABLE_GlobalData_0__tmp_copy_3 = ll_backend__continuation_info__STATE_VARIABLE_GlobalData_17_17;

#line 432 "continuation_info.m"
              ll_backend__continuation_info__STATE_VARIABLE_GlobalData_0_3 = ll_backend__continuation_info__STATE_VARIABLE_GlobalData_0__tmp_copy_3;
#line 432 "continuation_info.m"
              ll_backend__continuation_info__HeadVar__1_1 = ll_backend__continuation_info__HeadVar__1__tmp_copy_1;
#line 432 "continuation_info.m"
            }
#line 432 "continuation_info.m"
            continue;
#line 428 "continuation_info.m"
          }
#line 427 "continuation_info.m"
      }
#line 427 "continuation_info.m"
      break;
#line 427 "continuation_info.m"
    }
#line 357 "continuation_info.m"
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
